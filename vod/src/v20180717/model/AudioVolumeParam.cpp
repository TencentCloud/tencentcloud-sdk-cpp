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

#include <tencentcloud/vod/v20180717/model/AudioVolumeParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AudioVolumeParam::AudioVolumeParam() :
    m_muteHasBeenSet(false),
    m_gainHasBeenSet(false)
{
}

CoreInternalOutcome AudioVolumeParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mute") && !value["Mute"].IsNull())
    {
        if (!value["Mute"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioVolumeParam.Mute` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mute = value["Mute"].GetInt64();
        m_muteHasBeenSet = true;
    }

    if (value.HasMember("Gain") && !value["Gain"].IsNull())
    {
        if (!value["Gain"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioVolumeParam.Gain` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gain = value["Gain"].GetDouble();
        m_gainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioVolumeParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_muteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mute, allocator);
    }

    if (m_gainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gain, allocator);
    }

}


int64_t AudioVolumeParam::GetMute() const
{
    return m_mute;
}

void AudioVolumeParam::SetMute(const int64_t& _mute)
{
    m_mute = _mute;
    m_muteHasBeenSet = true;
}

bool AudioVolumeParam::MuteHasBeenSet() const
{
    return m_muteHasBeenSet;
}

double AudioVolumeParam::GetGain() const
{
    return m_gain;
}

void AudioVolumeParam::SetGain(const double& _gain)
{
    m_gain = _gain;
    m_gainHasBeenSet = true;
}

bool AudioVolumeParam::GainHasBeenSet() const
{
    return m_gainHasBeenSet;
}

