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

#ifndef TENCENTCLOUD_CORE_REGIONBREAKERPROFILE_H_
#define TENCENTCLOUD_CORE_REGIONBREAKERPROFILE_H_

#include <string>

namespace TencentCloud
{

/// Configuration for region-level circuit breaker (domain failover).
///
/// Two mutually exclusive failover modes:
///   - If |backup_endpoint| is set: Primary → BackupEndpoint (sole fallback).
///     No TLD-level failover is performed.
///   - If |backup_endpoint| is empty (default): Primary → .com.cn → .cn
///     (TLD ring fallback with region stripped).
class RegionBreakerProfile
{
public:
    RegionBreakerProfile() = default;

    /// @param backup_endpoint  The user-specified backup endpoint, in the
    ///   form "<region>.tencentcloudapi.com" or a full domain. If empty,
    ///   the BackupEndpoint layer is skipped and fallback proceeds to
    ///   TLD switching directly.
    /// @param max_fail_num     Max failure count in the window to trip the breaker. Default 5.
    /// @param max_fail_percent Max failure rate in the window to trip the breaker. Default 0.75.
    /// @param window_interval  Sliding window size in seconds. Default 300.
    /// @param timeout          Seconds to remain Open before transitioning to HalfOpen. Default 60.
    /// @param max_requests     Two roles, both active only in HalfOpen state:
    ///                           1) upper bound on concurrent in-flight
    ///                              probes -- once this many Allow()
    ///                              calls have returned true without a
    ///                              matching Report(), further Allow()
    ///                              calls return false until one completes;
    ///                           2) total successful probes needed to
    ///                              close the breaker: the transition
    ///                              fires when (total - failures) >=
    ///                              max_requests within the HalfOpen
    ///                              episode.
    ///                         Default 5.
    RegionBreakerProfile(const std::string &backup_endpoint,
                         int max_fail_num,
                         double max_fail_percent,
                         int window_interval,
                         int timeout,
                         int max_requests)
        : m_backupEndpoint(backup_endpoint),
          m_maxFailNum(max_fail_num),
          m_maxFailPercent(max_fail_percent),
          m_windowInterval(window_interval),
          m_timeout(timeout),
          m_maxRequests(max_requests)
    {
    }

    void SetBackupEndpoint(const std::string &endpoint) { m_backupEndpoint = endpoint; }
    std::string GetBackupEndpoint() const { return m_backupEndpoint; }

    void SetMaxFailNum(int n) { m_maxFailNum = n; }
    int GetMaxFailNum() const { return m_maxFailNum; }

    void SetMaxFailPercent(double p) { m_maxFailPercent = p; }
    double GetMaxFailPercent() const { return m_maxFailPercent; }

    void SetWindowInterval(int secs) { m_windowInterval = secs; }
    int GetWindowInterval() const { return m_windowInterval; }

    void SetTimeout(int secs) { m_timeout = secs; }
    int GetTimeout() const { return m_timeout; }

    /// See the constructor comment: max_requests controls BOTH the
    /// HalfOpen concurrent-probe cap AND the successful-probe count
    /// required to close the breaker.
    void SetMaxRequests(int n) { m_maxRequests = n; }
    int GetMaxRequests() const { return m_maxRequests; }

private:
    // Empty by default: when not explicitly set, the BackupEndpoint layer
    // is skipped and fallback proceeds directly to TLD switching.
    std::string m_backupEndpoint;
    int m_maxFailNum = 5;
    double m_maxFailPercent = 0.75;
    int m_windowInterval = 300;
    int m_timeout = 60;
    int m_maxRequests = 5;
};

}  // namespace TencentCloud

#endif  // TENCENTCLOUD_CORE_REGIONBREAKERPROFILE_H_
