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

#include <tencentcloud/wedata/v20210820/model/DescribeInLongAgentListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInLongAgentListRequest::DescribeInLongAgentListRequest() :
    m_projectIdHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_likeHasBeenSet(false),
    m_agentTypesHasBeenSet(false)
{
}

string DescribeInLongAgentListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_agentType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_likeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Like";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_like, allocator);
    }

    if (m_agentTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentTypes.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInLongAgentListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInLongAgentListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeInLongAgentListRequest::GetAgentId() const
{
    return m_agentId;
}

void DescribeInLongAgentListRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string DescribeInLongAgentListRequest::GetAgentName() const
{
    return m_agentName;
}

void DescribeInLongAgentListRequest::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

uint64_t DescribeInLongAgentListRequest::GetAgentType() const
{
    return m_agentType;
}

void DescribeInLongAgentListRequest::SetAgentType(const uint64_t& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string DescribeInLongAgentListRequest::GetStatus() const
{
    return m_status;
}

void DescribeInLongAgentListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeInLongAgentListRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeInLongAgentListRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

uint64_t DescribeInLongAgentListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeInLongAgentListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t DescribeInLongAgentListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeInLongAgentListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeInLongAgentListRequest::GetLike() const
{
    return m_like;
}

void DescribeInLongAgentListRequest::SetLike(const uint64_t& _like)
{
    m_like = _like;
    m_likeHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::LikeHasBeenSet() const
{
    return m_likeHasBeenSet;
}

string DescribeInLongAgentListRequest::GetAgentTypes() const
{
    return m_agentTypes;
}

void DescribeInLongAgentListRequest::SetAgentTypes(const string& _agentTypes)
{
    m_agentTypes = _agentTypes;
    m_agentTypesHasBeenSet = true;
}

bool DescribeInLongAgentListRequest::AgentTypesHasBeenSet() const
{
    return m_agentTypesHasBeenSet;
}


