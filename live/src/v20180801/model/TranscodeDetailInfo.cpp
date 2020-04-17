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

#include <tencentcloud/live/v20180801/model/TranscodeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

TranscodeDetailInfo::TranscodeDetailInfo() :
    m_streamNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_moduleCodecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeDetailInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ModuleCodec") && !value["ModuleCodec"].IsNull())
    {
        if (!value["ModuleCodec"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.ModuleCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCodec = string(value["ModuleCodec"].GetString());
        m_moduleCodecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Error("response `TranscodeDetailInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeDetailInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_moduleCodecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModuleCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_moduleCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


string TranscodeDetailInfo::GetStreamName() const
{
    return m_streamName;
}

void TranscodeDetailInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool TranscodeDetailInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string TranscodeDetailInfo::GetStartTime() const
{
    return m_startTime;
}

void TranscodeDetailInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TranscodeDetailInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TranscodeDetailInfo::GetEndTime() const
{
    return m_endTime;
}

void TranscodeDetailInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TranscodeDetailInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t TranscodeDetailInfo::GetDuration() const
{
    return m_duration;
}

void TranscodeDetailInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TranscodeDetailInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TranscodeDetailInfo::GetModuleCodec() const
{
    return m_moduleCodec;
}

void TranscodeDetailInfo::SetModuleCodec(const string& _moduleCodec)
{
    m_moduleCodec = _moduleCodec;
    m_moduleCodecHasBeenSet = true;
}

bool TranscodeDetailInfo::ModuleCodecHasBeenSet() const
{
    return m_moduleCodecHasBeenSet;
}

uint64_t TranscodeDetailInfo::GetBitrate() const
{
    return m_bitrate;
}

void TranscodeDetailInfo::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool TranscodeDetailInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string TranscodeDetailInfo::GetType() const
{
    return m_type;
}

void TranscodeDetailInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TranscodeDetailInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TranscodeDetailInfo::GetPushDomain() const
{
    return m_pushDomain;
}

void TranscodeDetailInfo::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool TranscodeDetailInfo::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string TranscodeDetailInfo::GetResolution() const
{
    return m_resolution;
}

void TranscodeDetailInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool TranscodeDetailInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

