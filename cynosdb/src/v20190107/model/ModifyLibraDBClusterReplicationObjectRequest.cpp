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

#include <tencentcloud/cynosdb/v20190107/model/ModifyLibraDBClusterReplicationObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyLibraDBClusterReplicationObjectRequest::ModifyLibraDBClusterReplicationObjectRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_forceDefaultMapRuleHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_autoMapRulesHasBeenSet(false),
    m_refreshMappingHasBeenSet(false)
{
}

string ModifyLibraDBClusterReplicationObjectRequest::ToJsonString() const
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceDefaultMapRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceDefaultMapRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forceDefaultMapRule.c_str(), allocator).Move(), allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_objects.begin(); itr != m_objects.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_autoMapRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMapRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_autoMapRules.begin(); itr != m_autoMapRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_refreshMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshMapping";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refreshMapping, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLibraDBClusterReplicationObjectRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyLibraDBClusterReplicationObjectRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyLibraDBClusterReplicationObjectRequest::GetForceDefaultMapRule() const
{
    return m_forceDefaultMapRule;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetForceDefaultMapRule(const string& _forceDefaultMapRule)
{
    m_forceDefaultMapRule = _forceDefaultMapRule;
    m_forceDefaultMapRuleHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::ForceDefaultMapRuleHasBeenSet() const
{
    return m_forceDefaultMapRuleHasBeenSet;
}

vector<ReplicationObject> ModifyLibraDBClusterReplicationObjectRequest::GetObjects() const
{
    return m_objects;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetObjects(const vector<ReplicationObject>& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

vector<AutoMapRule> ModifyLibraDBClusterReplicationObjectRequest::GetAutoMapRules() const
{
    return m_autoMapRules;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetAutoMapRules(const vector<AutoMapRule>& _autoMapRules)
{
    m_autoMapRules = _autoMapRules;
    m_autoMapRulesHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::AutoMapRulesHasBeenSet() const
{
    return m_autoMapRulesHasBeenSet;
}

bool ModifyLibraDBClusterReplicationObjectRequest::GetRefreshMapping() const
{
    return m_refreshMapping;
}

void ModifyLibraDBClusterReplicationObjectRequest::SetRefreshMapping(const bool& _refreshMapping)
{
    m_refreshMapping = _refreshMapping;
    m_refreshMappingHasBeenSet = true;
}

bool ModifyLibraDBClusterReplicationObjectRequest::RefreshMappingHasBeenSet() const
{
    return m_refreshMappingHasBeenSet;
}


