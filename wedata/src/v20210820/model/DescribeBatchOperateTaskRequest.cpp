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

#include <tencentcloud/wedata/v20210820/model/DescribeBatchOperateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeBatchOperateTaskRequest::DescribeBatchOperateTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_ownerNameListHasBeenSet(false),
    m_workflowIdListHasBeenSet(false),
    m_taskNameFilterHasBeenSet(false),
    m_taskTypeListHasBeenSet(false),
    m_fordIdListHasBeenSet(false),
    m_taskIdFilterHasBeenSet(false),
    m_ownerNameFilterHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_dataEngineListHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_datasourceIdListHasBeenSet(false),
    m_datasourceTypeListHasBeenSet(false),
    m_cycleUnitListHasBeenSet(false),
    m_canSubmitHasBeenSet(false)
{
}

string DescribeBatchOperateTaskRequest::ToJsonString() const
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

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_page.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
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

    if (m_taskNameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskNameFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeList.begin(); itr != m_taskTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fordIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FordIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fordIdList.begin(); itr != m_fordIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskIdFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskIdFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerNameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerNameFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_sortItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortItem.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataEngineList.begin(); itr != m_dataEngineList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceIdList.begin(); itr != m_datasourceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datasourceTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceTypeList.begin(); itr != m_datasourceTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cycleUnitListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnitList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleUnitList.begin(); itr != m_cycleUnitList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_canSubmitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSubmit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_canSubmit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBatchOperateTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeBatchOperateTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetPage() const
{
    return m_page;
}

void DescribeBatchOperateTaskRequest::SetPage(const string& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetSize() const
{
    return m_size;
}

void DescribeBatchOperateTaskRequest::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeBatchOperateTaskRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetOwnerNameList() const
{
    return m_ownerNameList;
}

void DescribeBatchOperateTaskRequest::SetOwnerNameList(const vector<string>& _ownerNameList)
{
    m_ownerNameList = _ownerNameList;
    m_ownerNameListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::OwnerNameListHasBeenSet() const
{
    return m_ownerNameListHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetWorkflowIdList() const
{
    return m_workflowIdList;
}

void DescribeBatchOperateTaskRequest::SetWorkflowIdList(const vector<string>& _workflowIdList)
{
    m_workflowIdList = _workflowIdList;
    m_workflowIdListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::WorkflowIdListHasBeenSet() const
{
    return m_workflowIdListHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetTaskNameFilter() const
{
    return m_taskNameFilter;
}

void DescribeBatchOperateTaskRequest::SetTaskNameFilter(const string& _taskNameFilter)
{
    m_taskNameFilter = _taskNameFilter;
    m_taskNameFilterHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::TaskNameFilterHasBeenSet() const
{
    return m_taskNameFilterHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetTaskTypeList() const
{
    return m_taskTypeList;
}

void DescribeBatchOperateTaskRequest::SetTaskTypeList(const vector<string>& _taskTypeList)
{
    m_taskTypeList = _taskTypeList;
    m_taskTypeListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::TaskTypeListHasBeenSet() const
{
    return m_taskTypeListHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetFordIdList() const
{
    return m_fordIdList;
}

void DescribeBatchOperateTaskRequest::SetFordIdList(const vector<string>& _fordIdList)
{
    m_fordIdList = _fordIdList;
    m_fordIdListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::FordIdListHasBeenSet() const
{
    return m_fordIdListHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetTaskIdFilter() const
{
    return m_taskIdFilter;
}

void DescribeBatchOperateTaskRequest::SetTaskIdFilter(const string& _taskIdFilter)
{
    m_taskIdFilter = _taskIdFilter;
    m_taskIdFilterHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::TaskIdFilterHasBeenSet() const
{
    return m_taskIdFilterHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetOwnerNameFilter() const
{
    return m_ownerNameFilter;
}

void DescribeBatchOperateTaskRequest::SetOwnerNameFilter(const string& _ownerNameFilter)
{
    m_ownerNameFilter = _ownerNameFilter;
    m_ownerNameFilterHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::OwnerNameFilterHasBeenSet() const
{
    return m_ownerNameFilterHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeBatchOperateTaskRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeBatchOperateTaskRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetDataEngineList() const
{
    return m_dataEngineList;
}

void DescribeBatchOperateTaskRequest::SetDataEngineList(const vector<string>& _dataEngineList)
{
    m_dataEngineList = _dataEngineList;
    m_dataEngineListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::DataEngineListHasBeenSet() const
{
    return m_dataEngineListHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetUserId() const
{
    return m_userId;
}

void DescribeBatchOperateTaskRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetOwnerId() const
{
    return m_ownerId;
}

void DescribeBatchOperateTaskRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string DescribeBatchOperateTaskRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeBatchOperateTaskRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetDatasourceIdList() const
{
    return m_datasourceIdList;
}

void DescribeBatchOperateTaskRequest::SetDatasourceIdList(const vector<string>& _datasourceIdList)
{
    m_datasourceIdList = _datasourceIdList;
    m_datasourceIdListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::DatasourceIdListHasBeenSet() const
{
    return m_datasourceIdListHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetDatasourceTypeList() const
{
    return m_datasourceTypeList;
}

void DescribeBatchOperateTaskRequest::SetDatasourceTypeList(const vector<string>& _datasourceTypeList)
{
    m_datasourceTypeList = _datasourceTypeList;
    m_datasourceTypeListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::DatasourceTypeListHasBeenSet() const
{
    return m_datasourceTypeListHasBeenSet;
}

vector<string> DescribeBatchOperateTaskRequest::GetCycleUnitList() const
{
    return m_cycleUnitList;
}

void DescribeBatchOperateTaskRequest::SetCycleUnitList(const vector<string>& _cycleUnitList)
{
    m_cycleUnitList = _cycleUnitList;
    m_cycleUnitListHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::CycleUnitListHasBeenSet() const
{
    return m_cycleUnitListHasBeenSet;
}

bool DescribeBatchOperateTaskRequest::GetCanSubmit() const
{
    return m_canSubmit;
}

void DescribeBatchOperateTaskRequest::SetCanSubmit(const bool& _canSubmit)
{
    m_canSubmit = _canSubmit;
    m_canSubmitHasBeenSet = true;
}

bool DescribeBatchOperateTaskRequest::CanSubmitHasBeenSet() const
{
    return m_canSubmitHasBeenSet;
}


