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

#include <tencentcloud/redis/v20180412/model/ReplicaGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

ReplicaGroup::ReplicaGroup() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_redisNodesHasBeenSet(false)
{
}

CoreInternalOutcome ReplicaGroup::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ReplicaGroup.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReplicaGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReplicaGroup.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReplicaGroup.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("RedisNodes") && !value["RedisNodes"].IsNull())
    {
        if (!value["RedisNodes"].IsArray())
            return CoreInternalOutcome(Error("response `ReplicaGroup.RedisNodes` is not array type"));

        const Value &tmpValue = value["RedisNodes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RedisNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_redisNodes.push_back(item);
        }
        m_redisNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicaGroup::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_redisNodesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedisNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redisNodes.begin(); itr != m_redisNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ReplicaGroup::GetGroupId() const
{
    return m_groupId;
}

void ReplicaGroup::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ReplicaGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ReplicaGroup::GetGroupName() const
{
    return m_groupName;
}

void ReplicaGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ReplicaGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ReplicaGroup::GetZoneId() const
{
    return m_zoneId;
}

void ReplicaGroup::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ReplicaGroup::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ReplicaGroup::GetRole() const
{
    return m_role;
}

void ReplicaGroup::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ReplicaGroup::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

vector<RedisNode> ReplicaGroup::GetRedisNodes() const
{
    return m_redisNodes;
}

void ReplicaGroup::SetRedisNodes(const vector<RedisNode>& _redisNodes)
{
    m_redisNodes = _redisNodes;
    m_redisNodesHasBeenSet = true;
}

bool ReplicaGroup::RedisNodesHasBeenSet() const
{
    return m_redisNodesHasBeenSet;
}

