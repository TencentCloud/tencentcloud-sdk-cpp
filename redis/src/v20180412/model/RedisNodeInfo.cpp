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

#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace rapidjson;
using namespace std;

RedisNodeInfo::RedisNodeInfo() :
    m_nodeTypeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

CoreInternalOutcome RedisNodeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RedisNodeInfo.NodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = value["NodeType"].GetInt64();
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RedisNodeInfo.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RedisNodeInfo.NodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = value["NodeId"].GetInt64();
        m_nodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedisNodeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeType, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeId, allocator);
    }

}


int64_t RedisNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void RedisNodeInfo::SetNodeType(const int64_t& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RedisNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t RedisNodeInfo::GetZoneId() const
{
    return m_zoneId;
}

void RedisNodeInfo::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool RedisNodeInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t RedisNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void RedisNodeInfo::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RedisNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

