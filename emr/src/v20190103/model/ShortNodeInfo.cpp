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

#include <tencentcloud/emr/v20190103/model/ShortNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ShortNodeInfo::ShortNodeInfo() :
    m_nodeTypeHasBeenSet(false),
    m_nodeSizeHasBeenSet(false)
{
}

CoreInternalOutcome ShortNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShortNodeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeSize") && !value["NodeSize"].IsNull())
    {
        if (!value["NodeSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShortNodeInfo.NodeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSize = value["NodeSize"].GetUint64();
        m_nodeSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShortNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeSize, allocator);
    }

}


string ShortNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void ShortNodeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ShortNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t ShortNodeInfo::GetNodeSize() const
{
    return m_nodeSize;
}

void ShortNodeInfo::SetNodeSize(const uint64_t& _nodeSize)
{
    m_nodeSize = _nodeSize;
    m_nodeSizeHasBeenSet = true;
}

bool ShortNodeInfo::NodeSizeHasBeenSet() const
{
    return m_nodeSizeHasBeenSet;
}

