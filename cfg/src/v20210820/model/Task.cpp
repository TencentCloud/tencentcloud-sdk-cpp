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

#include <tencentcloud/cfg/v20210820/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

Task::Task() :
    m_taskIdHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_taskTagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskStatusTypeHasBeenSet(false),
    m_taskProtectStrategyHasBeenSet(false),
    m_taskCreateTimeHasBeenSet(false),
    m_taskUpdateTimeHasBeenSet(false),
    m_taskGroupsHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskExpectHasBeenSet(false),
    m_taskSummaryHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_taskPauseDurationHasBeenSet(false),
    m_taskOwnerUinHasBeenSet(false),
    m_taskRegionIdHasBeenSet(false),
    m_taskMonitorsHasBeenSet(false),
    m_taskPolicyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskPlanIdHasBeenSet(false),
    m_taskPlanTitleHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_alarmPolicyHasBeenSet(false),
    m_apmServiceListHasBeenSet(false),
    m_verifyIdHasBeenSet(false),
    m_policyDealTypeHasBeenSet(false),
    m_taskPlanStartTimeHasBeenSet(false),
    m_taskPlanEndTimeHasBeenSet(false),
    m_taskOrgHasBeenSet(false),
    m_taskIssueHasBeenSet(false),
    m_taskRegionNameHasBeenSet(false),
    m_taskArchIdHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskTitle") && !value["TaskTitle"].IsNull())
    {
        if (!value["TaskTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTitle = string(value["TaskTitle"].GetString());
        m_taskTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TaskTag") && !value["TaskTag"].IsNull())
    {
        if (!value["TaskTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskTag = string(value["TaskTag"].GetString());
        m_taskTagHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskStatusType") && !value["TaskStatusType"].IsNull())
    {
        if (!value["TaskStatusType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStatusType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatusType = value["TaskStatusType"].GetInt64();
        m_taskStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskProtectStrategy") && !value["TaskProtectStrategy"].IsNull())
    {
        if (!value["TaskProtectStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskProtectStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskProtectStrategy = string(value["TaskProtectStrategy"].GetString());
        m_taskProtectStrategyHasBeenSet = true;
    }

    if (value.HasMember("TaskCreateTime") && !value["TaskCreateTime"].IsNull())
    {
        if (!value["TaskCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCreateTime = string(value["TaskCreateTime"].GetString());
        m_taskCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskUpdateTime") && !value["TaskUpdateTime"].IsNull())
    {
        if (!value["TaskUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskUpdateTime = string(value["TaskUpdateTime"].GetString());
        m_taskUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroups") && !value["TaskGroups"].IsNull())
    {
        if (!value["TaskGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.TaskGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroups.push_back(item);
        }
        m_taskGroupsHasBeenSet = true;
    }

    if (value.HasMember("TaskStartTime") && !value["TaskStartTime"].IsNull())
    {
        if (!value["TaskStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStartTime = string(value["TaskStartTime"].GetString());
        m_taskStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskEndTime") && !value["TaskEndTime"].IsNull())
    {
        if (!value["TaskEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEndTime = string(value["TaskEndTime"].GetString());
        m_taskEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskExpect") && !value["TaskExpect"].IsNull())
    {
        if (!value["TaskExpect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskExpect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskExpect = value["TaskExpect"].GetInt64();
        m_taskExpectHasBeenSet = true;
    }

    if (value.HasMember("TaskSummary") && !value["TaskSummary"].IsNull())
    {
        if (!value["TaskSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSummary = string(value["TaskSummary"].GetString());
        m_taskSummaryHasBeenSet = true;
    }

    if (value.HasMember("TaskMode") && !value["TaskMode"].IsNull())
    {
        if (!value["TaskMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMode = value["TaskMode"].GetInt64();
        m_taskModeHasBeenSet = true;
    }

    if (value.HasMember("TaskPauseDuration") && !value["TaskPauseDuration"].IsNull())
    {
        if (!value["TaskPauseDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPauseDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPauseDuration = value["TaskPauseDuration"].GetInt64();
        m_taskPauseDurationHasBeenSet = true;
    }

    if (value.HasMember("TaskOwnerUin") && !value["TaskOwnerUin"].IsNull())
    {
        if (!value["TaskOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskOwnerUin = string(value["TaskOwnerUin"].GetString());
        m_taskOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("TaskRegionId") && !value["TaskRegionId"].IsNull())
    {
        if (!value["TaskRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskRegionId = value["TaskRegionId"].GetInt64();
        m_taskRegionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskMonitors") && !value["TaskMonitors"].IsNull())
    {
        if (!value["TaskMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.TaskMonitors` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskMonitor item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskMonitors.push_back(item);
        }
        m_taskMonitorsHasBeenSet = true;
    }

    if (value.HasMember("TaskPolicy") && !value["TaskPolicy"].IsNull())
    {
        if (!value["TaskPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskPolicy.Deserialize(value["TaskPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskPolicyHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagWithDescribe item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("TaskPlanId") && !value["TaskPlanId"].IsNull())
    {
        if (!value["TaskPlanId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPlanId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskPlanId = value["TaskPlanId"].GetInt64();
        m_taskPlanIdHasBeenSet = true;
    }

    if (value.HasMember("TaskPlanTitle") && !value["TaskPlanTitle"].IsNull())
    {
        if (!value["TaskPlanTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPlanTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPlanTitle = string(value["TaskPlanTitle"].GetString());
        m_taskPlanTitleHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmPolicy") && !value["AlarmPolicy"].IsNull())
    {
        if (!value["AlarmPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.AlarmPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmPolicy.push_back((*itr).GetString());
        }
        m_alarmPolicyHasBeenSet = true;
    }

    if (value.HasMember("ApmServiceList") && !value["ApmServiceList"].IsNull())
    {
        if (!value["ApmServiceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.ApmServiceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ApmServiceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apmServiceList.push_back(item);
        }
        m_apmServiceListHasBeenSet = true;
    }

    if (value.HasMember("VerifyId") && !value["VerifyId"].IsNull())
    {
        if (!value["VerifyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.VerifyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyId = value["VerifyId"].GetUint64();
        m_verifyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyDealType") && !value["PolicyDealType"].IsNull())
    {
        if (!value["PolicyDealType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Task.PolicyDealType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyDealType = value["PolicyDealType"].GetInt64();
        m_policyDealTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskPlanStartTime") && !value["TaskPlanStartTime"].IsNull())
    {
        if (!value["TaskPlanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPlanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPlanStartTime = string(value["TaskPlanStartTime"].GetString());
        m_taskPlanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskPlanEndTime") && !value["TaskPlanEndTime"].IsNull())
    {
        if (!value["TaskPlanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskPlanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskPlanEndTime = string(value["TaskPlanEndTime"].GetString());
        m_taskPlanEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskOrg") && !value["TaskOrg"].IsNull())
    {
        if (!value["TaskOrg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Task.TaskOrg` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskOrg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskOrg item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskOrg.push_back(item);
        }
        m_taskOrgHasBeenSet = true;
    }

    if (value.HasMember("TaskIssue") && !value["TaskIssue"].IsNull())
    {
        if (!value["TaskIssue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskIssue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskIssue = string(value["TaskIssue"].GetString());
        m_taskIssueHasBeenSet = true;
    }

    if (value.HasMember("TaskRegionName") && !value["TaskRegionName"].IsNull())
    {
        if (!value["TaskRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskRegionName = string(value["TaskRegionName"].GetString());
        m_taskRegionNameHasBeenSet = true;
    }

    if (value.HasMember("TaskArchId") && !value["TaskArchId"].IsNull())
    {
        if (!value["TaskArchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Task.TaskArchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskArchId = string(value["TaskArchId"].GetString());
        m_taskArchIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskTag.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatusType, allocator);
    }

    if (m_taskProtectStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProtectStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskProtectStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_taskCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroups.begin(); itr != m_taskGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskExpectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskExpect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskExpect, allocator);
    }

    if (m_taskSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMode, allocator);
    }

    if (m_taskPauseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPauseDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPauseDuration, allocator);
    }

    if (m_taskOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskRegionId, allocator);
    }

    if (m_taskMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskMonitors.begin(); itr != m_taskMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskPlanId, allocator);
    }

    if (m_taskPlanTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPlanTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPlanTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicy.begin(); itr != m_alarmPolicy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_apmServiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apmServiceList.begin(); itr != m_apmServiceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_verifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyId, allocator);
    }

    if (m_policyDealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyDealType, allocator);
    }

    if (m_taskPlanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPlanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPlanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskPlanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskPlanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskPlanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskOrgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskOrg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskOrg.begin(); itr != m_taskOrg.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taskIssueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIssue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskIssue.c_str(), allocator).Move(), allocator);
    }

    if (m_taskRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskArchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskArchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskArchId.c_str(), allocator).Move(), allocator);
    }

}


int64_t Task::GetTaskId() const
{
    return m_taskId;
}

void Task::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool Task::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string Task::GetTaskTitle() const
{
    return m_taskTitle;
}

void Task::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool Task::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

string Task::GetTaskDescription() const
{
    return m_taskDescription;
}

void Task::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool Task::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string Task::GetTaskTag() const
{
    return m_taskTag;
}

void Task::SetTaskTag(const string& _taskTag)
{
    m_taskTag = _taskTag;
    m_taskTagHasBeenSet = true;
}

bool Task::TaskTagHasBeenSet() const
{
    return m_taskTagHasBeenSet;
}

int64_t Task::GetTaskStatus() const
{
    return m_taskStatus;
}

void Task::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool Task::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

int64_t Task::GetTaskStatusType() const
{
    return m_taskStatusType;
}

void Task::SetTaskStatusType(const int64_t& _taskStatusType)
{
    m_taskStatusType = _taskStatusType;
    m_taskStatusTypeHasBeenSet = true;
}

bool Task::TaskStatusTypeHasBeenSet() const
{
    return m_taskStatusTypeHasBeenSet;
}

string Task::GetTaskProtectStrategy() const
{
    return m_taskProtectStrategy;
}

void Task::SetTaskProtectStrategy(const string& _taskProtectStrategy)
{
    m_taskProtectStrategy = _taskProtectStrategy;
    m_taskProtectStrategyHasBeenSet = true;
}

bool Task::TaskProtectStrategyHasBeenSet() const
{
    return m_taskProtectStrategyHasBeenSet;
}

string Task::GetTaskCreateTime() const
{
    return m_taskCreateTime;
}

void Task::SetTaskCreateTime(const string& _taskCreateTime)
{
    m_taskCreateTime = _taskCreateTime;
    m_taskCreateTimeHasBeenSet = true;
}

bool Task::TaskCreateTimeHasBeenSet() const
{
    return m_taskCreateTimeHasBeenSet;
}

string Task::GetTaskUpdateTime() const
{
    return m_taskUpdateTime;
}

void Task::SetTaskUpdateTime(const string& _taskUpdateTime)
{
    m_taskUpdateTime = _taskUpdateTime;
    m_taskUpdateTimeHasBeenSet = true;
}

bool Task::TaskUpdateTimeHasBeenSet() const
{
    return m_taskUpdateTimeHasBeenSet;
}

vector<TaskGroup> Task::GetTaskGroups() const
{
    return m_taskGroups;
}

void Task::SetTaskGroups(const vector<TaskGroup>& _taskGroups)
{
    m_taskGroups = _taskGroups;
    m_taskGroupsHasBeenSet = true;
}

bool Task::TaskGroupsHasBeenSet() const
{
    return m_taskGroupsHasBeenSet;
}

string Task::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void Task::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool Task::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string Task::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void Task::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool Task::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

int64_t Task::GetTaskExpect() const
{
    return m_taskExpect;
}

void Task::SetTaskExpect(const int64_t& _taskExpect)
{
    m_taskExpect = _taskExpect;
    m_taskExpectHasBeenSet = true;
}

bool Task::TaskExpectHasBeenSet() const
{
    return m_taskExpectHasBeenSet;
}

string Task::GetTaskSummary() const
{
    return m_taskSummary;
}

void Task::SetTaskSummary(const string& _taskSummary)
{
    m_taskSummary = _taskSummary;
    m_taskSummaryHasBeenSet = true;
}

bool Task::TaskSummaryHasBeenSet() const
{
    return m_taskSummaryHasBeenSet;
}

int64_t Task::GetTaskMode() const
{
    return m_taskMode;
}

void Task::SetTaskMode(const int64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool Task::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

int64_t Task::GetTaskPauseDuration() const
{
    return m_taskPauseDuration;
}

void Task::SetTaskPauseDuration(const int64_t& _taskPauseDuration)
{
    m_taskPauseDuration = _taskPauseDuration;
    m_taskPauseDurationHasBeenSet = true;
}

bool Task::TaskPauseDurationHasBeenSet() const
{
    return m_taskPauseDurationHasBeenSet;
}

string Task::GetTaskOwnerUin() const
{
    return m_taskOwnerUin;
}

void Task::SetTaskOwnerUin(const string& _taskOwnerUin)
{
    m_taskOwnerUin = _taskOwnerUin;
    m_taskOwnerUinHasBeenSet = true;
}

bool Task::TaskOwnerUinHasBeenSet() const
{
    return m_taskOwnerUinHasBeenSet;
}

int64_t Task::GetTaskRegionId() const
{
    return m_taskRegionId;
}

void Task::SetTaskRegionId(const int64_t& _taskRegionId)
{
    m_taskRegionId = _taskRegionId;
    m_taskRegionIdHasBeenSet = true;
}

bool Task::TaskRegionIdHasBeenSet() const
{
    return m_taskRegionIdHasBeenSet;
}

vector<TaskMonitor> Task::GetTaskMonitors() const
{
    return m_taskMonitors;
}

void Task::SetTaskMonitors(const vector<TaskMonitor>& _taskMonitors)
{
    m_taskMonitors = _taskMonitors;
    m_taskMonitorsHasBeenSet = true;
}

bool Task::TaskMonitorsHasBeenSet() const
{
    return m_taskMonitorsHasBeenSet;
}

DescribePolicy Task::GetTaskPolicy() const
{
    return m_taskPolicy;
}

void Task::SetTaskPolicy(const DescribePolicy& _taskPolicy)
{
    m_taskPolicy = _taskPolicy;
    m_taskPolicyHasBeenSet = true;
}

bool Task::TaskPolicyHasBeenSet() const
{
    return m_taskPolicyHasBeenSet;
}

vector<TagWithDescribe> Task::GetTags() const
{
    return m_tags;
}

void Task::SetTags(const vector<TagWithDescribe>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Task::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t Task::GetTaskPlanId() const
{
    return m_taskPlanId;
}

void Task::SetTaskPlanId(const int64_t& _taskPlanId)
{
    m_taskPlanId = _taskPlanId;
    m_taskPlanIdHasBeenSet = true;
}

bool Task::TaskPlanIdHasBeenSet() const
{
    return m_taskPlanIdHasBeenSet;
}

string Task::GetTaskPlanTitle() const
{
    return m_taskPlanTitle;
}

void Task::SetTaskPlanTitle(const string& _taskPlanTitle)
{
    m_taskPlanTitle = _taskPlanTitle;
    m_taskPlanTitleHasBeenSet = true;
}

bool Task::TaskPlanTitleHasBeenSet() const
{
    return m_taskPlanTitleHasBeenSet;
}

string Task::GetApplicationId() const
{
    return m_applicationId;
}

void Task::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Task::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Task::GetApplicationName() const
{
    return m_applicationName;
}

void Task::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool Task::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

vector<string> Task::GetAlarmPolicy() const
{
    return m_alarmPolicy;
}

void Task::SetAlarmPolicy(const vector<string>& _alarmPolicy)
{
    m_alarmPolicy = _alarmPolicy;
    m_alarmPolicyHasBeenSet = true;
}

bool Task::AlarmPolicyHasBeenSet() const
{
    return m_alarmPolicyHasBeenSet;
}

vector<ApmServiceInfo> Task::GetApmServiceList() const
{
    return m_apmServiceList;
}

void Task::SetApmServiceList(const vector<ApmServiceInfo>& _apmServiceList)
{
    m_apmServiceList = _apmServiceList;
    m_apmServiceListHasBeenSet = true;
}

bool Task::ApmServiceListHasBeenSet() const
{
    return m_apmServiceListHasBeenSet;
}

uint64_t Task::GetVerifyId() const
{
    return m_verifyId;
}

void Task::SetVerifyId(const uint64_t& _verifyId)
{
    m_verifyId = _verifyId;
    m_verifyIdHasBeenSet = true;
}

bool Task::VerifyIdHasBeenSet() const
{
    return m_verifyIdHasBeenSet;
}

int64_t Task::GetPolicyDealType() const
{
    return m_policyDealType;
}

void Task::SetPolicyDealType(const int64_t& _policyDealType)
{
    m_policyDealType = _policyDealType;
    m_policyDealTypeHasBeenSet = true;
}

bool Task::PolicyDealTypeHasBeenSet() const
{
    return m_policyDealTypeHasBeenSet;
}

string Task::GetTaskPlanStartTime() const
{
    return m_taskPlanStartTime;
}

void Task::SetTaskPlanStartTime(const string& _taskPlanStartTime)
{
    m_taskPlanStartTime = _taskPlanStartTime;
    m_taskPlanStartTimeHasBeenSet = true;
}

bool Task::TaskPlanStartTimeHasBeenSet() const
{
    return m_taskPlanStartTimeHasBeenSet;
}

string Task::GetTaskPlanEndTime() const
{
    return m_taskPlanEndTime;
}

void Task::SetTaskPlanEndTime(const string& _taskPlanEndTime)
{
    m_taskPlanEndTime = _taskPlanEndTime;
    m_taskPlanEndTimeHasBeenSet = true;
}

bool Task::TaskPlanEndTimeHasBeenSet() const
{
    return m_taskPlanEndTimeHasBeenSet;
}

vector<TaskOrg> Task::GetTaskOrg() const
{
    return m_taskOrg;
}

void Task::SetTaskOrg(const vector<TaskOrg>& _taskOrg)
{
    m_taskOrg = _taskOrg;
    m_taskOrgHasBeenSet = true;
}

bool Task::TaskOrgHasBeenSet() const
{
    return m_taskOrgHasBeenSet;
}

string Task::GetTaskIssue() const
{
    return m_taskIssue;
}

void Task::SetTaskIssue(const string& _taskIssue)
{
    m_taskIssue = _taskIssue;
    m_taskIssueHasBeenSet = true;
}

bool Task::TaskIssueHasBeenSet() const
{
    return m_taskIssueHasBeenSet;
}

string Task::GetTaskRegionName() const
{
    return m_taskRegionName;
}

void Task::SetTaskRegionName(const string& _taskRegionName)
{
    m_taskRegionName = _taskRegionName;
    m_taskRegionNameHasBeenSet = true;
}

bool Task::TaskRegionNameHasBeenSet() const
{
    return m_taskRegionNameHasBeenSet;
}

string Task::GetTaskArchId() const
{
    return m_taskArchId;
}

void Task::SetTaskArchId(const string& _taskArchId)
{
    m_taskArchId = _taskArchId;
    m_taskArchIdHasBeenSet = true;
}

bool Task::TaskArchIdHasBeenSet() const
{
    return m_taskArchIdHasBeenSet;
}

