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
using namespace rapidjson;
using namespace std;

CreateProxyGroupRequest::CreateProxyGroupRequest() :
    m_projectIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_realServerRegionHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_accessRegionSetHasBeenSet(false)
{
}

string CreateProxyGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realServerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_accessRegionSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessRegionSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessRegionSet.begin(); itr != m_accessRegionSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


