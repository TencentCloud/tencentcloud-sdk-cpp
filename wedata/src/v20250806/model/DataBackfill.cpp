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

#include <tencentcloud/wedata/v20250806/model/DataBackfill.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DataBackfill::DataBackfill() :
    m_projectIdHasBeenSet(false),
    m_dataBackfillPlanIdHasBeenSet(false),
    m_dataBackfillPlanNameHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_dataBackfillRangeListHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_skipEventListeningHasBeenSet(false),
    m_redefineParallelNumHasBeenSet(false),
    m_redefineSelfWorkflowDependencyHasBeenSet(false),
    m_schedulerResourceGroupIdHasBeenSet(false),
    m_integrationResourceGroupIdHasBeenSet(false),
    m_redefineCycleTypeHasBeenSet(false),
    m_redefineParamListHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_completePercentHasBeenSet(false),
    m_successPercentHasBeenSet(false),
    m_dataTimeOrderHasBeenSet(false)
{
}

CoreInternalOutcome DataBackfill::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DataBackfillPlanId") && !value["DataBackfillPlanId"].IsNull())
    {
        if (!value["DataBackfillPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.DataBackfillPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackfillPlanId = string(value["DataBackfillPlanId"].GetString());
        m_dataBackfillPlanIdHasBeenSet = true;
    }

    if (value.HasMember("DataBackfillPlanName") && !value["DataBackfillPlanName"].IsNull())
    {
        if (!value["DataBackfillPlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.DataBackfillPlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBackfillPlanName = string(value["DataBackfillPlanName"].GetString());
        m_dataBackfillPlanNameHasBeenSet = true;
    }

    if (value.HasMember("TaskIds") && !value["TaskIds"].IsNull())
    {
        if (!value["TaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataBackfill.TaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIds.push_back((*itr).GetString());
        }
        m_taskIdsHasBeenSet = true;
    }

    if (value.HasMember("DataBackfillRangeList") && !value["DataBackfillRangeList"].IsNull())
    {
        if (!value["DataBackfillRangeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataBackfill.DataBackfillRangeList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataBackfillRangeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataBackfillRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataBackfillRangeList.push_back(item);
        }
        m_dataBackfillRangeListHasBeenSet = true;
    }

    if (value.HasMember("CheckParentType") && !value["CheckParentType"].IsNull())
    {
        if (!value["CheckParentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.CheckParentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkParentType = string(value["CheckParentType"].GetString());
        m_checkParentTypeHasBeenSet = true;
    }

    if (value.HasMember("SkipEventListening") && !value["SkipEventListening"].IsNull())
    {
        if (!value["SkipEventListening"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.SkipEventListening` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipEventListening = value["SkipEventListening"].GetBool();
        m_skipEventListeningHasBeenSet = true;
    }

    if (value.HasMember("RedefineParallelNum") && !value["RedefineParallelNum"].IsNull())
    {
        if (!value["RedefineParallelNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.RedefineParallelNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_redefineParallelNum = value["RedefineParallelNum"].GetUint64();
        m_redefineParallelNumHasBeenSet = true;
    }

    if (value.HasMember("RedefineSelfWorkflowDependency") && !value["RedefineSelfWorkflowDependency"].IsNull())
    {
        if (!value["RedefineSelfWorkflowDependency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.RedefineSelfWorkflowDependency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redefineSelfWorkflowDependency = string(value["RedefineSelfWorkflowDependency"].GetString());
        m_redefineSelfWorkflowDependencyHasBeenSet = true;
    }

    if (value.HasMember("SchedulerResourceGroupId") && !value["SchedulerResourceGroupId"].IsNull())
    {
        if (!value["SchedulerResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.SchedulerResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerResourceGroupId = string(value["SchedulerResourceGroupId"].GetString());
        m_schedulerResourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("IntegrationResourceGroupId") && !value["IntegrationResourceGroupId"].IsNull())
    {
        if (!value["IntegrationResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.IntegrationResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrationResourceGroupId = string(value["IntegrationResourceGroupId"].GetString());
        m_integrationResourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RedefineCycleType") && !value["RedefineCycleType"].IsNull())
    {
        if (!value["RedefineCycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.RedefineCycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redefineCycleType = string(value["RedefineCycleType"].GetString());
        m_redefineCycleTypeHasBeenSet = true;
    }

    if (value.HasMember("RedefineParamList") && !value["RedefineParamList"].IsNull())
    {
        if (!value["RedefineParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataBackfill.RedefineParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["RedefineParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_redefineParamList.push_back(item);
        }
        m_redefineParamListHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateUserUin") && !value["CreateUserUin"].IsNull())
    {
        if (!value["CreateUserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.CreateUserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUserUin = string(value["CreateUserUin"].GetString());
        m_createUserUinHasBeenSet = true;
    }

    if (value.HasMember("CompletePercent") && !value["CompletePercent"].IsNull())
    {
        if (!value["CompletePercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.CompletePercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_completePercent = value["CompletePercent"].GetUint64();
        m_completePercentHasBeenSet = true;
    }

    if (value.HasMember("SuccessPercent") && !value["SuccessPercent"].IsNull())
    {
        if (!value["SuccessPercent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.SuccessPercent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successPercent = value["SuccessPercent"].GetUint64();
        m_successPercentHasBeenSet = true;
    }

    if (value.HasMember("DataTimeOrder") && !value["DataTimeOrder"].IsNull())
    {
        if (!value["DataTimeOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBackfill.DataTimeOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTimeOrder = string(value["DataTimeOrder"].GetString());
        m_dataTimeOrderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataBackfill::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBackfillPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBackfillPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBackfillPlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillPlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBackfillPlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataBackfillRangeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBackfillRangeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataBackfillRangeList.begin(); itr != m_dataBackfillRangeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_skipEventListeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipEventListening";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipEventListening, allocator);
    }

    if (m_redefineParallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParallelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redefineParallelNum, allocator);
    }

    if (m_redefineSelfWorkflowDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineSelfWorkflowDependency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redefineSelfWorkflowDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrationResourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineCycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redefineCycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redefineParamList.begin(); itr != m_redefineParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_completePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completePercent, allocator);
    }

    if (m_successPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successPercent, allocator);
    }

    if (m_dataTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTimeOrder.c_str(), allocator).Move(), allocator);
    }

}


string DataBackfill::GetProjectId() const
{
    return m_projectId;
}

void DataBackfill::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DataBackfill::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DataBackfill::GetDataBackfillPlanId() const
{
    return m_dataBackfillPlanId;
}

void DataBackfill::SetDataBackfillPlanId(const string& _dataBackfillPlanId)
{
    m_dataBackfillPlanId = _dataBackfillPlanId;
    m_dataBackfillPlanIdHasBeenSet = true;
}

bool DataBackfill::DataBackfillPlanIdHasBeenSet() const
{
    return m_dataBackfillPlanIdHasBeenSet;
}

string DataBackfill::GetDataBackfillPlanName() const
{
    return m_dataBackfillPlanName;
}

void DataBackfill::SetDataBackfillPlanName(const string& _dataBackfillPlanName)
{
    m_dataBackfillPlanName = _dataBackfillPlanName;
    m_dataBackfillPlanNameHasBeenSet = true;
}

bool DataBackfill::DataBackfillPlanNameHasBeenSet() const
{
    return m_dataBackfillPlanNameHasBeenSet;
}

vector<string> DataBackfill::GetTaskIds() const
{
    return m_taskIds;
}

void DataBackfill::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool DataBackfill::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

vector<DataBackfillRange> DataBackfill::GetDataBackfillRangeList() const
{
    return m_dataBackfillRangeList;
}

void DataBackfill::SetDataBackfillRangeList(const vector<DataBackfillRange>& _dataBackfillRangeList)
{
    m_dataBackfillRangeList = _dataBackfillRangeList;
    m_dataBackfillRangeListHasBeenSet = true;
}

bool DataBackfill::DataBackfillRangeListHasBeenSet() const
{
    return m_dataBackfillRangeListHasBeenSet;
}

string DataBackfill::GetCheckParentType() const
{
    return m_checkParentType;
}

void DataBackfill::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool DataBackfill::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

bool DataBackfill::GetSkipEventListening() const
{
    return m_skipEventListening;
}

void DataBackfill::SetSkipEventListening(const bool& _skipEventListening)
{
    m_skipEventListening = _skipEventListening;
    m_skipEventListeningHasBeenSet = true;
}

bool DataBackfill::SkipEventListeningHasBeenSet() const
{
    return m_skipEventListeningHasBeenSet;
}

uint64_t DataBackfill::GetRedefineParallelNum() const
{
    return m_redefineParallelNum;
}

void DataBackfill::SetRedefineParallelNum(const uint64_t& _redefineParallelNum)
{
    m_redefineParallelNum = _redefineParallelNum;
    m_redefineParallelNumHasBeenSet = true;
}

bool DataBackfill::RedefineParallelNumHasBeenSet() const
{
    return m_redefineParallelNumHasBeenSet;
}

string DataBackfill::GetRedefineSelfWorkflowDependency() const
{
    return m_redefineSelfWorkflowDependency;
}

void DataBackfill::SetRedefineSelfWorkflowDependency(const string& _redefineSelfWorkflowDependency)
{
    m_redefineSelfWorkflowDependency = _redefineSelfWorkflowDependency;
    m_redefineSelfWorkflowDependencyHasBeenSet = true;
}

bool DataBackfill::RedefineSelfWorkflowDependencyHasBeenSet() const
{
    return m_redefineSelfWorkflowDependencyHasBeenSet;
}

string DataBackfill::GetSchedulerResourceGroupId() const
{
    return m_schedulerResourceGroupId;
}

void DataBackfill::SetSchedulerResourceGroupId(const string& _schedulerResourceGroupId)
{
    m_schedulerResourceGroupId = _schedulerResourceGroupId;
    m_schedulerResourceGroupIdHasBeenSet = true;
}

bool DataBackfill::SchedulerResourceGroupIdHasBeenSet() const
{
    return m_schedulerResourceGroupIdHasBeenSet;
}

string DataBackfill::GetIntegrationResourceGroupId() const
{
    return m_integrationResourceGroupId;
}

void DataBackfill::SetIntegrationResourceGroupId(const string& _integrationResourceGroupId)
{
    m_integrationResourceGroupId = _integrationResourceGroupId;
    m_integrationResourceGroupIdHasBeenSet = true;
}

bool DataBackfill::IntegrationResourceGroupIdHasBeenSet() const
{
    return m_integrationResourceGroupIdHasBeenSet;
}

string DataBackfill::GetRedefineCycleType() const
{
    return m_redefineCycleType;
}

void DataBackfill::SetRedefineCycleType(const string& _redefineCycleType)
{
    m_redefineCycleType = _redefineCycleType;
    m_redefineCycleTypeHasBeenSet = true;
}

bool DataBackfill::RedefineCycleTypeHasBeenSet() const
{
    return m_redefineCycleTypeHasBeenSet;
}

vector<KVPair> DataBackfill::GetRedefineParamList() const
{
    return m_redefineParamList;
}

void DataBackfill::SetRedefineParamList(const vector<KVPair>& _redefineParamList)
{
    m_redefineParamList = _redefineParamList;
    m_redefineParamListHasBeenSet = true;
}

bool DataBackfill::RedefineParamListHasBeenSet() const
{
    return m_redefineParamListHasBeenSet;
}

string DataBackfill::GetStartTime() const
{
    return m_startTime;
}

void DataBackfill::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DataBackfill::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DataBackfill::GetEndTime() const
{
    return m_endTime;
}

void DataBackfill::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DataBackfill::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DataBackfill::GetCreateUserUin() const
{
    return m_createUserUin;
}

void DataBackfill::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool DataBackfill::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

uint64_t DataBackfill::GetCompletePercent() const
{
    return m_completePercent;
}

void DataBackfill::SetCompletePercent(const uint64_t& _completePercent)
{
    m_completePercent = _completePercent;
    m_completePercentHasBeenSet = true;
}

bool DataBackfill::CompletePercentHasBeenSet() const
{
    return m_completePercentHasBeenSet;
}

uint64_t DataBackfill::GetSuccessPercent() const
{
    return m_successPercent;
}

void DataBackfill::SetSuccessPercent(const uint64_t& _successPercent)
{
    m_successPercent = _successPercent;
    m_successPercentHasBeenSet = true;
}

bool DataBackfill::SuccessPercentHasBeenSet() const
{
    return m_successPercentHasBeenSet;
}

string DataBackfill::GetDataTimeOrder() const
{
    return m_dataTimeOrder;
}

void DataBackfill::SetDataTimeOrder(const string& _dataTimeOrder)
{
    m_dataTimeOrder = _dataTimeOrder;
    m_dataTimeOrderHasBeenSet = true;
}

bool DataBackfill::DataTimeOrderHasBeenSet() const
{
    return m_dataTimeOrderHasBeenSet;
}

