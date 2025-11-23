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

#include <tencentcloud/lke/v20231130/model/DescribeWorkflowRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeWorkflowRunRequest::DescribeWorkflowRunRequest() :
    m_appBizIdHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false),
    m_subWorkflowNodePathHasBeenSet(false),
    m_includeWorkflowGraphHasBeenSet(false)
{
}

string DescribeWorkflowRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_subWorkflowNodePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubWorkflowNodePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subWorkflowNodePath.c_str(), allocator).Move(), allocator);
    }

    if (m_includeWorkflowGraphHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeWorkflowGraph";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeWorkflowGraph, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWorkflowRunRequest::GetAppBizId() const
{
    return m_appBizId;
}

void DescribeWorkflowRunRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool DescribeWorkflowRunRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string DescribeWorkflowRunRequest::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void DescribeWorkflowRunRequest::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool DescribeWorkflowRunRequest::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

string DescribeWorkflowRunRequest::GetSubWorkflowNodePath() const
{
    return m_subWorkflowNodePath;
}

void DescribeWorkflowRunRequest::SetSubWorkflowNodePath(const string& _subWorkflowNodePath)
{
    m_subWorkflowNodePath = _subWorkflowNodePath;
    m_subWorkflowNodePathHasBeenSet = true;
}

bool DescribeWorkflowRunRequest::SubWorkflowNodePathHasBeenSet() const
{
    return m_subWorkflowNodePathHasBeenSet;
}

bool DescribeWorkflowRunRequest::GetIncludeWorkflowGraph() const
{
    return m_includeWorkflowGraph;
}

void DescribeWorkflowRunRequest::SetIncludeWorkflowGraph(const bool& _includeWorkflowGraph)
{
    m_includeWorkflowGraph = _includeWorkflowGraph;
    m_includeWorkflowGraphHasBeenSet = true;
}

bool DescribeWorkflowRunRequest::IncludeWorkflowGraphHasBeenSet() const
{
    return m_includeWorkflowGraphHasBeenSet;
}


