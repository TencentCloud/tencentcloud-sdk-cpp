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

#include <tencentcloud/cdwpg/v20201230/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_nodeIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIpHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = value["NodeId"].GetInt64();
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceNode::GetNodeId() const
{
    return m_nodeId;
}

void InstanceNode::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InstanceNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string InstanceNode::GetNodeType() const
{
    return m_nodeType;
}

void InstanceNode::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool InstanceNode::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string InstanceNode::GetNodeIp() const
{
    return m_nodeIp;
}

void InstanceNode::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool InstanceNode::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

