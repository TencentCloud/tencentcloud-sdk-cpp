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

#include <tencentcloud/wedata/v20210820/model/TaskParentSchedulerDependency.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskParentSchedulerDependency::TaskParentSchedulerDependency() :
    m_parentIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_normalizedJobStartTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_subordinateCyclicConfigHasBeenSet(false),
    m_pollingNullStrategyHasBeenSet(false),
    m_dependConfTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_mainCyclicConfigHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskParentSchedulerDependency::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("NormalizedJobStartTime") && !value["NormalizedJobStartTime"].IsNull())
    {
        if (!value["NormalizedJobStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.NormalizedJobStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normalizedJobStartTime = string(value["NormalizedJobStartTime"].GetString());
        m_normalizedJobStartTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("SubordinateCyclicConfig") && !value["SubordinateCyclicConfig"].IsNull())
    {
        if (!value["SubordinateCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.SubordinateCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subordinateCyclicConfig = string(value["SubordinateCyclicConfig"].GetString());
        m_subordinateCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("PollingNullStrategy") && !value["PollingNullStrategy"].IsNull())
    {
        if (!value["PollingNullStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.PollingNullStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pollingNullStrategy = string(value["PollingNullStrategy"].GetString());
        m_pollingNullStrategyHasBeenSet = true;
    }

    if (value.HasMember("DependConfType") && !value["DependConfType"].IsNull())
    {
        if (!value["DependConfType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.DependConfType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dependConfType = string(value["DependConfType"].GetString());
        m_dependConfTypeHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.Offset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offset = string(value["Offset"].GetString());
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("MainCyclicConfig") && !value["MainCyclicConfig"].IsNull())
    {
        if (!value["MainCyclicConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.MainCyclicConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainCyclicConfig = string(value["MainCyclicConfig"].GetString());
        m_mainCyclicConfigHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStartTime") && !value["ExecutionStartTime"].IsNull())
    {
        if (!value["ExecutionStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.ExecutionStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionStartTime = string(value["ExecutionStartTime"].GetString());
        m_executionStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionEndTime") && !value["ExecutionEndTime"].IsNull())
    {
        if (!value["ExecutionEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskParentSchedulerDependency.ExecutionEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionEndTime = string(value["ExecutionEndTime"].GetString());
        m_executionEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskParentSchedulerDependency::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_normalizedJobStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalizedJobStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normalizedJobStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_subordinateCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubordinateCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subordinateCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_pollingNullStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingNullStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pollingNullStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_dependConfTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependConfType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dependConfType.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_mainCyclicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainCyclicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainCyclicConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }

}


string TaskParentSchedulerDependency::GetParentId() const
{
    return m_parentId;
}

void TaskParentSchedulerDependency::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool TaskParentSchedulerDependency::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string TaskParentSchedulerDependency::GetStartTime() const
{
    return m_startTime;
}

void TaskParentSchedulerDependency::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TaskParentSchedulerDependency::GetEndTime() const
{
    return m_endTime;
}

void TaskParentSchedulerDependency::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TaskParentSchedulerDependency::GetCycleType() const
{
    return m_cycleType;
}

void TaskParentSchedulerDependency::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t TaskParentSchedulerDependency::GetCycleStep() const
{
    return m_cycleStep;
}

void TaskParentSchedulerDependency::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool TaskParentSchedulerDependency::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string TaskParentSchedulerDependency::GetNormalizedJobStartTime() const
{
    return m_normalizedJobStartTime;
}

void TaskParentSchedulerDependency::SetNormalizedJobStartTime(const string& _normalizedJobStartTime)
{
    m_normalizedJobStartTime = _normalizedJobStartTime;
    m_normalizedJobStartTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::NormalizedJobStartTimeHasBeenSet() const
{
    return m_normalizedJobStartTimeHasBeenSet;
}

string TaskParentSchedulerDependency::GetTaskAction() const
{
    return m_taskAction;
}

void TaskParentSchedulerDependency::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool TaskParentSchedulerDependency::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string TaskParentSchedulerDependency::GetSubordinateCyclicConfig() const
{
    return m_subordinateCyclicConfig;
}

void TaskParentSchedulerDependency::SetSubordinateCyclicConfig(const string& _subordinateCyclicConfig)
{
    m_subordinateCyclicConfig = _subordinateCyclicConfig;
    m_subordinateCyclicConfigHasBeenSet = true;
}

bool TaskParentSchedulerDependency::SubordinateCyclicConfigHasBeenSet() const
{
    return m_subordinateCyclicConfigHasBeenSet;
}

string TaskParentSchedulerDependency::GetPollingNullStrategy() const
{
    return m_pollingNullStrategy;
}

void TaskParentSchedulerDependency::SetPollingNullStrategy(const string& _pollingNullStrategy)
{
    m_pollingNullStrategy = _pollingNullStrategy;
    m_pollingNullStrategyHasBeenSet = true;
}

bool TaskParentSchedulerDependency::PollingNullStrategyHasBeenSet() const
{
    return m_pollingNullStrategyHasBeenSet;
}

string TaskParentSchedulerDependency::GetDependConfType() const
{
    return m_dependConfType;
}

void TaskParentSchedulerDependency::SetDependConfType(const string& _dependConfType)
{
    m_dependConfType = _dependConfType;
    m_dependConfTypeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::DependConfTypeHasBeenSet() const
{
    return m_dependConfTypeHasBeenSet;
}

string TaskParentSchedulerDependency::GetOffset() const
{
    return m_offset;
}

void TaskParentSchedulerDependency::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool TaskParentSchedulerDependency::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string TaskParentSchedulerDependency::GetMainCyclicConfig() const
{
    return m_mainCyclicConfig;
}

void TaskParentSchedulerDependency::SetMainCyclicConfig(const string& _mainCyclicConfig)
{
    m_mainCyclicConfig = _mainCyclicConfig;
    m_mainCyclicConfigHasBeenSet = true;
}

bool TaskParentSchedulerDependency::MainCyclicConfigHasBeenSet() const
{
    return m_mainCyclicConfigHasBeenSet;
}

int64_t TaskParentSchedulerDependency::GetDelayTime() const
{
    return m_delayTime;
}

void TaskParentSchedulerDependency::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string TaskParentSchedulerDependency::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void TaskParentSchedulerDependency::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string TaskParentSchedulerDependency::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void TaskParentSchedulerDependency::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool TaskParentSchedulerDependency::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}

