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

#include <tencentcloud/live/v20180801/model/PushDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PushDataInfo::PushDataInfo() :
    m_streamNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_videoFpsHasBeenSet(false),
    m_videoSpeedHasBeenSet(false),
    m_audioFpsHasBeenSet(false),
    m_audioSpeedHasBeenSet(false),
    m_pushDomainHasBeenSet(false),
    m_beginPushTimeHasBeenSet(false),
    m_acodecHasBeenSet(false),
    m_vcodecHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_asampleRateHasBeenSet(false),
    m_metaAudioSpeedHasBeenSet(false),
    m_metaVideoSpeedHasBeenSet(false),
    m_metaFpsHasBeenSet(false)
{
}

CoreInternalOutcome PushDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("VideoFps") && !value["VideoFps"].IsNull())
    {
        if (!value["VideoFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.VideoFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFps = value["VideoFps"].GetUint64();
        m_videoFpsHasBeenSet = true;
    }

    if (value.HasMember("VideoSpeed") && !value["VideoSpeed"].IsNull())
    {
        if (!value["VideoSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.VideoSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoSpeed = value["VideoSpeed"].GetUint64();
        m_videoSpeedHasBeenSet = true;
    }

    if (value.HasMember("AudioFps") && !value["AudioFps"].IsNull())
    {
        if (!value["AudioFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.AudioFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFps = value["AudioFps"].GetUint64();
        m_audioFpsHasBeenSet = true;
    }

    if (value.HasMember("AudioSpeed") && !value["AudioSpeed"].IsNull())
    {
        if (!value["AudioSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.AudioSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSpeed = value["AudioSpeed"].GetUint64();
        m_audioSpeedHasBeenSet = true;
    }

    if (value.HasMember("PushDomain") && !value["PushDomain"].IsNull())
    {
        if (!value["PushDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.PushDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushDomain = string(value["PushDomain"].GetString());
        m_pushDomainHasBeenSet = true;
    }

    if (value.HasMember("BeginPushTime") && !value["BeginPushTime"].IsNull())
    {
        if (!value["BeginPushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.BeginPushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginPushTime = string(value["BeginPushTime"].GetString());
        m_beginPushTimeHasBeenSet = true;
    }

    if (value.HasMember("Acodec") && !value["Acodec"].IsNull())
    {
        if (!value["Acodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.Acodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acodec = string(value["Acodec"].GetString());
        m_acodecHasBeenSet = true;
    }

    if (value.HasMember("Vcodec") && !value["Vcodec"].IsNull())
    {
        if (!value["Vcodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.Vcodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vcodec = string(value["Vcodec"].GetString());
        m_vcodecHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AsampleRate") && !value["AsampleRate"].IsNull())
    {
        if (!value["AsampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.AsampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_asampleRate = value["AsampleRate"].GetUint64();
        m_asampleRateHasBeenSet = true;
    }

    if (value.HasMember("MetaAudioSpeed") && !value["MetaAudioSpeed"].IsNull())
    {
        if (!value["MetaAudioSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.MetaAudioSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metaAudioSpeed = value["MetaAudioSpeed"].GetUint64();
        m_metaAudioSpeedHasBeenSet = true;
    }

    if (value.HasMember("MetaVideoSpeed") && !value["MetaVideoSpeed"].IsNull())
    {
        if (!value["MetaVideoSpeed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.MetaVideoSpeed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metaVideoSpeed = value["MetaVideoSpeed"].GetUint64();
        m_metaVideoSpeedHasBeenSet = true;
    }

    if (value.HasMember("MetaFps") && !value["MetaFps"].IsNull())
    {
        if (!value["MetaFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PushDataInfo.MetaFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_metaFps = value["MetaFps"].GetUint64();
        m_metaFpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PushDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
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

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_videoFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFps, allocator);
    }

    if (m_videoSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoSpeed, allocator);
    }

    if (m_audioFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFps, allocator);
    }

    if (m_audioSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioSpeed, allocator);
    }

    if (m_pushDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_beginPushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginPushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginPushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_acodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Acodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acodec.c_str(), allocator).Move(), allocator);
    }

    if (m_vcodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vcodec.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_asampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asampleRate, allocator);
    }

    if (m_metaAudioSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaAudioSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metaAudioSpeed, allocator);
    }

    if (m_metaVideoSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaVideoSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metaVideoSpeed, allocator);
    }

    if (m_metaFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metaFps, allocator);
    }

}


string PushDataInfo::GetStreamName() const
{
    return m_streamName;
}

void PushDataInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool PushDataInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string PushDataInfo::GetAppName() const
{
    return m_appName;
}

void PushDataInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PushDataInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string PushDataInfo::GetClientIp() const
{
    return m_clientIp;
}

void PushDataInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool PushDataInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string PushDataInfo::GetServerIp() const
{
    return m_serverIp;
}

void PushDataInfo::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool PushDataInfo::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

uint64_t PushDataInfo::GetVideoFps() const
{
    return m_videoFps;
}

void PushDataInfo::SetVideoFps(const uint64_t& _videoFps)
{
    m_videoFps = _videoFps;
    m_videoFpsHasBeenSet = true;
}

bool PushDataInfo::VideoFpsHasBeenSet() const
{
    return m_videoFpsHasBeenSet;
}

uint64_t PushDataInfo::GetVideoSpeed() const
{
    return m_videoSpeed;
}

void PushDataInfo::SetVideoSpeed(const uint64_t& _videoSpeed)
{
    m_videoSpeed = _videoSpeed;
    m_videoSpeedHasBeenSet = true;
}

bool PushDataInfo::VideoSpeedHasBeenSet() const
{
    return m_videoSpeedHasBeenSet;
}

uint64_t PushDataInfo::GetAudioFps() const
{
    return m_audioFps;
}

void PushDataInfo::SetAudioFps(const uint64_t& _audioFps)
{
    m_audioFps = _audioFps;
    m_audioFpsHasBeenSet = true;
}

bool PushDataInfo::AudioFpsHasBeenSet() const
{
    return m_audioFpsHasBeenSet;
}

uint64_t PushDataInfo::GetAudioSpeed() const
{
    return m_audioSpeed;
}

void PushDataInfo::SetAudioSpeed(const uint64_t& _audioSpeed)
{
    m_audioSpeed = _audioSpeed;
    m_audioSpeedHasBeenSet = true;
}

bool PushDataInfo::AudioSpeedHasBeenSet() const
{
    return m_audioSpeedHasBeenSet;
}

string PushDataInfo::GetPushDomain() const
{
    return m_pushDomain;
}

void PushDataInfo::SetPushDomain(const string& _pushDomain)
{
    m_pushDomain = _pushDomain;
    m_pushDomainHasBeenSet = true;
}

bool PushDataInfo::PushDomainHasBeenSet() const
{
    return m_pushDomainHasBeenSet;
}

string PushDataInfo::GetBeginPushTime() const
{
    return m_beginPushTime;
}

void PushDataInfo::SetBeginPushTime(const string& _beginPushTime)
{
    m_beginPushTime = _beginPushTime;
    m_beginPushTimeHasBeenSet = true;
}

bool PushDataInfo::BeginPushTimeHasBeenSet() const
{
    return m_beginPushTimeHasBeenSet;
}

string PushDataInfo::GetAcodec() const
{
    return m_acodec;
}

void PushDataInfo::SetAcodec(const string& _acodec)
{
    m_acodec = _acodec;
    m_acodecHasBeenSet = true;
}

bool PushDataInfo::AcodecHasBeenSet() const
{
    return m_acodecHasBeenSet;
}

string PushDataInfo::GetVcodec() const
{
    return m_vcodec;
}

void PushDataInfo::SetVcodec(const string& _vcodec)
{
    m_vcodec = _vcodec;
    m_vcodecHasBeenSet = true;
}

bool PushDataInfo::VcodecHasBeenSet() const
{
    return m_vcodecHasBeenSet;
}

string PushDataInfo::GetResolution() const
{
    return m_resolution;
}

void PushDataInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool PushDataInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t PushDataInfo::GetAsampleRate() const
{
    return m_asampleRate;
}

void PushDataInfo::SetAsampleRate(const uint64_t& _asampleRate)
{
    m_asampleRate = _asampleRate;
    m_asampleRateHasBeenSet = true;
}

bool PushDataInfo::AsampleRateHasBeenSet() const
{
    return m_asampleRateHasBeenSet;
}

uint64_t PushDataInfo::GetMetaAudioSpeed() const
{
    return m_metaAudioSpeed;
}

void PushDataInfo::SetMetaAudioSpeed(const uint64_t& _metaAudioSpeed)
{
    m_metaAudioSpeed = _metaAudioSpeed;
    m_metaAudioSpeedHasBeenSet = true;
}

bool PushDataInfo::MetaAudioSpeedHasBeenSet() const
{
    return m_metaAudioSpeedHasBeenSet;
}

uint64_t PushDataInfo::GetMetaVideoSpeed() const
{
    return m_metaVideoSpeed;
}

void PushDataInfo::SetMetaVideoSpeed(const uint64_t& _metaVideoSpeed)
{
    m_metaVideoSpeed = _metaVideoSpeed;
    m_metaVideoSpeedHasBeenSet = true;
}

bool PushDataInfo::MetaVideoSpeedHasBeenSet() const
{
    return m_metaVideoSpeedHasBeenSet;
}

uint64_t PushDataInfo::GetMetaFps() const
{
    return m_metaFps;
}

void PushDataInfo::SetMetaFps(const uint64_t& _metaFps)
{
    m_metaFps = _metaFps;
    m_metaFpsHasBeenSet = true;
}

bool PushDataInfo::MetaFpsHasBeenSet() const
{
    return m_metaFpsHasBeenSet;
}

