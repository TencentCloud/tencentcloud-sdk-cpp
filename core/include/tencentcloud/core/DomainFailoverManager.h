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
///   Two mutually exclusive failover modes depending on whether a
///   BackupEndpoint is configured:
///
///   Mode A (BackupEndpoint configured):
///     Primary → BackupEndpoint (sole fallback, acts as bottom)
///     No TLD fallback is performed.
///     Works regardless of whether primary has a region segment.
///
///   Mode B (BackupEndpoint empty, default):
///     - If primary does NOT contain a region segment:
///       Primary → next TLD in ring → second TLD (bottom)
///       TLD ring order: .com → .com.cn → .cn → .com → ...
///       Examples:
///         cvm.tencentcloudapi.com        → .com.cn → .cn (bottom)
///         hunyuan.ai.tencentcloudapi.com → hunyuan.ai.tencentcloudapi.com.cn → .cn
///         cvm.internal.tencentcloudapi.com → cvm.internal.tencentcloudapi.com.cn → .cn
///
///     - If primary DOES contain a region segment:
///       No TLD fallback is performed (returns "").
///       Rationale: TLD fallback strips the region, which may route
///       requests to a different geography, violating user intent.
///       Users who need failover for regional endpoints should
///       configure a BackupEndpoint explicitly (Mode A).
///       Examples (no fallback):
///         cvm.ap-shanghai.tencentcloudapi.com     → "" (no fallback)
///         hunyuan.ai.ap-shanghai.tencentcloudapi.com → "" (no fallback)
///
/// This class is stateless; state (closed/open/halfopen) lives in CircuitBreaker.
class DomainFailoverManager {
 public:
  /// Number of breaker slots needed for the failover chain.
  /// 3 slots (the maximum across both modes):
  ///   Mode A (BackupEndpoint set): only breaker[0] is used (primary);
  ///     BackupEndpoint is the bottom, no breaker needed.
  ///   Mode B (no BackupEndpoint): breaker[0] skipped, breaker[1] guards
  ///     primary, breaker[2] guards 1st TLD fallback; last TLD is bottom.
  /// Unused slots are skipped via empty GetFallbackEndpoint() returns.
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
  /// TencentCloud API domains have these shapes:
  ///   {service}[.{region}].{tld}              -> returns ""
  ///   {service}.ai[.{region}].{tld}           -> returns "ai"
  ///   {service}.internal.{tld}                -> returns "internal"
  ///
  /// "ai" is a product identifier -- preserved in both TLD fallback
  /// and BackupEndpoint construction.
  ///
  /// "internal" is a network route marker (intranet resolution) --
  /// preserved in TLD fallback (staying on internal route with
  /// different TLD), but stripped in BackupEndpoint construction
  /// (falling back from internal to public route).
  ///
  /// Region segments are not enumerated, so new regions need no
  /// change here.
  static std::string ExtractMiddleSegment(const std::string &endpoint,
                                           const std::string &tld);

 private:
  /// TLD ring: .com → .com.cn → .cn → (wraps to .com).
  /// Used to compute the two non-primary TLD fallback candidates.
  static const std::vector<std::string> kTldRing;
};

}  // namespace TencentCloud

#endif  // TENCENTCLOUD_CORE_DOMAINFAILOVERMANAGER_H_
