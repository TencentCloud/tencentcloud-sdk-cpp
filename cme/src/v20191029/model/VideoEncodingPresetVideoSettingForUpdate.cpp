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

#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetVideoSettingForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEncodingPresetVideoSettingForUpdate::VideoEncodingPresetVideoSettingForUpdate() :
    m_shortEdgeHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_frameRateHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncodingPresetVideoSettingForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShortEdge") && !value["ShortEdge"].IsNull())
    {
        if (!value["ShortEdge"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSettingForUpdate.ShortEdge` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shortEdge = value["ShortEdge"].GetUint64();
        m_shortEdgeHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSettingForUpdate.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetVideoSettingForUpdate.FrameRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frameRate = value["FrameRate"].GetDouble();
        m_frameRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncodingPresetVideoSettingForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRate, allocator);
    }

}


uint64_t VideoEncodingPresetVideoSettingForUpdate::GetShortEdge() const
{
    return m_shortEdge;
}

void VideoEncodingPresetVideoSettingForUpdate::SetShortEdge(const uint64_t& _shortEdge)
{
    m_shortEdge = _shortEdge;
    m_shortEdgeHasBeenSet = true;
}

bool VideoEncodingPresetVideoSettingForUpdate::ShortEdgeHasBeenSet() const
{
    return m_shortEdgeHasBeenSet;
}

uint64_t VideoEncodingPresetVideoSettingForUpdate::GetBitrate() const
{
    return m_bitrate;
}

void VideoEncodingPresetVideoSettingForUpdate::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoEncodingPresetVideoSettingForUpdate::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

double VideoEncodingPresetVideoSettingForUpdate::GetFrameRate() const
{
    return m_frameRate;
}

void VideoEncodingPresetVideoSettingForUpdate::SetFrameRate(const double& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool VideoEncodingPresetVideoSettingForUpdate::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

