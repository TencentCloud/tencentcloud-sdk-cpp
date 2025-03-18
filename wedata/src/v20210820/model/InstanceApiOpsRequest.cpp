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

#include <tencentcloud/wedata/v20210820/model/InstanceApiOpsRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceApiOpsRequest::InstanceApiOpsRequest() :
    m_instanceHasBeenSet(false),
    m_sortColHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_taskNameListHasBeenSet(false),
    m_folderListHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_taskTypeListHasBeenSet(false),
    m_cycleListHasBeenSet(false),
    m_ownerListHasBeenSet(false),
    m_dateFromHasBeenSet(false),
    m_dateToHasBeenSet(false),
    m_createTimeFromHasBeenSet(false),
    m_createTimeToHasBeenSet(false),
    m_startFromHasBeenSet(false),
    m_startToHasBeenSet(false),
    m_workflowIdListHasBeenSet(false),
    m_workflowNameListHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_searchColumnsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_taskTypeMapHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_dagDealHasBeenSet(false),
    m_dagTypeHasBeenSet(false),
    m_dagDependentHasBeenSet(false),
    m_dagDepthHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_dataTimeCycleHasBeenSet(false),
    m_executorGroupIdListHasBeenSet(false),
    m_onlyRerunHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_scheduleTimeFromHasBeenSet(false),
    m_scheduleTimeToHasBeenSet(false)
{
}

