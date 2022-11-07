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

#include <tencentcloud/wedata/v20210820/model/InstanceNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceNodeInfo::InstanceNodeInfo() :
    m_nodeTypeHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

}


string InstanceNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void InstanceNodeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool InstanceNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string InstanceNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void InstanceNodeInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InstanceNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string InstanceNodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void InstanceNodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool InstanceNodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

