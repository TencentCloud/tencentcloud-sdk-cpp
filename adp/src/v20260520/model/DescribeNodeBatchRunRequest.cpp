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

#include <tencentcloud/adp/v20260520/model/DescribeNodeBatchRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeNodeBatchRunRequest::DescribeNodeBatchRunRequest() :
    m_appIdHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_subWorkflowNodePathHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false)
{
}

string DescribeNodeBatchRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_index, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subWorkflowNodePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubWorkflowNodePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subWorkflowNodePath.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNodeBatchRunRequest::GetAppId() const
{
    return m_appId;
}

void DescribeNodeBatchRunRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeNodeBatchRunRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeNodeBatchRunRequest::GetIndex() const
{
    return m_index;
}

void DescribeNodeBatchRunRequest::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool DescribeNodeBatchRunRequest::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string DescribeNodeBatchRunRequest::GetNodeId() const
{
    return m_nodeId;
}

void DescribeNodeBatchRunRequest::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool DescribeNodeBatchRunRequest::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DescribeNodeBatchRunRequest::GetSubWorkflowNodePath() const
{
    return m_subWorkflowNodePath;
}

void DescribeNodeBatchRunRequest::SetSubWorkflowNodePath(const string& _subWorkflowNodePath)
{
    m_subWorkflowNodePath = _subWorkflowNodePath;
    m_subWorkflowNodePathHasBeenSet = true;
}

bool DescribeNodeBatchRunRequest::SubWorkflowNodePathHasBeenSet() const
{
    return m_subWorkflowNodePathHasBeenSet;
}

string DescribeNodeBatchRunRequest::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void DescribeNodeBatchRunRequest::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool DescribeNodeBatchRunRequest::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}


