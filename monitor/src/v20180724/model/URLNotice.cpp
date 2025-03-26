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

#include <tencentcloud/monitor/v20180724/model/URLNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

URLNotice::URLNotice() :
    m_uRLHasBeenSet(false),
    m_isValidHasBeenSet(false),
    m_validationCodeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_weekdayHasBeenSet(false),
    m_groupMembersHasBeenSet(false)
{
}

CoreInternalOutcome URLNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("IsValid") && !value["IsValid"].IsNull())
    {
        if (!value["IsValid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.IsValid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isValid = value["IsValid"].GetInt64();
        m_isValidHasBeenSet = true;
    }

    if (value.HasMember("ValidationCode") && !value["ValidationCode"].IsNull())
    {
        if (!value["ValidationCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.ValidationCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validationCode = string(value["ValidationCode"].GetString());
        m_validationCodeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Weekday") && !value["Weekday"].IsNull())
    {
        if (!value["Weekday"].IsArray())
            return CoreInternalOutcome(Core::Error("response `URLNotice.Weekday` is not array type"));

        const rapidjson::Value &tmpValue = value["Weekday"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekday.push_back((*itr).GetInt64());
        }
        m_weekdayHasBeenSet = true;
    }

    if (value.HasMember("GroupMembers") && !value["GroupMembers"].IsNull())
    {
        if (!value["GroupMembers"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `URLNotice.GroupMembers` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupMembers = string(value["GroupMembers"].GetString());
        m_groupMembersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void URLNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_isValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isValid, allocator);
    }

    if (m_validationCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidationCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validationCode.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_weekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekday.begin(); itr != m_weekday.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_groupMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupMembers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupMembers.c_str(), allocator).Move(), allocator);
    }

}


string URLNotice::GetURL() const
{
    return m_uRL;
}

void URLNotice::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool URLNotice::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

int64_t URLNotice::GetIsValid() const
{
    return m_isValid;
}

void URLNotice::SetIsValid(const int64_t& _isValid)
{
    m_isValid = _isValid;
    m_isValidHasBeenSet = true;
}

bool URLNotice::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}

string URLNotice::GetValidationCode() const
{
    return m_validationCode;
}

void URLNotice::SetValidationCode(const string& _validationCode)
{
    m_validationCode = _validationCode;
    m_validationCodeHasBeenSet = true;
}

bool URLNotice::ValidationCodeHasBeenSet() const
{
    return m_validationCodeHasBeenSet;
}

int64_t URLNotice::GetStartTime() const
{
    return m_startTime;
}

void URLNotice::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool URLNotice::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t URLNotice::GetEndTime() const
{
    return m_endTime;
}

void URLNotice::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool URLNotice::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<int64_t> URLNotice::GetWeekday() const
{
    return m_weekday;
}

void URLNotice::SetWeekday(const vector<int64_t>& _weekday)
{
    m_weekday = _weekday;
    m_weekdayHasBeenSet = true;
}

bool URLNotice::WeekdayHasBeenSet() const
{
    return m_weekdayHasBeenSet;
}

string URLNotice::GetGroupMembers() const
{
    return m_groupMembers;
}

void URLNotice::SetGroupMembers(const string& _groupMembers)
{
    m_groupMembers = _groupMembers;
    m_groupMembersHasBeenSet = true;
}

bool URLNotice::GroupMembersHasBeenSet() const
{
    return m_groupMembersHasBeenSet;
}

