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

#include <tencentcloud/iecp/v20210914/model/ModifyNodeUnitTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyNodeUnitTemplateRequest::ModifyNodeUnitTemplateRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeUnitTemplateIDHasBeenSet(false),
    m_nodesHasBeenSet(false)
{
}

string ModifyNodeUnitTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_nodeUnitTemplateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitTemplateID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeUnitTemplateID, allocator);
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyNodeUnitTemplateRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyNodeUnitTemplateRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyNodeUnitTemplateRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t ModifyNodeUnitTemplateRequest::GetNodeUnitTemplateID() const
{
    return m_nodeUnitTemplateID;
}

void ModifyNodeUnitTemplateRequest::SetNodeUnitTemplateID(const uint64_t& _nodeUnitTemplateID)
{
    m_nodeUnitTemplateID = _nodeUnitTemplateID;
    m_nodeUnitTemplateIDHasBeenSet = true;
}

bool ModifyNodeUnitTemplateRequest::NodeUnitTemplateIDHasBeenSet() const
{
    return m_nodeUnitTemplateIDHasBeenSet;
}

vector<string> ModifyNodeUnitTemplateRequest::GetNodes() const
{
    return m_nodes;
}

void ModifyNodeUnitTemplateRequest::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool ModifyNodeUnitTemplateRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}


