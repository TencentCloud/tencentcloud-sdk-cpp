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

#include <tencentcloud/live/v20180801/model/PushQualityData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PushQualityData::PushQualityData() :
    m_timeHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_beginPushTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_vCodecHasBeenSet(false),
    m_aCodecHasBeenSet(false),
    m_sequenceHasBeenSet(false),
    m_videoFpsHasBeenSet(false),
    m_videoRateHasBeenSet(false),
    m_audioFpsHasBeenSet(false),
    m_audioRateHasBeenSet(false),
    m_localTsHasBeenSet(false),
    m_videoTsHasBeenSet(false),
    m_audioTsHasBeenSet(false),
    m_metaVideoRateHasBeenSet(false),
    m_metaAudioRateHasBeenSet(false),
    m_mateFpsHasBeenSet(false),
    m_streamParamHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_gopSizeHasBeenSet(false)
{
}

CoreInternalOutcome PushQualityData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("BeginPushTime") && !value["BeginPushTime"].IsNull())
    {
        if (!value["BeginPushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.BeginPushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginPushTime = string(value["BeginPushTime"].GetString());
        m_beginPushTimeHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("VCodec") && !value["VCodec"].IsNull())
    {
        if (!value["VCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.VCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vCodec = string(value["VCodec"].GetString());
        m_vCodecHasBeenSet = true;
    }

    if (value.HasMember("ACodec") && !value["ACodec"].IsNull())
    {
        if (!value["ACodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.ACodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aCodec = string(value["ACodec"].GetString());
        m_aCodecHasBeenSet = true;
    }

    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.Sequence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = string(value["Sequence"].GetString());
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("VideoFps") && !value["VideoFps"].IsNull())
    {
        if (!value["VideoFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.VideoFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFps = value["VideoFps"].GetUint64();
        m_videoFpsHasBeenSet = true;
    }

    if (value.HasMember("VideoRate") && !value["VideoRate"].IsNull())
    {
        if (!value["VideoRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.VideoRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoRate = value["VideoRate"].GetUint64();
        m_videoRateHasBeenSet = true;
    }

    if (value.HasMember("AudioFps") && !value["AudioFps"].IsNull())
    {
        if (!value["AudioFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.AudioFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFps = value["AudioFps"].GetUint64();
        m_audioFpsHasBeenSet = true;
    }

    if (value.HasMember("AudioRate") && !value["AudioRate"].IsNull())
    {
        if (!value["AudioRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.AudioRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioRate = value["AudioRate"].GetUint64();
        m_audioRateHasBeenSet = true;
    }

    if (value.HasMember("LocalTs") && !value["LocalTs"].IsNull())
    {
        if (!value["LocalTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.LocalTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_localTs = value["LocalTs"].GetUint64();
        m_localTsHasBeenSet = true;
    }

    if (value.HasMember("VideoTs") && !value["VideoTs"].IsNull())
    {
        if (!value["VideoTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.VideoTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTs = value["VideoTs"].GetUint64();
        m_videoTsHasBeenSet = true;
    }

    if (value.HasMember("AudioTs") && !value["AudioTs"].IsNull())
    {
        if (!value["AudioTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.AudioTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTs = value["AudioTs"].GetUint64();
        m_audioTsHasBeenSet = true;
    }

    if (value.HasMember("MetaVideoRate") && !value["MetaVideoRate"].IsNull())
    {
        if (!value["MetaVideoRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.MetaVideoRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metaVideoRate = value["MetaVideoRate"].GetUint64();
        m_metaVideoRateHasBeenSet = true;
    }

    if (value.HasMember("MetaAudioRate") && !value["MetaAudioRate"].IsNull())
    {
        if (!value["MetaAudioRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.MetaAudioRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metaAudioRate = value["MetaAudioRate"].GetUint64();
        m_metaAudioRateHasBeenSet = true;
    }

    if (value.HasMember("MateFps") && !value["MateFps"].IsNull())
    {
        if (!value["MateFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.MateFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mateFps = value["MateFps"].GetUint64();
        m_mateFpsHasBeenSet = true;
    }

    if (value.HasMember("StreamParam") && !value["StreamParam"].IsNull())
    {
        if (!value["StreamParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.StreamParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamParam = string(value["StreamParam"].GetString());
        m_streamParamHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.Bandwidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetDouble();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("GopSize") && !value["GopSize"].IsNull())
    {
        if (!value["GopSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PushQualityData.GopSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gopSize = value["GopSize"].GetInt64();
        m_gopSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushQualityData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_beginPushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginPushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginPushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_vCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_aCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sequence.c_str(), allocator).Move(), allocator);
    }

    if (m_videoFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFps, allocator);
    }

    if (m_videoRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoRate, allocator);
    }

    if (m_audioFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFps, allocator);
    }

    if (m_audioRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioRate, allocator);
    }

    if (m_localTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localTs, allocator);
    }

    if (m_videoTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTs, allocator);
    }

    if (m_audioTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioTs, allocator);
    }

    if (m_metaVideoRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaVideoRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metaVideoRate, allocator);
    }

    if (m_metaAudioRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaAudioRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metaAudioRate, allocator);
    }

    if (m_mateFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MateFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mateFps, allocator);
    }

    if (m_streamParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamParam.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_gopSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GopSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gopSize, allocator);
    }

}


string PushQualityData::GetTime() const
{
    return m_time;
}

void PushQualityData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool PushQualityData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string PushQualityData::GetPushDomain() const
{
    return m_pushDomain;
}

void PushQualityData::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool PushQualityData::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string PushQualityData::GetAppName() const
{
    return m_appName;
}

void PushQualityData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PushQualityData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string PushQualityData::GetClientIp() const
{
    return m_clientIp;
}

void PushQualityData::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool PushQualityData::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string PushQualityData::GetBeginPushTime() const
{
    return m_beginPushTime;
}

void PushQualityData::SetBeginPushTime(const string& _beginPushTime)
{
    m_beginPushTime = _beginPushTime;
    m_beginPushTimeHasBeenSet = true;
}

bool PushQualityData::BeginPushTimeHasBeenSet() const
{
    return m_beginPushTimeHasBeenSet;
}

string PushQualityData::GetResolution() const
{
    return m_resolution;
}

void PushQualityData::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool PushQualityData::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string PushQualityData::GetVCodec() const
{
    return m_vCodec;
}

void PushQualityData::SetVCodec(const string& _vCodec)
{
    m_vCodec = _vCodec;
    m_vCodecHasBeenSet = true;
}

bool PushQualityData::VCodecHasBeenSet() const
{
    return m_vCodecHasBeenSet;
}

string PushQualityData::GetACodec() const
{
    return m_aCodec;
}

void PushQualityData::SetACodec(const string& _aCodec)
{
    m_aCodec = _aCodec;
    m_aCodecHasBeenSet = true;
}

bool PushQualityData::ACodecHasBeenSet() const
{
    return m_aCodecHasBeenSet;
}

string PushQualityData::GetSequence() const
{
    return m_sequence;
}

void PushQualityData::SetSequence(const string& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool PushQualityData::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

uint64_t PushQualityData::GetVideoFps() const
{
    return m_videoFps;
}

void PushQualityData::SetVideoFps(const uint64_t& _videoFps)
{
    m_videoFps = _videoFps;
    m_videoFpsHasBeenSet = true;
}

bool PushQualityData::VideoFpsHasBeenSet() const
{
    return m_videoFpsHasBeenSet;
}

uint64_t PushQualityData::GetVideoRate() const
{
    return m_videoRate;
}

void PushQualityData::SetVideoRate(const uint64_t& _videoRate)
{
    m_videoRate = _videoRate;
    m_videoRateHasBeenSet = true;
}

bool PushQualityData::VideoRateHasBeenSet() const
{
    return m_videoRateHasBeenSet;
}

uint64_t PushQualityData::GetAudioFps() const
{
    return m_audioFps;
}

void PushQualityData::SetAudioFps(const uint64_t& _audioFps)
{
    m_audioFps = _audioFps;
    m_audioFpsHasBeenSet = true;
}

bool PushQualityData::AudioFpsHasBeenSet() const
{
    return m_audioFpsHasBeenSet;
}

uint64_t PushQualityData::GetAudioRate() const
{
    return m_audioRate;
}

void PushQualityData::SetAudioRate(const uint64_t& _audioRate)
{
    m_audioRate = _audioRate;
    m_audioRateHasBeenSet = true;
}

bool PushQualityData::AudioRateHasBeenSet() const
{
    return m_audioRateHasBeenSet;
}

uint64_t PushQualityData::GetLocalTs() const
{
    return m_localTs;
}

void PushQualityData::SetLocalTs(const uint64_t& _localTs)
{
    m_localTs = _localTs;
    m_localTsHasBeenSet = true;
}

bool PushQualityData::LocalTsHasBeenSet() const
{
    return m_localTsHasBeenSet;
}

uint64_t PushQualityData::GetVideoTs() const
{
    return m_videoTs;
}

void PushQualityData::SetVideoTs(const uint64_t& _videoTs)
{
    m_videoTs = _videoTs;
    m_videoTsHasBeenSet = true;
}

bool PushQualityData::VideoTsHasBeenSet() const
{
    return m_videoTsHasBeenSet;
}

uint64_t PushQualityData::GetAudioTs() const
{
    return m_audioTs;
}

void PushQualityData::SetAudioTs(const uint64_t& _audioTs)
{
    m_audioTs = _audioTs;
    m_audioTsHasBeenSet = true;
}

bool PushQualityData::AudioTsHasBeenSet() const
{
    return m_audioTsHasBeenSet;
}

uint64_t PushQualityData::GetMetaVideoRate() const
{
    return m_metaVideoRate;
}

void PushQualityData::SetMetaVideoRate(const uint64_t& _metaVideoRate)
{
    m_metaVideoRate = _metaVideoRate;
    m_metaVideoRateHasBeenSet = true;
}

bool PushQualityData::MetaVideoRateHasBeenSet() const
{
    return m_metaVideoRateHasBeenSet;
}

uint64_t PushQualityData::GetMetaAudioRate() const
{
    return m_metaAudioRate;
}

void PushQualityData::SetMetaAudioRate(const uint64_t& _metaAudioRate)
{
    m_metaAudioRate = _metaAudioRate;
    m_metaAudioRateHasBeenSet = true;
}

bool PushQualityData::MetaAudioRateHasBeenSet() const
{
    return m_metaAudioRateHasBeenSet;
}

uint64_t PushQualityData::GetMateFps() const
{
    return m_mateFps;
}

void PushQualityData::SetMateFps(const uint64_t& _mateFps)
{
    m_mateFps = _mateFps;
    m_mateFpsHasBeenSet = true;
}

bool PushQualityData::MateFpsHasBeenSet() const
{
    return m_mateFpsHasBeenSet;
}

string PushQualityData::GetStreamParam() const
{
    return m_streamParam;
}

void PushQualityData::SetStreamParam(const string& _streamParam)
{
    m_streamParam = _streamParam;
    m_streamParamHasBeenSet = true;
}

bool PushQualityData::StreamParamHasBeenSet() const
{
    return m_streamParamHasBeenSet;
}

double PushQualityData::GetBandwidth() const
{
    return m_bandwidth;
}

void PushQualityData::SetBandwidth(const double& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool PushQualityData::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

double PushQualityData::GetFlux() const
{
    return m_flux;
}

void PushQualityData::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool PushQualityData::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

string PushQualityData::GetServerIp() const
{
    return m_serverIp;
}

void PushQualityData::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool PushQualityData::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

int64_t PushQualityData::GetGopSize() const
{
    return m_gopSize;
}

void PushQualityData::SetGopSize(const int64_t& _gopSize)
{
    m_gopSize = _gopSize;
    m_gopSizeHasBeenSet = true;
}

bool PushQualityData::GopSizeHasBeenSet() const
{
    return m_gopSizeHasBeenSet;
}

