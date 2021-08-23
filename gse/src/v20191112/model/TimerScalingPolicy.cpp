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

#include <tencentcloud/gse/v20191112/model/TimerScalingPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

TimerScalingPolicy::TimerScalingPolicy() :
    m_timerIdHasBeenSet(false),
    m_timerNameHasBeenSet(false),
    m_timerStatusHasBeenSet(false),
    m_timerFleetCapacityHasBeenSet(false),
    m_timerConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome TimerScalingPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimerId") && !value["TimerId"].IsNull())
    {
        if (!value["TimerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScalingPolicy.TimerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerId = string(value["TimerId"].GetString());
        m_timerIdHasBeenSet = true;
    }

    if (value.HasMember("TimerName") && !value["TimerName"].IsNull())
    {
        if (!value["TimerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScalingPolicy.TimerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timerName = string(value["TimerName"].GetString());
        m_timerNameHasBeenSet = true;
    }

    if (value.HasMember("TimerStatus") && !value["TimerStatus"].IsNull())
    {
        if (!value["TimerStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScalingPolicy.TimerStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timerStatus = value["TimerStatus"].GetInt64();
        m_timerStatusHasBeenSet = true;
    }

    if (value.HasMember("TimerFleetCapacity") && !value["TimerFleetCapacity"].IsNull())
    {
        if (!value["TimerFleetCapacity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScalingPolicy.TimerFleetCapacity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timerFleetCapacity.Deserialize(value["TimerFleetCapacity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timerFleetCapacityHasBeenSet = true;
    }

    if (value.HasMember("TimerConfiguration") && !value["TimerConfiguration"].IsNull())
    {
        if (!value["TimerConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerScalingPolicy.TimerConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timerConfiguration.Deserialize(value["TimerConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timerConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerScalingPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

    if (m_timerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timerName.c_str(), allocator).Move(), allocator);
    }

    if (m_timerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timerStatus, allocator);
    }

    if (m_timerFleetCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerFleetCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timerFleetCapacity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timerConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timerConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TimerScalingPolicy::GetTimerId() const
{
    return m_timerId;
}

void TimerScalingPolicy::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool TimerScalingPolicy::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}

string TimerScalingPolicy::GetTimerName() const
{
    return m_timerName;
}

void TimerScalingPolicy::SetTimerName(const string& _timerName)
{
    m_timerName = _timerName;
    m_timerNameHasBeenSet = true;
}

bool TimerScalingPolicy::TimerNameHasBeenSet() const
{
    return m_timerNameHasBeenSet;
}

int64_t TimerScalingPolicy::GetTimerStatus() const
{
    return m_timerStatus;
}

void TimerScalingPolicy::SetTimerStatus(const int64_t& _timerStatus)
{
    m_timerStatus = _timerStatus;
    m_timerStatusHasBeenSet = true;
}

bool TimerScalingPolicy::TimerStatusHasBeenSet() const
{
    return m_timerStatusHasBeenSet;
}

TimerFleetCapacity TimerScalingPolicy::GetTimerFleetCapacity() const
{
    return m_timerFleetCapacity;
}

void TimerScalingPolicy::SetTimerFleetCapacity(const TimerFleetCapacity& _timerFleetCapacity)
{
    m_timerFleetCapacity = _timerFleetCapacity;
    m_timerFleetCapacityHasBeenSet = true;
}

bool TimerScalingPolicy::TimerFleetCapacityHasBeenSet() const
{
    return m_timerFleetCapacityHasBeenSet;
}

TimerConfiguration TimerScalingPolicy::GetTimerConfiguration() const
{
    return m_timerConfiguration;
}

void TimerScalingPolicy::SetTimerConfiguration(const TimerConfiguration& _timerConfiguration)
{
    m_timerConfiguration = _timerConfiguration;
    m_timerConfigurationHasBeenSet = true;
}

bool TimerScalingPolicy::TimerConfigurationHasBeenSet() const
{
    return m_timerConfigurationHasBeenSet;
}

