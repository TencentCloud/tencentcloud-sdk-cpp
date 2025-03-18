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

#include <tencentcloud/wedata/v20210820/model/TriggerManualTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TriggerManualTasksRequest::TriggerManualTasksRequest() :
    m_projectIdHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_triggerScopeHasBeenSet(false),
    m_dataTimeListHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_schedulerResourceGroupHasBeenSet(false),
    m_integrationResourceGroupHasBeenSet(false),
    m_execOrderHasBeenSet(false),
    m_customParamsHasBeenSet(false),
    m_extraParamsHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

string TriggerManualTasksRequest::ToJsonString() const
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

    if (m_triggerScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerScope.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataTimeList.begin(); itr != m_dataTimeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_schedulerResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_execOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_execOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_customParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customParams.begin(); itr != m_customParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extraParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParams.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TriggerManualTasksRequest::GetProjectId() const
{
    return m_projectId;
}

void TriggerManualTasksRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TriggerManualTasksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string TriggerManualTasksRequest::GetTriggerName() const
{
    return m_triggerName;
}

void TriggerManualTasksRequest::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool TriggerManualTasksRequest::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string TriggerManualTasksRequest::GetTriggerScope() const
{
    return m_triggerScope;
}

void TriggerManualTasksRequest::SetTriggerScope(const string& _triggerScope)
{
    m_triggerScope = _triggerScope;
    m_triggerScopeHasBeenSet = true;
}

bool TriggerManualTasksRequest::TriggerScopeHasBeenSet() const
{
    return m_triggerScopeHasBeenSet;
}

vector<string> TriggerManualTasksRequest::GetDataTimeList() const
{
    return m_dataTimeList;
}

void TriggerManualTasksRequest::SetDataTimeList(const vector<string>& _dataTimeList)
{
    m_dataTimeList = _dataTimeList;
    m_dataTimeListHasBeenSet = true;
}

bool TriggerManualTasksRequest::DataTimeListHasBeenSet() const
{
    return m_dataTimeListHasBeenSet;
}

string TriggerManualTasksRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void TriggerManualTasksRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool TriggerManualTasksRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string TriggerManualTasksRequest::GetRemark() const
{
    return m_remark;
}

void TriggerManualTasksRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TriggerManualTasksRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> TriggerManualTasksRequest::GetTaskIds() const
{
    return m_taskIds;
}

void TriggerManualTasksRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool TriggerManualTasksRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string TriggerManualTasksRequest::GetSchedulerResourceGroup() const
{
    return m_schedulerResourceGroup;
}

void TriggerManualTasksRequest::SetSchedulerResourceGroup(const string& _schedulerResourceGroup)
{
    m_schedulerResourceGroup = _schedulerResourceGroup;
    m_schedulerResourceGroupHasBeenSet = true;
}

bool TriggerManualTasksRequest::SchedulerResourceGroupHasBeenSet() const
{
    return m_schedulerResourceGroupHasBeenSet;
}

string TriggerManualTasksRequest::GetIntegrationResourceGroup() const
{
    return m_integrationResourceGroup;
}

void TriggerManualTasksRequest::SetIntegrationResourceGroup(const string& _integrationResourceGroup)
{
    m_integrationResourceGroup = _integrationResourceGroup;
    m_integrationResourceGroupHasBeenSet = true;
}

bool TriggerManualTasksRequest::IntegrationResourceGroupHasBeenSet() const
{
    return m_integrationResourceGroupHasBeenSet;
}

string TriggerManualTasksRequest::GetExecOrder() const
{
    return m_execOrder;
}

void TriggerManualTasksRequest::SetExecOrder(const string& _execOrder)
{
    m_execOrder = _execOrder;
    m_execOrderHasBeenSet = true;
}

bool TriggerManualTasksRequest::ExecOrderHasBeenSet() const
{
    return m_execOrderHasBeenSet;
}

vector<KVPair> TriggerManualTasksRequest::GetCustomParams() const
{
    return m_customParams;
}

void TriggerManualTasksRequest::SetCustomParams(const vector<KVPair>& _customParams)
{
    m_customParams = _customParams;
    m_customParamsHasBeenSet = true;
}

bool TriggerManualTasksRequest::CustomParamsHasBeenSet() const
{
    return m_customParamsHasBeenSet;
}

string TriggerManualTasksRequest::GetExtraParams() const
{
    return m_extraParams;
}

void TriggerManualTasksRequest::SetExtraParams(const string& _extraParams)
{
    m_extraParams = _extraParams;
    m_extraParamsHasBeenSet = true;
}

bool TriggerManualTasksRequest::ExtraParamsHasBeenSet() const
{
    return m_extraParamsHasBeenSet;
}

string TriggerManualTasksRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void TriggerManualTasksRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool TriggerManualTasksRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string TriggerManualTasksRequest::GetTimeType() const
{
    return m_timeType;
}

void TriggerManualTasksRequest::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool TriggerManualTasksRequest::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}


