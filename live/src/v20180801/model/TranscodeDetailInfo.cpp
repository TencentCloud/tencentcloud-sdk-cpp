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
    m_resolutionHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ModuleCodec") && !value["ModuleCodec"].IsNull())
    {
        if (!value["ModuleCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.ModuleCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCodec = string(value["ModuleCodec"].GetString());
        m_moduleCodecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("MainlandOrOversea") && !value["MainlandOrOversea"].IsNull())
    {
        if (!value["MainlandOrOversea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeDetailInfo.MainlandOrOversea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainlandOrOversea = string(value["MainlandOrOversea"].GetString());
        m_mainlandOrOverseaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_moduleCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
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

string TranscodeDetailInfo::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void TranscodeDetailInfo::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool TranscodeDetailInfo::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

