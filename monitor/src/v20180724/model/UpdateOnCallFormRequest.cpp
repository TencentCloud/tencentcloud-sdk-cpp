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

#include <tencentcloud/monitor/v20180724/model/UpdateOnCallFormRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdateOnCallFormRequest::UpdateOnCallFormRequest() :
    m_moduleHasBeenSet(false),
    m_onCallFormIDHasBeenSet(false),
    m_onCallFormNameHasBeenSet(false),
    m_staffInfosHasBeenSet(false),
    m_rotationTypeHasBeenSet(false),
    m_shiftTimeHasBeenSet(false),
    m_effectiveStartTimeHasBeenSet(false),
    m_effectiveEndTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_onCallFormDescHasBeenSet(false),
    m_coverStaffInfosHasBeenSet(false)
{
}

string UpdateOnCallFormRequest::ToJsonString() const
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

    if (m_onCallFormIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onCallFormID.c_str(), allocator).Move(), allocator);
    }

    if (m_onCallFormNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onCallFormName.c_str(), allocator).Move(), allocator);
    }

    if (m_staffInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staffInfos.begin(); itr != m_staffInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_shiftTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShiftTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shiftTime.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_effectiveStartTime, allocator);
    }

    if (m_effectiveEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_effectiveEndTime, allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_onCallFormDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_onCallFormDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_coverStaffInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverStaffInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverStaffInfos.begin(); itr != m_coverStaffInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateOnCallFormRequest::GetModule() const
{
    return m_module;
}

void UpdateOnCallFormRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool UpdateOnCallFormRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string UpdateOnCallFormRequest::GetOnCallFormID() const
{
    return m_onCallFormID;
}

void UpdateOnCallFormRequest::SetOnCallFormID(const string& _onCallFormID)
{
    m_onCallFormID = _onCallFormID;
    m_onCallFormIDHasBeenSet = true;
}

bool UpdateOnCallFormRequest::OnCallFormIDHasBeenSet() const
{
    return m_onCallFormIDHasBeenSet;
}

string UpdateOnCallFormRequest::GetOnCallFormName() const
{
    return m_onCallFormName;
}

void UpdateOnCallFormRequest::SetOnCallFormName(const string& _onCallFormName)
{
    m_onCallFormName = _onCallFormName;
    m_onCallFormNameHasBeenSet = true;
}

bool UpdateOnCallFormRequest::OnCallFormNameHasBeenSet() const
{
    return m_onCallFormNameHasBeenSet;
}

vector<StaffInfo> UpdateOnCallFormRequest::GetStaffInfos() const
{
    return m_staffInfos;
}

void UpdateOnCallFormRequest::SetStaffInfos(const vector<StaffInfo>& _staffInfos)
{
    m_staffInfos = _staffInfos;
    m_staffInfosHasBeenSet = true;
}

bool UpdateOnCallFormRequest::StaffInfosHasBeenSet() const
{
    return m_staffInfosHasBeenSet;
}

string UpdateOnCallFormRequest::GetRotationType() const
{
    return m_rotationType;
}

void UpdateOnCallFormRequest::SetRotationType(const string& _rotationType)
{
    m_rotationType = _rotationType;
    m_rotationTypeHasBeenSet = true;
}

bool UpdateOnCallFormRequest::RotationTypeHasBeenSet() const
{
    return m_rotationTypeHasBeenSet;
}

string UpdateOnCallFormRequest::GetShiftTime() const
{
    return m_shiftTime;
}

void UpdateOnCallFormRequest::SetShiftTime(const string& _shiftTime)
{
    m_shiftTime = _shiftTime;
    m_shiftTimeHasBeenSet = true;
}

bool UpdateOnCallFormRequest::ShiftTimeHasBeenSet() const
{
    return m_shiftTimeHasBeenSet;
}

int64_t UpdateOnCallFormRequest::GetEffectiveStartTime() const
{
    return m_effectiveStartTime;
}

void UpdateOnCallFormRequest::SetEffectiveStartTime(const int64_t& _effectiveStartTime)
{
    m_effectiveStartTime = _effectiveStartTime;
    m_effectiveStartTimeHasBeenSet = true;
}

bool UpdateOnCallFormRequest::EffectiveStartTimeHasBeenSet() const
{
    return m_effectiveStartTimeHasBeenSet;
}

int64_t UpdateOnCallFormRequest::GetEffectiveEndTime() const
{
    return m_effectiveEndTime;
}

void UpdateOnCallFormRequest::SetEffectiveEndTime(const int64_t& _effectiveEndTime)
{
    m_effectiveEndTime = _effectiveEndTime;
    m_effectiveEndTimeHasBeenSet = true;
}

bool UpdateOnCallFormRequest::EffectiveEndTimeHasBeenSet() const
{
    return m_effectiveEndTimeHasBeenSet;
}

double UpdateOnCallFormRequest::GetTimeZone() const
{
    return m_timeZone;
}

void UpdateOnCallFormRequest::SetTimeZone(const double& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool UpdateOnCallFormRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string UpdateOnCallFormRequest::GetOnCallFormDesc() const
{
    return m_onCallFormDesc;
}

void UpdateOnCallFormRequest::SetOnCallFormDesc(const string& _onCallFormDesc)
{
    m_onCallFormDesc = _onCallFormDesc;
    m_onCallFormDescHasBeenSet = true;
}

bool UpdateOnCallFormRequest::OnCallFormDescHasBeenSet() const
{
    return m_onCallFormDescHasBeenSet;
}

vector<CoverStaffInfo> UpdateOnCallFormRequest::GetCoverStaffInfos() const
{
    return m_coverStaffInfos;
}

void UpdateOnCallFormRequest::SetCoverStaffInfos(const vector<CoverStaffInfo>& _coverStaffInfos)
{
    m_coverStaffInfos = _coverStaffInfos;
    m_coverStaffInfosHasBeenSet = true;
}

bool UpdateOnCallFormRequest::CoverStaffInfosHasBeenSet() const
{
    return m_coverStaffInfosHasBeenSet;
}


