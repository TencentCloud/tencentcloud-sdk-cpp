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

#include <tencentcloud/mps/v20190612/model/AssemblyUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AssemblyUsageDetail::AssemblyUsageDetail() :
    m_channelIDHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_channelTierHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

CoreInternalOutcome AssemblyUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelID") && !value["ChannelID"].IsNull())
    {
        if (!value["ChannelID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.ChannelID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelID = string(value["ChannelID"].GetString());
        m_channelIDHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ChannelTier") && !value["ChannelTier"].IsNull())
    {
        if (!value["ChannelTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.ChannelTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelTier = string(value["ChannelTier"].GetString());
        m_channelTierHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageDetail.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssemblyUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelID.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_channelTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelTier.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

}


string AssemblyUsageDetail::GetChannelID() const
{
    return m_channelID;
}

void AssemblyUsageDetail::SetChannelID(const string& _channelID)
{
    m_channelID = _channelID;
    m_channelIDHasBeenSet = true;
}

bool AssemblyUsageDetail::ChannelIDHasBeenSet() const
{
    return m_channelIDHasBeenSet;
}

string AssemblyUsageDetail::GetDate() const
{
    return m_date;
}

void AssemblyUsageDetail::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool AssemblyUsageDetail::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string AssemblyUsageDetail::GetStartTime() const
{
    return m_startTime;
}

void AssemblyUsageDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AssemblyUsageDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AssemblyUsageDetail::GetEndTime() const
{
    return m_endTime;
}

void AssemblyUsageDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AssemblyUsageDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AssemblyUsageDetail::GetDuration() const
{
    return m_duration;
}

void AssemblyUsageDetail::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AssemblyUsageDetail::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AssemblyUsageDetail::GetChannelTier() const
{
    return m_channelTier;
}

void AssemblyUsageDetail::SetChannelTier(const string& _channelTier)
{
    m_channelTier = _channelTier;
    m_channelTierHasBeenSet = true;
}

bool AssemblyUsageDetail::ChannelTierHasBeenSet() const
{
    return m_channelTierHasBeenSet;
}

string AssemblyUsageDetail::GetChannelName() const
{
    return m_channelName;
}

void AssemblyUsageDetail::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool AssemblyUsageDetail::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

