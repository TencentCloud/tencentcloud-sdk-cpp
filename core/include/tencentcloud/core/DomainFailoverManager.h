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

#ifndef TENCENTCLOUD_CORE_DOMAINFAILOVERMANAGER_H_
#define TENCENTCLOUD_CORE_DOMAINFAILOVERMANAGER_H_

#include <string>
#include <vector>

namespace TencentCloud
{

/// Pure utility that constructs fallback endpoint candidates.
///
/// Design:
///   Primary endpoint (index -1): the user-supplied endpoint.
///   Fallback sequence:
///     index 0: user-configured BackupEndpoint (e.g. ap-guangzhou.tencentcloudapi.com)
///     index 1: next TLD in ring after primary's TLD (region stripped)
///     index 2: second TLD in ring after primary's TLD (region stripped)
///
///   TLD ring order: .com → .com.cn → .cn → .com → ...
///   Examples:
///     primary .com    → index 1 = .com.cn, index 2 = .cn
///     primary .com.cn → index 1 = .cn,     index 2 = .com
///     primary .cn     → index 1 = .com,    index 2 = .com.cn
///
/// When constructing TLD fallback, the region segment is stripped so that
/// "cvm.ap-shanghai.tencentcloudapi.com" -> "cvm.tencentcloudapi.com.cn".
/// The ".ai" style middle segment is preserved:
/// "hunyuan.ai.ap-shanghai.tencentcloudapi.com" -> "hunyuan.ai.tencentcloudapi.com.cn".
///
/// This class is stateless; state (closed/open/halfopen) lives in CircuitBreaker.
class DomainFailoverManager {
 public:
  /// Number of breaker slots needed for the failover chain.
  /// 3 slots: primary(breaker[0]) + BackupEndpoint(breaker[1]) +
  /// first TLD fallback(breaker[2]). The last TLD in the ring is the
  /// bottom fallback and has no breaker.
  static int GetBreakerSlotCount();

  /// Build a fallback endpoint for |fallback_index| given the primary
  /// |original_endpoint| and user-configured |backup_endpoint|.
  ///
  /// Returns empty string if |fallback_index| is out of range or if
  /// |original_endpoint| is not a TencentCloud domain.
  static std::string GetFallbackEndpoint(const std::string &original_endpoint,
                                          const std::string &backup_endpoint,
                                          int fallback_index);

  /// True iff |endpoint| targets tencentcloudapi.com / .com.cn / .cn .
  static bool IsTencentCloudDomain(const std::string &endpoint);

  /// Extract the longest matching TLD suffix from |endpoint|, returning
  /// one of "tencentcloudapi.com.cn", "tencentcloudapi.com",
  /// "tencentcloudapi.cn", or "" if none match.
  static std::string ExtractTld(const std::string &endpoint);

  /// Extract the first segment (service name) from |endpoint|.
  /// e.g. "hunyuan.ai.tencentcloudapi.com" -> "hunyuan".
  static std::string ExtractService(const std::string &endpoint);

  /// Extract the "middle" segment between the service and the TLD.
  /// TencentCloud API domains have exactly two shapes:
  ///   {service}[.{region}].{tld}           -> returns ""
  ///   {service}.ai[.{region}].{tld}        -> returns "ai"
  /// This recognizes ONLY the literal "ai" middle; any other shape
  /// returns "". Region segments are not enumerated, so new regions
  /// need no change here.
  static std::string ExtractMiddleSegment(const std::string &endpoint,
                                           const std::string &tld);

 private:
  /// TLD ring: .com → .com.cn → .cn → (wraps to .com).
  /// Used to compute the two non-primary TLD fallback candidates.
  static const std::vector<std::string> kTldRing;
};

}  // namespace TencentCloud

#endif  // TENCENTCLOUD_CORE_DOMAINFAILOVERMANAGER_H_
