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

#include <tencentcloud/iecp/v20210914/model/CreateUpdateNodeUnitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateUpdateNodeUnitRequest::CreateUpdateNodeUnitRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nodeGroupNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nodeUnitNameHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_nodeUnitTemplateIDsHasBeenSet(false)
{
}

string CreateUpdateNodeUnitRequest::ToJsonString() const
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

    if (m_nodeGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeUnitName.c_str(), allocator).Move(), allocator);
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

    if (m_nodeUnitTemplateIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUnitTemplateIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeUnitTemplateIDs.begin(); itr != m_nodeUnitTemplateIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateUpdateNodeUnitRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void CreateUpdateNodeUnitRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string CreateUpdateNodeUnitRequest::GetNodeGroupName() const
{
    return m_nodeGroupName;
}

void CreateUpdateNodeUnitRequest::SetNodeGroupName(const string& _nodeGroupName)
{
    m_nodeGroupName = _nodeGroupName;
    m_nodeGroupNameHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::NodeGroupNameHasBeenSet() const
{
    return m_nodeGroupNameHasBeenSet;
}

string CreateUpdateNodeUnitRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateUpdateNodeUnitRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateUpdateNodeUnitRequest::GetNodeUnitName() const
{
    return m_nodeUnitName;
}

void CreateUpdateNodeUnitRequest::SetNodeUnitName(const string& _nodeUnitName)
{
    m_nodeUnitName = _nodeUnitName;
    m_nodeUnitNameHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::NodeUnitNameHasBeenSet() const
{
    return m_nodeUnitNameHasBeenSet;
}

vector<string> CreateUpdateNodeUnitRequest::GetNodes() const
{
    return m_nodes;
}

void CreateUpdateNodeUnitRequest::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

vector<uint64_t> CreateUpdateNodeUnitRequest::GetNodeUnitTemplateIDs() const
{
    return m_nodeUnitTemplateIDs;
}

void CreateUpdateNodeUnitRequest::SetNodeUnitTemplateIDs(const vector<uint64_t>& _nodeUnitTemplateIDs)
{
    m_nodeUnitTemplateIDs = _nodeUnitTemplateIDs;
    m_nodeUnitTemplateIDsHasBeenSet = true;
}

bool CreateUpdateNodeUnitRequest::NodeUnitTemplateIDsHasBeenSet() const
{
    return m_nodeUnitTemplateIDsHasBeenSet;
}


