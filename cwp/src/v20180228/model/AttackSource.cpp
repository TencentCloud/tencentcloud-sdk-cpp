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

#include <tencentcloud/cwp/v20180228/model/AttackSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AttackSource::AttackSource() :
    m_nodesHasBeenSet(false),
    m_edgesHasBeenSet(false),
    m_eventInfoParamHasBeenSet(false)
{
}

CoreInternalOutcome AttackSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttackSource.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttackSourceNode item;
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
            return CoreInternalOutcome(Core::Error("response `AttackSource.Edges` is not array type"));

        const rapidjson::Value &tmpValue = value["Edges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttackSourceEdge item;
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

    if (value.HasMember("EventInfoParam") && !value["EventInfoParam"].IsNull())
    {
        if (!value["EventInfoParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSource.EventInfoParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventInfoParam = string(value["EventInfoParam"].GetString());
        m_eventInfoParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_eventInfoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventInfoParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventInfoParam.c_str(), allocator).Move(), allocator);
    }

}


vector<AttackSourceNode> AttackSource::GetNodes() const
{
    return m_nodes;
}

void AttackSource::SetNodes(const vector<AttackSourceNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool AttackSource::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<AttackSourceEdge> AttackSource::GetEdges() const
{
    return m_edges;
}

void AttackSource::SetEdges(const vector<AttackSourceEdge>& _edges)
{
    m_edges = _edges;
    m_edgesHasBeenSet = true;
}

bool AttackSource::EdgesHasBeenSet() const
{
    return m_edgesHasBeenSet;
}

string AttackSource::GetEventInfoParam() const
{
    return m_eventInfoParam;
}

void AttackSource::SetEventInfoParam(const string& _eventInfoParam)
{
    m_eventInfoParam = _eventInfoParam;
    m_eventInfoParamHasBeenSet = true;
}

bool AttackSource::EventInfoParamHasBeenSet() const
{
    return m_eventInfoParamHasBeenSet;
}

