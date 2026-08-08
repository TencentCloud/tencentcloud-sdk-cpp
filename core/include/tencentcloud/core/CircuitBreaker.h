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

#ifndef TENCENTCLOUD_CORE_CIRCUITBREAKER_H_
#define TENCENTCLOUD_CORE_CIRCUITBREAKER_H_

#include <cstdint>
#include <mutex>

#include <tencentcloud/core/profile/RegionBreakerProfile.h>

namespace TencentCloud
{

/// Three-state circuit breaker for region failover.
///
///   Closed   -> traffic allowed; failures counted in a sliding window
///   Open     -> traffic rejected; after |timeout| enter HalfOpen
///   HalfOpen -> at most |max_requests| concurrent probes; enough
///               successes close it, any failure reopens it
///
/// Usage:
///   if (breaker.Allow()) {
///     bool ok = SendRequest();
///     breaker.Report(ok);   // MUST pair with every Allow() == true
///   }
class CircuitBreaker
{
public:
    enum class State
    {
        kClosed,
        kOpen,
        kHalfOpen,
    };

    CircuitBreaker();
    explicit CircuitBreaker(const RegionBreakerProfile &profile);

    // Holds a std::mutex -- non-copyable, non-movable.
    CircuitBreaker(const CircuitBreaker &) = delete;
    CircuitBreaker &operator=(const CircuitBreaker &) = delete;

    /// Returns true iff a new request should be allowed to proceed.
    /// On true, the caller MUST subsequently call Report() with the
    /// outcome; otherwise HalfOpen probe slots leak.
    bool Allow();

    /// Report the outcome of a request that got Allow() == true.
    void Report(bool success);

    /// Observational.
    State GetState();

private:
    void LazyAdvanceStateLocked();
    void TransitionToLocked(State new_state);
    bool ReadyToOpenLocked() const;
    int64_t NowMs() const;

    std::mutex m_mutex;
    State m_state;

    // Counters within the current state window; reset on any state
    // transition and on Closed-window expiry.
    int m_total;
    int m_failures;
    int m_consecutiveFailures;

    // HalfOpen-only: number of probes Allow()ed but not yet Report()ed.
    // Bounded by |m_maxRequests| to avoid flooding a fragile endpoint.
    int m_halfOpenInFlight;

    // Absolute timestamp (ms) at which the current window/timeout
    // expires. 0 means "no auto timeout" (HalfOpen).
    int64_t m_expiryMs;

    // Immutable configuration (derived from RegionBreakerProfile).
    int m_maxFailNum;
    double m_maxFailPercent;
    int64_t m_windowIntervalMs;
    int64_t m_timeoutMs;
    int m_maxRequests;
};

}  // namespace TencentCloud

#endif  // TENCENTCLOUD_CORE_CIRCUITBREAKER_H_
