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

#include <tencentcloud/monitor/v20180724/model/OneOnCallForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

OneOnCallForm::OneOnCallForm() :
    m_onCallFormIDHasBeenSet(false),
    m_onCallFormNameHasBeenSet(false),
    m_onCallFormDescHasBeenSet(false),
    m_staffInfosHasBeenSet(false),
    m_rotationTypeHasBeenSet(false),
    m_shiftTimeHasBeenSet(false),
    m_effectiveStartTimeHasBeenSet(false),
    m_effectiveEndTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_coverStaffInfosHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome OneOnCallForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OnCallFormID") && !value["OnCallFormID"].IsNull())
    {
        if (!value["OnCallFormID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.OnCallFormID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormID = string(value["OnCallFormID"].GetString());
        m_onCallFormIDHasBeenSet = true;
    }

    if (value.HasMember("OnCallFormName") && !value["OnCallFormName"].IsNull())
    {
        if (!value["OnCallFormName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.OnCallFormName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormName = string(value["OnCallFormName"].GetString());
        m_onCallFormNameHasBeenSet = true;
    }

    if (value.HasMember("OnCallFormDesc") && !value["OnCallFormDesc"].IsNull())
    {
        if (!value["OnCallFormDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.OnCallFormDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormDesc = string(value["OnCallFormDesc"].GetString());
        m_onCallFormDescHasBeenSet = true;
    }

    if (value.HasMember("StaffInfos") && !value["StaffInfos"].IsNull())
    {
        if (!value["StaffInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.StaffInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["StaffInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StaffInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_staffInfos.push_back(item);
        }
        m_staffInfosHasBeenSet = true;
    }

    if (value.HasMember("RotationType") && !value["RotationType"].IsNull())
    {
        if (!value["RotationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.RotationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationType = string(value["RotationType"].GetString());
        m_rotationTypeHasBeenSet = true;
    }

    if (value.HasMember("ShiftTime") && !value["ShiftTime"].IsNull())
    {
        if (!value["ShiftTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.ShiftTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shiftTime = string(value["ShiftTime"].GetString());
        m_shiftTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveStartTime") && !value["EffectiveStartTime"].IsNull())
    {
        if (!value["EffectiveStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.EffectiveStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveStartTime = value["EffectiveStartTime"].GetInt64();
        m_effectiveStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveEndTime") && !value["EffectiveEndTime"].IsNull())
    {
        if (!value["EffectiveEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.EffectiveEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveEndTime = value["EffectiveEndTime"].GetInt64();
        m_effectiveEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.TimeZone` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = value["TimeZone"].GetDouble();
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("CoverStaffInfos") && !value["CoverStaffInfos"].IsNull())
    {
        if (!value["CoverStaffInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.CoverStaffInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CoverStaffInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CoverStaffInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_coverStaffInfos.push_back(item);
        }
        m_coverStaffInfosHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OneOnCallForm.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OneOnCallForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_onCallFormIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onCallFormID.c_str(), allocator).Move(), allocator);
    }

    if (m_onCallFormNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onCallFormName.c_str(), allocator).Move(), allocator);
    }

    if (m_onCallFormDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnCallFormDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_onCallFormDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_staffInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staffInfos.begin(); itr != m_staffInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rotationType.c_str(), allocator).Move(), allocator);
    }

    if (m_shiftTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShiftTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shiftTime.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveStartTime, allocator);
    }

    if (m_effectiveEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectiveEndTime, allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_coverStaffInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverStaffInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_coverStaffInfos.begin(); itr != m_coverStaffInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OneOnCallForm::GetOnCallFormID() const
{
    return m_onCallFormID;
}

void OneOnCallForm::SetOnCallFormID(const string& _onCallFormID)
{
    m_onCallFormID = _onCallFormID;
    m_onCallFormIDHasBeenSet = true;
}

bool OneOnCallForm::OnCallFormIDHasBeenSet() const
{
    return m_onCallFormIDHasBeenSet;
}

string OneOnCallForm::GetOnCallFormName() const
{
    return m_onCallFormName;
}

void OneOnCallForm::SetOnCallFormName(const string& _onCallFormName)
{
    m_onCallFormName = _onCallFormName;
    m_onCallFormNameHasBeenSet = true;
}

bool OneOnCallForm::OnCallFormNameHasBeenSet() const
{
    return m_onCallFormNameHasBeenSet;
}

string OneOnCallForm::GetOnCallFormDesc() const
{
    return m_onCallFormDesc;
}

void OneOnCallForm::SetOnCallFormDesc(const string& _onCallFormDesc)
{
    m_onCallFormDesc = _onCallFormDesc;
    m_onCallFormDescHasBeenSet = true;
}

bool OneOnCallForm::OnCallFormDescHasBeenSet() const
{
    return m_onCallFormDescHasBeenSet;
}

vector<StaffInfo> OneOnCallForm::GetStaffInfos() const
{
    return m_staffInfos;
}

void OneOnCallForm::SetStaffInfos(const vector<StaffInfo>& _staffInfos)
{
    m_staffInfos = _staffInfos;
    m_staffInfosHasBeenSet = true;
}

bool OneOnCallForm::StaffInfosHasBeenSet() const
{
    return m_staffInfosHasBeenSet;
}

string OneOnCallForm::GetRotationType() const
{
    return m_rotationType;
}

void OneOnCallForm::SetRotationType(const string& _rotationType)
{
    m_rotationType = _rotationType;
    m_rotationTypeHasBeenSet = true;
}

bool OneOnCallForm::RotationTypeHasBeenSet() const
{
    return m_rotationTypeHasBeenSet;
}

string OneOnCallForm::GetShiftTime() const
{
    return m_shiftTime;
}

void OneOnCallForm::SetShiftTime(const string& _shiftTime)
{
    m_shiftTime = _shiftTime;
    m_shiftTimeHasBeenSet = true;
}

bool OneOnCallForm::ShiftTimeHasBeenSet() const
{
    return m_shiftTimeHasBeenSet;
}

int64_t OneOnCallForm::GetEffectiveStartTime() const
{
    return m_effectiveStartTime;
}

void OneOnCallForm::SetEffectiveStartTime(const int64_t& _effectiveStartTime)
{
    m_effectiveStartTime = _effectiveStartTime;
    m_effectiveStartTimeHasBeenSet = true;
}

bool OneOnCallForm::EffectiveStartTimeHasBeenSet() const
{
    return m_effectiveStartTimeHasBeenSet;
}

int64_t OneOnCallForm::GetEffectiveEndTime() const
{
    return m_effectiveEndTime;
}

void OneOnCallForm::SetEffectiveEndTime(const int64_t& _effectiveEndTime)
{
    m_effectiveEndTime = _effectiveEndTime;
    m_effectiveEndTimeHasBeenSet = true;
}

bool OneOnCallForm::EffectiveEndTimeHasBeenSet() const
{
    return m_effectiveEndTimeHasBeenSet;
}

double OneOnCallForm::GetTimeZone() const
{
    return m_timeZone;
}

void OneOnCallForm::SetTimeZone(const double& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool OneOnCallForm::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<CoverStaffInfo> OneOnCallForm::GetCoverStaffInfos() const
{
    return m_coverStaffInfos;
}

void OneOnCallForm::SetCoverStaffInfos(const vector<CoverStaffInfo>& _coverStaffInfos)
{
    m_coverStaffInfos = _coverStaffInfos;
    m_coverStaffInfosHasBeenSet = true;
}

bool OneOnCallForm::CoverStaffInfosHasBeenSet() const
{
    return m_coverStaffInfosHasBeenSet;
}

vector<Tag> OneOnCallForm::GetTags() const
{
    return m_tags;
}

void OneOnCallForm::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool OneOnCallForm::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

