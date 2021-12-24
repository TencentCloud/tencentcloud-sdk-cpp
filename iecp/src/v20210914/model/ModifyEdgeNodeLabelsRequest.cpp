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

#include <tencentcloud/iecp/v20210914/model/ModifyEdgeNodeLabelsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyEdgeNodeLabelsRequest::ModifyEdgeNodeLabelsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

string ModifyEdgeNodeLabelsRequest::ToJsonString() const
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

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEdgeNodeLabelsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyEdgeNodeLabelsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyEdgeNodeLabelsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t ModifyEdgeNodeLabelsRequest::GetNodeId() const
{
    return m_nodeId;
}

void ModifyEdgeNodeLabelsRequest::SetNodeId(const uint64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ModifyEdgeNodeLabelsRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

vector<KeyValueObj> ModifyEdgeNodeLabelsRequest::GetLabels() const
{
    return m_labels;
}

void ModifyEdgeNodeLabelsRequest::SetLabels(const vector<KeyValueObj>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ModifyEdgeNodeLabelsRequest::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}


