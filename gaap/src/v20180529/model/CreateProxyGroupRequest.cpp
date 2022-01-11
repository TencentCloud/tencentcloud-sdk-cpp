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

#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateProxyGroupRequest::CreateProxyGroupRequest() :
    m_projectIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_accessRegionSetHasBeenSet(false),
    m_iPAddressVersionHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_http3SupportedHasBeenSet(false)
{
}

string CreateProxyGroupRequest::ToJsonString() const
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

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
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

    if (m_accessRegionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRegionSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessRegionSet.begin(); itr != m_accessRegionSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_iPAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iPAddressVersion.c_str(), allocator).Move(), allocator);
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


uint64_t CreateProxyGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateProxyGroupRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateProxyGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateProxyGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateProxyGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateProxyGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateProxyGroupRequest::GetRealServerRegion() const
{
    return m_realServerRegion;
}

void CreateProxyGroupRequest::SetRealServerRegion(const string& _realServerRegion)
{
    m_realServerRegion = _realServerRegion;
    m_realServerRegionHasBeenSet = true;
}

bool CreateProxyGroupRequest::RealServerRegionHasBeenSet() const
{
    return m_realServerRegionHasBeenSet;
}

vector<TagPair> CreateProxyGroupRequest::GetTagSet() const
{
    return m_tagSet;
}

void CreateProxyGroupRequest::SetTagSet(const vector<TagPair>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CreateProxyGroupRequest::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

vector<AccessConfiguration> CreateProxyGroupRequest::GetAccessRegionSet() const
{
    return m_accessRegionSet;
}

void CreateProxyGroupRequest::SetAccessRegionSet(const vector<AccessConfiguration>& _accessRegionSet)
{
    m_accessRegionSet = _accessRegionSet;
    m_accessRegionSetHasBeenSet = true;
}

bool CreateProxyGroupRequest::AccessRegionSetHasBeenSet() const
{
    return m_accessRegionSetHasBeenSet;
}

string CreateProxyGroupRequest::GetIPAddressVersion() const
{
    return m_iPAddressVersion;
}

void CreateProxyGroupRequest::SetIPAddressVersion(const string& _iPAddressVersion)
{
    m_iPAddressVersion = _iPAddressVersion;
    m_iPAddressVersionHasBeenSet = true;
}

bool CreateProxyGroupRequest::IPAddressVersionHasBeenSet() const
{
    return m_iPAddressVersionHasBeenSet;
}

string CreateProxyGroupRequest::GetPackageType() const
{
    return m_packageType;
}

void CreateProxyGroupRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool CreateProxyGroupRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t CreateProxyGroupRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void CreateProxyGroupRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool CreateProxyGroupRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}


