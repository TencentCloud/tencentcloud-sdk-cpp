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

#include <tencentcloud/vod/v20180717/model/OutputAudioStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

OutputAudioStream::OutputAudioStream() :
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_audioChannelHasBeenSet(false)
{
}

CoreInternalOutcome OutputAudioStream::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputAudioStream.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputAudioStream.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioChannel") && !value["AudioChannel"].IsNull())
    {
        if (!value["AudioChannel"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputAudioStream.AudioChannel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannel = value["AudioChannel"].GetInt64();
        m_audioChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputAudioStream::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_audioChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioChannel, allocator);
    }

}


string OutputAudioStream::GetCodec() const
{
    return m_codec;
}

void OutputAudioStream::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool OutputAudioStream::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t OutputAudioStream::GetSampleRate() const
{
    return m_sampleRate;
}

void OutputAudioStream::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool OutputAudioStream::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t OutputAudioStream::GetAudioChannel() const
{
    return m_audioChannel;
}

void OutputAudioStream::SetAudioChannel(const int64_t& _audioChannel)
{
    m_audioChannel = _audioChannel;
    m_audioChannelHasBeenSet = true;
}

bool OutputAudioStream::AudioChannelHasBeenSet() const
{
    return m_audioChannelHasBeenSet;
}

