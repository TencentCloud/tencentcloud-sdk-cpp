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

#include <tencentcloud/wedata/v20210820/model/MakePlanOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MakePlanOpsDto::MakePlanOpsDto() :
    m_planIdHasBeenSet(false),
    m_makeNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_checkParentHasBeenSet(false),
    m_sameSelfDependTypeHasBeenSet(false),
    m_parallelNumHasBeenSet(false),
    m_sameCycleHasBeenSet(false),
    m_sourceTaskCycleHasBeenSet(false),
    m_targetTaskCycleHasBeenSet(false),
    m_targetTaskActionHasBeenSet(false),
    m_mapParamListHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_taskIdListHasBeenSet(false),
    m_makeDatetimeListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_schedulerResourceGroupHasBeenSet(false),
    m_schedulerResourceGroupNameHasBeenSet(false),
    m_integrationResourceGroupHasBeenSet(false),
    m_integrationResourceGroupNameHasBeenSet(false),
    m_taskCountHasBeenSet(false),
    m_completePercentHasBeenSet(false),
    m_successPercentHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_sameSelfWorkflowDependTypeHasBeenSet(false),
    m_selfWorkflowDependencyHasBeenSet(false),
    m_makeDataTimeOrderHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_appParamHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

CoreInternalOutcome MakePlanOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("MakeName") && !value["MakeName"].IsNull())
    {
        if (!value["MakeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.MakeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_makeName = string(value["MakeName"].GetString());
        m_makeNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CheckParent") && !value["CheckParent"].IsNull())
    {
        if (!value["CheckParent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.CheckParent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkParent = value["CheckParent"].GetBool();
        m_checkParentHasBeenSet = true;
    }

    if (value.HasMember("SameSelfDependType") && !value["SameSelfDependType"].IsNull())
    {
        if (!value["SameSelfDependType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SameSelfDependType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sameSelfDependType = value["SameSelfDependType"].GetBool();
        m_sameSelfDependTypeHasBeenSet = true;
    }

    if (value.HasMember("ParallelNum") && !value["ParallelNum"].IsNull())
    {
        if (!value["ParallelNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.ParallelNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallelNum = value["ParallelNum"].GetInt64();
        m_parallelNumHasBeenSet = true;
    }

    if (value.HasMember("SameCycle") && !value["SameCycle"].IsNull())
    {
        if (!value["SameCycle"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SameCycle` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sameCycle = value["SameCycle"].GetBool();
        m_sameCycleHasBeenSet = true;
    }

    if (value.HasMember("SourceTaskCycle") && !value["SourceTaskCycle"].IsNull())
    {
        if (!value["SourceTaskCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SourceTaskCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTaskCycle = string(value["SourceTaskCycle"].GetString());
        m_sourceTaskCycleHasBeenSet = true;
    }

    if (value.HasMember("TargetTaskCycle") && !value["TargetTaskCycle"].IsNull())
    {
        if (!value["TargetTaskCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.TargetTaskCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTaskCycle = string(value["TargetTaskCycle"].GetString());
        m_targetTaskCycleHasBeenSet = true;
    }

    if (value.HasMember("TargetTaskAction") && !value["TargetTaskAction"].IsNull())
    {
        if (!value["TargetTaskAction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.TargetTaskAction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetTaskAction = value["TargetTaskAction"].GetInt64();
        m_targetTaskActionHasBeenSet = true;
    }

    if (value.HasMember("MapParamList") && !value["MapParamList"].IsNull())
    {
        if (!value["MapParamList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.MapParamList` is not array type"));

        const rapidjson::Value &tmpValue = value["MapParamList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StrToStrMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapParamList.push_back(item);
        }
        m_mapParamListHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskIdList") && !value["TaskIdList"].IsNull())
    {
        if (!value["TaskIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.TaskIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIdList.push_back((*itr).GetString());
        }
        m_taskIdListHasBeenSet = true;
    }

    if (value.HasMember("MakeDatetimeList") && !value["MakeDatetimeList"].IsNull())
    {
        if (!value["MakeDatetimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.MakeDatetimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["MakeDatetimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateMakeDatetimeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_makeDatetimeList.push_back(item);
        }
        m_makeDatetimeListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SchedulerResourceGroup") && !value["SchedulerResourceGroup"].IsNull())
    {
        if (!value["SchedulerResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SchedulerResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerResourceGroup = string(value["SchedulerResourceGroup"].GetString());
        m_schedulerResourceGroupHasBeenSet = true;
    }

    if (value.HasMember("SchedulerResourceGroupName") && !value["SchedulerResourceGroupName"].IsNull())
    {
        if (!value["SchedulerResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SchedulerResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerResourceGroupName = string(value["SchedulerResourceGroupName"].GetString());
        m_schedulerResourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("IntegrationResourceGroup") && !value["IntegrationResourceGroup"].IsNull())
    {
        if (!value["IntegrationResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.IntegrationResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrationResourceGroup = string(value["IntegrationResourceGroup"].GetString());
        m_integrationResourceGroupHasBeenSet = true;
    }

    if (value.HasMember("IntegrationResourceGroupName") && !value["IntegrationResourceGroupName"].IsNull())
    {
        if (!value["IntegrationResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.IntegrationResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integrationResourceGroupName = string(value["IntegrationResourceGroupName"].GetString());
        m_integrationResourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("TaskCount") && !value["TaskCount"].IsNull())
    {
        if (!value["TaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.TaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = value["TaskCount"].GetInt64();
        m_taskCountHasBeenSet = true;
    }

    if (value.HasMember("CompletePercent") && !value["CompletePercent"].IsNull())
    {
        if (!value["CompletePercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.CompletePercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completePercent = value["CompletePercent"].GetInt64();
        m_completePercentHasBeenSet = true;
    }

    if (value.HasMember("SuccessPercent") && !value["SuccessPercent"].IsNull())
    {
        if (!value["SuccessPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SuccessPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successPercent = value["SuccessPercent"].GetInt64();
        m_successPercentHasBeenSet = true;
    }

    if (value.HasMember("CheckParentType") && !value["CheckParentType"].IsNull())
    {
        if (!value["CheckParentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.CheckParentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkParentType = string(value["CheckParentType"].GetString());
        m_checkParentTypeHasBeenSet = true;
    }

    if (value.HasMember("SameSelfWorkflowDependType") && !value["SameSelfWorkflowDependType"].IsNull())
    {
        if (!value["SameSelfWorkflowDependType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SameSelfWorkflowDependType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sameSelfWorkflowDependType = value["SameSelfWorkflowDependType"].GetBool();
        m_sameSelfWorkflowDependTypeHasBeenSet = true;
    }

    if (value.HasMember("SelfWorkflowDependency") && !value["SelfWorkflowDependency"].IsNull())
    {
        if (!value["SelfWorkflowDependency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.SelfWorkflowDependency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfWorkflowDependency = string(value["SelfWorkflowDependency"].GetString());
        m_selfWorkflowDependencyHasBeenSet = true;
    }

    if (value.HasMember("MakeDataTimeOrder") && !value["MakeDataTimeOrder"].IsNull())
    {
        if (!value["MakeDataTimeOrder"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.MakeDataTimeOrder` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_makeDataTimeOrder = string(value["MakeDataTimeOrder"].GetString());
        m_makeDataTimeOrderHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("AppParam") && !value["AppParam"].IsNull())
    {
        if (!value["AppParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.AppParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appParam = string(value["AppParam"].GetString());
        m_appParamHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MakePlanOpsDto.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MakePlanOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_makeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_makeName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_checkParentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkParent, allocator);
    }

    if (m_sameSelfDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameSelfDependType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sameSelfDependType, allocator);
    }

    if (m_parallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParallelNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallelNum, allocator);
    }

    if (m_sameCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sameCycle, allocator);
    }

    if (m_sourceTaskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTaskCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTaskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTaskCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTaskCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTaskCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTaskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetTaskAction, allocator);
    }

    if (m_mapParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapParamList.begin(); itr != m_mapParamList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_makeDatetimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeDatetimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_makeDatetimeList.begin(); itr != m_makeDatetimeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrationResourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_integrationResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegrationResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integrationResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
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

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_sameSelfWorkflowDependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameSelfWorkflowDependType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sameSelfWorkflowDependType, allocator);
    }

    if (m_selfWorkflowDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfWorkflowDependency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfWorkflowDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_makeDataTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeDataTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_makeDataTimeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_appParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appParam.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

}


string MakePlanOpsDto::GetPlanId() const
{
    return m_planId;
}

void MakePlanOpsDto::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool MakePlanOpsDto::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string MakePlanOpsDto::GetMakeName() const
{
    return m_makeName;
}

void MakePlanOpsDto::SetMakeName(const string& _makeName)
{
    m_makeName = _makeName;
    m_makeNameHasBeenSet = true;
}

bool MakePlanOpsDto::MakeNameHasBeenSet() const
{
    return m_makeNameHasBeenSet;
}

string MakePlanOpsDto::GetProjectId() const
{
    return m_projectId;
}

void MakePlanOpsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MakePlanOpsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool MakePlanOpsDto::GetCheckParent() const
{
    return m_checkParent;
}

void MakePlanOpsDto::SetCheckParent(const bool& _checkParent)
{
    m_checkParent = _checkParent;
    m_checkParentHasBeenSet = true;
}

bool MakePlanOpsDto::CheckParentHasBeenSet() const
{
    return m_checkParentHasBeenSet;
}

bool MakePlanOpsDto::GetSameSelfDependType() const
{
    return m_sameSelfDependType;
}

void MakePlanOpsDto::SetSameSelfDependType(const bool& _sameSelfDependType)
{
    m_sameSelfDependType = _sameSelfDependType;
    m_sameSelfDependTypeHasBeenSet = true;
}

bool MakePlanOpsDto::SameSelfDependTypeHasBeenSet() const
{
    return m_sameSelfDependTypeHasBeenSet;
}

int64_t MakePlanOpsDto::GetParallelNum() const
{
    return m_parallelNum;
}

void MakePlanOpsDto::SetParallelNum(const int64_t& _parallelNum)
{
    m_parallelNum = _parallelNum;
    m_parallelNumHasBeenSet = true;
}

bool MakePlanOpsDto::ParallelNumHasBeenSet() const
{
    return m_parallelNumHasBeenSet;
}

bool MakePlanOpsDto::GetSameCycle() const
{
    return m_sameCycle;
}

void MakePlanOpsDto::SetSameCycle(const bool& _sameCycle)
{
    m_sameCycle = _sameCycle;
    m_sameCycleHasBeenSet = true;
}

bool MakePlanOpsDto::SameCycleHasBeenSet() const
{
    return m_sameCycleHasBeenSet;
}

string MakePlanOpsDto::GetSourceTaskCycle() const
{
    return m_sourceTaskCycle;
}

void MakePlanOpsDto::SetSourceTaskCycle(const string& _sourceTaskCycle)
{
    m_sourceTaskCycle = _sourceTaskCycle;
    m_sourceTaskCycleHasBeenSet = true;
}

bool MakePlanOpsDto::SourceTaskCycleHasBeenSet() const
{
    return m_sourceTaskCycleHasBeenSet;
}

string MakePlanOpsDto::GetTargetTaskCycle() const
{
    return m_targetTaskCycle;
}

void MakePlanOpsDto::SetTargetTaskCycle(const string& _targetTaskCycle)
{
    m_targetTaskCycle = _targetTaskCycle;
    m_targetTaskCycleHasBeenSet = true;
}

bool MakePlanOpsDto::TargetTaskCycleHasBeenSet() const
{
    return m_targetTaskCycleHasBeenSet;
}

int64_t MakePlanOpsDto::GetTargetTaskAction() const
{
    return m_targetTaskAction;
}

void MakePlanOpsDto::SetTargetTaskAction(const int64_t& _targetTaskAction)
{
    m_targetTaskAction = _targetTaskAction;
    m_targetTaskActionHasBeenSet = true;
}

bool MakePlanOpsDto::TargetTaskActionHasBeenSet() const
{
    return m_targetTaskActionHasBeenSet;
}

vector<StrToStrMap> MakePlanOpsDto::GetMapParamList() const
{
    return m_mapParamList;
}

void MakePlanOpsDto::SetMapParamList(const vector<StrToStrMap>& _mapParamList)
{
    m_mapParamList = _mapParamList;
    m_mapParamListHasBeenSet = true;
}

bool MakePlanOpsDto::MapParamListHasBeenSet() const
{
    return m_mapParamListHasBeenSet;
}

string MakePlanOpsDto::GetCreatorId() const
{
    return m_creatorId;
}

void MakePlanOpsDto::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool MakePlanOpsDto::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

string MakePlanOpsDto::GetCreator() const
{
    return m_creator;
}

void MakePlanOpsDto::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool MakePlanOpsDto::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string MakePlanOpsDto::GetCreateTime() const
{
    return m_createTime;
}

void MakePlanOpsDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MakePlanOpsDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> MakePlanOpsDto::GetTaskIdList() const
{
    return m_taskIdList;
}

void MakePlanOpsDto::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool MakePlanOpsDto::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

vector<CreateMakeDatetimeInfo> MakePlanOpsDto::GetMakeDatetimeList() const
{
    return m_makeDatetimeList;
}

void MakePlanOpsDto::SetMakeDatetimeList(const vector<CreateMakeDatetimeInfo>& _makeDatetimeList)
{
    m_makeDatetimeList = _makeDatetimeList;
    m_makeDatetimeListHasBeenSet = true;
}

bool MakePlanOpsDto::MakeDatetimeListHasBeenSet() const
{
    return m_makeDatetimeListHasBeenSet;
}

string MakePlanOpsDto::GetRemark() const
{
    return m_remark;
}

void MakePlanOpsDto::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MakePlanOpsDto::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string MakePlanOpsDto::GetSchedulerResourceGroup() const
{
    return m_schedulerResourceGroup;
}

void MakePlanOpsDto::SetSchedulerResourceGroup(const string& _schedulerResourceGroup)
{
    m_schedulerResourceGroup = _schedulerResourceGroup;
    m_schedulerResourceGroupHasBeenSet = true;
}

bool MakePlanOpsDto::SchedulerResourceGroupHasBeenSet() const
{
    return m_schedulerResourceGroupHasBeenSet;
}

string MakePlanOpsDto::GetSchedulerResourceGroupName() const
{
    return m_schedulerResourceGroupName;
}

void MakePlanOpsDto::SetSchedulerResourceGroupName(const string& _schedulerResourceGroupName)
{
    m_schedulerResourceGroupName = _schedulerResourceGroupName;
    m_schedulerResourceGroupNameHasBeenSet = true;
}

bool MakePlanOpsDto::SchedulerResourceGroupNameHasBeenSet() const
{
    return m_schedulerResourceGroupNameHasBeenSet;
}

string MakePlanOpsDto::GetIntegrationResourceGroup() const
{
    return m_integrationResourceGroup;
}

void MakePlanOpsDto::SetIntegrationResourceGroup(const string& _integrationResourceGroup)
{
    m_integrationResourceGroup = _integrationResourceGroup;
    m_integrationResourceGroupHasBeenSet = true;
}

bool MakePlanOpsDto::IntegrationResourceGroupHasBeenSet() const
{
    return m_integrationResourceGroupHasBeenSet;
}

string MakePlanOpsDto::GetIntegrationResourceGroupName() const
{
    return m_integrationResourceGroupName;
}

void MakePlanOpsDto::SetIntegrationResourceGroupName(const string& _integrationResourceGroupName)
{
    m_integrationResourceGroupName = _integrationResourceGroupName;
    m_integrationResourceGroupNameHasBeenSet = true;
}

bool MakePlanOpsDto::IntegrationResourceGroupNameHasBeenSet() const
{
    return m_integrationResourceGroupNameHasBeenSet;
}

int64_t MakePlanOpsDto::GetTaskCount() const
{
    return m_taskCount;
}

void MakePlanOpsDto::SetTaskCount(const int64_t& _taskCount)
{
    m_taskCount = _taskCount;
    m_taskCountHasBeenSet = true;
}

bool MakePlanOpsDto::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

int64_t MakePlanOpsDto::GetCompletePercent() const
{
    return m_completePercent;
}

void MakePlanOpsDto::SetCompletePercent(const int64_t& _completePercent)
{
    m_completePercent = _completePercent;
    m_completePercentHasBeenSet = true;
}

bool MakePlanOpsDto::CompletePercentHasBeenSet() const
{
    return m_completePercentHasBeenSet;
}

int64_t MakePlanOpsDto::GetSuccessPercent() const
{
    return m_successPercent;
}

void MakePlanOpsDto::SetSuccessPercent(const int64_t& _successPercent)
{
    m_successPercent = _successPercent;
    m_successPercentHasBeenSet = true;
}

bool MakePlanOpsDto::SuccessPercentHasBeenSet() const
{
    return m_successPercentHasBeenSet;
}

string MakePlanOpsDto::GetCheckParentType() const
{
    return m_checkParentType;
}

void MakePlanOpsDto::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool MakePlanOpsDto::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

bool MakePlanOpsDto::GetSameSelfWorkflowDependType() const
{
    return m_sameSelfWorkflowDependType;
}

void MakePlanOpsDto::SetSameSelfWorkflowDependType(const bool& _sameSelfWorkflowDependType)
{
    m_sameSelfWorkflowDependType = _sameSelfWorkflowDependType;
    m_sameSelfWorkflowDependTypeHasBeenSet = true;
}

bool MakePlanOpsDto::SameSelfWorkflowDependTypeHasBeenSet() const
{
    return m_sameSelfWorkflowDependTypeHasBeenSet;
}

string MakePlanOpsDto::GetSelfWorkflowDependency() const
{
    return m_selfWorkflowDependency;
}

void MakePlanOpsDto::SetSelfWorkflowDependency(const string& _selfWorkflowDependency)
{
    m_selfWorkflowDependency = _selfWorkflowDependency;
    m_selfWorkflowDependencyHasBeenSet = true;
}

bool MakePlanOpsDto::SelfWorkflowDependencyHasBeenSet() const
{
    return m_selfWorkflowDependencyHasBeenSet;
}

string MakePlanOpsDto::GetMakeDataTimeOrder() const
{
    return m_makeDataTimeOrder;
}

void MakePlanOpsDto::SetMakeDataTimeOrder(const string& _makeDataTimeOrder)
{
    m_makeDataTimeOrder = _makeDataTimeOrder;
    m_makeDataTimeOrderHasBeenSet = true;
}

bool MakePlanOpsDto::MakeDataTimeOrderHasBeenSet() const
{
    return m_makeDataTimeOrderHasBeenSet;
}

string MakePlanOpsDto::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void MakePlanOpsDto::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool MakePlanOpsDto::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

string MakePlanOpsDto::GetAppParam() const
{
    return m_appParam;
}

void MakePlanOpsDto::SetAppParam(const string& _appParam)
{
    m_appParam = _appParam;
    m_appParamHasBeenSet = true;
}

bool MakePlanOpsDto::AppParamHasBeenSet() const
{
    return m_appParamHasBeenSet;
}

string MakePlanOpsDto::GetTimeType() const
{
    return m_timeType;
}

void MakePlanOpsDto::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool MakePlanOpsDto::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

