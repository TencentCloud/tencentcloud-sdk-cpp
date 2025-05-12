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

#include <tencentcloud/wedata/v20210820/model/DescribeTasksForCodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTasksForCodeTemplateRequest::DescribeTasksForCodeTemplateRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_workflowIdListHasBeenSet(false),
    m_ownerIdListHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_orderConditionHasBeenSet(false)
{
}

string DescribeTasksForCodeTemplateRequest::ToJsonString() const
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIdList.begin(); itr != m_workflowIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerIdList.begin(); itr != m_ownerIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderCondition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTasksForCodeTemplateRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTasksForCodeTemplateRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeTasksForCodeTemplateRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeTasksForCodeTemplateRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeTasksForCodeTemplateRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTasksForCodeTemplateRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeTasksForCodeTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeTasksForCodeTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> DescribeTasksForCodeTemplateRequest::GetWorkflowIdList() const
{
    return m_workflowIdList;
}

void DescribeTasksForCodeTemplateRequest::SetWorkflowIdList(const vector<string>& _workflowIdList)
{
    m_workflowIdList = _workflowIdList;
    m_workflowIdListHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::WorkflowIdListHasBeenSet() const
{
    return m_workflowIdListHasBeenSet;
}

vector<string> DescribeTasksForCodeTemplateRequest::GetOwnerIdList() const
{
    return m_ownerIdList;
}

void DescribeTasksForCodeTemplateRequest::SetOwnerIdList(const vector<string>& _ownerIdList)
{
    m_ownerIdList = _ownerIdList;
    m_ownerIdListHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::OwnerIdListHasBeenSet() const
{
    return m_ownerIdListHasBeenSet;
}

string DescribeTasksForCodeTemplateRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeTasksForCodeTemplateRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

OrderCondition DescribeTasksForCodeTemplateRequest::GetOrderCondition() const
{
    return m_orderCondition;
}

void DescribeTasksForCodeTemplateRequest::SetOrderCondition(const OrderCondition& _orderCondition)
{
    m_orderCondition = _orderCondition;
    m_orderConditionHasBeenSet = true;
}

bool DescribeTasksForCodeTemplateRequest::OrderConditionHasBeenSet() const
{
    return m_orderConditionHasBeenSet;
}


