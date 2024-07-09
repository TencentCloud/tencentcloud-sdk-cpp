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

#include <tencentcloud/ivld/v20210903/model/TTSMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TTSMode::TTSMode() :
    m_speedHasBeenSet(false),
    m_voiceTypeHasBeenSet(false)
{
}

CoreInternalOutcome TTSMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TTSMode.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TTSMode.VoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetInt64();
        m_voiceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TTSMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

}


double TTSMode::GetSpeed() const
{
    return m_speed;
}

void TTSMode::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TTSMode::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t TTSMode::GetVoiceType() const
{
    return m_voiceType;
}

void TTSMode::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool TTSMode::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

