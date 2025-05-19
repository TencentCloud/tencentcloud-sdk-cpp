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

#include <tencentcloud/lke/v20231130/model/VoiceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

VoiceConfig::VoiceConfig() :
    m_voiceTypeHasBeenSet(false),
    m_timbreKeyHasBeenSet(false),
    m_voiceNameHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConfig.VoiceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetUint64();
        m_voiceTypeHasBeenSet = true;
    }

    if (value.HasMember("TimbreKey") && !value["TimbreKey"].IsNull())
    {
        if (!value["TimbreKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConfig.TimbreKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timbreKey = string(value["TimbreKey"].GetString());
        m_timbreKeyHasBeenSet = true;
    }

    if (value.HasMember("VoiceName") && !value["VoiceName"].IsNull())
    {
        if (!value["VoiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConfig.VoiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceName = string(value["VoiceName"].GetString());
        m_voiceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VoiceConfig::GetVoiceType() const
{
    return m_voiceType;
}

void VoiceConfig::SetVoiceType(const uint64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool VoiceConfig::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string VoiceConfig::GetTimbreKey() const
{
    return m_timbreKey;
}

void VoiceConfig::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool VoiceConfig::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

string VoiceConfig::GetVoiceName() const
{
    return m_voiceName;
}

void VoiceConfig::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool VoiceConfig::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

