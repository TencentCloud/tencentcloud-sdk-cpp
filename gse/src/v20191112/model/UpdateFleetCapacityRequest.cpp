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

#include <tencentcloud/gse/v20191112/model/UpdateFleetCapacityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateFleetCapacityRequest::UpdateFleetCapacityRequest() :
    m_fleetIdHasBeenSet(false),
    m_desiredInstancesHasBeenSet(false),
    m_minSizeHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_scalingIntervalHasBeenSet(false)
{
}

string UpdateFleetCapacityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_desiredInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredInstances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredInstances, allocator);
    }

    if (m_minSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minSize, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_scalingIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scalingInterval, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateFleetCapacityRequest::GetFleetId() const
{
    return m_fleetId;
}

void UpdateFleetCapacityRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool UpdateFleetCapacityRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

uint64_t UpdateFleetCapacityRequest::GetDesiredInstances() const
{
    return m_desiredInstances;
}

void UpdateFleetCapacityRequest::SetDesiredInstances(const uint64_t& _desiredInstances)
{
    m_desiredInstances = _desiredInstances;
    m_desiredInstancesHasBeenSet = true;
}

bool UpdateFleetCapacityRequest::DesiredInstancesHasBeenSet() const
{
    return m_desiredInstancesHasBeenSet;
}

uint64_t UpdateFleetCapacityRequest::GetMinSize() const
{
    return m_minSize;
}

void UpdateFleetCapacityRequest::SetMinSize(const uint64_t& _minSize)
{
    m_minSize = _minSize;
    m_minSizeHasBeenSet = true;
}

bool UpdateFleetCapacityRequest::MinSizeHasBeenSet() const
{
    return m_minSizeHasBeenSet;
}

uint64_t UpdateFleetCapacityRequest::GetMaxSize() const
{
    return m_maxSize;
}

void UpdateFleetCapacityRequest::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool UpdateFleetCapacityRequest::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

uint64_t UpdateFleetCapacityRequest::GetScalingInterval() const
{
    return m_scalingInterval;
}

void UpdateFleetCapacityRequest::SetScalingInterval(const uint64_t& _scalingInterval)
{
    m_scalingInterval = _scalingInterval;
    m_scalingIntervalHasBeenSet = true;
}

bool UpdateFleetCapacityRequest::ScalingIntervalHasBeenSet() const
{
    return m_scalingIntervalHasBeenSet;
}


