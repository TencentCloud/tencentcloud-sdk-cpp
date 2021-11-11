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

#include <tencentcloud/tcm/v20210413/model/DeployConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

DeployConfig::DeployConfig() :
    m_nodeSelectTypeHasBeenSet(false),
    m_nodesHasBeenSet(false)
{
}

CoreInternalOutcome DeployConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeSelectType") && !value["NodeSelectType"].IsNull())
    {
        if (!value["NodeSelectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployConfig.NodeSelectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSelectType = string(value["NodeSelectType"].GetString());
        m_nodeSelectTypeHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeployConfig.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodes.push_back((*itr).GetString());
        }
        m_nodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeSelectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSelectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSelectType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DeployConfig::GetNodeSelectType() const
{
    return m_nodeSelectType;
}

void DeployConfig::SetNodeSelectType(const string& _nodeSelectType)
{
    m_nodeSelectType = _nodeSelectType;
    m_nodeSelectTypeHasBeenSet = true;
}

bool DeployConfig::NodeSelectTypeHasBeenSet() const
{
    return m_nodeSelectTypeHasBeenSet;
}

vector<string> DeployConfig::GetNodes() const
{
    return m_nodes;
}

void DeployConfig::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool DeployConfig::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

