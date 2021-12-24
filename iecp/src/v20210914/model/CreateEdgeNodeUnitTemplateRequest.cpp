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

#include <tencentcloud/iecp/v20210914/model/CreateEdgeNodeUnitTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateEdgeNodeUnitTemplateRequest::CreateEdgeNodeUnitTemplateRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateEdgeNodeUnitTemplateRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateEdgeNodeUnitTemplateRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void CreateEdgeNodeUnitTemplateRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool CreateEdgeNodeUnitTemplateRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string CreateEdgeNodeUnitTemplateRequest::GetName() const
{
    return m_name;
}

void CreateEdgeNodeUnitTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateEdgeNodeUnitTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateEdgeNodeUnitTemplateRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateEdgeNodeUnitTemplateRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateEdgeNodeUnitTemplateRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

vector<string> CreateEdgeNodeUnitTemplateRequest::GetNodes() const
{
    return m_nodes;
}

void CreateEdgeNodeUnitTemplateRequest::SetNodes(const vector<string>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool CreateEdgeNodeUnitTemplateRequest::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

string CreateEdgeNodeUnitTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateEdgeNodeUnitTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateEdgeNodeUnitTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


