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

#include <tencentcloud/wedata/v20210820/model/DescribeWorkflowForProjectCloneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeWorkflowForProjectCloneRequest::DescribeWorkflowForProjectCloneRequest() :
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_filterWorkflowNameHasBeenSet(false)
{
}

string DescribeWorkflowForProjectCloneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_filterWorkflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterWorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterWorkflowName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeWorkflowForProjectCloneRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeWorkflowForProjectCloneRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeWorkflowForProjectCloneRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

uint64_t DescribeWorkflowForProjectCloneRequest::GetPage() const
{
    return m_page;
}

void DescribeWorkflowForProjectCloneRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeWorkflowForProjectCloneRequest::GetSize() const
{
    return m_size;
}

void DescribeWorkflowForProjectCloneRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetOrder() const
{
    return m_order;
}

void DescribeWorkflowForProjectCloneRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetOwnerName() const
{
    return m_ownerName;
}

void DescribeWorkflowForProjectCloneRequest::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeWorkflowForProjectCloneRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeWorkflowForProjectCloneRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeWorkflowForProjectCloneRequest::GetFilterWorkflowName() const
{
    return m_filterWorkflowName;
}

void DescribeWorkflowForProjectCloneRequest::SetFilterWorkflowName(const string& _filterWorkflowName)
{
    m_filterWorkflowName = _filterWorkflowName;
    m_filterWorkflowNameHasBeenSet = true;
}

bool DescribeWorkflowForProjectCloneRequest::FilterWorkflowNameHasBeenSet() const
{
    return m_filterWorkflowNameHasBeenSet;
}


