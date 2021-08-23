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

#include <tencentcloud/batch/v20170312/model/TaskInstanceView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

TaskInstanceView::TaskInstanceView() :
    m_taskInstanceIndexHasBeenSet(false),
    m_taskInstanceStateHasBeenSet(false),
    m_exitCodeHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_computeNodeInstanceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_runningTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_stateDetailedReasonHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstanceView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskInstanceIndex") && !value["TaskInstanceIndex"].IsNull())
    {
        if (!value["TaskInstanceIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.TaskInstanceIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceIndex = value["TaskInstanceIndex"].GetInt64();
        m_taskInstanceIndexHasBeenSet = true;
    }

    if (value.HasMember("TaskInstanceState") && !value["TaskInstanceState"].IsNull())
    {
        if (!value["TaskInstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.TaskInstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceState = string(value["TaskInstanceState"].GetString());
        m_taskInstanceStateHasBeenSet = true;
    }

    if (value.HasMember("ExitCode") && !value["ExitCode"].IsNull())
    {
        if (!value["ExitCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.ExitCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exitCode = value["ExitCode"].GetInt64();
        m_exitCodeHasBeenSet = true;
    }

    if (value.HasMember("StateReason") && !value["StateReason"].IsNull())
    {
        if (!value["StateReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.StateReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateReason = string(value["StateReason"].GetString());
        m_stateReasonHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeInstanceId") && !value["ComputeNodeInstanceId"].IsNull())
    {
        if (!value["ComputeNodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.ComputeNodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeInstanceId = string(value["ComputeNodeInstanceId"].GetString());
        m_computeNodeInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LaunchTime") && !value["LaunchTime"].IsNull())
    {
        if (!value["LaunchTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.LaunchTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_launchTime = string(value["LaunchTime"].GetString());
        m_launchTimeHasBeenSet = true;
    }

    if (value.HasMember("RunningTime") && !value["RunningTime"].IsNull())
    {
        if (!value["RunningTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.RunningTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runningTime = string(value["RunningTime"].GetString());
        m_runningTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }

    if (value.HasMember("StateDetailedReason") && !value["StateDetailedReason"].IsNull())
    {
        if (!value["StateDetailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceView.StateDetailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateDetailedReason = string(value["StateDetailedReason"].GetString());
        m_stateDetailedReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstanceView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskInstanceIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInstanceIndex, allocator);
    }

    if (m_taskInstanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskInstanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_exitCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitCode, allocator);
    }

    if (m_stateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateReason.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_launchTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runningTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runningTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stateDetailedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateDetailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateDetailedReason.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskInstanceView::GetTaskInstanceIndex() const
{
    return m_taskInstanceIndex;
}

void TaskInstanceView::SetTaskInstanceIndex(const int64_t& _taskInstanceIndex)
{
    m_taskInstanceIndex = _taskInstanceIndex;
    m_taskInstanceIndexHasBeenSet = true;
}

bool TaskInstanceView::TaskInstanceIndexHasBeenSet() const
{
    return m_taskInstanceIndexHasBeenSet;
}

string TaskInstanceView::GetTaskInstanceState() const
{
    return m_taskInstanceState;
}

void TaskInstanceView::SetTaskInstanceState(const string& _taskInstanceState)
{
    m_taskInstanceState = _taskInstanceState;
    m_taskInstanceStateHasBeenSet = true;
}

bool TaskInstanceView::TaskInstanceStateHasBeenSet() const
{
    return m_taskInstanceStateHasBeenSet;
}

int64_t TaskInstanceView::GetExitCode() const
{
    return m_exitCode;
}

void TaskInstanceView::SetExitCode(const int64_t& _exitCode)
{
    m_exitCode = _exitCode;
    m_exitCodeHasBeenSet = true;
}

bool TaskInstanceView::ExitCodeHasBeenSet() const
{
    return m_exitCodeHasBeenSet;
}

string TaskInstanceView::GetStateReason() const
{
    return m_stateReason;
}

void TaskInstanceView::SetStateReason(const string& _stateReason)
{
    m_stateReason = _stateReason;
    m_stateReasonHasBeenSet = true;
}

bool TaskInstanceView::StateReasonHasBeenSet() const
{
    return m_stateReasonHasBeenSet;
}

string TaskInstanceView::GetComputeNodeInstanceId() const
{
    return m_computeNodeInstanceId;
}

void TaskInstanceView::SetComputeNodeInstanceId(const string& _computeNodeInstanceId)
{
    m_computeNodeInstanceId = _computeNodeInstanceId;
    m_computeNodeInstanceIdHasBeenSet = true;
}

bool TaskInstanceView::ComputeNodeInstanceIdHasBeenSet() const
{
    return m_computeNodeInstanceIdHasBeenSet;
}

string TaskInstanceView::GetCreateTime() const
{
    return m_createTime;
}

void TaskInstanceView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskInstanceView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskInstanceView::GetLaunchTime() const
{
    return m_launchTime;
}

void TaskInstanceView::SetLaunchTime(const string& _launchTime)
{
    m_launchTime = _launchTime;
    m_launchTimeHasBeenSet = true;
}

bool TaskInstanceView::LaunchTimeHasBeenSet() const
{
    return m_launchTimeHasBeenSet;
}

string TaskInstanceView::GetRunningTime() const
{
    return m_runningTime;
}

void TaskInstanceView::SetRunningTime(const string& _runningTime)
{
    m_runningTime = _runningTime;
    m_runningTimeHasBeenSet = true;
}

bool TaskInstanceView::RunningTimeHasBeenSet() const
{
    return m_runningTimeHasBeenSet;
}

string TaskInstanceView::GetEndTime() const
{
    return m_endTime;
}

void TaskInstanceView::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TaskInstanceView::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

RedirectInfo TaskInstanceView::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void TaskInstanceView::SetRedirectInfo(const RedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool TaskInstanceView::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

string TaskInstanceView::GetStateDetailedReason() const
{
    return m_stateDetailedReason;
}

void TaskInstanceView::SetStateDetailedReason(const string& _stateDetailedReason)
{
    m_stateDetailedReason = _stateDetailedReason;
    m_stateDetailedReasonHasBeenSet = true;
}

bool TaskInstanceView::StateDetailedReasonHasBeenSet() const
{
    return m_stateDetailedReasonHasBeenSet;
}

