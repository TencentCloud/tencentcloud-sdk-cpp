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

#include <tencentcloud/cfg/v20210820/model/TaskGroupAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TaskGroupAction::TaskGroupAction() :
    m_taskGroupActionIdHasBeenSet(false),
    m_taskGroupInstancesHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_taskGroupActionOrderHasBeenSet(false),
    m_taskGroupActionGeneralConfigurationHasBeenSet(false),
    m_taskGroupActionCustomConfigurationHasBeenSet(false),
    m_taskGroupActionStatusHasBeenSet(false),
    m_taskGroupActionCreateTimeHasBeenSet(false),
    m_taskGroupActionUpdateTimeHasBeenSet(false),
    m_actionTitleHasBeenSet(false),
    m_taskGroupActionStatusTypeHasBeenSet(false),
    m_taskGroupActionRandomIdHasBeenSet(false),
    m_taskGroupActionRecoverIdHasBeenSet(false),
    m_taskGroupActionExecuteIdHasBeenSet(false),
    m_actionApiTypeHasBeenSet(false),
    m_actionAttributeHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_isExecuteRedoHasBeenSet(false),
    m_actionRiskHasBeenSet(false),
    m_taskGroupActionExecuteTimeHasBeenSet(false),
    m_taskGroupActionStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskGroupAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskGroupActionId") && !value["TaskGroupActionId"].IsNull())
    {
        if (!value["TaskGroupActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionId = value["TaskGroupActionId"].GetInt64();
        m_taskGroupActionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupInstances") && !value["TaskGroupInstances"].IsNull())
    {
        if (!value["TaskGroupInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskGroupInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskGroupInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskGroupInstances.push_back(item);
        }
        m_taskGroupInstancesHasBeenSet = true;
    }

    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = value["ActionId"].GetInt64();
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionOrder") && !value["TaskGroupActionOrder"].IsNull())
    {
        if (!value["TaskGroupActionOrder"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionOrder` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionOrder = value["TaskGroupActionOrder"].GetInt64();
        m_taskGroupActionOrderHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionGeneralConfiguration") && !value["TaskGroupActionGeneralConfiguration"].IsNull())
    {
        if (!value["TaskGroupActionGeneralConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionGeneralConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionGeneralConfiguration = string(value["TaskGroupActionGeneralConfiguration"].GetString());
        m_taskGroupActionGeneralConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionCustomConfiguration") && !value["TaskGroupActionCustomConfiguration"].IsNull())
    {
        if (!value["TaskGroupActionCustomConfiguration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionCustomConfiguration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionCustomConfiguration = string(value["TaskGroupActionCustomConfiguration"].GetString());
        m_taskGroupActionCustomConfigurationHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionStatus") && !value["TaskGroupActionStatus"].IsNull())
    {
        if (!value["TaskGroupActionStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionStatus = value["TaskGroupActionStatus"].GetInt64();
        m_taskGroupActionStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionCreateTime") && !value["TaskGroupActionCreateTime"].IsNull())
    {
        if (!value["TaskGroupActionCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionCreateTime = string(value["TaskGroupActionCreateTime"].GetString());
        m_taskGroupActionCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionUpdateTime") && !value["TaskGroupActionUpdateTime"].IsNull())
    {
        if (!value["TaskGroupActionUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionUpdateTime = string(value["TaskGroupActionUpdateTime"].GetString());
        m_taskGroupActionUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ActionTitle") && !value["ActionTitle"].IsNull())
    {
        if (!value["ActionTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTitle = string(value["ActionTitle"].GetString());
        m_actionTitleHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionStatusType") && !value["TaskGroupActionStatusType"].IsNull())
    {
        if (!value["TaskGroupActionStatusType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionStatusType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionStatusType = value["TaskGroupActionStatusType"].GetInt64();
        m_taskGroupActionStatusTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionRandomId") && !value["TaskGroupActionRandomId"].IsNull())
    {
        if (!value["TaskGroupActionRandomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionRandomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionRandomId = value["TaskGroupActionRandomId"].GetInt64();
        m_taskGroupActionRandomIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionRecoverId") && !value["TaskGroupActionRecoverId"].IsNull())
    {
        if (!value["TaskGroupActionRecoverId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionRecoverId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionRecoverId = value["TaskGroupActionRecoverId"].GetInt64();
        m_taskGroupActionRecoverIdHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionExecuteId") && !value["TaskGroupActionExecuteId"].IsNull())
    {
        if (!value["TaskGroupActionExecuteId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionExecuteId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionExecuteId = value["TaskGroupActionExecuteId"].GetInt64();
        m_taskGroupActionExecuteIdHasBeenSet = true;
    }

    if (value.HasMember("ActionApiType") && !value["ActionApiType"].IsNull())
    {
        if (!value["ActionApiType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionApiType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionApiType = value["ActionApiType"].GetInt64();
        m_actionApiTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionAttribute") && !value["ActionAttribute"].IsNull())
    {
        if (!value["ActionAttribute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionAttribute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionAttribute = value["ActionAttribute"].GetInt64();
        m_actionAttributeHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("IsExecuteRedo") && !value["IsExecuteRedo"].IsNull())
    {
        if (!value["IsExecuteRedo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.IsExecuteRedo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExecuteRedo = value["IsExecuteRedo"].GetBool();
        m_isExecuteRedoHasBeenSet = true;
    }

    if (value.HasMember("ActionRisk") && !value["ActionRisk"].IsNull())
    {
        if (!value["ActionRisk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.ActionRisk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionRisk = string(value["ActionRisk"].GetString());
        m_actionRiskHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionExecuteTime") && !value["TaskGroupActionExecuteTime"].IsNull())
    {
        if (!value["TaskGroupActionExecuteTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionExecuteTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionExecuteTime = value["TaskGroupActionExecuteTime"].GetInt64();
        m_taskGroupActionExecuteTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskGroupActionStartTime") && !value["TaskGroupActionStartTime"].IsNull())
    {
        if (!value["TaskGroupActionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskGroupAction.TaskGroupActionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskGroupActionStartTime = string(value["TaskGroupActionStartTime"].GetString());
        m_taskGroupActionStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskGroupAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskGroupActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionId, allocator);
    }

    if (m_taskGroupInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskGroupInstances.begin(); itr != m_taskGroupInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

    if (m_taskGroupActionOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionOrder, allocator);
    }

    if (m_taskGroupActionGeneralConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionGeneralConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionGeneralConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionCustomConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionCustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionCustomConfiguration.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionStatus, allocator);
    }

    if (m_taskGroupActionCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionStatusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionStatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionStatusType, allocator);
    }

    if (m_taskGroupActionRandomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionRandomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionRandomId, allocator);
    }

    if (m_taskGroupActionRecoverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionRecoverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionRecoverId, allocator);
    }

    if (m_taskGroupActionExecuteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionExecuteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionExecuteId, allocator);
    }

    if (m_actionApiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionApiType, allocator);
    }

    if (m_actionAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionAttribute, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_isExecuteRedoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExecuteRedo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExecuteRedo, allocator);
    }

    if (m_actionRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionRisk.c_str(), allocator).Move(), allocator);
    }

    if (m_taskGroupActionExecuteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskGroupActionExecuteTime, allocator);
    }

    if (m_taskGroupActionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskGroupActionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskGroupActionStartTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskGroupAction::GetTaskGroupActionId() const
{
    return m_taskGroupActionId;
}

void TaskGroupAction::SetTaskGroupActionId(const int64_t& _taskGroupActionId)
{
    m_taskGroupActionId = _taskGroupActionId;
    m_taskGroupActionIdHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionIdHasBeenSet() const
{
    return m_taskGroupActionIdHasBeenSet;
}

vector<TaskGroupInstance> TaskGroupAction::GetTaskGroupInstances() const
{
    return m_taskGroupInstances;
}

void TaskGroupAction::SetTaskGroupInstances(const vector<TaskGroupInstance>& _taskGroupInstances)
{
    m_taskGroupInstances = _taskGroupInstances;
    m_taskGroupInstancesHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupInstancesHasBeenSet() const
{
    return m_taskGroupInstancesHasBeenSet;
}

int64_t TaskGroupAction::GetActionId() const
{
    return m_actionId;
}

void TaskGroupAction::SetActionId(const int64_t& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool TaskGroupAction::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionOrder() const
{
    return m_taskGroupActionOrder;
}

void TaskGroupAction::SetTaskGroupActionOrder(const int64_t& _taskGroupActionOrder)
{
    m_taskGroupActionOrder = _taskGroupActionOrder;
    m_taskGroupActionOrderHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionOrderHasBeenSet() const
{
    return m_taskGroupActionOrderHasBeenSet;
}

string TaskGroupAction::GetTaskGroupActionGeneralConfiguration() const
{
    return m_taskGroupActionGeneralConfiguration;
}

void TaskGroupAction::SetTaskGroupActionGeneralConfiguration(const string& _taskGroupActionGeneralConfiguration)
{
    m_taskGroupActionGeneralConfiguration = _taskGroupActionGeneralConfiguration;
    m_taskGroupActionGeneralConfigurationHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionGeneralConfigurationHasBeenSet() const
{
    return m_taskGroupActionGeneralConfigurationHasBeenSet;
}

string TaskGroupAction::GetTaskGroupActionCustomConfiguration() const
{
    return m_taskGroupActionCustomConfiguration;
}

void TaskGroupAction::SetTaskGroupActionCustomConfiguration(const string& _taskGroupActionCustomConfiguration)
{
    m_taskGroupActionCustomConfiguration = _taskGroupActionCustomConfiguration;
    m_taskGroupActionCustomConfigurationHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionCustomConfigurationHasBeenSet() const
{
    return m_taskGroupActionCustomConfigurationHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionStatus() const
{
    return m_taskGroupActionStatus;
}

void TaskGroupAction::SetTaskGroupActionStatus(const int64_t& _taskGroupActionStatus)
{
    m_taskGroupActionStatus = _taskGroupActionStatus;
    m_taskGroupActionStatusHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionStatusHasBeenSet() const
{
    return m_taskGroupActionStatusHasBeenSet;
}

string TaskGroupAction::GetTaskGroupActionCreateTime() const
{
    return m_taskGroupActionCreateTime;
}

void TaskGroupAction::SetTaskGroupActionCreateTime(const string& _taskGroupActionCreateTime)
{
    m_taskGroupActionCreateTime = _taskGroupActionCreateTime;
    m_taskGroupActionCreateTimeHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionCreateTimeHasBeenSet() const
{
    return m_taskGroupActionCreateTimeHasBeenSet;
}

string TaskGroupAction::GetTaskGroupActionUpdateTime() const
{
    return m_taskGroupActionUpdateTime;
}

void TaskGroupAction::SetTaskGroupActionUpdateTime(const string& _taskGroupActionUpdateTime)
{
    m_taskGroupActionUpdateTime = _taskGroupActionUpdateTime;
    m_taskGroupActionUpdateTimeHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionUpdateTimeHasBeenSet() const
{
    return m_taskGroupActionUpdateTimeHasBeenSet;
}

string TaskGroupAction::GetActionTitle() const
{
    return m_actionTitle;
}

void TaskGroupAction::SetActionTitle(const string& _actionTitle)
{
    m_actionTitle = _actionTitle;
    m_actionTitleHasBeenSet = true;
}

bool TaskGroupAction::ActionTitleHasBeenSet() const
{
    return m_actionTitleHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionStatusType() const
{
    return m_taskGroupActionStatusType;
}

void TaskGroupAction::SetTaskGroupActionStatusType(const int64_t& _taskGroupActionStatusType)
{
    m_taskGroupActionStatusType = _taskGroupActionStatusType;
    m_taskGroupActionStatusTypeHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionStatusTypeHasBeenSet() const
{
    return m_taskGroupActionStatusTypeHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionRandomId() const
{
    return m_taskGroupActionRandomId;
}

void TaskGroupAction::SetTaskGroupActionRandomId(const int64_t& _taskGroupActionRandomId)
{
    m_taskGroupActionRandomId = _taskGroupActionRandomId;
    m_taskGroupActionRandomIdHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionRandomIdHasBeenSet() const
{
    return m_taskGroupActionRandomIdHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionRecoverId() const
{
    return m_taskGroupActionRecoverId;
}

void TaskGroupAction::SetTaskGroupActionRecoverId(const int64_t& _taskGroupActionRecoverId)
{
    m_taskGroupActionRecoverId = _taskGroupActionRecoverId;
    m_taskGroupActionRecoverIdHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionRecoverIdHasBeenSet() const
{
    return m_taskGroupActionRecoverIdHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionExecuteId() const
{
    return m_taskGroupActionExecuteId;
}

void TaskGroupAction::SetTaskGroupActionExecuteId(const int64_t& _taskGroupActionExecuteId)
{
    m_taskGroupActionExecuteId = _taskGroupActionExecuteId;
    m_taskGroupActionExecuteIdHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionExecuteIdHasBeenSet() const
{
    return m_taskGroupActionExecuteIdHasBeenSet;
}

int64_t TaskGroupAction::GetActionApiType() const
{
    return m_actionApiType;
}

void TaskGroupAction::SetActionApiType(const int64_t& _actionApiType)
{
    m_actionApiType = _actionApiType;
    m_actionApiTypeHasBeenSet = true;
}

bool TaskGroupAction::ActionApiTypeHasBeenSet() const
{
    return m_actionApiTypeHasBeenSet;
}

int64_t TaskGroupAction::GetActionAttribute() const
{
    return m_actionAttribute;
}

void TaskGroupAction::SetActionAttribute(const int64_t& _actionAttribute)
{
    m_actionAttribute = _actionAttribute;
    m_actionAttributeHasBeenSet = true;
}

bool TaskGroupAction::ActionAttributeHasBeenSet() const
{
    return m_actionAttributeHasBeenSet;
}

string TaskGroupAction::GetActionType() const
{
    return m_actionType;
}

void TaskGroupAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool TaskGroupAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

bool TaskGroupAction::GetIsExecuteRedo() const
{
    return m_isExecuteRedo;
}

void TaskGroupAction::SetIsExecuteRedo(const bool& _isExecuteRedo)
{
    m_isExecuteRedo = _isExecuteRedo;
    m_isExecuteRedoHasBeenSet = true;
}

bool TaskGroupAction::IsExecuteRedoHasBeenSet() const
{
    return m_isExecuteRedoHasBeenSet;
}

string TaskGroupAction::GetActionRisk() const
{
    return m_actionRisk;
}

void TaskGroupAction::SetActionRisk(const string& _actionRisk)
{
    m_actionRisk = _actionRisk;
    m_actionRiskHasBeenSet = true;
}

bool TaskGroupAction::ActionRiskHasBeenSet() const
{
    return m_actionRiskHasBeenSet;
}

int64_t TaskGroupAction::GetTaskGroupActionExecuteTime() const
{
    return m_taskGroupActionExecuteTime;
}

void TaskGroupAction::SetTaskGroupActionExecuteTime(const int64_t& _taskGroupActionExecuteTime)
{
    m_taskGroupActionExecuteTime = _taskGroupActionExecuteTime;
    m_taskGroupActionExecuteTimeHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionExecuteTimeHasBeenSet() const
{
    return m_taskGroupActionExecuteTimeHasBeenSet;
}

string TaskGroupAction::GetTaskGroupActionStartTime() const
{
    return m_taskGroupActionStartTime;
}

void TaskGroupAction::SetTaskGroupActionStartTime(const string& _taskGroupActionStartTime)
{
    m_taskGroupActionStartTime = _taskGroupActionStartTime;
    m_taskGroupActionStartTimeHasBeenSet = true;
}

bool TaskGroupAction::TaskGroupActionStartTimeHasBeenSet() const
{
    return m_taskGroupActionStartTimeHasBeenSet;
}

