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

#include <tencentcloud/monitor/v20180724/model/CreateAlarmShieldRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateAlarmShieldRequest::CreateAlarmShieldRequest() :
    m_moduleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_shieldTimeTypeHasBeenSet(false),
    m_shieldObjectHasBeenSet(false),
    m_shieldMetricHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_loopStartDateHasBeenSet(false),
    m_loopEndDateHasBeenSet(false),
    m_shieldPolicyIdHasBeenSet(false),
    m_shieldAlarmLevelHasBeenSet(false),
    m_versionTagHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_shieldEventHasBeenSet(false),
    m_shieldMetricFlagHasBeenSet(false),
    m_shieldEventFlagHasBeenSet(false)
{
}

string CreateAlarmShieldRequest::ToJsonString() const
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

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldTimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldTimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldTimeType.c_str(), allocator).Move(), allocator);
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

    if (m_shieldMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldMetric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldMetric.begin(); itr != m_shieldMetric.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_shieldPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shieldPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldAlarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldAlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldAlarmLevel.begin(); itr != m_shieldAlarmLevel.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_versionTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionTag.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_shieldEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldEvent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldEvent.begin(); itr != m_shieldEvent.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shieldMetricFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldMetricFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shieldMetricFlag, allocator);
    }

    if (m_shieldEventFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldEventFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shieldEventFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAlarmShieldRequest::GetModule() const
{
    return m_module;
}

void CreateAlarmShieldRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateAlarmShieldRequest::GetName() const
{
    return m_name;
}

void CreateAlarmShieldRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAlarmShieldRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAlarmShieldRequest::GetMonitorType() const
{
    return m_monitorType;
}

void CreateAlarmShieldRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool CreateAlarmShieldRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string CreateAlarmShieldRequest::GetNameSpace() const
{
    return m_nameSpace;
}

void CreateAlarmShieldRequest::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool CreateAlarmShieldRequest::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string CreateAlarmShieldRequest::GetShieldTimeType() const
{
    return m_shieldTimeType;
}

void CreateAlarmShieldRequest::SetShieldTimeType(const string& _shieldTimeType)
{
    m_shieldTimeType = _shieldTimeType;
    m_shieldTimeTypeHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldTimeTypeHasBeenSet() const
{
    return m_shieldTimeTypeHasBeenSet;
}

vector<string> CreateAlarmShieldRequest::GetShieldObject() const
{
    return m_shieldObject;
}

void CreateAlarmShieldRequest::SetShieldObject(const vector<string>& _shieldObject)
{
    m_shieldObject = _shieldObject;
    m_shieldObjectHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldObjectHasBeenSet() const
{
    return m_shieldObjectHasBeenSet;
}

vector<string> CreateAlarmShieldRequest::GetShieldMetric() const
{
    return m_shieldMetric;
}

void CreateAlarmShieldRequest::SetShieldMetric(const vector<string>& _shieldMetric)
{
    m_shieldMetric = _shieldMetric;
    m_shieldMetricHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldMetricHasBeenSet() const
{
    return m_shieldMetricHasBeenSet;
}

uint64_t CreateAlarmShieldRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateAlarmShieldRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateAlarmShieldRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t CreateAlarmShieldRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateAlarmShieldRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateAlarmShieldRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CreateAlarmShieldRequest::GetLoopStartDate() const
{
    return m_loopStartDate;
}

void CreateAlarmShieldRequest::SetLoopStartDate(const uint64_t& _loopStartDate)
{
    m_loopStartDate = _loopStartDate;
    m_loopStartDateHasBeenSet = true;
}

bool CreateAlarmShieldRequest::LoopStartDateHasBeenSet() const
{
    return m_loopStartDateHasBeenSet;
}

uint64_t CreateAlarmShieldRequest::GetLoopEndDate() const
{
    return m_loopEndDate;
}

void CreateAlarmShieldRequest::SetLoopEndDate(const uint64_t& _loopEndDate)
{
    m_loopEndDate = _loopEndDate;
    m_loopEndDateHasBeenSet = true;
}

bool CreateAlarmShieldRequest::LoopEndDateHasBeenSet() const
{
    return m_loopEndDateHasBeenSet;
}

string CreateAlarmShieldRequest::GetShieldPolicyId() const
{
    return m_shieldPolicyId;
}

void CreateAlarmShieldRequest::SetShieldPolicyId(const string& _shieldPolicyId)
{
    m_shieldPolicyId = _shieldPolicyId;
    m_shieldPolicyIdHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldPolicyIdHasBeenSet() const
{
    return m_shieldPolicyIdHasBeenSet;
}

vector<string> CreateAlarmShieldRequest::GetShieldAlarmLevel() const
{
    return m_shieldAlarmLevel;
}

void CreateAlarmShieldRequest::SetShieldAlarmLevel(const vector<string>& _shieldAlarmLevel)
{
    m_shieldAlarmLevel = _shieldAlarmLevel;
    m_shieldAlarmLevelHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldAlarmLevelHasBeenSet() const
{
    return m_shieldAlarmLevelHasBeenSet;
}

string CreateAlarmShieldRequest::GetVersionTag() const
{
    return m_versionTag;
}

void CreateAlarmShieldRequest::SetVersionTag(const string& _versionTag)
{
    m_versionTag = _versionTag;
    m_versionTagHasBeenSet = true;
}

bool CreateAlarmShieldRequest::VersionTagHasBeenSet() const
{
    return m_versionTagHasBeenSet;
}

string CreateAlarmShieldRequest::GetDescription() const
{
    return m_description;
}

void CreateAlarmShieldRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAlarmShieldRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double CreateAlarmShieldRequest::GetTimeZone() const
{
    return m_timeZone;
}

void CreateAlarmShieldRequest::SetTimeZone(const double& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool CreateAlarmShieldRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<string> CreateAlarmShieldRequest::GetShieldEvent() const
{
    return m_shieldEvent;
}

void CreateAlarmShieldRequest::SetShieldEvent(const vector<string>& _shieldEvent)
{
    m_shieldEvent = _shieldEvent;
    m_shieldEventHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldEventHasBeenSet() const
{
    return m_shieldEventHasBeenSet;
}

int64_t CreateAlarmShieldRequest::GetShieldMetricFlag() const
{
    return m_shieldMetricFlag;
}

void CreateAlarmShieldRequest::SetShieldMetricFlag(const int64_t& _shieldMetricFlag)
{
    m_shieldMetricFlag = _shieldMetricFlag;
    m_shieldMetricFlagHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldMetricFlagHasBeenSet() const
{
    return m_shieldMetricFlagHasBeenSet;
}

int64_t CreateAlarmShieldRequest::GetShieldEventFlag() const
{
    return m_shieldEventFlag;
}

void CreateAlarmShieldRequest::SetShieldEventFlag(const int64_t& _shieldEventFlag)
{
    m_shieldEventFlag = _shieldEventFlag;
    m_shieldEventFlagHasBeenSet = true;
}

bool CreateAlarmShieldRequest::ShieldEventFlagHasBeenSet() const
{
    return m_shieldEventFlagHasBeenSet;
}


