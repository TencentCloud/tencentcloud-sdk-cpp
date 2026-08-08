/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/CircuitBreaker.h>

#include <chrono>

using namespace TencentCloud;

CircuitBreaker::CircuitBreaker()
    : CircuitBreaker(RegionBreakerProfile())
{
}

CircuitBreaker::CircuitBreaker(const RegionBreakerProfile &profile)
    : m_state(State::kClosed),
      m_total(0),
      m_failures(0),
      m_consecutiveFailures(0),
      m_halfOpenInFlight(0),
      m_expiryMs(0),
      m_maxFailNum(profile.GetMaxFailNum()),
      m_maxFailPercent(profile.GetMaxFailPercent()),
      m_windowIntervalMs(static_cast<int64_t>(profile.GetWindowInterval()) * 1000),
      m_timeoutMs(static_cast<int64_t>(profile.GetTimeout()) * 1000),
      m_maxRequests(profile.GetMaxRequests())
{
    // Start the first Closed-state counting window.
    m_expiryMs = NowMs() + m_windowIntervalMs;
}

int64_t CircuitBreaker::NowMs() const
{
    auto now = std::chrono::steady_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               now.time_since_epoch()).count();
}

bool CircuitBreaker::Allow()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    LazyAdvanceStateLocked();
    switch (m_state)
    {
        case State::kClosed:
            return true;
        case State::kOpen:
            return false;
        case State::kHalfOpen:
            // Rate-limit concurrent probes during recovery.
            if (m_halfOpenInFlight < m_maxRequests)
            {
                ++m_halfOpenInFlight;
                return true;
            }
            return false;
    }
    return false;  // unreachable
}

void CircuitBreaker::Report(bool success)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    LazyAdvanceStateLocked();

    if (m_state == State::kHalfOpen)
    {
        // Release the probe slot this Report pairs with.
        if (m_halfOpenInFlight > 0)
            --m_halfOpenInFlight;

        if (!success)
        {
            // Any failure during probing reopens the breaker.
            TransitionToLocked(State::kOpen);
            return;
        }
        // Count successful probes; close once (total - failures) >=
        // max_requests within this HalfOpen episode.
        ++m_total;
        int successes = m_total - m_failures;
        if (successes >= m_maxRequests)
        {
            TransitionToLocked(State::kClosed);
        }
        return;
    }

    if (m_state == State::kClosed)
    {
        ++m_total;
        if (success)
        {
            m_consecutiveFailures = 0;
        }
        else
        {
            ++m_failures;
            ++m_consecutiveFailures;
            if (ReadyToOpenLocked())
            {
                TransitionToLocked(State::kOpen);
            }
        }
        return;
    }

    // State::kOpen: Report with no Allow()==true is a caller bug, but
    // be defensive and ignore.
}

CircuitBreaker::State CircuitBreaker::GetState()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    LazyAdvanceStateLocked();
    return m_state;
}

void CircuitBreaker::LazyAdvanceStateLocked()
{
    int64_t now = NowMs();
    switch (m_state)
    {
        case State::kClosed:
            // Sliding window expired: reset counters, start a new one.
            if (m_expiryMs != 0 && now >= m_expiryMs)
            {
                m_total = 0;
                m_failures = 0;
                m_consecutiveFailures = 0;
                m_expiryMs = now + m_windowIntervalMs;
            }
            break;
        case State::kOpen:
            // Cooling-off period elapsed: enter HalfOpen to probe.
            if (m_expiryMs != 0 && now >= m_expiryMs)
            {
                TransitionToLocked(State::kHalfOpen);
            }
            break;
        case State::kHalfOpen:
            // Driven by request outcomes, no auto timeout.
            break;
    }
}

void CircuitBreaker::TransitionToLocked(State new_state)
{
    m_state = new_state;
    m_total = 0;
    m_failures = 0;
    m_consecutiveFailures = 0;
    m_halfOpenInFlight = 0;

    int64_t now = NowMs();
    switch (m_state)
    {
        case State::kClosed:
            m_expiryMs = now + m_windowIntervalMs;
            break;
        case State::kOpen:
            m_expiryMs = now + m_timeoutMs;
            break;
        case State::kHalfOpen:
            m_expiryMs = 0;
            break;
    }
}

bool CircuitBreaker::ReadyToOpenLocked() const
{
    // Trip condition (two independent branches, either is sufficient):
    //   (failures >= max_fail_num AND failures/total >= max_fail_percent)
    //   OR
    //   (consecutive_failures >= max_fail_num)
    if (m_total > 0)
    {
        double rate = static_cast<double>(m_failures) /
                      static_cast<double>(m_total);
        if (m_failures >= m_maxFailNum && rate >= m_maxFailPercent)
        {
            return true;
        }
    }
    if (m_consecutiveFailures >= m_maxFailNum)
    {
        return true;
    }
    return false;
}
