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

#include <tencentcloud/cls/v20201016/model/DependencyTopology.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DependencyTopology::DependencyTopology() :
    m_nodesHasBeenSet(false),
    m_edgesHasBeenSet(false)
{
}

CoreInternalOutcome DependencyTopology::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DependencyTopology.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopologyNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("Edges") && !value["Edges"].IsNull())
    {
        if (!value["Edges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DependencyTopology.Edges` is not array type"));

        const rapidjson::Value &tmpValue = value["Edges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopologyEdge item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_edges.push_back(item);
        }
        m_edgesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyTopology::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_edgesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_edges.begin(); itr != m_edges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<TopologyNode> DependencyTopology::GetNodes() const
{
    return m_nodes;
}

void DependencyTopology::SetNodes(const vector<TopologyNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool DependencyTopology::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<TopologyEdge> DependencyTopology::GetEdges() const
{
    return m_edges;
}

void DependencyTopology::SetEdges(const vector<TopologyEdge>& _edges)
{
    m_edges = _edges;
    m_edgesHasBeenSet = true;
}

bool DependencyTopology::EdgesHasBeenSet() const
{
    return m_edgesHasBeenSet;
}

