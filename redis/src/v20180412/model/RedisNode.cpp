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

#include <tencentcloud/redis/v20180412/model/RedisNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

RedisNode::RedisNode() :
    m_keysHasBeenSet(false),
    m_slotHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_roleHasBeenSet(false)
{
}

CoreInternalOutcome RedisNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RedisNode.Keys` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_keys = value["Keys"].GetInt64();
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Slot") && !value["Slot"].IsNull())
    {
        if (!value["Slot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisNode.Slot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slot = string(value["Slot"].GetString());
        m_slotHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisNode.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedisNode.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keys, allocator);
    }

    if (m_slotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Slot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slot.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

}


int64_t RedisNode::GetKeys() const
{
    return m_keys;
}

void RedisNode::SetKeys(const int64_t& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool RedisNode::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string RedisNode::GetSlot() const
{
    return m_slot;
}

void RedisNode::SetSlot(const string& _slot)
{
    m_slot = _slot;
    m_slotHasBeenSet = true;
}

bool RedisNode::SlotHasBeenSet() const
{
    return m_slotHasBeenSet;
}

string RedisNode::GetNodeId() const
{
    return m_nodeId;
}

void RedisNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RedisNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RedisNode::GetStatus() const
{
    return m_status;
}

void RedisNode::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RedisNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RedisNode::GetRole() const
{
    return m_role;
}

void RedisNode::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool RedisNode::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

