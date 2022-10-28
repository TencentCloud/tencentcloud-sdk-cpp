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

#include <tencentcloud/mongodb/v20190725/model/DescribeDBInstanceNodePropertyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

DescribeDBInstanceNodePropertyRequest::DescribeDBInstanceNodePropertyRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeIdsHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_onlyHiddenHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_votesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string DescribeDBInstanceNodePropertyRequest::ToJsonString() const
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

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyHiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyHidden";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyHidden, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_votesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Votes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_votes, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string DescribeDBInstanceNodePropertyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBInstanceNodePropertyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeDBInstanceNodePropertyRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void DescribeDBInstanceNodePropertyRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}

vector<string> DescribeDBInstanceNodePropertyRequest::GetRoles() const
{
    return m_roles;
}

void DescribeDBInstanceNodePropertyRequest::SetRoles(const vector<string>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

bool DescribeDBInstanceNodePropertyRequest::GetOnlyHidden() const
{
    return m_onlyHidden;
}

void DescribeDBInstanceNodePropertyRequest::SetOnlyHidden(const bool& _onlyHidden)
{
    m_onlyHidden = _onlyHidden;
    m_onlyHiddenHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::OnlyHiddenHasBeenSet() const
{
    return m_onlyHiddenHasBeenSet;
}

int64_t DescribeDBInstanceNodePropertyRequest::GetPriority() const
{
    return m_priority;
}

void DescribeDBInstanceNodePropertyRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t DescribeDBInstanceNodePropertyRequest::GetVotes() const
{
    return m_votes;
}

void DescribeDBInstanceNodePropertyRequest::SetVotes(const int64_t& _votes)
{
    m_votes = _votes;
    m_votesHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::VotesHasBeenSet() const
{
    return m_votesHasBeenSet;
}

vector<NodeTag> DescribeDBInstanceNodePropertyRequest::GetTags() const
{
    return m_tags;
}

void DescribeDBInstanceNodePropertyRequest::SetTags(const vector<NodeTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeDBInstanceNodePropertyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


