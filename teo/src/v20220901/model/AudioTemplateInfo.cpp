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

#include <tencentcloud/teo/v20220901/model/AudioTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AudioTemplateInfo::AudioTemplateInfo() :
    m_codecHasBeenSet(false),
    m_audioChannelHasBeenSet(false)
{
}

CoreInternalOutcome AudioTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("AudioChannel") && !value["AudioChannel"].IsNull())
    {
        if (!value["AudioChannel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfo.AudioChannel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannel = value["AudioChannel"].GetUint64();
        m_audioChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_audioChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioChannel, allocator);
    }

}


string AudioTemplateInfo::GetCodec() const
{
    return m_codec;
}

void AudioTemplateInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioTemplateInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t AudioTemplateInfo::GetAudioChannel() const
{
    return m_audioChannel;
}

void AudioTemplateInfo::SetAudioChannel(const uint64_t& _audioChannel)
{
    m_audioChannel = _audioChannel;
    m_audioChannelHasBeenSet = true;
}

bool AudioTemplateInfo::AudioChannelHasBeenSet() const
{
    return m_audioChannelHasBeenSet;
}

