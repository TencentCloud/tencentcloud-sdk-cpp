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

#include <tencentcloud/tse/v20201207/model/DescribeGovernanceLaneGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeGovernanceLaneGroupsRequest::DescribeGovernanceLaneGroupsRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_briefHasBeenSet(false)
{
}

string DescribeGovernanceLaneGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupID.c_str(), allocator).Move(), allocator);
    }

    if (m_briefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brief";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_brief, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGovernanceLaneGroupsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeGovernanceLaneGroupsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeGovernanceLaneGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGovernanceLaneGroupsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGovernanceLaneGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGovernanceLaneGroupsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGovernanceLaneGroupsRequest::GetName() const
{
    return m_name;
}

void DescribeGovernanceLaneGroupsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeGovernanceLaneGroupsRequest::GetGroupID() const
{
    return m_groupID;
}

void DescribeGovernanceLaneGroupsRequest::SetGroupID(const string& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

bool DescribeGovernanceLaneGroupsRequest::GetBrief() const
{
    return m_brief;
}

void DescribeGovernanceLaneGroupsRequest::SetBrief(const bool& _brief)
{
    m_brief = _brief;
    m_briefHasBeenSet = true;
}

bool DescribeGovernanceLaneGroupsRequest::BriefHasBeenSet() const
{
    return m_briefHasBeenSet;
}


