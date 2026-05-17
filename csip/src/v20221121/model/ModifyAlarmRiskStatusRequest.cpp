/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyAlarmRiskStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyAlarmRiskStatusRequest::ModifyAlarmRiskStatusRequest() :
    m_alarmRiskIdSetHasBeenSet(false),
    m_alarmRiskTypeHasBeenSet(false),
    m_handleStatusHasBeenSet(false)
{
}

string ModifyAlarmRiskStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmRiskIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRiskIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmRiskIdSet.begin(); itr != m_alarmRiskIdSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_alarmRiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmRiskType, allocator);
    }

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_handleStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CosAlarmRiskIdInfo> ModifyAlarmRiskStatusRequest::GetAlarmRiskIdSet() const
{
    return m_alarmRiskIdSet;
}

void ModifyAlarmRiskStatusRequest::SetAlarmRiskIdSet(const vector<CosAlarmRiskIdInfo>& _alarmRiskIdSet)
{
    m_alarmRiskIdSet = _alarmRiskIdSet;
    m_alarmRiskIdSetHasBeenSet = true;
}

bool ModifyAlarmRiskStatusRequest::AlarmRiskIdSetHasBeenSet() const
{
    return m_alarmRiskIdSetHasBeenSet;
}

int64_t ModifyAlarmRiskStatusRequest::GetAlarmRiskType() const
{
    return m_alarmRiskType;
}

void ModifyAlarmRiskStatusRequest::SetAlarmRiskType(const int64_t& _alarmRiskType)
{
    m_alarmRiskType = _alarmRiskType;
    m_alarmRiskTypeHasBeenSet = true;
}

bool ModifyAlarmRiskStatusRequest::AlarmRiskTypeHasBeenSet() const
{
    return m_alarmRiskTypeHasBeenSet;
}

int64_t ModifyAlarmRiskStatusRequest::GetHandleStatus() const
{
    return m_handleStatus;
}

void ModifyAlarmRiskStatusRequest::SetHandleStatus(const int64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool ModifyAlarmRiskStatusRequest::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}


