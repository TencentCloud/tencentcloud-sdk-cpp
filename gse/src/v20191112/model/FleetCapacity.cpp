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

#include <tencentcloud/gse/v20191112/model/FleetCapacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

FleetCapacity::FleetCapacity() :
    m_fleetIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_scalingIntervalHasBeenSet(false)
{
}

CoreInternalOutcome FleetCapacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FleetId") && !value["FleetId"].IsNull())
    {
        if (!value["FleetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetCapacity.FleetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetId = string(value["FleetId"].GetString());
        m_fleetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FleetCapacity.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCounts") && !value["InstanceCounts"].IsNull())
    {
        if (!value["InstanceCounts"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FleetCapacity.InstanceCounts` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceCounts.Deserialize(value["InstanceCounts"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceCountsHasBeenSet = true;
    }

    if (value.HasMember("ScalingInterval") && !value["ScalingInterval"].IsNull())
    {
        if (!value["ScalingInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FleetCapacity.ScalingInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scalingInterval = value["ScalingInterval"].GetUint64();
        m_scalingIntervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FleetCapacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceCounts.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scalingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scalingInterval, allocator);
    }

}


string FleetCapacity::GetFleetId() const
{
    return m_fleetId;
}

void FleetCapacity::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool FleetCapacity::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string FleetCapacity::GetInstanceType() const
{
    return m_instanceType;
}

void FleetCapacity::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool FleetCapacity::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

InstanceCounts FleetCapacity::GetInstanceCounts() const
{
    return m_instanceCounts;
}

void FleetCapacity::SetInstanceCounts(const InstanceCounts& _instanceCounts)
{
    m_instanceCounts = _instanceCounts;
    m_instanceCountsHasBeenSet = true;
}

bool FleetCapacity::InstanceCountsHasBeenSet() const
{
    return m_instanceCountsHasBeenSet;
}

uint64_t FleetCapacity::GetScalingInterval() const
{
    return m_scalingInterval;
}

void FleetCapacity::SetScalingInterval(const uint64_t& _scalingInterval)
{
    m_scalingInterval = _scalingInterval;
    m_scalingIntervalHasBeenSet = true;
}

bool FleetCapacity::ScalingIntervalHasBeenSet() const
{
    return m_scalingIntervalHasBeenSet;
}

