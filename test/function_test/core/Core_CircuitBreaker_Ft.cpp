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
#include <tencentcloud/core/profile/RegionBreakerProfile.h>

#include <gtest/gtest.h>
#include <chrono>
#include <thread>

using namespace TencentCloud;

static RegionBreakerProfile MakeProfile(int max_fail_num,
                                         double max_fail_percent,
                                         int window_interval,
                                         int timeout,
                                         int max_requests) {
    return RegionBreakerProfile("ap-guangzhou.tencentcloudapi.com",
                                 max_fail_num, max_fail_percent,
                                 window_interval, timeout, max_requests);
}

// Drives |n| Allow/Report round-trips with the given outcome. Assumes
// every Allow() is granted (caller controls state).
static void DrainN(CircuitBreaker &cb, int n, bool success) {
    for (int i = 0; i < n; ++i) {
        ASSERT_TRUE(cb.Allow());
        cb.Report(success);
    }
}

TEST(CircuitBreakerTest, DefaultStateClosed) {
    CircuitBreaker cb;
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
    EXPECT_TRUE(cb.Allow());
    cb.Report(true);  // pair with the Allow above
}

TEST(CircuitBreakerTest, StayClosedOnSuccess) {
    CircuitBreaker cb;
    DrainN(cb, 100, true);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
}

TEST(CircuitBreakerTest, TripOnFailNumAndFailRate) {
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 60, 3));
    DrainN(cb, 3, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, DoesNotTripWhenRateTooLow) {
    CircuitBreaker cb(MakeProfile(3, 0.9, 300, 60, 3));
    DrainN(cb, 2, false);
    DrainN(cb, 2, true);
    DrainN(cb, 1, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
}

TEST(CircuitBreakerTest, DoesNotTripWhenCountTooLow) {
    CircuitBreaker cb(MakeProfile(5, 0.5, 300, 60, 3));
    DrainN(cb, 4, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
    DrainN(cb, 1, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, TripOnConsecutiveFailuresReachesMaxFailNum) {
    // Even with an unreachable rate threshold, consecutive failures
    // reaching max_fail_num still trip the breaker via the
    // consecutive-failure branch. Here max_fail_num=3, so 3 consecutive
    // failures are enough (no need to wait for the rate branch).
    CircuitBreaker cb(MakeProfile(3, 1.1, 300, 60, 3));
    DrainN(cb, 3, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, ConsecutiveFailuresUseConfiguredMaxFailNum) {
    // Verify that the consecutive-failure threshold follows the user's
    // max_fail_num, not a hardcoded value. With max_fail_num=7 the
    // breaker should NOT trip after 5 consecutive failures (the old
    // hardcoded default), but SHOULD trip after 7.
    CircuitBreaker cb(MakeProfile(7, 1.1, 300, 60, 3));
    DrainN(cb, 5, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
    DrainN(cb, 2, false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, ConsecutiveFailuresOverrideRateBranch) {
    // When failures are interleaved with successes, the rate branch
    // may not trigger, but consecutive failures should still work.
    // max_fail_num=3, max_fail_percent=0.9 (90% failure rate needed).
    CircuitBreaker cb(MakeProfile(3, 0.9, 300, 60, 3));
    // 2 failures, 1 success, 3 consecutive failures:
    // total=6, failures=5, rate=83% < 90% → rate branch NOT triggered.
    // But consecutive=3 >= max_fail_num=3 → consecutive branch triggers.
    ASSERT_TRUE(cb.Allow()); cb.Report(false);  // consec=1, total=1, fail=1
    ASSERT_TRUE(cb.Allow()); cb.Report(false);  // consec=2, total=2, fail=2
    ASSERT_TRUE(cb.Allow()); cb.Report(true);   // consec=0, total=3, fail=2
    ASSERT_TRUE(cb.Allow()); cb.Report(false);  // consec=1, total=4, fail=3
    ASSERT_TRUE(cb.Allow()); cb.Report(false);  // consec=2, total=5, fail=4
    ASSERT_TRUE(cb.Allow()); cb.Report(false);  // consec=3, total=6, fail=5
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, OpenStateDisallowsRequests) {
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 60, 3));
    DrainN(cb, 3, false);
    EXPECT_FALSE(cb.Allow());
}

TEST(CircuitBreakerTest, TransitionsToHalfOpenAfterTimeout) {
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 1, 3));
    DrainN(cb, 3, false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kHalfOpen);
    EXPECT_TRUE(cb.Allow());
    cb.Report(true);  // pair with Allow
}

TEST(CircuitBreakerTest, HalfOpenClosesAfterExceedingMaxRequestsSuccesses) {
    // Requires (total - failures) >= max_requests to close. With
    // max_requests = 3 that is the 3rd successful probe.
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 1, 3));
    DrainN(cb, 3, false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));

    EXPECT_TRUE(cb.Allow()); cb.Report(true);  // 1
    EXPECT_TRUE(cb.Allow()); cb.Report(true);  // 2
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kHalfOpen);
    EXPECT_TRUE(cb.Allow()); cb.Report(true);  // 3 (>= max_requests) -> Closed
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
}

TEST(CircuitBreakerTest, HalfOpenReopensOnAnyFailure) {
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 1, 3));
    DrainN(cb, 3, false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));
    EXPECT_TRUE(cb.Allow());
    cb.Report(false);
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kOpen);
}

TEST(CircuitBreakerTest, ClosedWindowExpiryResetsCounters) {
    // After |window_interval| the Closed-state counters reset. Earlier
    // failures must not contribute to the trip condition.
    CircuitBreaker cb(MakeProfile(3, 0.75, /*window_interval=*/1, 60, 3));
    DrainN(cb, 2, false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));
    // Next Allow() lazily advances the state and resets counters.
    DrainN(cb, 2, false);  // Only 2 failures in the new window.
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kClosed);
}

// ===== HalfOpen concurrent-probe rate limit =====

TEST(CircuitBreakerTest, HalfOpenRateLimitsConcurrentProbes) {
    // max_requests = 2: up to 2 probes may be in-flight at once in
    // HalfOpen. A 3rd concurrent Allow() without any Report in between
    // must be rejected.
    CircuitBreaker cb(MakeProfile(3, 0.75, 300, 1, 2));
    DrainN(cb, 3, false);
    std::this_thread::sleep_for(std::chrono::milliseconds(1100));

    EXPECT_TRUE(cb.Allow());          // slot 1
    EXPECT_TRUE(cb.Allow());          // slot 2
    EXPECT_FALSE(cb.Allow());         // budget exhausted
    EXPECT_EQ(cb.GetState(), CircuitBreaker::State::kHalfOpen);

    // Release one slot via Report; budget becomes available again.
    cb.Report(true);
    EXPECT_TRUE(cb.Allow());
    cb.Report(true);                  // release
    cb.Report(true);                  // release the 1st probe too
}
