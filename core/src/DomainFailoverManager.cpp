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

int DomainFailoverManager::GetBreakerSlotCount() {
  // 3 breaker slots (maximum across both modes):
  //   Mode A: only slot 0 is active; slots 1,2 idle.
  //   Mode B: slot 0 skipped; slots 1,2 active.
  // The last endpoint in either mode is the bottom fallback with no
  // breaker. Numerically equals kTldRing.size().
  return static_cast<int>(kTldRing.size());
}

std::string DomainFailoverManager::GetFallbackEndpoint(
    const std::string &original_endpoint,
    const std::string &backup_endpoint,
    int fallback_index) {
  if (!IsTencentCloudDomain(original_endpoint)) {
    return "";
  }
  if (fallback_index < 0) {
    return "";
  }

  // Two mutually exclusive modes:
  //
  // Mode A (BackupEndpoint configured):
  //   index 0 = BackupEndpoint (the only fallback, acts as bottom)
  //   index 1..N = "" (no TLD fallback)
  //
  // Mode B (BackupEndpoint empty):
  //   index 0 = "" (skipped)
  //   index 1 = next TLD in ring (region stripped)
  //   index 2 = second TLD in ring (region stripped, bottom)

  if (!backup_endpoint.empty()) {
    // Mode A: BackupEndpoint is set -- use it as the sole fallback.
    if (fallback_index != 0) {
      return "";  // No further fallback beyond BackupEndpoint.
    }
    // Decide whether |backup_endpoint| is a "bare region" (e.g.
    //   "ap-guangzhou.tencentcloudapi.com")
    // or a complete endpoint with its own service prefix (e.g.
    //   "cvm.ap-guangzhou.tencentcloudapi.com").
    //
    // We do NOT enumerate region prefixes. Instead we simply count
    // how many dotted segments sit in front of the TLD:
    //   - exactly ONE segment before the TLD -> "bare region": need
    //     to prepend the original endpoint's service name.
    //   - otherwise -> already complete: return as-is.
    std::string backup_tld = ExtractTld(backup_endpoint);
    if (backup_tld.empty()) {
      // Backup is not a TencentCloud domain at all -- return as-is.
      return backup_endpoint;
    }
    // Prefix (the part before ".{tld}").
    std::string prefix =
        backup_endpoint.substr(0, backup_endpoint.size() - backup_tld.size() - 1);
    bool bare_region = (prefix.find('.') == std::string::npos);
    if (!bare_region) {
      return backup_endpoint;
    }

    std::string svc = ExtractService(original_endpoint);
    if (svc.empty()) {
      return backup_endpoint;
    }
    // Only prepend the service name. Middle segments (ai, internal)
    // are NOT automatically carried over -- this aligns with Go SDK
    // behavior where: newEndpoint = service + "." + backupEndpoint.
    // If the user wants the backup to include ".ai" or ".internal",
    // they should configure a complete backup domain explicitly.
    std::string result = svc + "." + backup_endpoint;
    return result;
  }

  // Mode B: No BackupEndpoint -- use TLD ring fallback.
  if (fallback_index == 0) {
    return "";  // Slot 0 is unused when no BackupEndpoint is set.
  }
  // Only index 1 and 2 are valid TLD fallback slots.
  int ring_size_limit = static_cast<int>(kTldRing.size());
  if (fallback_index >= ring_size_limit) {
    return "";
  }

  // Index 1..2: TLD fallback, with region segment stripped.
  // TLDs form a ring: .com → .com.cn → .cn → .com → ...
  // Starting from the primary's own TLD, walk the ring and pick the
  // next two distinct TLDs. fallback_index 1 gets the first, 2 the
  // second. This guarantees no TLD is ever repeated regardless of
  // which TLD the user started with.
  int tld_step = fallback_index;  // 1 or 2
  std::string original_tld = ExtractTld(original_endpoint);
  if (original_tld.empty()) {
    return "";
  }

  std::string svc = ExtractService(original_endpoint);
  std::string middle = ExtractMiddleSegment(original_endpoint, original_tld);

  // Check whether the original endpoint contains a region segment.
  // Structure: {service}[.{middle}][.{region}].{tld}
  // If after removing service, middle, and tld there is still a segment
  // left, that is the region.
  // When region is present and no BackupEndpoint is configured, do NOT
  // perform TLD fallback -- because the fallback domain would lack the
  // region segment and may route to a different geography, violating
  // the user's intent.
  {
    // Reconstruct what the endpoint would look like without a region:
    //   {service}[.{middle}].{tld}
    std::string without_region = svc;
    if (!middle.empty()) {
      without_region += "." + middle;
    }
    without_region += "." + original_tld;
    // If the original is longer than "without_region", it has a region.
    std::string lower_endpoint = ToLowerAscii(original_endpoint);
    std::string lower_without = ToLowerAscii(without_region);
    if (lower_endpoint != lower_without) {
      // Region detected -- suppress TLD fallback.
      return "";
    }
  }

  // Find the primary's position in the ring.
  int ring_size = static_cast<int>(kTldRing.size());
  int origin_pos = -1;
  for (int i = 0; i < ring_size; ++i) {
    if (kTldRing[i] == original_tld) {
      origin_pos = i;
      break;
    }
  }
  if (origin_pos < 0) {
    return "";  // Unknown TLD, should not happen for a valid TC domain.
  }

  int target_pos = (origin_pos + tld_step) % ring_size;
  const std::string &target_tld = kTldRing[target_pos];

  // Build: {service}[.{middle}].{target_tld}
  // Region segment is intentionally dropped (only reachable when
  // original has no region -- verified above).
  std::string result = svc;
  if (!middle.empty()) {
    result += "." + middle;
  }
  result += "." + target_tld;
  return result;
}

