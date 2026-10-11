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

#include <tencentcloud/monitor/v20230616/model/ReceiverGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ReceiverGroup::ReceiverGroup() :
    m_receiverTypeHasBeenSet(false),
    m_receiverIdsHasBeenSet(false),
    m_namesHasBeenSet(false),
    m_memberIdsHasBeenSet(false),
    m_weekDayHasBeenSet(false),
    m_dayStartSecondsHasBeenSet(false),
    m_dayEndSecondsHasBeenSet(false),
    m_timeZoneNameHasBeenSet(false),
    m_channelNamesHasBeenSet(false)
{
}

CoreInternalOutcome ReceiverGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("ReceiverIds") && !value["ReceiverIds"].IsNull())
    {
        if (!value["ReceiverIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.ReceiverIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverIds.push_back((*itr).GetString());
        }
        m_receiverIdsHasBeenSet = true;
    }

    if (value.HasMember("Names") && !value["Names"].IsNull())
    {
        if (!value["Names"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.Names` is not array type"));

        const rapidjson::Value &tmpValue = value["Names"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_names.push_back((*itr).GetString());
        }
        m_namesHasBeenSet = true;
    }

    if (value.HasMember("MemberIds") && !value["MemberIds"].IsNull())
    {
        if (!value["MemberIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.MemberIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MemberIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memberIds.push_back((*itr).GetString());
        }
        m_memberIdsHasBeenSet = true;
    }

    if (value.HasMember("WeekDay") && !value["WeekDay"].IsNull())
    {
        if (!value["WeekDay"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.WeekDay` is not array type"));

        const rapidjson::Value &tmpValue = value["WeekDay"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDay.push_back((*itr).GetInt64());
        }
        m_weekDayHasBeenSet = true;
    }

    if (value.HasMember("DayStartSeconds") && !value["DayStartSeconds"].IsNull())
    {
        if (!value["DayStartSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.DayStartSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayStartSeconds = value["DayStartSeconds"].GetInt64();
        m_dayStartSecondsHasBeenSet = true;
    }

    if (value.HasMember("DayEndSeconds") && !value["DayEndSeconds"].IsNull())
    {
        if (!value["DayEndSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.DayEndSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dayEndSeconds = value["DayEndSeconds"].GetInt64();
        m_dayEndSecondsHasBeenSet = true;
    }

    if (value.HasMember("TimeZoneName") && !value["TimeZoneName"].IsNull())
    {
        if (!value["TimeZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.TimeZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZoneName = string(value["TimeZoneName"].GetString());
        m_timeZoneNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelNames") && !value["ChannelNames"].IsNull())
    {
        if (!value["ChannelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverGroup.ChannelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelNames.push_back((*itr).GetString());
        }
        m_channelNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiverGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverIds.begin(); itr != m_receiverIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_memberIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberIds.begin(); itr != m_memberIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weekDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDay.begin(); itr != m_weekDay.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dayStartSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayStartSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayStartSeconds, allocator);
    }

    if (m_dayEndSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayEndSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dayEndSeconds, allocator);
    }

    if (m_timeZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelNames.begin(); itr != m_channelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ReceiverGroup::GetReceiverType() const
{
    return m_receiverType;
}

void ReceiverGroup::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool ReceiverGroup::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<string> ReceiverGroup::GetReceiverIds() const
{
    return m_receiverIds;
}

void ReceiverGroup::SetReceiverIds(const vector<string>& _receiverIds)
{
    m_receiverIds = _receiverIds;
    m_receiverIdsHasBeenSet = true;
}

bool ReceiverGroup::ReceiverIdsHasBeenSet() const
{
    return m_receiverIdsHasBeenSet;
}

vector<string> ReceiverGroup::GetNames() const
{
    return m_names;
}

void ReceiverGroup::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool ReceiverGroup::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}

vector<string> ReceiverGroup::GetMemberIds() const
{
    return m_memberIds;
}

void ReceiverGroup::SetMemberIds(const vector<string>& _memberIds)
{
    m_memberIds = _memberIds;
    m_memberIdsHasBeenSet = true;
}

bool ReceiverGroup::MemberIdsHasBeenSet() const
{
    return m_memberIdsHasBeenSet;
}

vector<int64_t> ReceiverGroup::GetWeekDay() const
{
    return m_weekDay;
}

void ReceiverGroup::SetWeekDay(const vector<int64_t>& _weekDay)
{
    m_weekDay = _weekDay;
    m_weekDayHasBeenSet = true;
}

bool ReceiverGroup::WeekDayHasBeenSet() const
{
    return m_weekDayHasBeenSet;
}

int64_t ReceiverGroup::GetDayStartSeconds() const
{
    return m_dayStartSeconds;
}

void ReceiverGroup::SetDayStartSeconds(const int64_t& _dayStartSeconds)
{
    m_dayStartSeconds = _dayStartSeconds;
    m_dayStartSecondsHasBeenSet = true;
}

bool ReceiverGroup::DayStartSecondsHasBeenSet() const
{
    return m_dayStartSecondsHasBeenSet;
}

int64_t ReceiverGroup::GetDayEndSeconds() const
{
    return m_dayEndSeconds;
}

void ReceiverGroup::SetDayEndSeconds(const int64_t& _dayEndSeconds)
{
    m_dayEndSeconds = _dayEndSeconds;
    m_dayEndSecondsHasBeenSet = true;
}

bool ReceiverGroup::DayEndSecondsHasBeenSet() const
{
    return m_dayEndSecondsHasBeenSet;
}

string ReceiverGroup::GetTimeZoneName() const
{
    return m_timeZoneName;
}

void ReceiverGroup::SetTimeZoneName(const string& _timeZoneName)
{
    m_timeZoneName = _timeZoneName;
    m_timeZoneNameHasBeenSet = true;
}

bool ReceiverGroup::TimeZoneNameHasBeenSet() const
{
    return m_timeZoneNameHasBeenSet;
}

vector<string> ReceiverGroup::GetChannelNames() const
{
    return m_channelNames;
}

void ReceiverGroup::SetChannelNames(const vector<string>& _channelNames)
{
    m_channelNames = _channelNames;
    m_channelNamesHasBeenSet = true;
}

bool ReceiverGroup::ChannelNamesHasBeenSet() const
{
    return m_channelNamesHasBeenSet;
}

