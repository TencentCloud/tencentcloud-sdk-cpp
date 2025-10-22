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

#include <tencentcloud/wedata/v20250806/model/ListTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListTasksRequest::ListTasksRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

string ListTasksRequest::ToJsonString() const
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_submit, allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modifyTime.begin(); itr != m_modifyTime.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_createTime.begin(); itr != m_createTime.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void ListTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ListTasksRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListTasksRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListTasksRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListTasksRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListTasksRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListTasksRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListTasksRequest::GetTaskName() const
{
    return m_taskName;
}

void ListTasksRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ListTasksRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ListTasksRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ListTasksRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ListTasksRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ListTasksRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void ListTasksRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ListTasksRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

int64_t ListTasksRequest::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void ListTasksRequest::SetTaskTypeId(const int64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool ListTasksRequest::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string ListTasksRequest::GetStatus() const
{
    return m_status;
}

void ListTasksRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListTasksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool ListTasksRequest::GetSubmit() const
{
    return m_submit;
}

void ListTasksRequest::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool ListTasksRequest::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

string ListTasksRequest::GetBundleId() const
{
    return m_bundleId;
}

void ListTasksRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ListTasksRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string ListTasksRequest::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ListTasksRequest::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ListTasksRequest::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

vector<string> ListTasksRequest::GetModifyTime() const
{
    return m_modifyTime;
}

void ListTasksRequest::SetModifyTime(const vector<string>& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ListTasksRequest::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> ListTasksRequest::GetCreateTime() const
{
    return m_createTime;
}

void ListTasksRequest::SetCreateTime(const vector<string>& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListTasksRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


