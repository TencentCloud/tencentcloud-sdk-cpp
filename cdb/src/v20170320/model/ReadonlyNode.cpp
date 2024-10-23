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

#include <tencentcloud/cdb/v20170320/model/ReadonlyNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ReadonlyNode::ReadonlyNode() :
    m_isRandomZoneHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

CoreInternalOutcome ReadonlyNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsRandomZone") && !value["IsRandomZone"].IsNull())
    {
        if (!value["IsRandomZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadonlyNode.IsRandomZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isRandomZone = string(value["IsRandomZone"].GetString());
        m_isRandomZoneHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadonlyNode.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadonlyNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReadonlyNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isRandomZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRandomZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isRandomZone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

}


string ReadonlyNode::GetIsRandomZone() const
{
    return m_isRandomZone;
}

void ReadonlyNode::SetIsRandomZone(const string& _isRandomZone)
{
    m_isRandomZone = _isRandomZone;
    m_isRandomZoneHasBeenSet = true;
}

bool ReadonlyNode::IsRandomZoneHasBeenSet() const
{
    return m_isRandomZoneHasBeenSet;
}

string ReadonlyNode::GetZone() const
{
    return m_zone;
}

void ReadonlyNode::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReadonlyNode::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ReadonlyNode::GetNodeId() const
{
    return m_nodeId;
}

void ReadonlyNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ReadonlyNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

