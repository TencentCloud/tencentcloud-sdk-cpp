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

#include <tencentcloud/core/DomainFailoverManager.h>

using namespace TencentCloud;

const std::vector<std::string> DomainFailoverManager::kTldRing = {
    "tencentcloudapi.com",
    "tencentcloudapi.com.cn",
    "tencentcloudapi.cn",
};

namespace
{

// True iff |s| ends with |suffix|.
bool EndsWith(const std::string &s, const std::string &suffix)
{
    return s.size() >= suffix.size() &&
           s.compare(s.size() - suffix.size(), suffix.size(), suffix) == 0;
}

// Case-insensitive lower-case conversion (ASCII only -- sufficient for
// domain names which are restricted to ASCII per RFC 952/1123).
std::string ToLowerAscii(const std::string &s)
{
    std::string result = s;
    for (auto &c : result)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = c - 'A' + 'a';
        }
    }
    return result;
}

// Known middle-segment modifiers and whether they are kept on fallback.
// New modifiers only require a row here.
struct ModifierSpec
{
    const char *name;
    bool kept;
};
const ModifierSpec kModifiers[] = {
    {"ai", true},        // product identifier, kept
    {"internal", true},  // intranet route marker, kept
    {"intl", false},     // international-site marker, dropped on fallback
};

// Ordered by descending length: longer TLDs must be tested first.
const char *const kTencentCloudTldSuffixes[] = {
    ".tencentcloudapi.com.cn",
    ".tencentcloudapi.com",
    ".tencentcloudapi.cn",
};

}  // namespace

DomainFailoverManager::ParsedEndpoint DomainFailoverManager::ParseEndpoint(
    const std::string &endpoint)
{
    ParsedEndpoint p;
    std::string tld = ExtractTld(endpoint);
    if (tld.empty())
    {
        return p;  // is_tc_domain stays false
    }
    p.is_tc_domain = true;
    p.tld = tld;

    // prefix = everything before ".{tld}" (length-based, case kept).
    std::string prefix = endpoint.substr(0, endpoint.size() - tld.size() - 1);

    std::string::size_type dot = prefix.find('.');
    if (dot == std::string::npos)
    {
        p.service = ToLowerAscii(prefix);  // service only, no middle/region
        return p;
    }
    p.service = ToLowerAscii(prefix.substr(0, dot));

    // First segment after service.
    std::string rest = prefix.substr(dot + 1);
    std::string::size_type dot2 = rest.find('.');
    std::string second = (dot2 == std::string::npos) ? rest : rest.substr(0, dot2);

    std::string second_lower = ToLowerAscii(second);
    for (const ModifierSpec &m : kModifiers)
    {
        if (second_lower == m.name)
        {
            p.modifier = m.name;       // normalized lower-case form
            p.modifier_kept = m.kept;
            break;
        }
    }
    // Otherwise no modifier: |second| is the start of region (dropped).
    // ORDERING CONTRACT: only |second| (the first segment after service) is
    // checked. A modifier appearing after a region segment (reversed input)
    // is therefore swallowed by region and dropped -- not supported by design.
    return p;
}

std::string DomainFailoverManager::ResolveBackupEndpoint(
    const std::string &backup_endpoint, const std::string &primary_service)
{
    std::string tld = ExtractTld(backup_endpoint);
    if (tld.empty())
    {
        return backup_endpoint;  // non-TencentCloud, as-is
    }
    std::string prefix =
        backup_endpoint.substr(0, backup_endpoint.size() - tld.size() - 1);

    if (prefix.find('.') != std::string::npos)
    {
        return backup_endpoint;  // multi-segment -> complete domain
    }
    if (prefix == primary_service)
    {
        return backup_endpoint;  // single segment == service -> complete
    }
    if (primary_service.empty())
    {
        return backup_endpoint;  // defensive: cannot prepend
    }
    return primary_service + "." + backup_endpoint;  // bare region
}

std::vector<std::string> DomainFailoverManager::BuildCandidates(
    const std::string &primary, const std::string &backup_endpoint)
{
    std::vector<std::string> candidates;
    candidates.push_back(primary);  // first element is always primary

    ParsedEndpoint p = ParseEndpoint(primary);
    if (!p.is_tc_domain)
    {
        return candidates;  // non-TencentCloud: no failover
    }

    if (!backup_endpoint.empty())
    {
        // Mode A: single fallback to the (normalized) backup endpoint.
        std::string resolved = ResolveBackupEndpoint(backup_endpoint, p.service);
        if (!resolved.empty())
        {
            candidates.push_back(resolved);
        }
        return candidates;
    }

    // Mode B: walk the TLD ring starting from the primary's own TLD.
    // Region is dropped; kept-modifiers (ai/internal) preserved; intl dropped.
    const std::size_t ring_size = kTldRing.size();
    std::size_t origin = ring_size;  // sentinel: not found
    for (std::size_t i = 0; i < ring_size; ++i)
    {
        if (kTldRing[i] == p.tld)
        {
            origin = i;
            break;
        }
    }
    if (origin == ring_size)
    {
        return candidates;  // unknown TLD, no fallback
    }

    std::string prefix = p.service;
    if (p.modifier_kept && !p.modifier.empty())
    {
        prefix += "." + p.modifier;
    }
    for (std::size_t off = 1; off < ring_size; ++off)
    {
        candidates.push_back(prefix + "." + kTldRing[(origin + off) % ring_size]);
    }
    return candidates;
}

bool DomainFailoverManager::IsTencentCloudDomain(
    const std::string &endpoint)
{
    // Domain names are case-insensitive (RFC 4343). Normalize before matching.
    std::string lower = ToLowerAscii(endpoint);
    // Exact suffix match (with a leading '.') so that look-alikes such as
    // "tencentcloudapi.company.example.com" are NOT misidentified.
    for (const char *suffix : kTencentCloudTldSuffixes)
    {
        if (EndsWith(lower, suffix))
        {
            return true;
        }
    }
    return false;
}

std::string DomainFailoverManager::ExtractTld(const std::string &endpoint)
{
    // Domain names are case-insensitive. Normalize before matching.
    std::string lower = ToLowerAscii(endpoint);
    // Match the longest TLD first. Require a leading '.' so that
    // "tencentcloudapi.comm" (typo) is not treated as ".com".
    for (const char *suffix : kTencentCloudTldSuffixes)
    {
        if (EndsWith(lower, suffix))
        {
            // suffix starts with '.'; skip it when returning.
            return std::string(suffix + 1);
        }
    }
    return "";
}
