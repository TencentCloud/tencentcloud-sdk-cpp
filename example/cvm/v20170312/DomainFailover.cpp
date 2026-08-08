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

///
/// This example demonstrates region-level domain failover (aligned with
/// Python SDK's region_breaker) in the C++ SDK.
///
/// When the primary endpoint keeps failing, a circuit breaker drives
/// automatic switching. There are two mutually exclusive fallback modes:
///   Mode A (BackupEndpoint configured):
///     primary -> user-configured BackupEndpoint   (no TLD fallback)
///   Mode B (no BackupEndpoint, default):
///     primary -> tencentcloudapi.com.cn -> tencentcloudapi.cn  (TLD ring)
///
/// Run with: TENCENTCLOUD_SECRET_ID=xxx TENCENTCLOUD_SECRET_KEY=yyy ./DomainFailover
///

#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/profile/RegionBreakerProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>
#include <cstdlib>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

static void PrintOutcome(CvmClient::DescribeInstancesOutcome outcome) {
    if (!outcome.IsSuccess()) {
        cout << "  Error: " << outcome.GetError().PrintAll() << endl;
    } else {
        auto rsp = outcome.GetResult();
        cout << "  RequestId=" << rsp.GetRequestId()
             << "  TotalCount=" << rsp.GetTotalCount() << endl;
    }
    cout << endl;
}

/// Example 1: Default behavior - region failover is ENABLED by default.
/// The SDK uses circuit breakers to automatically fall back to alternate
/// endpoints when the primary endpoint keeps failing.
void DefaultEnabled() {
    cout << "=== Example 1: Default (Region Failover Enabled) ===" << endl;

    const char* sid = getenv("TENCENTCLOUD_SECRET_ID");
    const char* skey = getenv("TENCENTCLOUD_SECRET_KEY");
    Credential cred(sid ? sid : "", skey ? skey : "");

    CvmClient client(cred, "ap-guangzhou");

    DescribeInstancesRequest req;
    req.SetOffset(0);
    req.SetLimit(5);
    PrintOutcome(client.DescribeInstances(req));
}

/// Example 2: Enable region failover.
/// Without an explicit BackupEndpoint, the BackupEndpoint layer is
/// skipped; the SDK falls back directly to .com.cn then .cn.
void EnableWithoutBackupEndpoint() {
    cout << "=== Example 2: Region Failover (no BackupEndpoint, TLD only) ===" << endl;

    const char* sid = getenv("TENCENTCLOUD_SECRET_ID");
    const char* skey = getenv("TENCENTCLOUD_SECRET_KEY");
    Credential cred(sid ? sid : "", skey ? skey : "");

    ClientProfile clientProfile;
    clientProfile.SetDisableRegionBreaker(false);  // Enable failover
    // RegionBreakerProfile left with default-empty BackupEndpoint

    CvmClient client(cred, "ap-guangzhou", clientProfile);

    DescribeInstancesRequest req;
    req.SetOffset(0);
    req.SetLimit(5);
    PrintOutcome(client.DescribeInstances(req));
}

/// Example 3: Custom RegionBreakerProfile with multiple requests.
///
/// Uses a fabricated sub-domain as primary (will fail with SSLError) and a
/// real BackupEndpoint. After enough failures trip the breaker (max_fail_num=3),
/// subsequent requests are routed to the BackupEndpoint.
///
/// Expected output:
///   Requests 1~3: SSLError (primary endpoint cert mismatch)
///   Request  4+:  Success  (failover to backup endpoint)
void EnableWithCustomProfile() {
    cout << "=== Example 3: Custom RegionBreakerProfile ===" << endl;
    cout << "  Primary endpoint: cvm.does-not-exist.tencentcloudapi.com (SSL will fail)" << endl;
    cout << "  Backup endpoint:  ap-beijing.tencentcloudapi.com (will succeed)" << endl;
    cout << endl;

    const char* sid = getenv("TENCENTCLOUD_SECRET_ID");
    const char* skey = getenv("TENCENTCLOUD_SECRET_KEY");
    if (!sid || !skey) {
        cout << "  [SKIP] Set TENCENTCLOUD_SECRET_ID and TENCENTCLOUD_SECRET_KEY to run this example." << endl;
        cout << endl;
        return;
    }
    Credential cred(sid, skey);

    RegionBreakerProfile rb(
        /*backup_endpoint=*/ "ap-beijing.tencentcloudapi.com",
        /*max_fail_num=*/    3,
        /*max_fail_percent=*/0.5,
        /*window_interval=*/ 60,
        /*timeout=*/         30,
        /*max_requests=*/    3);

    ClientProfile clientProfile;
    clientProfile.SetDisableRegionBreaker(false);
    clientProfile.SetRegionBreakerProfile(rb);

    HttpProfile httpProfile;
    httpProfile.SetEndpoint("cvm.does-not-exist.tencentcloudapi.com");
    httpProfile.SetConnectTimeout(3);
    httpProfile.SetReqTimeout(5);
    clientProfile.SetHttpProfile(httpProfile);

    CvmClient client(cred, "ap-guangzhou", clientProfile);

    DescribeInstancesRequest req;
    req.SetOffset(0);
    req.SetLimit(1);

    const int kTotalRequests = 6;
    int fail_count = 0;
    int success_count = 0;

    for (int i = 1; i <= kTotalRequests; ++i) {
        cout << "  Request #" << i << ": ";
        auto outcome = client.DescribeInstances(req);
        if (!outcome.IsSuccess()) {
            ++fail_count;
            cout << "FAILED - " << outcome.GetError().GetErrorCode()
                 << ": " << outcome.GetError().GetErrorMessage() << endl;
        } else {
            ++success_count;
            cout << "SUCCESS - RequestId=" << outcome.GetResult().GetRequestId() << endl;
        }
    }

    cout << endl;
    cout << "  Summary: " << fail_count << " failed, "
         << success_count << " succeeded (failover triggered after "
         << fail_count << " failures)" << endl;
    cout << endl;
}

