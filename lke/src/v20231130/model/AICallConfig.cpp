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

#include <tencentcloud/lke/v20231130/model/AICallConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AICallConfig::AICallConfig() :
    m_enableVoiceInteractHasBeenSet(false),
    m_enableVoiceCallHasBeenSet(false),
    m_enableDigitalHumanHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_digitalHumanHasBeenSet(false)
{
}

CoreInternalOutcome AICallConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableVoiceInteract") && !value["EnableVoiceInteract"].IsNull())
    {
        if (!value["EnableVoiceInteract"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallConfig.EnableVoiceInteract` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableVoiceInteract = value["EnableVoiceInteract"].GetBool();
        m_enableVoiceInteractHasBeenSet = true;
    }

    if (value.HasMember("EnableVoiceCall") && !value["EnableVoiceCall"].IsNull())
    {
        if (!value["EnableVoiceCall"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallConfig.EnableVoiceCall` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableVoiceCall = value["EnableVoiceCall"].GetBool();
        m_enableVoiceCallHasBeenSet = true;
    }

    if (value.HasMember("EnableDigitalHuman") && !value["EnableDigitalHuman"].IsNull())
    {
        if (!value["EnableDigitalHuman"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AICallConfig.EnableDigitalHuman` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDigitalHuman = value["EnableDigitalHuman"].GetBool();
        m_enableDigitalHumanHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AICallConfig.Voice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voice.Deserialize(value["Voice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceHasBeenSet = true;
    }

    if (value.HasMember("DigitalHuman") && !value["DigitalHuman"].IsNull())
    {
        if (!value["DigitalHuman"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AICallConfig.DigitalHuman` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_digitalHuman.Deserialize(value["DigitalHuman"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_digitalHumanHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AICallConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableVoiceInteractHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVoiceInteract";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableVoiceInteract, allocator);
    }

    if (m_enableVoiceCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVoiceCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableVoiceCall, allocator);
    }

    if (m_enableDigitalHumanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDigitalHuman";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDigitalHuman, allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_digitalHumanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigitalHuman";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_digitalHuman.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool AICallConfig::GetEnableVoiceInteract() const
{
    return m_enableVoiceInteract;
}

void AICallConfig::SetEnableVoiceInteract(const bool& _enableVoiceInteract)
{
    m_enableVoiceInteract = _enableVoiceInteract;
    m_enableVoiceInteractHasBeenSet = true;
}

bool AICallConfig::EnableVoiceInteractHasBeenSet() const
{
    return m_enableVoiceInteractHasBeenSet;
}

bool AICallConfig::GetEnableVoiceCall() const
{
    return m_enableVoiceCall;
}

void AICallConfig::SetEnableVoiceCall(const bool& _enableVoiceCall)
{
    m_enableVoiceCall = _enableVoiceCall;
    m_enableVoiceCallHasBeenSet = true;
}

bool AICallConfig::EnableVoiceCallHasBeenSet() const
{
    return m_enableVoiceCallHasBeenSet;
}

bool AICallConfig::GetEnableDigitalHuman() const
{
    return m_enableDigitalHuman;
}

void AICallConfig::SetEnableDigitalHuman(const bool& _enableDigitalHuman)
{
    m_enableDigitalHuman = _enableDigitalHuman;
    m_enableDigitalHumanHasBeenSet = true;
}

bool AICallConfig::EnableDigitalHumanHasBeenSet() const
{
    return m_enableDigitalHumanHasBeenSet;
}

VoiceConfig AICallConfig::GetVoice() const
{
    return m_voice;
}

void AICallConfig::SetVoice(const VoiceConfig& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool AICallConfig::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

DigitalHumanConfig AICallConfig::GetDigitalHuman() const
{
    return m_digitalHuman;
}

void AICallConfig::SetDigitalHuman(const DigitalHumanConfig& _digitalHuman)
{
    m_digitalHuman = _digitalHuman;
    m_digitalHumanHasBeenSet = true;
}

bool AICallConfig::DigitalHumanHasBeenSet() const
{
    return m_digitalHumanHasBeenSet;
}

