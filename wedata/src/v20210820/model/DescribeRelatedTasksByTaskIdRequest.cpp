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

#include <tencentcloud/wedata/v20210820/model/DescribeRelatedTasksByTaskIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRelatedTasksByTaskIdRequest::DescribeRelatedTasksByTaskIdRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_dependencyDirectionHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_cycleTypeListHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_ownerNameListHasBeenSet(false)
{
}

string DescribeRelatedTasksByTaskIdRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
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

    if (m_dependencyDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependencyDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dependencyDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleTypeList.begin(); itr != m_cycleTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerNameList.begin(); itr != m_ownerNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRelatedTasksByTaskIdRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRelatedTasksByTaskIdRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeRelatedTasksByTaskIdRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeRelatedTasksByTaskIdRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t DescribeRelatedTasksByTaskIdRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeRelatedTasksByTaskIdRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeRelatedTasksByTaskIdRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRelatedTasksByTaskIdRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeRelatedTasksByTaskIdRequest::GetDependencyDirection() const
{
    return m_dependencyDirection;
}

void DescribeRelatedTasksByTaskIdRequest::SetDependencyDirection(const string& _dependencyDirection)
{
    m_dependencyDirection = _dependencyDirection;
    m_dependencyDirectionHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::DependencyDirectionHasBeenSet() const
{
    return m_dependencyDirectionHasBeenSet;
}

string DescribeRelatedTasksByTaskIdRequest::GetEnvironment() const
{
    return m_environment;
}

void DescribeRelatedTasksByTaskIdRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

string DescribeRelatedTasksByTaskIdRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeRelatedTasksByTaskIdRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

vector<string> DescribeRelatedTasksByTaskIdRequest::GetCycleTypeList() const
{
    return m_cycleTypeList;
}

void DescribeRelatedTasksByTaskIdRequest::SetCycleTypeList(const vector<string>& _cycleTypeList)
{
    m_cycleTypeList = _cycleTypeList;
    m_cycleTypeListHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::CycleTypeListHasBeenSet() const
{
    return m_cycleTypeListHasBeenSet;
}

vector<string> DescribeRelatedTasksByTaskIdRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeRelatedTasksByTaskIdRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

vector<string> DescribeRelatedTasksByTaskIdRequest::GetOwnerNameList() const
{
    return m_ownerNameList;
}

void DescribeRelatedTasksByTaskIdRequest::SetOwnerNameList(const vector<string>& _ownerNameList)
{
    m_ownerNameList = _ownerNameList;
    m_ownerNameListHasBeenSet = true;
}

bool DescribeRelatedTasksByTaskIdRequest::OwnerNameListHasBeenSet() const
{
    return m_ownerNameListHasBeenSet;
}