/// Example 4: Demonstrate actual failover in action.
///
/// Sets the primary endpoint to a domain that passes the SDK's
/// IsTencentCloudDomain() check (ends with ".tencentcloudapi.com")
/// but uses a fabricated sub-domain that will fail with SSLError
/// (CURLE_PEER_FAILED_VERIFICATION) because the wildcard DNS record
/// resolves it to a server whose certificate SAN does not match.
///
/// SSLError is one of the failover-triggering error codes (it is a
/// strong signal of DNS hijacking for legitimate TencentCloud domains).
/// The circuit breaker trips after consecutive SSLError failures, and
/// subsequent requests are routed to the BackupEndpoint (a real domain).
///
/// Expected output:
///   Requests 1~5: SSLError (certificate SAN mismatch on fabricated domain)
///   Request  6+:  Success  (failover to backup endpoint)
void DemonstrateActualFailover() {
    cout << "=== Example 4: Actual Failover Demonstration ===" << endl;
    cout << "  Primary endpoint: cvm.does-not-exist.tencentcloudapi.com (SSL will fail)" << endl;
    cout << "  Backup endpoint:  ap-guangzhou.tencentcloudapi.com (will succeed)" << endl;
    cout << endl;

    const char* sid = getenv("TENCENTCLOUD_SECRET_ID");
    const char* skey = getenv("TENCENTCLOUD_SECRET_KEY");
    if (!sid || !skey) {
        cout << "  [SKIP] Set TENCENTCLOUD_SECRET_ID and TENCENTCLOUD_SECRET_KEY to run this example." << endl;
        cout << endl;
        return;
    }
    Credential cred(sid, skey);

    // Use the default breaker thresholds (max_fail_num=5): the breaker
    // trips after 5 consecutive SSLError failures on the primary.
    RegionBreakerProfile rb(
        /*backup_endpoint=*/ "ap-guangzhou.tencentcloudapi.com",
        /*max_fail_num=*/    5,
        /*max_fail_percent=*/0.75,
        /*window_interval=*/ 300,
        /*timeout=*/         60,
        /*max_requests=*/    3);

    ClientProfile clientProfile;
    clientProfile.SetDisableRegionBreaker(false);
    clientProfile.SetRegionBreakerProfile(rb);

    HttpProfile httpProfile;
    // Fabricated sub-domain under tencentcloudapi.com:
    //   - DNS resolves (wildcard A record) -> passes IsTencentCloudDomain()
    //   - SSL certificate SAN does not match -> CURLE_PEER_FAILED_VERIFICATION
    //   - SDK maps to "SSLError" -> triggers failover
    httpProfile.SetEndpoint("cvm.does-not-exist.tencentcloudapi.com");
    httpProfile.SetConnectTimeout(3);
    httpProfile.SetReqTimeout(5);
    clientProfile.SetHttpProfile(httpProfile);

    CvmClient client(cred, "ap-guangzhou", clientProfile);

    DescribeInstancesRequest req;
    req.SetOffset(0);
    req.SetLimit(1);

    // Send 10 requests to observe failover behavior.
    //
    // How to tell that the endpoint has switched from the output:
    //
    //   - SSLError with message containing "does-not-exist" means the
    //     request is still hitting the PRIMARY endpoint (SSL cert SAN
    //     mismatch on the fabricated sub-domain).
    //
    //   - Once the output changes from FAILED to SUCCESS, the circuit
    //     breaker has tripped (Closed -> Open) and the SDK is now
    //     routing requests to the BACKUP endpoint
    //     (cvm.ap-guangzhou.tencentcloudapi.com).
    //
    //   - The transition point (last FAILED -> first SUCCESS) is
    //     exactly where the domain switch happened.
    //
    // For deeper debugging, enable curl verbose mode or add a log line
    // in AbstractClient::DoRequest() after SelectEndpoint() returns:
    //   std::cerr << "[Failover] endpoint=" << decision.host << std::endl;
    const int kTotalRequests = 10;
    int fail_count = 0;
    int success_count = 0;

    for (int i = 1; i <= kTotalRequests; ++i) {
        cout << "  Request #" << i << ": ";
        auto outcome = client.DescribeInstances(req);
        if (!outcome.IsSuccess()) {
            ++fail_count;
            cout << "FAILED - " << outcome.GetError().GetErrorCode()
                 << ": " << outcome.GetError().GetErrorMessage() << endl;
        } else {
            ++success_count;
            cout << "SUCCESS - RequestId=" << outcome.GetResult().GetRequestId() << endl;
        }
    }

    cout << endl;
    cout << "  Summary: " << fail_count << " failed, "
         << success_count << " succeeded (failover triggered after "
         << fail_count << " failures)" << endl;
    cout << endl;
}

