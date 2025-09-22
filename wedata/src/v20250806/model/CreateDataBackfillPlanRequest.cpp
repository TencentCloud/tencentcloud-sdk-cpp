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

#include <tencentcloud/wedata/v20250806/model/CreateDataBackfillPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateDataBackfillPlanRequest::CreateDataBackfillPlanRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_dataBackfillRangeListHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_dataBackfillPlanNameHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_skipEventListeningHasBeenSet(false),
    m_redefineSelfWorkflowDependencyHasBeenSet(false),
    m_redefineParallelNumHasBeenSet(false),
    m_schedulerResourceGroupIdHasBeenSet(false),
    m_integrationResourceGroupIdHasBeenSet(false),
    m_redefineParamListHasBeenSet(false),
    m_dataTimeOrderHasBeenSet(false),
    m_redefineCycleTypeHasBeenSet(false)
{
}

string CreateDataBackfillPlanRequest::ToJsonString() const
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

    if (m_dataBackfillRangeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillRangeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataBackfillRangeList.begin(); itr != m_dataBackfillRangeList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBackfillPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillPlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataBackfillPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_skipEventListeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipEventListening";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipEventListening, allocator);
    }

    if (m_redefineSelfWorkflowDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineSelfWorkflowDependency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redefineSelfWorkflowDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineParallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParallelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redefineParallelNum, allocator);
    }

    if (m_schedulerResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_integrationResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redefineParamList.begin(); itr != m_redefineParamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineCycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redefineCycleType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataBackfillPlanRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateDataBackfillPlanRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> CreateDataBackfillPlanRequest::GetTaskIds() const
{
    return m_taskIds;
}

void CreateDataBackfillPlanRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

vector<DataBackfillRange> CreateDataBackfillPlanRequest::GetDataBackfillRangeList() const
{
    return m_dataBackfillRangeList;
}

void CreateDataBackfillPlanRequest::SetDataBackfillRangeList(const vector<DataBackfillRange>& _dataBackfillRangeList)
{
    m_dataBackfillRangeList = _dataBackfillRangeList;
    m_dataBackfillRangeListHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::DataBackfillRangeListHasBeenSet() const
{
    return m_dataBackfillRangeListHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreateDataBackfillPlanRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetDataBackfillPlanName() const
{
    return m_dataBackfillPlanName;
}

void CreateDataBackfillPlanRequest::SetDataBackfillPlanName(const string& _dataBackfillPlanName)
{
    m_dataBackfillPlanName = _dataBackfillPlanName;
    m_dataBackfillPlanNameHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::DataBackfillPlanNameHasBeenSet() const
{
    return m_dataBackfillPlanNameHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetCheckParentType() const
{
    return m_checkParentType;
}

void CreateDataBackfillPlanRequest::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

bool CreateDataBackfillPlanRequest::GetSkipEventListening() const
{
    return m_skipEventListening;
}

void CreateDataBackfillPlanRequest::SetSkipEventListening(const bool& _skipEventListening)
{
    m_skipEventListening = _skipEventListening;
    m_skipEventListeningHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::SkipEventListeningHasBeenSet() const
{
    return m_skipEventListeningHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetRedefineSelfWorkflowDependency() const
{
    return m_redefineSelfWorkflowDependency;
}

void CreateDataBackfillPlanRequest::SetRedefineSelfWorkflowDependency(const string& _redefineSelfWorkflowDependency)
{
    m_redefineSelfWorkflowDependency = _redefineSelfWorkflowDependency;
    m_redefineSelfWorkflowDependencyHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::RedefineSelfWorkflowDependencyHasBeenSet() const
{
    return m_redefineSelfWorkflowDependencyHasBeenSet;
}

uint64_t CreateDataBackfillPlanRequest::GetRedefineParallelNum() const
{
    return m_redefineParallelNum;
}

void CreateDataBackfillPlanRequest::SetRedefineParallelNum(const uint64_t& _redefineParallelNum)
{
    m_redefineParallelNum = _redefineParallelNum;
    m_redefineParallelNumHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::RedefineParallelNumHasBeenSet() const
{
    return m_redefineParallelNumHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetSchedulerResourceGroupId() const
{
    return m_schedulerResourceGroupId;
}

void CreateDataBackfillPlanRequest::SetSchedulerResourceGroupId(const string& _schedulerResourceGroupId)
{
    m_schedulerResourceGroupId = _schedulerResourceGroupId;
    m_schedulerResourceGroupIdHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::SchedulerResourceGroupIdHasBeenSet() const
{
    return m_schedulerResourceGroupIdHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetIntegrationResourceGroupId() const
{
    return m_integrationResourceGroupId;
}

void CreateDataBackfillPlanRequest::SetIntegrationResourceGroupId(const string& _integrationResourceGroupId)
{
    m_integrationResourceGroupId = _integrationResourceGroupId;
    m_integrationResourceGroupIdHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::IntegrationResourceGroupIdHasBeenSet() const
{
    return m_integrationResourceGroupIdHasBeenSet;
}

vector<KVPair> CreateDataBackfillPlanRequest::GetRedefineParamList() const
{
    return m_redefineParamList;
}

void CreateDataBackfillPlanRequest::SetRedefineParamList(const vector<KVPair>& _redefineParamList)
{
    m_redefineParamList = _redefineParamList;
    m_redefineParamListHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::RedefineParamListHasBeenSet() const
{
    return m_redefineParamListHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetDataTimeOrder() const
{
    return m_dataTimeOrder;
}

void CreateDataBackfillPlanRequest::SetDataTimeOrder(const string& _dataTimeOrder)
{
    m_dataTimeOrder = _dataTimeOrder;
    m_dataTimeOrderHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::DataTimeOrderHasBeenSet() const
{
    return m_dataTimeOrderHasBeenSet;
}

string CreateDataBackfillPlanRequest::GetRedefineCycleType() const
{
    return m_redefineCycleType;
}

void CreateDataBackfillPlanRequest::SetRedefineCycleType(const string& _redefineCycleType)
{
    m_redefineCycleType = _redefineCycleType;
    m_redefineCycleTypeHasBeenSet = true;
}

bool CreateDataBackfillPlanRequest::RedefineCycleTypeHasBeenSet() const
{
    return m_redefineCycleTypeHasBeenSet;
}


