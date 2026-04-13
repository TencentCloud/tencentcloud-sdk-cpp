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

#include <tencentcloud/trocket/v20230308/model/CreateMigrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

CreateMigrationTaskRequest::CreateMigrationTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

string CreateMigrationTaskRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
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


string CreateMigrationTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateMigrationTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateMigrationTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateMigrationTaskRequest::GetType() const
{
    return m_type;
}

void CreateMigrationTaskRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateMigrationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<TopicItem> CreateMigrationTaskRequest::GetTopics() const
{
    return m_topics;
}

void CreateMigrationTaskRequest::SetTopics(const vector<TopicItem>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool CreateMigrationTaskRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

vector<ConsumeGroupItem> CreateMigrationTaskRequest::GetGroups() const
{
    return m_groups;
}

void CreateMigrationTaskRequest::SetGroups(const vector<ConsumeGroupItem>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool CreateMigrationTaskRequest::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

vector<RoleItem> CreateMigrationTaskRequest::GetRoles() const
{
    return m_roles;
}

void CreateMigrationTaskRequest::SetRoles(const vector<RoleItem>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool CreateMigrationTaskRequest::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}


