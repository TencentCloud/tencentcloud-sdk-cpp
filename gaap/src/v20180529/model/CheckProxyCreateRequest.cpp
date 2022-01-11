/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/gaap/v20180529/model/CheckProxyCreateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CheckProxyCreateRequest::CheckProxyCreateRequest() :
    m_accessRegionHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_http3SupportedHasBeenSet(false)
{
}

string CheckProxyCreateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_concurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrent, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_iPAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPAddressVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http3Supported, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckProxyCreateRequest::GetAccessRegion() const
{
    return m_accessRegion;
}

void CheckProxyCreateRequest::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool CheckProxyCreateRequest::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

string CheckProxyCreateRequest::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void CheckProxyCreateRequest::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool CheckProxyCreateRequest::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

uint64_t CheckProxyCreateRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CheckProxyCreateRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CheckProxyCreateRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t CheckProxyCreateRequest::GetConcurrent() const
{
    return m_concurrent;
}

void CheckProxyCreateRequest::SetConcurrent(const uint64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool CheckProxyCreateRequest::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string CheckProxyCreateRequest::GetGroupId() const
{
    return m_groupId;
}

void CheckProxyCreateRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CheckProxyCreateRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CheckProxyCreateRequest::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void CheckProxyCreateRequest::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool CheckProxyCreateRequest::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string CheckProxyCreateRequest::GetNetworkType() const
{
    return m_networkType;
}

void CheckProxyCreateRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CheckProxyCreateRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CheckProxyCreateRequest::GetPackageType() const
{
    return m_packageType;
}

void CheckProxyCreateRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CheckProxyCreateRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t CheckProxyCreateRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void CheckProxyCreateRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool CheckProxyCreateRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}


