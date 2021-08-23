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

#include <tencentcloud/iotvideo/v20191126/model/Data.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

Data::Data() :
    m_protocolHasBeenSet(false),
    m_uRIHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_videoCodecHasBeenSet(false),
    m_audioCodecHasBeenSet(false)
{
}

CoreInternalOutcome Data::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("URI") && !value["URI"].IsNull())
    {
        if (!value["URI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.URI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRI = string(value["URI"].GetString());
        m_uRIHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Data.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoCodec") && !value["VideoCodec"].IsNull())
    {
        if (!value["VideoCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.VideoCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoCodec = string(value["VideoCodec"].GetString());
        m_videoCodecHasBeenSet = true;
    }

    if (value.HasMember("AudioCodec") && !value["AudioCodec"].IsNull())
    {
        if (!value["AudioCodec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.AudioCodec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioCodec = string(value["AudioCodec"].GetString());
        m_audioCodecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Data::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_uRIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRI.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_videoCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoCodec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioCodecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioCodec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioCodec.c_str(), allocator).Move(), allocator);
    }

}


string Data::GetProtocol() const
{
    return m_protocol;
}

void Data::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool Data::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string Data::GetURI() const
{
    return m_uRI;
}

void Data::SetURI(const string& _uRI)
{
    m_uRI = _uRI;
    m_uRIHasBeenSet = true;
}

bool Data::URIHasBeenSet() const
{
    return m_uRIHasBeenSet;
}

int64_t Data::GetExpireTime() const
{
    return m_expireTime;
}

void Data::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Data::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Data::GetVideoCodec() const
{
    return m_videoCodec;
}

void Data::SetVideoCodec(const string& _videoCodec)
{
    m_videoCodec = _videoCodec;
    m_videoCodecHasBeenSet = true;
}

bool Data::VideoCodecHasBeenSet() const
{
    return m_videoCodecHasBeenSet;
}

string Data::GetAudioCodec() const
{
    return m_audioCodec;
}

void Data::SetAudioCodec(const string& _audioCodec)
{
    m_audioCodec = _audioCodec;
    m_audioCodecHasBeenSet = true;
}

bool Data::AudioCodecHasBeenSet() const
{
    return m_audioCodecHasBeenSet;
}

