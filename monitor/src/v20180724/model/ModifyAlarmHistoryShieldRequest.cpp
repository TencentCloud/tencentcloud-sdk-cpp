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

#include <tencentcloud/monitor/v20180724/model/ModifyAlarmHistoryShieldRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyAlarmHistoryShieldRequest::ModifyAlarmHistoryShieldRequest() :
    m_moduleHasBeenSet(false),
    m_shieldIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_shieldTimeTypeHasBeenSet(false),
    m_shieldPolicyIdHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_shieldObjectHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_loopStartDateHasBeenSet(false),
    m_loopEndDateHasBeenSet(false),
    m_shieldAlarmLevelHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string ModifyAlarmHistoryShieldRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldTimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldTimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldTimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldObject.begin(); itr != m_shieldObject.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_loopStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loopStartDate, allocator);
    }

    if (m_loopEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loopEndDate, allocator);
    }

    if (m_shieldAlarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldAlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldAlarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmHistoryShieldRequest::GetModule() const
{
    return m_module;
}

void ModifyAlarmHistoryShieldRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetShieldId() const
{
    return m_shieldId;
}

void ModifyAlarmHistoryShieldRequest::SetShieldId(const string& _shieldId)
{
    m_shieldId = _shieldId;
    m_shieldIdHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ShieldIdHasBeenSet() const
{
    return m_shieldIdHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetName() const
{
    return m_name;
}

void ModifyAlarmHistoryShieldRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetMonitorType() const
{
    return m_monitorType;
}

void ModifyAlarmHistoryShieldRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetShieldTimeType() const
{
    return m_shieldTimeType;
}

void ModifyAlarmHistoryShieldRequest::SetShieldTimeType(const string& _shieldTimeType)
{
    m_shieldTimeType = _shieldTimeType;
    m_shieldTimeTypeHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ShieldTimeTypeHasBeenSet() const
{
    return m_shieldTimeTypeHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetShieldPolicyId() const
{
    return m_shieldPolicyId;
}

void ModifyAlarmHistoryShieldRequest::SetShieldPolicyId(const string& _shieldPolicyId)
{
    m_shieldPolicyId = _shieldPolicyId;
    m_shieldPolicyIdHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ShieldPolicyIdHasBeenSet() const
{
    return m_shieldPolicyIdHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetNameSpace() const
{
    return m_nameSpace;
}

void ModifyAlarmHistoryShieldRequest::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

vector<string> ModifyAlarmHistoryShieldRequest::GetShieldObject() const
{
    return m_shieldObject;
}

void ModifyAlarmHistoryShieldRequest::SetShieldObject(const vector<string>& _shieldObject)
{
    m_shieldObject = _shieldObject;
    m_shieldObjectHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ShieldObjectHasBeenSet() const
{
    return m_shieldObjectHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetMetricName() const
{
    return m_metricName;
}

void ModifyAlarmHistoryShieldRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t ModifyAlarmHistoryShieldRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyAlarmHistoryShieldRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyAlarmHistoryShieldRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyAlarmHistoryShieldRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ModifyAlarmHistoryShieldRequest::GetLoopStartDate() const
{
    return m_loopStartDate;
}

void ModifyAlarmHistoryShieldRequest::SetLoopStartDate(const uint64_t& _loopStartDate)
{
    m_loopStartDate = _loopStartDate;
    m_loopStartDateHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::LoopStartDateHasBeenSet() const
{
    return m_loopStartDateHasBeenSet;
}

uint64_t ModifyAlarmHistoryShieldRequest::GetLoopEndDate() const
{
    return m_loopEndDate;
}

void ModifyAlarmHistoryShieldRequest::SetLoopEndDate(const uint64_t& _loopEndDate)
{
    m_loopEndDate = _loopEndDate;
    m_loopEndDateHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::LoopEndDateHasBeenSet() const
{
    return m_loopEndDateHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetShieldAlarmLevel() const
{
    return m_shieldAlarmLevel;
}

void ModifyAlarmHistoryShieldRequest::SetShieldAlarmLevel(const string& _shieldAlarmLevel)
{
    m_shieldAlarmLevel = _shieldAlarmLevel;
    m_shieldAlarmLevelHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::ShieldAlarmLevelHasBeenSet() const
{
    return m_shieldAlarmLevelHasBeenSet;
}

double ModifyAlarmHistoryShieldRequest::GetTimeZone() const
{
    return m_timeZone;
}

void ModifyAlarmHistoryShieldRequest::SetTimeZone(const double& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string ModifyAlarmHistoryShieldRequest::GetSessionId() const
{
    return m_sessionId;
}

void ModifyAlarmHistoryShieldRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ModifyAlarmHistoryShieldRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


