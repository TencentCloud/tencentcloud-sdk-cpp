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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQMigrationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQMigrationTaskRequest::CreateRocketMQMigrationTaskRequest() :
    m_clusterIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string CreateRocketMQMigrationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRocketMQMigrationTaskRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateRocketMQMigrationTaskRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CreateRocketMQMigrationTaskRequest::GetType() const
{
    return m_type;
}

void CreateRocketMQMigrationTaskRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<RocketMQTopicConfig> CreateRocketMQMigrationTaskRequest::GetTopics() const
{
    return m_topics;
}

void CreateRocketMQMigrationTaskRequest::SetTopics(const vector<RocketMQTopicConfig>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

vector<RocketMQGroupConfig> CreateRocketMQMigrationTaskRequest::GetGroups() const
{
    return m_groups;
}

void CreateRocketMQMigrationTaskRequest::SetGroups(const vector<RocketMQGroupConfig>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

vector<RocketMQRoleConfig> CreateRocketMQMigrationTaskRequest::GetRoles() const
{
    return m_roles;
}

void CreateRocketMQMigrationTaskRequest::SetRoles(const vector<RocketMQRoleConfig>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

string CreateRocketMQMigrationTaskRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateRocketMQMigrationTaskRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateRocketMQMigrationTaskRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


