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

#include <tencentcloud/wedata/v20210820/model/DescribeOperateOpsTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeOperateOpsTasksRequest::DescribeOperateOpsTasksRequest() :
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
    m_alarmTypeHasBeenSet(false),
    m_executorGroupIdListHasBeenSet(false),
    m_taskTagsHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_initStrategyHasBeenSet(false),
    m_requestResourceTypesHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_blackTaskIdListHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false)
{
}

string DescribeOperateOpsTasksRequest::ToJsonString() const
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

    if (m_executorGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskTags.begin(); itr != m_taskTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_initStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_initStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_requestResourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestResourceTypes.begin(); itr != m_requestResourceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_blackTaskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackTaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_blackTaskIdList.begin(); itr != m_blackTaskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOperateOpsTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeOperateOpsTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetFolderIdList() const
{
    return m_folderIdList;
}

void DescribeOperateOpsTasksRequest::SetFolderIdList(const string& _folderIdList)
{
    m_folderIdList = _folderIdList;
    m_folderIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::FolderIdListHasBeenSet() const
{
    return m_folderIdListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetWorkFlowIdList() const
{
    return m_workFlowIdList;
}

void DescribeOperateOpsTasksRequest::SetWorkFlowIdList(const string& _workFlowIdList)
{
    m_workFlowIdList = _workFlowIdList;
    m_workFlowIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::WorkFlowIdListHasBeenSet() const
{
    return m_workFlowIdListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetWorkFlowNameList() const
{
    return m_workFlowNameList;
}

void DescribeOperateOpsTasksRequest::SetWorkFlowNameList(const string& _workFlowNameList)
{
    m_workFlowNameList = _workFlowNameList;
    m_workFlowNameListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::WorkFlowNameListHasBeenSet() const
{
    return m_workFlowNameListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTaskNameList() const
{
    return m_taskNameList;
}

void DescribeOperateOpsTasksRequest::SetTaskNameList(const string& _taskNameList)
{
    m_taskNameList = _taskNameList;
    m_taskNameListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TaskNameListHasBeenSet() const
{
    return m_taskNameListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void DescribeOperateOpsTasksRequest::SetTaskIdList(const string& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeOperateOpsTasksRequest::SetPageNumber(const string& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeOperateOpsTasksRequest::SetPageSize(const string& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeOperateOpsTasksRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeOperateOpsTasksRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void DescribeOperateOpsTasksRequest::SetInChargeList(const string& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTaskTypeIdList() const
{
    return m_taskTypeIdList;
}

void DescribeOperateOpsTasksRequest::SetTaskTypeIdList(const string& _taskTypeIdList)
{
    m_taskTypeIdList = _taskTypeIdList;
    m_taskTypeIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TaskTypeIdListHasBeenSet() const
{
    return m_taskTypeIdListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeOperateOpsTasksRequest::SetStatusList(const string& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTaskCycleUnitList() const
{
    return m_taskCycleUnitList;
}

void DescribeOperateOpsTasksRequest::SetTaskCycleUnitList(const string& _taskCycleUnitList)
{
    m_taskCycleUnitList = _taskCycleUnitList;
    m_taskCycleUnitListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TaskCycleUnitListHasBeenSet() const
{
    return m_taskCycleUnitListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetProductNameList() const
{
    return m_productNameList;
}

void DescribeOperateOpsTasksRequest::SetProductNameList(const string& _productNameList)
{
    m_productNameList = _productNameList;
    m_productNameListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::ProductNameListHasBeenSet() const
{
    return m_productNameListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetSourceServiceId() const
{
    return m_sourceServiceId;
}

void DescribeOperateOpsTasksRequest::SetSourceServiceId(const string& _sourceServiceId)
{
    m_sourceServiceId = _sourceServiceId;
    m_sourceServiceIdHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::SourceServiceIdHasBeenSet() const
{
    return m_sourceServiceIdHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetSourceServiceType() const
{
    return m_sourceServiceType;
}

void DescribeOperateOpsTasksRequest::SetSourceServiceType(const string& _sourceServiceType)
{
    m_sourceServiceType = _sourceServiceType;
    m_sourceServiceTypeHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::SourceServiceTypeHasBeenSet() const
{
    return m_sourceServiceTypeHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTargetServiceId() const
{
    return m_targetServiceId;
}

void DescribeOperateOpsTasksRequest::SetTargetServiceId(const string& _targetServiceId)
{
    m_targetServiceId = _targetServiceId;
    m_targetServiceIdHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TargetServiceIdHasBeenSet() const
{
    return m_targetServiceIdHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void DescribeOperateOpsTasksRequest::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetAlarmType() const
{
    return m_alarmType;
}

void DescribeOperateOpsTasksRequest::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetExecutorGroupIdList() const
{
    return m_executorGroupIdList;
}

void DescribeOperateOpsTasksRequest::SetExecutorGroupIdList(const string& _executorGroupIdList)
{
    m_executorGroupIdList = _executorGroupIdList;
    m_executorGroupIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::ExecutorGroupIdListHasBeenSet() const
{
    return m_executorGroupIdListHasBeenSet;
}

vector<TaskTag> DescribeOperateOpsTasksRequest::GetTaskTags() const
{
    return m_taskTags;
}

void DescribeOperateOpsTasksRequest::SetTaskTags(const vector<TaskTag>& _taskTags)
{
    m_taskTags = _taskTags;
    m_taskTagsHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::TaskTagsHasBeenSet() const
{
    return m_taskTagsHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeOperateOpsTasksRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetInitStrategy() const
{
    return m_initStrategy;
}

void DescribeOperateOpsTasksRequest::SetInitStrategy(const string& _initStrategy)
{
    m_initStrategy = _initStrategy;
    m_initStrategyHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::InitStrategyHasBeenSet() const
{
    return m_initStrategyHasBeenSet;
}

vector<string> DescribeOperateOpsTasksRequest::GetRequestResourceTypes() const
{
    return m_requestResourceTypes;
}

void DescribeOperateOpsTasksRequest::SetRequestResourceTypes(const vector<string>& _requestResourceTypes)
{
    m_requestResourceTypes = _requestResourceTypes;
    m_requestResourceTypesHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::RequestResourceTypesHasBeenSet() const
{
    return m_requestResourceTypesHasBeenSet;
}

vector<string> DescribeOperateOpsTasksRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeOperateOpsTasksRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeOperateOpsTasksRequest::GetBlackTaskIdList() const
{
    return m_blackTaskIdList;
}

void DescribeOperateOpsTasksRequest::SetBlackTaskIdList(const vector<string>& _blackTaskIdList)
{
    m_blackTaskIdList = _blackTaskIdList;
    m_blackTaskIdListHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::BlackTaskIdListHasBeenSet() const
{
    return m_blackTaskIdListHasBeenSet;
}

string DescribeOperateOpsTasksRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void DescribeOperateOpsTasksRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool DescribeOperateOpsTasksRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}


