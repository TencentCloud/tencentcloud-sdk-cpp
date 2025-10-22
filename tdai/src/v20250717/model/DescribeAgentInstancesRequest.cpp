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

#include <tencentcloud/tdai/v20250717/model/DescribeAgentInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

DescribeAgentInstancesRequest::DescribeAgentInstancesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentInternalNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagFilterHasBeenSet(false)
{
}

string DescribeAgentInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentInternalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilter.begin(); itr != m_tagFilter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAgentInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAgentInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAgentInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAgentInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAgentInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeAgentInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeAgentInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeAgentInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeAgentInstancesRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeAgentInstancesRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeAgentInstancesRequest::GetAgentName() const
{
    return m_agentName;
}

void DescribeAgentInstancesRequest::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string DescribeAgentInstancesRequest::GetAgentInternalName() const
{
    return m_agentInternalName;
}

void DescribeAgentInstancesRequest::SetAgentInternalName(const string& _agentInternalName)
{
    m_agentInternalName = _agentInternalName;
    m_agentInternalNameHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::AgentInternalNameHasBeenSet() const
{
    return m_agentInternalNameHasBeenSet;
}

string DescribeAgentInstancesRequest::GetStatus() const
{
    return m_status;
}

void DescribeAgentInstancesRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TagFilter> DescribeAgentInstancesRequest::GetTagFilter() const
{
    return m_tagFilter;
}

void DescribeAgentInstancesRequest::SetTagFilter(const vector<TagFilter>& _tagFilter)
{
    m_tagFilter = _tagFilter;
    m_tagFilterHasBeenSet = true;
}

bool DescribeAgentInstancesRequest::TagFilterHasBeenSet() const
{
    return m_tagFilterHasBeenSet;
}


