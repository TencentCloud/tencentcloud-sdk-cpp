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

#include <tencentcloud/live/v20180801/model/TimeShiftStreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TimeShiftStreamInfo::TimeShiftStreamInfo() :
    m_domainGroupHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_transCodeIdHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_timeShiftSubStreamsHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftStreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainGroup") && !value["DomainGroup"].IsNull())
    {
        if (!value["DomainGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.DomainGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainGroup = string(value["DomainGroup"].GetString());
        m_domainGroupHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TransCodeId") && !value["TransCodeId"].IsNull())
    {
        if (!value["TransCodeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.TransCodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transCodeId = value["TransCodeId"].GetUint64();
        m_transCodeIdHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.StreamType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetInt64();
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftSubStreams") && !value["TimeShiftSubStreams"].IsNull())
    {
        if (!value["TimeShiftSubStreams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeShiftStreamInfo.TimeShiftSubStreams` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeShiftSubStreams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeShiftSubStream item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeShiftSubStreams.push_back(item);
        }
        m_timeShiftSubStreamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftStreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
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

    if (m_transCodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransCodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transCodeId, allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamType, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_timeShiftSubStreamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftSubStreams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeShiftSubStreams.begin(); itr != m_timeShiftSubStreams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TimeShiftStreamInfo::GetDomainGroup() const
{
    return m_domainGroup;
}

void TimeShiftStreamInfo::SetDomainGroup(const string& _domainGroup)
{
    m_domainGroup = _domainGroup;
    m_domainGroupHasBeenSet = true;
}

bool TimeShiftStreamInfo::DomainGroupHasBeenSet() const
{
    return m_domainGroupHasBeenSet;
}

string TimeShiftStreamInfo::GetDomain() const
{
    return m_domain;
}

void TimeShiftStreamInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TimeShiftStreamInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string TimeShiftStreamInfo::GetAppName() const
{
    return m_appName;
}

void TimeShiftStreamInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool TimeShiftStreamInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string TimeShiftStreamInfo::GetStreamName() const
{
    return m_streamName;
}

void TimeShiftStreamInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool TimeShiftStreamInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

int64_t TimeShiftStreamInfo::GetStartTime() const
{
    return m_startTime;
}

void TimeShiftStreamInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TimeShiftStreamInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t TimeShiftStreamInfo::GetEndTime() const
{
    return m_endTime;
}

void TimeShiftStreamInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TimeShiftStreamInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t TimeShiftStreamInfo::GetTransCodeId() const
{
    return m_transCodeId;
}

void TimeShiftStreamInfo::SetTransCodeId(const uint64_t& _transCodeId)
{
    m_transCodeId = _transCodeId;
    m_transCodeIdHasBeenSet = true;
}

bool TimeShiftStreamInfo::TransCodeIdHasBeenSet() const
{
    return m_transCodeIdHasBeenSet;
}

int64_t TimeShiftStreamInfo::GetStreamType() const
{
    return m_streamType;
}

void TimeShiftStreamInfo::SetStreamType(const int64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool TimeShiftStreamInfo::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

uint64_t TimeShiftStreamInfo::GetDuration() const
{
    return m_duration;
}

void TimeShiftStreamInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TimeShiftStreamInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<TimeShiftSubStream> TimeShiftStreamInfo::GetTimeShiftSubStreams() const
{
    return m_timeShiftSubStreams;
}

void TimeShiftStreamInfo::SetTimeShiftSubStreams(const vector<TimeShiftSubStream>& _timeShiftSubStreams)
{
    m_timeShiftSubStreams = _timeShiftSubStreams;
    m_timeShiftSubStreamsHasBeenSet = true;
}

bool TimeShiftStreamInfo::TimeShiftSubStreamsHasBeenSet() const
{
    return m_timeShiftSubStreamsHasBeenSet;
}

