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

#include <tencentcloud/gse/v20191112/model/DeleteTimerScalingPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DeleteTimerScalingPolicyRequest::DeleteTimerScalingPolicyRequest() :
    m_timerIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_timerNameHasBeenSet(false)
{
}

string DeleteTimerScalingPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerId.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fleetId.c_str(), allocator).Move(), allocator);
    }

    if (m_timerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTimerScalingPolicyRequest::GetTimerId() const
{
    return m_timerId;
}

void DeleteTimerScalingPolicyRequest::SetTimerId(const string& _timerId)
{
    m_timerId = _timerId;
    m_timerIdHasBeenSet = true;
}

bool DeleteTimerScalingPolicyRequest::TimerIdHasBeenSet() const
{
    return m_timerIdHasBeenSet;
}

string DeleteTimerScalingPolicyRequest::GetFleetId() const
{
    return m_fleetId;
}

void DeleteTimerScalingPolicyRequest::SetFleetId(const string& _fleetId)
{
    m_fleetId = _fleetId;
    m_fleetIdHasBeenSet = true;
}

bool DeleteTimerScalingPolicyRequest::FleetIdHasBeenSet() const
{
    return m_fleetIdHasBeenSet;
}

string DeleteTimerScalingPolicyRequest::GetTimerName() const
{
    return m_timerName;
}

void DeleteTimerScalingPolicyRequest::SetTimerName(const string& _timerName)
{
    m_timerName = _timerName;
    m_timerNameHasBeenSet = true;
}

bool DeleteTimerScalingPolicyRequest::TimerNameHasBeenSet() const
{
    return m_timerNameHasBeenSet;
}


