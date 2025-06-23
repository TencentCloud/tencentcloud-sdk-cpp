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

#include <tencentcloud/wedata/v20210820/model/DescribeManualTriggerRecordPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeManualTriggerRecordPageRequest::DescribeManualTriggerRecordPageRequest() :
    m_projectIdHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_workflowKeywordHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_triggerStartTimeHasBeenSet(false),
    m_triggerEndTimeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeManualTriggerRecordPageRequest::ToJsonString() const
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

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerEndTime.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeManualTriggerRecordPageRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeManualTriggerRecordPageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeManualTriggerRecordPageRequest::GetTriggerName() const
{
    return m_triggerName;
}

void DescribeManualTriggerRecordPageRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string DescribeManualTriggerRecordPageRequest::GetWorkflowKeyword() const
{
    return m_workflowKeyword;
}

void DescribeManualTriggerRecordPageRequest::SetWorkflowKeyword(const string& _workflowKeyword)
{
    m_workflowKeyword = _workflowKeyword;
    m_workflowKeywordHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::WorkflowKeywordHasBeenSet() const
{
    return m_workflowKeywordHasBeenSet;
}

string DescribeManualTriggerRecordPageRequest::GetCreator() const
{
    return m_creator;
}

void DescribeManualTriggerRecordPageRequest::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DescribeManualTriggerRecordPageRequest::GetTriggerStartTime() const
{
    return m_triggerStartTime;
}

void DescribeManualTriggerRecordPageRequest::SetTriggerStartTime(const string& _triggerStartTime)
{
    m_triggerStartTime = _triggerStartTime;
    m_triggerStartTimeHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::TriggerStartTimeHasBeenSet() const
{
    return m_triggerStartTimeHasBeenSet;
}

string DescribeManualTriggerRecordPageRequest::GetTriggerEndTime() const
{
    return m_triggerEndTime;
}

void DescribeManualTriggerRecordPageRequest::SetTriggerEndTime(const string& _triggerEndTime)
{
    m_triggerEndTime = _triggerEndTime;
    m_triggerEndTimeHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::TriggerEndTimeHasBeenSet() const
{
    return m_triggerEndTimeHasBeenSet;
}

uint64_t DescribeManualTriggerRecordPageRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeManualTriggerRecordPageRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeManualTriggerRecordPageRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeManualTriggerRecordPageRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeManualTriggerRecordPageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


