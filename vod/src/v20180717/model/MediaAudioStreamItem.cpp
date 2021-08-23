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

#include <tencentcloud/vod/v20180717/model/MediaAudioStreamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaAudioStreamItem::MediaAudioStreamItem() :
    m_bitrateHasBeenSet(false),
    m_samplingRateHasBeenSet(false),
    m_codecHasBeenSet(false)
{
}

CoreInternalOutcome MediaAudioStreamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("SamplingRate") && !value["SamplingRate"].IsNull())
    {
        if (!value["SamplingRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.SamplingRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_samplingRate = value["SamplingRate"].GetInt64();
        m_samplingRateHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAudioStreamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_samplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplingRate, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

}


int64_t MediaAudioStreamItem::GetBitrate() const
{
    return m_bitrate;
}

void MediaAudioStreamItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaAudioStreamItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t MediaAudioStreamItem::GetSamplingRate() const
{
    return m_samplingRate;
}

void MediaAudioStreamItem::SetSamplingRate(const int64_t& _samplingRate)
{
    m_samplingRate = _samplingRate;
    m_samplingRateHasBeenSet = true;
}

bool MediaAudioStreamItem::SamplingRateHasBeenSet() const
{
    return m_samplingRateHasBeenSet;
}

string MediaAudioStreamItem::GetCodec() const
{
    return m_codec;
}

void MediaAudioStreamItem::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool MediaAudioStreamItem::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

