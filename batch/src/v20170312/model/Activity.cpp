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

#include <tencentcloud/batch/v20170312/model/Activity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

Activity::Activity() :
    m_activityIdHasBeenSet(false),
    m_computeNodeIdHasBeenSet(false),
    m_computeNodeActivityTypeHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_activityStateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome Activity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeId") && !value["ComputeNodeId"].IsNull())
    {
        if (!value["ComputeNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ComputeNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeId = string(value["ComputeNodeId"].GetString());
        m_computeNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ComputeNodeActivityType") && !value["ComputeNodeActivityType"].IsNull())
    {
        if (!value["ComputeNodeActivityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ComputeNodeActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeActivityType = string(value["ComputeNodeActivityType"].GetString());
        m_computeNodeActivityTypeHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("Cause") && !value["Cause"].IsNull())
    {
        if (!value["Cause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.Cause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cause = string(value["Cause"].GetString());
        m_causeHasBeenSet = true;
    }

    if (value.HasMember("ActivityState") && !value["ActivityState"].IsNull())
    {
        if (!value["ActivityState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.ActivityState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityState = string(value["ActivityState"].GetString());
        m_activityStateHasBeenSet = true;
    }

    if (value.HasMember("StateReason") && !value["StateReason"].IsNull())
    {
        if (!value["StateReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StateReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateReason = string(value["StateReason"].GetString());
        m_stateReasonHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Activity.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Activity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeActivityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeNodeActivityType.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_causeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cause.c_str(), allocator).Move(), allocator);
    }

    if (m_activityStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activityState.c_str(), allocator).Move(), allocator);
    }

    if (m_stateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateReason.c_str(), allocator).Move(), allocator);
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

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string Activity::GetActivityId() const
{
    return m_activityId;
}

void Activity::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool Activity::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string Activity::GetComputeNodeId() const
{
    return m_computeNodeId;
}

void Activity::SetComputeNodeId(const string& _computeNodeId)
{
    m_computeNodeId = _computeNodeId;
    m_computeNodeIdHasBeenSet = true;
}

bool Activity::ComputeNodeIdHasBeenSet() const
{
    return m_computeNodeIdHasBeenSet;
}

string Activity::GetComputeNodeActivityType() const
{
    return m_computeNodeActivityType;
}

void Activity::SetComputeNodeActivityType(const string& _computeNodeActivityType)
{
    m_computeNodeActivityType = _computeNodeActivityType;
    m_computeNodeActivityTypeHasBeenSet = true;
}

bool Activity::ComputeNodeActivityTypeHasBeenSet() const
{
    return m_computeNodeActivityTypeHasBeenSet;
}

string Activity::GetEnvId() const
{
    return m_envId;
}

void Activity::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool Activity::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string Activity::GetCause() const
{
    return m_cause;
}

void Activity::SetCause(const string& _cause)
{
    m_cause = _cause;
    m_causeHasBeenSet = true;
}

bool Activity::CauseHasBeenSet() const
{
    return m_causeHasBeenSet;
}

string Activity::GetActivityState() const
{
    return m_activityState;
}

void Activity::SetActivityState(const string& _activityState)
{
    m_activityState = _activityState;
    m_activityStateHasBeenSet = true;
}

bool Activity::ActivityStateHasBeenSet() const
{
    return m_activityStateHasBeenSet;
}

string Activity::GetStateReason() const
{
    return m_stateReason;
}

void Activity::SetStateReason(const string& _stateReason)
{
    m_stateReason = _stateReason;
    m_stateReasonHasBeenSet = true;
}

bool Activity::StateReasonHasBeenSet() const
{
    return m_stateReasonHasBeenSet;
}

string Activity::GetStartTime() const
{
    return m_startTime;
}

void Activity::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Activity::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Activity::GetEndTime() const
{
    return m_endTime;
}

void Activity::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Activity::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Activity::GetInstanceId() const
{
    return m_instanceId;
}

void Activity::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Activity::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

