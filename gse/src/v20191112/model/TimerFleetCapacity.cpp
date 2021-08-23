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

#include <tencentcloud/gse/v20191112/model/TimerFleetCapacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

TimerFleetCapacity::TimerFleetCapacity() :
    m_fleetIdHasBeenSet(false),
    m_desiredInstancesHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_scalingIntervalHasBeenSet(false),
    m_scalingTypeHasBeenSet(false),
    m_targetConfigurationHasBeenSet(false)
{
}

CoreInternalOutcome TimerFleetCapacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("DesiredInstances") && !value["DesiredInstances"].IsNull())
    {
        if (!value["DesiredInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.DesiredInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredInstances = value["DesiredInstances"].GetInt64();
        m_desiredInstancesHasBeenSet = true;
    }

    if (value.HasMember("MinSize") && !value["MinSize"].IsNull())
    {
        if (!value["MinSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.MinSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minSize = value["MinSize"].GetInt64();
        m_minSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("ScalingInterval") && !value["ScalingInterval"].IsNull())
    {
        if (!value["ScalingInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.ScalingInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalingInterval = value["ScalingInterval"].GetInt64();
        m_scalingIntervalHasBeenSet = true;
    }

    if (value.HasMember("ScalingType") && !value["ScalingType"].IsNull())
    {
        if (!value["ScalingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.ScalingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scalingType = value["ScalingType"].GetInt64();
        m_scalingTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetConfiguration") && !value["TargetConfiguration"].IsNull())
    {
        if (!value["TargetConfiguration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TimerFleetCapacity.TargetConfiguration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetConfiguration.Deserialize(value["TargetConfiguration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetConfigurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimerFleetCapacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredInstances, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_scalingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalingInterval, allocator);
    }

    if (m_scalingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalingType, allocator);
    }

    if (m_targetConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConfiguration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetConfiguration.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TimerFleetCapacity::GetFleetId() const
{
    return m_fleetId;
}

void TimerFleetCapacity::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool TimerFleetCapacity::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

int64_t TimerFleetCapacity::GetDesiredInstances() const
{
    return m_desiredInstances;
}

void TimerFleetCapacity::SetDesiredInstances(const int64_t& _desiredInstances)
{
    m_desiredInstances = _desiredInstances;
    m_desiredInstancesHasBeenSet = true;
}

bool TimerFleetCapacity::DesiredInstancesHasBeenSet() const
{
    return m_desiredInstancesHasBeenSet;
}

int64_t TimerFleetCapacity::GetMinSize() const
{
    return m_minSize;
}

void TimerFleetCapacity::SetMinSize(const int64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool TimerFleetCapacity::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

int64_t TimerFleetCapacity::GetMaxSize() const
{
    return m_maxSize;
}

void TimerFleetCapacity::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool TimerFleetCapacity::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

int64_t TimerFleetCapacity::GetScalingInterval() const
{
    return m_scalingInterval;
}

void TimerFleetCapacity::SetScalingInterval(const int64_t& _scalingInterval)
{
    m_scalingInterval = _scalingInterval;
    m_scalingIntervalHasBeenSet = true;
}

bool TimerFleetCapacity::ScalingIntervalHasBeenSet() const
{
    return m_scalingIntervalHasBeenSet;
}

int64_t TimerFleetCapacity::GetScalingType() const
{
    return m_scalingType;
}

void TimerFleetCapacity::SetScalingType(const int64_t& _scalingType)
{
    m_scalingType = _scalingType;
    m_scalingTypeHasBeenSet = true;
}

bool TimerFleetCapacity::ScalingTypeHasBeenSet() const
{
    return m_scalingTypeHasBeenSet;
}

TargetConfiguration TimerFleetCapacity::GetTargetConfiguration() const
{
    return m_targetConfiguration;
}

void TimerFleetCapacity::SetTargetConfiguration(const TargetConfiguration& _targetConfiguration)
{
    m_targetConfiguration = _targetConfiguration;
    m_targetConfigurationHasBeenSet = true;
}

bool TimerFleetCapacity::TargetConfigurationHasBeenSet() const
{
    return m_targetConfigurationHasBeenSet;
}

