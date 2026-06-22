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

/// Pure utility that constructs fallback endpoint candidates from a
/// structured parse of the primary endpoint (see ParseEndpoint).
///
/// Two mutually exclusive failover modes depending on whether a
/// BackupEndpoint is configured:
///
///   Mode A (BackupEndpoint configured):
///     Primary -> ResolveBackupEndpoint(backup) (sole fallback / bottom).
///     No TLD fallback is performed.
///
///   Mode B (BackupEndpoint empty, default):
///     Primary -> next TLD in ring -> second TLD (bottom).
///     TLD ring order: .com -> .com.cn -> .cn -> .com -> ...
///     The fallback target is rebuilt from the parsed primary as
///       service + [kept-modifier] + new-tld
///     so the region segment and dropped-modifiers (intl) are removed,
///     while service and kept-modifiers (ai/internal) are preserved.
///     Region is NO LONGER suppressed: a regional primary also falls
///     back (dropping its region), trading geography drift for
///     availability.
///     Examples:
///       cvm.tencentcloudapi.com             -> cvm.tencentcloudapi.com.cn -> cvm.tencentcloudapi.cn
///       hunyuan.ai.tencentcloudapi.com      -> hunyuan.ai.tencentcloudapi.com.cn -> hunyuan.ai.tencentcloudapi.cn
///       cvm.intl.tencentcloudapi.com        -> cvm.tencentcloudapi.com.cn -> cvm.tencentcloudapi.cn (intl dropped)
///       cvm.ap-shanghai.tencentcloudapi.com -> cvm.tencentcloudapi.com.cn -> cvm.tencentcloudapi.cn (region dropped)
///
/// This class is stateless; state (closed/open/halfopen) lives in CircuitBreaker.
class DomainFailoverManager
{
public:
    /// Structured parse of a TencentCloud API endpoint.
    /// Shape: {service}.[modifier?].[region...].{tld}
    ///   - modifier is one of the known modifiers (ai/internal/intl),
    ///     mutually exclusive, at most one.
    ///   - ORDERING CONTRACT: the modifier MUST immediately follow the
    ///     service (i.e. always before region). Only the first segment
    ///     after service is checked. Reversed input (region before
    ///     modifier, e.g. "cvm.ap-shanghai.ai...") is NOT supported: the
    ///     modifier there falls into region and is dropped.
    ///   - region (everything between modifier/service and tld) is NOT
    ///     stored: it is always dropped on fallback.
    struct ParsedEndpoint
    {
        bool        is_tc_domain = false;  // false -> not a TC domain
        std::string service;               // first segment, e.g. "cvm"
        std::string modifier;              // "ai"/"internal"/"intl"/""
        bool        modifier_kept = false; // keep this modifier on fallback?
        std::string tld;                   // normalized lower-case TLD
    };

    /// Parse |endpoint| into its structured parts. If |endpoint| is not a
    /// TencentCloud domain, returns a ParsedEndpoint with is_tc_domain=false.
    static ParsedEndpoint ParseEndpoint(const std::string &endpoint);

    /// Normalize a user-configured BackupEndpoint (Mode A) using the
    /// primary's service name to disambiguate the "bare region" form.
    ///   - non-TencentCloud domain      -> returned as-is
    ///   - bare region (single segment != primary_service)
    ///                                   -> "{primary_service}.{backup}"
    ///   - complete domain (multi-segment, or single == primary_service)
    ///                                   -> returned as-is
    /// Modifiers (ai/internal/intl) are never auto-prepended.
    static std::string ResolveBackupEndpoint(const std::string &backup_endpoint,
                                              const std::string &primary_service);

    /// Build the ordered candidate endpoint list for one request:
    /// [primary, fallback1, fallback2, ...]. The first element is always
    /// |primary|; the LAST element is the bottom fallback (the caller
    /// must NOT guard it with a breaker -- it is force-sent without
    /// reporting, preserving legacy behavior).
    ///
    /// Built on ParseEndpoint(): Mode A (BackupEndpoint set) appends the
    /// normalized backup via ResolveBackupEndpoint(); Mode B (no backup)
    /// walks the TLD ring, dropping region and dropped-modifiers (intl)
    /// while keeping service and kept-modifiers (ai/internal).
    static std::vector<std::string> BuildCandidates(
        const std::string &primary, const std::string &backup_endpoint);

    /// True iff |endpoint| targets tencentcloudapi.com / .com.cn / .cn .
    static bool IsTencentCloudDomain(const std::string &endpoint);

    /// Extract the longest matching TLD suffix from |endpoint|, returning
    /// one of "tencentcloudapi.com.cn", "tencentcloudapi.com",
    /// "tencentcloudapi.cn", or "" if none match.
    static std::string ExtractTld(const std::string &endpoint);

private:
    /// TLD ring: .com -> .com.cn -> .cn -> (wraps to .com).
    static const std::vector<std::string> kTldRing;
};

}  // namespace TencentCloud

#endif  // TENCENTCLOUD_CORE_DOMAINFAILOVERMANAGER_H_