CoreInternalOutcome InstanceApiOpsRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.Instance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instance.Deserialize(value["Instance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("SortCol") && !value["SortCol"].IsNull())
    {
        if (!value["SortCol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.SortCol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortCol = string(value["SortCol"].GetString());
        m_sortColHasBeenSet = true;
    }

    if (value.HasMember("TaskIdList") && !value["TaskIdList"].IsNull())
    {
        if (!value["TaskIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.TaskIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIdList.push_back((*itr).GetString());
        }
        m_taskIdListHasBeenSet = true;
    }

    if (value.HasMember("TaskNameList") && !value["TaskNameList"].IsNull())
    {
        if (!value["TaskNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.TaskNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskNameList.push_back((*itr).GetString());
        }
        m_taskNameListHasBeenSet = true;
    }

    if (value.HasMember("FolderList") && !value["FolderList"].IsNull())
    {
        if (!value["FolderList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.FolderList` is not array type"));

        const rapidjson::Value &tmpValue = value["FolderList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_folderList.push_back((*itr).GetString());
        }
        m_folderListHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.Sort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sort = string(value["Sort"].GetString());
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("StateList") && !value["StateList"].IsNull())
    {
        if (!value["StateList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.StateList` is not array type"));

        const rapidjson::Value &tmpValue = value["StateList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stateList.push_back((*itr).GetInt64());
        }
        m_stateListHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeList") && !value["TaskTypeList"].IsNull())
    {
        if (!value["TaskTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.TaskTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskTypeList.push_back((*itr).GetInt64());
        }
        m_taskTypeListHasBeenSet = true;
    }

    if (value.HasMember("CycleList") && !value["CycleList"].IsNull())
    {
        if (!value["CycleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.CycleList` is not array type"));

        const rapidjson::Value &tmpValue = value["CycleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cycleList.push_back((*itr).GetString());
        }
        m_cycleListHasBeenSet = true;
    }

    if (value.HasMember("OwnerList") && !value["OwnerList"].IsNull())
    {
        if (!value["OwnerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.OwnerList` is not array type"));

        const rapidjson::Value &tmpValue = value["OwnerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ownerList.push_back((*itr).GetString());
        }
        m_ownerListHasBeenSet = true;
    }

    if (value.HasMember("DateFrom") && !value["DateFrom"].IsNull())
    {
        if (!value["DateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateFrom = string(value["DateFrom"].GetString());
        m_dateFromHasBeenSet = true;
    }

    if (value.HasMember("DateTo") && !value["DateTo"].IsNull())
    {
        if (!value["DateTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DateTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTo = string(value["DateTo"].GetString());
        m_dateToHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeFrom") && !value["CreateTimeFrom"].IsNull())
    {
        if (!value["CreateTimeFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.CreateTimeFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeFrom = string(value["CreateTimeFrom"].GetString());
        m_createTimeFromHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeTo") && !value["CreateTimeTo"].IsNull())
    {
        if (!value["CreateTimeTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.CreateTimeTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeTo = string(value["CreateTimeTo"].GetString());
        m_createTimeToHasBeenSet = true;
    }

    if (value.HasMember("StartFrom") && !value["StartFrom"].IsNull())
    {
        if (!value["StartFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.StartFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startFrom = string(value["StartFrom"].GetString());
        m_startFromHasBeenSet = true;
    }

    if (value.HasMember("StartTo") && !value["StartTo"].IsNull())
    {
        if (!value["StartTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.StartTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTo = string(value["StartTo"].GetString());
        m_startToHasBeenSet = true;
    }

    if (value.HasMember("WorkflowIdList") && !value["WorkflowIdList"].IsNull())
    {
        if (!value["WorkflowIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.WorkflowIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkflowIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_workflowIdList.push_back((*itr).GetString());
        }
        m_workflowIdListHasBeenSet = true;
    }

    if (value.HasMember("WorkflowNameList") && !value["WorkflowNameList"].IsNull())
    {
        if (!value["WorkflowNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.WorkflowNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkflowNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_workflowNameList.push_back((*itr).GetString());
        }
        m_workflowNameListHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("SearchColumns") && !value["SearchColumns"].IsNull())
    {
        if (!value["SearchColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.SearchColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_searchColumns.push_back((*itr).GetString());
        }
        m_searchColumnsHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeMap") && !value["TaskTypeMap"].IsNull())
    {
        if (!value["TaskTypeMap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.TaskTypeMap` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypeMap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTypeMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskTypeMap.push_back(item);
        }
        m_taskTypeMapHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DagDeal") && !value["DagDeal"].IsNull())
    {
        if (!value["DagDeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DagDeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dagDeal = value["DagDeal"].GetBool();
        m_dagDealHasBeenSet = true;
    }

    if (value.HasMember("DagType") && !value["DagType"].IsNull())
    {
        if (!value["DagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dagType = string(value["DagType"].GetString());
        m_dagTypeHasBeenSet = true;
    }

    if (value.HasMember("DagDependent") && !value["DagDependent"].IsNull())
    {
        if (!value["DagDependent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DagDependent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dagDependent = string(value["DagDependent"].GetString());
        m_dagDependentHasBeenSet = true;
    }

    if (value.HasMember("DagDepth") && !value["DagDepth"].IsNull())
    {
        if (!value["DagDepth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DagDepth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dagDepth = value["DagDepth"].GetInt64();
        m_dagDepthHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("DataTimeCycle") && !value["DataTimeCycle"].IsNull())
    {
        if (!value["DataTimeCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.DataTimeCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTimeCycle = string(value["DataTimeCycle"].GetString());
        m_dataTimeCycleHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupIdList") && !value["ExecutorGroupIdList"].IsNull())
    {
        if (!value["ExecutorGroupIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.ExecutorGroupIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecutorGroupIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_executorGroupIdList.push_back((*itr).GetString());
        }
        m_executorGroupIdListHasBeenSet = true;
    }

    if (value.HasMember("OnlyRerun") && !value["OnlyRerun"].IsNull())
    {
        if (!value["OnlyRerun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.OnlyRerun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onlyRerun = value["OnlyRerun"].GetBool();
        m_onlyRerunHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeFrom") && !value["ScheduleTimeFrom"].IsNull())
    {
        if (!value["ScheduleTimeFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.ScheduleTimeFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeFrom = string(value["ScheduleTimeFrom"].GetString());
        m_scheduleTimeFromHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeTo") && !value["ScheduleTimeTo"].IsNull())
    {
        if (!value["ScheduleTimeTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceApiOpsRequest.ScheduleTimeTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeTo = string(value["ScheduleTimeTo"].GetString());
        m_scheduleTimeToHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceApiOpsRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sortColHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortCol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortCol.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNameList.begin(); itr != m_taskNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_folderListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_folderList.begin(); itr != m_folderList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_taskTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeList.begin(); itr != m_taskTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cycleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleList.begin(); itr != m_cycleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerList.begin(); itr != m_ownerList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dateFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_dateToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_startFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_startToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTo.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIdList.begin(); itr != m_workflowIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowNameList.begin(); itr != m_workflowNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_searchColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchColumns.begin(); itr != m_searchColumns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_taskTypeMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskTypeMap.begin(); itr != m_taskTypeMap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dagDealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DagDeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dagDeal, allocator);
    }

    if (m_dagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dagType.c_str(), allocator).Move(), allocator);
    }

    if (m_dagDependentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DagDependent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dagDependent.c_str(), allocator).Move(), allocator);
    }

    if (m_dagDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DagDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dagDepth, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTimeCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executorGroupIdList.begin(); itr != m_executorGroupIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyRerunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyRerun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlyRerun, allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeTo.c_str(), allocator).Move(), allocator);
    }

}


InstanceOpsDto InstanceApiOpsRequest::GetInstance() const
{
    return m_instance;
}

void InstanceApiOpsRequest::SetInstance(const InstanceOpsDto& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool InstanceApiOpsRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string InstanceApiOpsRequest::GetSortCol() const
{
    return m_sortCol;
}

void InstanceApiOpsRequest::SetSortCol(const string& _sortCol)
{
    m_sortCol = _sortCol;
    m_sortColHasBeenSet = true;
}

bool InstanceApiOpsRequest::SortColHasBeenSet() const
{
    return m_sortColHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void InstanceApiOpsRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool InstanceApiOpsRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetTaskNameList() const
{
    return m_taskNameList;
}

void InstanceApiOpsRequest::SetTaskNameList(const vector<string>& _taskNameList)
{
    m_taskNameList = _taskNameList;
    m_taskNameListHasBeenSet = true;
}

bool InstanceApiOpsRequest::TaskNameListHasBeenSet() const
{
    return m_taskNameListHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetFolderList() const
{
    return m_folderList;
}

void InstanceApiOpsRequest::SetFolderList(const vector<string>& _folderList)
{
    m_folderList = _folderList;
    m_folderListHasBeenSet = true;
}

bool InstanceApiOpsRequest::FolderListHasBeenSet() const
{
    return m_folderListHasBeenSet;
}

string InstanceApiOpsRequest::GetSort() const
{
    return m_sort;
}

void InstanceApiOpsRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool InstanceApiOpsRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

vector<int64_t> InstanceApiOpsRequest::GetStateList() const
{
    return m_stateList;
}

void InstanceApiOpsRequest::SetStateList(const vector<int64_t>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool InstanceApiOpsRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

vector<int64_t> InstanceApiOpsRequest::GetTaskTypeList() const
{
    return m_taskTypeList;
}

void InstanceApiOpsRequest::SetTaskTypeList(const vector<int64_t>& _taskTypeList)
{
    m_taskTypeList = _taskTypeList;
    m_taskTypeListHasBeenSet = true;
}

bool InstanceApiOpsRequest::TaskTypeListHasBeenSet() const
{
    return m_taskTypeListHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetCycleList() const
{
    return m_cycleList;
}

void InstanceApiOpsRequest::SetCycleList(const vector<string>& _cycleList)
{
    m_cycleList = _cycleList;
    m_cycleListHasBeenSet = true;
}

bool InstanceApiOpsRequest::CycleListHasBeenSet() const
{
    return m_cycleListHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetOwnerList() const
{
    return m_ownerList;
}

void InstanceApiOpsRequest::SetOwnerList(const vector<string>& _ownerList)
{
    m_ownerList = _ownerList;
    m_ownerListHasBeenSet = true;
}

bool InstanceApiOpsRequest::OwnerListHasBeenSet() const
{
    return m_ownerListHasBeenSet;
}

string InstanceApiOpsRequest::GetDateFrom() const
{
    return m_dateFrom;
}

void InstanceApiOpsRequest::SetDateFrom(const string& _dateFrom)
{
    m_dateFrom = _dateFrom;
    m_dateFromHasBeenSet = true;
}

bool InstanceApiOpsRequest::DateFromHasBeenSet() const
{
    return m_dateFromHasBeenSet;
}

string InstanceApiOpsRequest::GetDateTo() const
{
    return m_dateTo;
}

void InstanceApiOpsRequest::SetDateTo(const string& _dateTo)
{
    m_dateTo = _dateTo;
    m_dateToHasBeenSet = true;
}

bool InstanceApiOpsRequest::DateToHasBeenSet() const
{
    return m_dateToHasBeenSet;
}

string InstanceApiOpsRequest::GetCreateTimeFrom() const
{
    return m_createTimeFrom;
}

void InstanceApiOpsRequest::SetCreateTimeFrom(const string& _createTimeFrom)
{
    m_createTimeFrom = _createTimeFrom;
    m_createTimeFromHasBeenSet = true;
}

bool InstanceApiOpsRequest::CreateTimeFromHasBeenSet() const
{
    return m_createTimeFromHasBeenSet;
}

string InstanceApiOpsRequest::GetCreateTimeTo() const
{
    return m_createTimeTo;
}

void InstanceApiOpsRequest::SetCreateTimeTo(const string& _createTimeTo)
{
    m_createTimeTo = _createTimeTo;
    m_createTimeToHasBeenSet = true;
}

bool InstanceApiOpsRequest::CreateTimeToHasBeenSet() const
{
    return m_createTimeToHasBeenSet;
}

string InstanceApiOpsRequest::GetStartFrom() const
{
    return m_startFrom;
}

void InstanceApiOpsRequest::SetStartFrom(const string& _startFrom)
{
    m_startFrom = _startFrom;
    m_startFromHasBeenSet = true;
}

bool InstanceApiOpsRequest::StartFromHasBeenSet() const
{
    return m_startFromHasBeenSet;
}

string InstanceApiOpsRequest::GetStartTo() const
{
    return m_startTo;
}

void InstanceApiOpsRequest::SetStartTo(const string& _startTo)
{
    m_startTo = _startTo;
    m_startToHasBeenSet = true;
}

bool InstanceApiOpsRequest::StartToHasBeenSet() const
{
    return m_startToHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetWorkflowIdList() const
{
    return m_workflowIdList;
}

void InstanceApiOpsRequest::SetWorkflowIdList(const vector<string>& _workflowIdList)
{
    m_workflowIdList = _workflowIdList;
    m_workflowIdListHasBeenSet = true;
}

bool InstanceApiOpsRequest::WorkflowIdListHasBeenSet() const
{
    return m_workflowIdListHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetWorkflowNameList() const
{
    return m_workflowNameList;
}

void InstanceApiOpsRequest::SetWorkflowNameList(const vector<string>& _workflowNameList)
{
    m_workflowNameList = _workflowNameList;
    m_workflowNameListHasBeenSet = true;
}

bool InstanceApiOpsRequest::WorkflowNameListHasBeenSet() const
{
    return m_workflowNameListHasBeenSet;
}

string InstanceApiOpsRequest::GetKeyword() const
{
    return m_keyword;
}

void InstanceApiOpsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool InstanceApiOpsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetSearchColumns() const
{
    return m_searchColumns;
}

void InstanceApiOpsRequest::SetSearchColumns(const vector<string>& _searchColumns)
{
    m_searchColumns = _searchColumns;
    m_searchColumnsHasBeenSet = true;
}

bool InstanceApiOpsRequest::SearchColumnsHasBeenSet() const
{
    return m_searchColumnsHasBeenSet;
}

string InstanceApiOpsRequest::GetProjectId() const
{
    return m_projectId;
}

void InstanceApiOpsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceApiOpsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t InstanceApiOpsRequest::GetLimit() const
{
    return m_limit;
}

void InstanceApiOpsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool InstanceApiOpsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<TaskTypeMap> InstanceApiOpsRequest::GetTaskTypeMap() const
{
    return m_taskTypeMap;
}

void InstanceApiOpsRequest::SetTaskTypeMap(const vector<TaskTypeMap>& _taskTypeMap)
{
    m_taskTypeMap = _taskTypeMap;
    m_taskTypeMapHasBeenSet = true;
}

bool InstanceApiOpsRequest::TaskTypeMapHasBeenSet() const
{
    return m_taskTypeMapHasBeenSet;
}

string InstanceApiOpsRequest::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceApiOpsRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceApiOpsRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

bool InstanceApiOpsRequest::GetDagDeal() const
{
    return m_dagDeal;
}

void InstanceApiOpsRequest::SetDagDeal(const bool& _dagDeal)
{
    m_dagDeal = _dagDeal;
    m_dagDealHasBeenSet = true;
}

bool InstanceApiOpsRequest::DagDealHasBeenSet() const
{
    return m_dagDealHasBeenSet;
}

string InstanceApiOpsRequest::GetDagType() const
{
    return m_dagType;
}

void InstanceApiOpsRequest::SetDagType(const string& _dagType)
{
    m_dagType = _dagType;
    m_dagTypeHasBeenSet = true;
}

bool InstanceApiOpsRequest::DagTypeHasBeenSet() const
{
    return m_dagTypeHasBeenSet;
}

string InstanceApiOpsRequest::GetDagDependent() const
{
    return m_dagDependent;
}

void InstanceApiOpsRequest::SetDagDependent(const string& _dagDependent)
{
    m_dagDependent = _dagDependent;
    m_dagDependentHasBeenSet = true;
}

bool InstanceApiOpsRequest::DagDependentHasBeenSet() const
{
    return m_dagDependentHasBeenSet;
}

int64_t InstanceApiOpsRequest::GetDagDepth() const
{
    return m_dagDepth;
}

void InstanceApiOpsRequest::SetDagDepth(const int64_t& _dagDepth)
{
    m_dagDepth = _dagDepth;
    m_dagDepthHasBeenSet = true;
}

bool InstanceApiOpsRequest::DagDepthHasBeenSet() const
{
    return m_dagDepthHasBeenSet;
}

string InstanceApiOpsRequest::GetTenantId() const
{
    return m_tenantId;
}

void InstanceApiOpsRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool InstanceApiOpsRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string InstanceApiOpsRequest::GetDataTimeCycle() const
{
    return m_dataTimeCycle;
}

void InstanceApiOpsRequest::SetDataTimeCycle(const string& _dataTimeCycle)
{
    m_dataTimeCycle = _dataTimeCycle;
    m_dataTimeCycleHasBeenSet = true;
}

bool InstanceApiOpsRequest::DataTimeCycleHasBeenSet() const
{
    return m_dataTimeCycleHasBeenSet;
}

vector<string> InstanceApiOpsRequest::GetExecutorGroupIdList() const
{
    return m_executorGroupIdList;
}

void InstanceApiOpsRequest::SetExecutorGroupIdList(const vector<string>& _executorGroupIdList)
{
    m_executorGroupIdList = _executorGroupIdList;
    m_executorGroupIdListHasBeenSet = true;
}

bool InstanceApiOpsRequest::ExecutorGroupIdListHasBeenSet() const
{
    return m_executorGroupIdListHasBeenSet;
}

bool InstanceApiOpsRequest::GetOnlyRerun() const
{
    return m_onlyRerun;
}

void InstanceApiOpsRequest::SetOnlyRerun(const bool& _onlyRerun)
{
    m_onlyRerun = _onlyRerun;
    m_onlyRerunHasBeenSet = true;
}

bool InstanceApiOpsRequest::OnlyRerunHasBeenSet() const
{
    return m_onlyRerunHasBeenSet;
}

string InstanceApiOpsRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void InstanceApiOpsRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool InstanceApiOpsRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string InstanceApiOpsRequest::GetScheduleTimeFrom() const
{
    return m_scheduleTimeFrom;
}

void InstanceApiOpsRequest::SetScheduleTimeFrom(const string& _scheduleTimeFrom)
{
    m_scheduleTimeFrom = _scheduleTimeFrom;
    m_scheduleTimeFromHasBeenSet = true;
}

bool InstanceApiOpsRequest::ScheduleTimeFromHasBeenSet() const
{
    return m_scheduleTimeFromHasBeenSet;
}

string InstanceApiOpsRequest::GetScheduleTimeTo() const
{
    return m_scheduleTimeTo;
}

void InstanceApiOpsRequest::SetScheduleTimeTo(const string& _scheduleTimeTo)
{
    m_scheduleTimeTo = _scheduleTimeTo;
    m_scheduleTimeToHasBeenSet = true;
}

bool InstanceApiOpsRequest::ScheduleTimeToHasBeenSet() const
{
    return m_scheduleTimeToHasBeenSet;
}

