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

#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowCanvasOpLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeWorkflowCanvasOpLogsRequest::DescribeWorkflowCanvasOpLogsRequest() :
    m_filterHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeWorkflowCanvasOpLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageSize.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


DescribeWorkflowCanvasOplogRequestFilter DescribeWorkflowCanvasOpLogsRequest::GetFilter() const
{
    return m_filter;
}

void DescribeWorkflowCanvasOpLogsRequest::SetFilter(const DescribeWorkflowCanvasOplogRequestFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeWorkflowCanvasOpLogsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeWorkflowCanvasOpLogsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeWorkflowCanvasOpLogsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeWorkflowCanvasOpLogsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeWorkflowCanvasOpLogsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeWorkflowCanvasOpLogsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeWorkflowCanvasOpLogsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeWorkflowCanvasOpLogsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeWorkflowCanvasOpLogsRequest::SetPageNumber(const string& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeWorkflowCanvasOpLogsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeWorkflowCanvasOpLogsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeWorkflowCanvasOpLogsRequest::SetPageSize(const string& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeWorkflowCanvasOpLogsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


