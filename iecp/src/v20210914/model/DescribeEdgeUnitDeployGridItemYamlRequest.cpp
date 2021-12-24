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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitDeployGridItemYamlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitDeployGridItemYamlRequest::DescribeEdgeUnitDeployGridItemYamlRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_workloadKindHasBeenSet(false),
    m_gridItemNameHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

string DescribeEdgeUnitDeployGridItemYamlRequest::ToJsonString() const
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

    if (m_workloadKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadKind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workloadKind.c_str(), allocator).Move(), allocator);
    }

    if (m_gridItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GridItemName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gridItemName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeUnitDeployGridItemYamlRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeUnitDeployGridItemYamlRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeUnitDeployGridItemYamlRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeEdgeUnitDeployGridItemYamlRequest::GetWorkloadKind() const
{
    return m_workloadKind;
}

void DescribeEdgeUnitDeployGridItemYamlRequest::SetWorkloadKind(const string& _workloadKind)
{
    m_workloadKind = _workloadKind;
    m_workloadKindHasBeenSet = true;
}

bool DescribeEdgeUnitDeployGridItemYamlRequest::WorkloadKindHasBeenSet() const
{
    return m_workloadKindHasBeenSet;
}

string DescribeEdgeUnitDeployGridItemYamlRequest::GetGridItemName() const
{
    return m_gridItemName;
}

void DescribeEdgeUnitDeployGridItemYamlRequest::SetGridItemName(const string& _gridItemName)
{
    m_gridItemName = _gridItemName;
    m_gridItemNameHasBeenSet = true;
}

bool DescribeEdgeUnitDeployGridItemYamlRequest::GridItemNameHasBeenSet() const
{
    return m_gridItemNameHasBeenSet;
}

string DescribeEdgeUnitDeployGridItemYamlRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeUnitDeployGridItemYamlRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeUnitDeployGridItemYamlRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}


