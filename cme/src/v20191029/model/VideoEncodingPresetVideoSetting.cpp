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

#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetVideoSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEncodingPresetVideoSetting::VideoEncodingPresetVideoSetting() :
    m_codecHasBeenSet(false),
    m_shortEdgeHasBeenSet(false),
    m_bitrateHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncodingPresetVideoSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSetting.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("ShortEdge") && !value["ShortEdge"].IsNull())
    {
        if (!value["ShortEdge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSetting.ShortEdge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdge = value["ShortEdge"].GetUint64();
        m_shortEdgeHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSetting.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncodingPresetVideoSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_shortEdgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortEdge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shortEdge, allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

}


string VideoEncodingPresetVideoSetting::GetCodec() const
{
    return m_codec;
}

void VideoEncodingPresetVideoSetting::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoEncodingPresetVideoSetting::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t VideoEncodingPresetVideoSetting::GetShortEdge() const
{
    return m_shortEdge;
}

void VideoEncodingPresetVideoSetting::SetShortEdge(const uint64_t& _shortEdge)
{
    m_shortEdge = _shortEdge;
    m_shortEdgeHasBeenSet = true;
}

bool VideoEncodingPresetVideoSetting::ShortEdgeHasBeenSet() const
{
    return m_shortEdgeHasBeenSet;
}

uint64_t VideoEncodingPresetVideoSetting::GetBitrate() const
{
    return m_bitrate;
}

void VideoEncodingPresetVideoSetting::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoEncodingPresetVideoSetting::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

