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

#include <tencentcloud/monitor/v20180724/model/OnCallForm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

OnCallForm::OnCallForm() :
    m_onCallFormIDHasBeenSet(false),
    m_onCallFormNameHasBeenSet(false),
    m_onCallFormDescHasBeenSet(false),
    m_rotationTypeHasBeenSet(false),
    m_shiftTimeHasBeenSet(false),
    m_effectiveStartTimeHasBeenSet(false),
    m_effectiveEndTimeHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_currOnCallStaffsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome OnCallForm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OnCallFormID") && !value["OnCallFormID"].IsNull())
    {
        if (!value["OnCallFormID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.OnCallFormID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormID = string(value["OnCallFormID"].GetString());
        m_onCallFormIDHasBeenSet = true;
    }

    if (value.HasMember("OnCallFormName") && !value["OnCallFormName"].IsNull())
    {
        if (!value["OnCallFormName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.OnCallFormName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormName = string(value["OnCallFormName"].GetString());
        m_onCallFormNameHasBeenSet = true;
    }

    if (value.HasMember("OnCallFormDesc") && !value["OnCallFormDesc"].IsNull())
    {
        if (!value["OnCallFormDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.OnCallFormDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_onCallFormDesc = string(value["OnCallFormDesc"].GetString());
        m_onCallFormDescHasBeenSet = true;
    }

    if (value.HasMember("RotationType") && !value["RotationType"].IsNull())
    {
        if (!value["RotationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.RotationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rotationType = string(value["RotationType"].GetString());
        m_rotationTypeHasBeenSet = true;
    }

    if (value.HasMember("ShiftTime") && !value["ShiftTime"].IsNull())
    {
        if (!value["ShiftTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.ShiftTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shiftTime = string(value["ShiftTime"].GetString());
        m_shiftTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveStartTime") && !value["EffectiveStartTime"].IsNull())
    {
        if (!value["EffectiveStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.EffectiveStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveStartTime = value["EffectiveStartTime"].GetInt64();
        m_effectiveStartTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveEndTime") && !value["EffectiveEndTime"].IsNull())
    {
        if (!value["EffectiveEndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.EffectiveEndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveEndTime = value["EffectiveEndTime"].GetInt64();
        m_effectiveEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OnCallForm.TimeZone` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = value["TimeZone"].GetDouble();
        m_timeZoneHasBeenSet = true;
    }

    if (value.HasMember("CurrOnCallStaffs") && !value["CurrOnCallStaffs"].IsNull())
    {
        if (!value["CurrOnCallStaffs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OnCallForm.CurrOnCallStaffs` is not array type"));

        const rapidjson::Value &tmpValue = value["CurrOnCallStaffs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_currOnCallStaffs.push_back((*itr).GetString());
        }
        m_currOnCallStaffsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OnCallForm.Tags` is not array type"));

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

void OnCallForm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_currOnCallStaffsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrOnCallStaffs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_currOnCallStaffs.begin(); itr != m_currOnCallStaffs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string OnCallForm::GetOnCallFormID() const
{
    return m_onCallFormID;
}

void OnCallForm::SetOnCallFormID(const string& _onCallFormID)
{
    m_onCallFormID = _onCallFormID;
    m_onCallFormIDHasBeenSet = true;
}

bool OnCallForm::OnCallFormIDHasBeenSet() const
{
    return m_onCallFormIDHasBeenSet;
}

string OnCallForm::GetOnCallFormName() const
{
    return m_onCallFormName;
}

void OnCallForm::SetOnCallFormName(const string& _onCallFormName)
{
    m_onCallFormName = _onCallFormName;
    m_onCallFormNameHasBeenSet = true;
}

bool OnCallForm::OnCallFormNameHasBeenSet() const
{
    return m_onCallFormNameHasBeenSet;
}

string OnCallForm::GetOnCallFormDesc() const
{
    return m_onCallFormDesc;
}

void OnCallForm::SetOnCallFormDesc(const string& _onCallFormDesc)
{
    m_onCallFormDesc = _onCallFormDesc;
    m_onCallFormDescHasBeenSet = true;
}

bool OnCallForm::OnCallFormDescHasBeenSet() const
{
    return m_onCallFormDescHasBeenSet;
}

string OnCallForm::GetRotationType() const
{
    return m_rotationType;
}

void OnCallForm::SetRotationType(const string& _rotationType)
{
    m_rotationType = _rotationType;
    m_rotationTypeHasBeenSet = true;
}

bool OnCallForm::RotationTypeHasBeenSet() const
{
    return m_rotationTypeHasBeenSet;
}

string OnCallForm::GetShiftTime() const
{
    return m_shiftTime;
}

void OnCallForm::SetShiftTime(const string& _shiftTime)
{
    m_shiftTime = _shiftTime;
    m_shiftTimeHasBeenSet = true;
}

bool OnCallForm::ShiftTimeHasBeenSet() const
{
    return m_shiftTimeHasBeenSet;
}

int64_t OnCallForm::GetEffectiveStartTime() const
{
    return m_effectiveStartTime;
}

void OnCallForm::SetEffectiveStartTime(const int64_t& _effectiveStartTime)
{
    m_effectiveStartTime = _effectiveStartTime;
    m_effectiveStartTimeHasBeenSet = true;
}

bool OnCallForm::EffectiveStartTimeHasBeenSet() const
{
    return m_effectiveStartTimeHasBeenSet;
}

int64_t OnCallForm::GetEffectiveEndTime() const
{
    return m_effectiveEndTime;
}

void OnCallForm::SetEffectiveEndTime(const int64_t& _effectiveEndTime)
{
    m_effectiveEndTime = _effectiveEndTime;
    m_effectiveEndTimeHasBeenSet = true;
}

bool OnCallForm::EffectiveEndTimeHasBeenSet() const
{
    return m_effectiveEndTimeHasBeenSet;
}

double OnCallForm::GetTimeZone() const
{
    return m_timeZone;
}

void OnCallForm::SetTimeZone(const double& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool OnCallForm::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

vector<string> OnCallForm::GetCurrOnCallStaffs() const
{
    return m_currOnCallStaffs;
}

void OnCallForm::SetCurrOnCallStaffs(const vector<string>& _currOnCallStaffs)
{
    m_currOnCallStaffs = _currOnCallStaffs;
    m_currOnCallStaffsHasBeenSet = true;
}

bool OnCallForm::CurrOnCallStaffsHasBeenSet() const
{
    return m_currOnCallStaffsHasBeenSet;
}

vector<Tag> OnCallForm::GetTags() const
{
    return m_tags;
}

void OnCallForm::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool OnCallForm::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

