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

#include <tencentcloud/gaap/v20180529/model/CreateProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateProxyRequest::CreateProxyRequest() :
    m_projectIdHasBeenSet(false),
    m_proxyNameHasBeenSet(false),
    m_accessRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_concurrentHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_clonedProxyIdHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_http3SupportedHasBeenSet(false)
{
}

string CreateProxyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_proxyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessRegion.c_str(), allocator).Move(), allocator);
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

    if (m_realServerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clonedProxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClonedProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clonedProxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_billingType, allocator);
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


int64_t CreateProxyRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateProxyRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateProxyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateProxyRequest::GetProxyName() const
{
    return m_proxyName;
}

void CreateProxyRequest::SetProxyName(const string& _proxyName)
{
    m_proxyName = _proxyName;
    m_proxyNameHasBeenSet = true;
}

bool CreateProxyRequest::ProxyNameHasBeenSet() const
{
    return m_proxyNameHasBeenSet;
}

string CreateProxyRequest::GetAccessRegion() const
{
    return m_accessRegion;
}

void CreateProxyRequest::SetAccessRegion(const string& _accessRegion)
{
    m_accessRegion = _accessRegion;
    m_accessRegionHasBeenSet = true;
}

bool CreateProxyRequest::AccessRegionHasBeenSet() const
{
    return m_accessRegionHasBeenSet;
}

uint64_t CreateProxyRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateProxyRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateProxyRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

uint64_t CreateProxyRequest::GetConcurrent() const
{
    return m_concurrent;
}

void CreateProxyRequest::SetConcurrent(const uint64_t& _concurrent)
{
    m_concurrent = _concurrent;
    m_concurrentHasBeenSet = true;
}

bool CreateProxyRequest::ConcurrentHasBeenSet() const
{
    return m_concurrentHasBeenSet;
}

string CreateProxyRequest::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void CreateProxyRequest::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool CreateProxyRequest::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

string CreateProxyRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateProxyRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateProxyRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateProxyRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateProxyRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateProxyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<TagPair> CreateProxyRequest::GetTagSet() const
{
    return m_tagSet;
}

void CreateProxyRequest::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CreateProxyRequest::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string CreateProxyRequest::GetClonedProxyId() const
{
    return m_clonedProxyId;
}

void CreateProxyRequest::SetClonedProxyId(const string& _clonedProxyId)
{
    m_clonedProxyId = _clonedProxyId;
    m_clonedProxyIdHasBeenSet = true;
}

bool CreateProxyRequest::ClonedProxyIdHasBeenSet() const
{
    return m_clonedProxyIdHasBeenSet;
}

int64_t CreateProxyRequest::GetBillingType() const
{
    return m_billingType;
}

void CreateProxyRequest::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool CreateProxyRequest::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

string CreateProxyRequest::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void CreateProxyRequest::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool CreateProxyRequest::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string CreateProxyRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateProxyRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateProxyRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

string CreateProxyRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateProxyRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateProxyRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t CreateProxyRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void CreateProxyRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool CreateProxyRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}