namespace {

// True iff |s| ends with |suffix|.
bool EndsWith(const std::string &s, const std::string &suffix) {
  return s.size() >= suffix.size() &&
         s.compare(s.size() - suffix.size(), suffix.size(), suffix) == 0;
}

// Case-insensitive lower-case conversion (ASCII only -- sufficient for
// domain names which are restricted to ASCII per RFC 952/1123).
std::string ToLowerAscii(const std::string &s) {
  std::string result = s;
  for (auto &c : result) {
    if (c >= 'A' && c <= 'Z') {
      c = c - 'A' + 'a';
    }
  }
  return result;
}

// Ordered by descending length: longer TLDs must be tested first.
const char *const kTencentCloudTldSuffixes[] = {
    ".tencentcloudapi.com.cn",
    ".tencentcloudapi.com",
    ".tencentcloudapi.cn",
};

}  // namespace

bool DomainFailoverManager::IsTencentCloudDomain(
    const std::string &endpoint) {
  // Domain names are case-insensitive (RFC 4343). Normalize before matching.
  std::string lower = ToLowerAscii(endpoint);
  // Exact suffix match (with a leading '.') so that look-alikes such as
  // "tencentcloudapi.company.example.com" are NOT misidentified.
  for (const char *suffix : kTencentCloudTldSuffixes) {
    if (EndsWith(lower, suffix)) {
      return true;
    }
  }
  return false;
}

std::string DomainFailoverManager::ExtractTld(const std::string &endpoint) {
  // Domain names are case-insensitive. Normalize before matching.
  std::string lower = ToLowerAscii(endpoint);
  // Match the longest TLD first. Require a leading '.' so that
  // "tencentcloudapi.comm" (typo) is not treated as ".com".
  for (const char *suffix : kTencentCloudTldSuffixes) {
    if (EndsWith(lower, suffix)) {
      // suffix starts with '.'; skip it when returning.
      return std::string(suffix + 1);
    }
  }
  return "";
}

std::string DomainFailoverManager::ExtractService(
    const std::string &endpoint) {
  auto pos = endpoint.find('.');
  if (pos == std::string::npos) {
    return endpoint;
  }
  return endpoint.substr(0, pos);
}

std::string DomainFailoverManager::ExtractMiddleSegment(
    const std::string &endpoint,
    const std::string &tld) {
  // Tencent Cloud API domains come in exactly two shapes:
  //   1) {service}[.{region}].{tld}             -- no middle segment
  //   2) {service}.ai[.{region}].{tld}          -- middle == "ai"
  // So the "middle" is determined solely by whether the SECOND dotted
  // segment equals the literal "ai". No region-prefix enumeration is
  // needed, which means new regions (me-/cn-/...) require no changes.
  auto dot1 = endpoint.find('.');
  if (dot1 == std::string::npos) {
    return "";
  }
  auto dot2 = endpoint.find('.', dot1 + 1);
  if (dot2 == std::string::npos) {
    return "";
  }
  // The second segment must lie strictly before the TLD to be a
  // middle (otherwise it IS the start of the TLD).
  auto tld_pos = endpoint.rfind("." + tld);
  if (tld_pos == std::string::npos || tld_pos < dot2) {
    return "";
  }
  std::string second = endpoint.substr(dot1 + 1, dot2 - dot1 - 1);
  if (second == "ai" || second == "internal") {
    return second;
  }
  return "";
}
