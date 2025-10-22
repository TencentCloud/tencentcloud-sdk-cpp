/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tiia/v20190529/model/CreateGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

CreateGroupRequest::CreateGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_maxCapacityHasBeenSet(false),
    m_briefHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_groupTypeHasBeenSet(false)
{
}

string CreateGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCapacity, allocator);
    }

    if (m_briefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brief";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_brief.c_str(), allocator).Move(), allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t CreateGroupRequest::GetMaxCapacity() const
{
    return m_maxCapacity;
}

void CreateGroupRequest::SetMaxCapacity(const uint64_t& _maxCapacity)
{
    m_maxCapacity = _maxCapacity;
    m_maxCapacityHasBeenSet = true;
}

bool CreateGroupRequest::MaxCapacityHasBeenSet() const
{
    return m_maxCapacityHasBeenSet;
}

string CreateGroupRequest::GetBrief() const
{
    return m_brief;
}

void CreateGroupRequest::SetBrief(const string& _brief)
{
    m_brief = _brief;
    m_briefHasBeenSet = true;
}

bool CreateGroupRequest::BriefHasBeenSet() const
{
    return m_briefHasBeenSet;
}

uint64_t CreateGroupRequest::GetMaxQps() const
{
    return m_maxQps;
}

void CreateGroupRequest::SetMaxQps(const uint64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool CreateGroupRequest::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}

uint64_t CreateGroupRequest::GetGroupType() const
{
    return m_groupType;
}

void CreateGroupRequest::SetGroupType(const uint64_t& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool CreateGroupRequest::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}


