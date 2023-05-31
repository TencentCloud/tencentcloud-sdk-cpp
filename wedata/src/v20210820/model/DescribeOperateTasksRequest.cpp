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

#include <tencentcloud/wedata/v20210820/model/DescribeOperateTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeOperateTasksRequest::DescribeOperateTasksRequest() :
    m_projectIdHasBeenSet(false),
    m_folderIdListHasBeenSet(false),
    m_workFlowIdListHasBeenSet(false),
    m_workFlowNameListHasBeenSet(false),
    m_taskNameListHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_taskTypeIdListHasBeenSet(false),
    m_statusListHasBeenSet(false),
    m_taskCycleUnitListHasBeenSet(false),
    m_productNameListHasBeenSet(false),
    m_sourceServiceIdHasBeenSet(false),
    m_sourceServiceTypeHasBeenSet(false),
    m_targetServiceIdHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_alarmTypeHasBeenSet(false)
{
}

string DescribeOperateTasksRequest::ToJsonString() const
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

    if (m_folderIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskIdList.c_str(), allocator).Move(), allocator);
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

    if (m_inChargeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inChargeList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTypeIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCycleUnitListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleUnitList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskCycleUnitList.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productNameList.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOperateTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeOperateTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeOperateTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeOperateTasksRequest::GetFolderIdList() const
{
    return m_folderIdList;
}

void DescribeOperateTasksRequest::SetFolderIdList(const string& _folderIdList)
{
    m_folderIdList = _folderIdList;
    m_folderIdListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::FolderIdListHasBeenSet() const
{
    return m_folderIdListHasBeenSet;
}

string DescribeOperateTasksRequest::GetWorkFlowIdList() const
{
    return m_workFlowIdList;
}

void DescribeOperateTasksRequest::SetWorkFlowIdList(const string& _workFlowIdList)
{
    m_workFlowIdList = _workFlowIdList;
    m_workFlowIdListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::WorkFlowIdListHasBeenSet() const
{
    return m_workFlowIdListHasBeenSet;
}

string DescribeOperateTasksRequest::GetWorkFlowNameList() const
{
    return m_workFlowNameList;
}

void DescribeOperateTasksRequest::SetWorkFlowNameList(const string& _workFlowNameList)
{
    m_workFlowNameList = _workFlowNameList;
    m_workFlowNameListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::WorkFlowNameListHasBeenSet() const
{
    return m_workFlowNameListHasBeenSet;
}

string DescribeOperateTasksRequest::GetTaskNameList() const
{
    return m_taskNameList;
}

void DescribeOperateTasksRequest::SetTaskNameList(const string& _taskNameList)
{
    m_taskNameList = _taskNameList;
    m_taskNameListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TaskNameListHasBeenSet() const
{
    return m_taskNameListHasBeenSet;
}

string DescribeOperateTasksRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void DescribeOperateTasksRequest::SetTaskIdList(const string& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string DescribeOperateTasksRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeOperateTasksRequest::SetPageNumber(const string& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeOperateTasksRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeOperateTasksRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeOperateTasksRequest::SetPageSize(const string& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeOperateTasksRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeOperateTasksRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeOperateTasksRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeOperateTasksRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeOperateTasksRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeOperateTasksRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeOperateTasksRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string DescribeOperateTasksRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void DescribeOperateTasksRequest::SetInChargeList(const string& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

string DescribeOperateTasksRequest::GetTaskTypeIdList() const
{
    return m_taskTypeIdList;
}

void DescribeOperateTasksRequest::SetTaskTypeIdList(const string& _taskTypeIdList)
{
    m_taskTypeIdList = _taskTypeIdList;
    m_taskTypeIdListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TaskTypeIdListHasBeenSet() const
{
    return m_taskTypeIdListHasBeenSet;
}

string DescribeOperateTasksRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeOperateTasksRequest::SetStatusList(const string& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

string DescribeOperateTasksRequest::GetTaskCycleUnitList() const
{
    return m_taskCycleUnitList;
}

void DescribeOperateTasksRequest::SetTaskCycleUnitList(const string& _taskCycleUnitList)
{
    m_taskCycleUnitList = _taskCycleUnitList;
    m_taskCycleUnitListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TaskCycleUnitListHasBeenSet() const
{
    return m_taskCycleUnitListHasBeenSet;
}

string DescribeOperateTasksRequest::GetProductNameList() const
{
    return m_productNameList;
}

void DescribeOperateTasksRequest::SetProductNameList(const string& _productNameList)
{
    m_productNameList = _productNameList;
    m_productNameListHasBeenSet = true;
}

bool DescribeOperateTasksRequest::ProductNameListHasBeenSet() const
{
    return m_productNameListHasBeenSet;
}

string DescribeOperateTasksRequest::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void DescribeOperateTasksRequest::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool DescribeOperateTasksRequest::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string DescribeOperateTasksRequest::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void DescribeOperateTasksRequest::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool DescribeOperateTasksRequest::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string DescribeOperateTasksRequest::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void DescribeOperateTasksRequest::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string DescribeOperateTasksRequest::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void DescribeOperateTasksRequest::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool DescribeOperateTasksRequest::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

string DescribeOperateTasksRequest::GetAlarmType() const
{
    return m_alarmType;
}

void DescribeOperateTasksRequest::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool DescribeOperateTasksRequest::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}