/// Example 5: Failover WITHOUT BackupEndpoint (TLD-only fallback).
///
/// With no BackupEndpoint, fallback goes through the TLD ring. The
/// primary cvm.does-not-exist.tencentcloudapi.com carries a region-like
/// segment ("does-not-exist") which is DROPPED on fallback, so the
/// breaker trips and the SDK switches to cvm.tencentcloudapi.com.cn.
///
/// Expected output:
///   Requests 1~5: SSLError (primary cert mismatch on fabricated domain)
///   Request  6+:  Success  (failover to cvm.tencentcloudapi.com.cn)
void DemonstrateFailoverWithoutBackup() {
    cout << "=== Example 5: Failover Without BackupEndpoint (TLD fallback) ===" << endl;
    cout << "  Primary endpoint: cvm.does-not-exist.tencentcloudapi.com (will fail)" << endl;
    cout << "  BackupEndpoint:   (empty - skipped)" << endl;
    cout << "  Expected target:  cvm.tencentcloudapi.com.cn" << endl;
    cout << endl;

    const char* sid = getenv("TENCENTCLOUD_SECRET_ID");
    const char* skey = getenv("TENCENTCLOUD_SECRET_KEY");
    if (!sid || !skey) {
        cout << "  [SKIP] Set TENCENTCLOUD_SECRET_ID and TENCENTCLOUD_SECRET_KEY to run this example." << endl;
        cout << endl;
        return;
    }
    Credential cred(sid, skey);

    // No BackupEndpoint: leave RegionBreakerProfile with default empty string.
    RegionBreakerProfile rb(
        /*backup_endpoint=*/ "",
        /*max_fail_num=*/    5,
        /*max_fail_percent=*/0.75,
        /*window_interval=*/ 300,
        /*timeout=*/         60,
        /*max_requests=*/    3);

    ClientProfile clientProfile;
    clientProfile.SetDisableRegionBreaker(false);
    clientProfile.SetRegionBreakerProfile(rb);

    HttpProfile httpProfile;
    // Fabricated two-level sub-domain: SSL cert SAN mismatch triggers
    // SSLError, which opens the breaker and drives TLD fallback.
    httpProfile.SetEndpoint("cvm.does-not-exist.tencentcloudapi.com");
    httpProfile.SetConnectTimeout(3);
    httpProfile.SetReqTimeout(5);
    clientProfile.SetHttpProfile(httpProfile);

    CvmClient client(cred, "ap-guangzhou", clientProfile);

    DescribeInstancesRequest req;
    req.SetOffset(0);
    req.SetLimit(1);

    // After max_fail_num consecutive SSLError failures on the primary, the
    // breaker opens. With no BackupEndpoint, the region-like segment is
    // dropped and the SDK falls back through the TLD ring:
    //   cvm.does-not-exist.tencentcloudapi.com -> cvm.tencentcloudapi.com.cn
    const int kTotalRequests = 10;
    int fail_count = 0;
    int success_count = 0;

    for (int i = 1; i <= kTotalRequests; ++i) {
        cout << "  Request #" << i << ": ";
        auto outcome = client.DescribeInstances(req);
        if (!outcome.IsSuccess()) {
            ++fail_count;
            cout << "FAILED - " << outcome.GetError().GetErrorCode()
                 << ": " << outcome.GetError().GetErrorMessage() << endl;
        } else {
            ++success_count;
            cout << "SUCCESS - RequestId=" << outcome.GetResult().GetRequestId() << endl;
        }
    }

    cout << endl;
    cout << "  Summary: " << fail_count << " failed, "
         << success_count << " succeeded" << endl;
    cout << "  (Without BackupEndpoint, failover goes to .com.cn TLD)" << endl;
    cout << endl;
}

int main() {
    TencentCloud::InitAPI();

    DefaultEnabled();
    EnableWithoutBackupEndpoint();
    EnableWithCustomProfile();
    DemonstrateActualFailover();
    DemonstrateFailoverWithoutBackup();

    TencentCloud::ShutdownAPI();
    return 0;
}
