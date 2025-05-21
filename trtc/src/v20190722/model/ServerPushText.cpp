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

#include <tencentcloud/trtc/v20190722/model/ServerPushText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ServerPushText::ServerPushText() :
    m_textHasBeenSet(false),
    m_interruptHasBeenSet(false),
    m_stopAfterPlayHasBeenSet(false),
    m_audioHasBeenSet(false),
    m_dropModeHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome ServerPushText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Interrupt") && !value["Interrupt"].IsNull())
    {
        if (!value["Interrupt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Interrupt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_interrupt = value["Interrupt"].GetBool();
        m_interruptHasBeenSet = true;
    }

    if (value.HasMember("StopAfterPlay") && !value["StopAfterPlay"].IsNull())
    {
        if (!value["StopAfterPlay"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.StopAfterPlay` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stopAfterPlay = value["StopAfterPlay"].GetBool();
        m_stopAfterPlayHasBeenSet = true;
    }

    if (value.HasMember("Audio") && !value["Audio"].IsNull())
    {
        if (!value["Audio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Audio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audio = string(value["Audio"].GetString());
        m_audioHasBeenSet = true;
    }

    if (value.HasMember("DropMode") && !value["DropMode"].IsNull())
    {
        if (!value["DropMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.DropMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dropMode = value["DropMode"].GetUint64();
        m_dropModeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerPushText.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerPushText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interrupt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interrupt, allocator);
    }

    if (m_stopAfterPlayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopAfterPlay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopAfterPlay, allocator);
    }

    if (m_audioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audio.c_str(), allocator).Move(), allocator);
    }

    if (m_dropModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropMode, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string ServerPushText::GetText() const
{
    return m_text;
}

void ServerPushText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ServerPushText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

bool ServerPushText::GetInterrupt() const
{
    return m_interrupt;
}

void ServerPushText::SetInterrupt(const bool& _interrupt)
{
    m_interrupt = _interrupt;
    m_interruptHasBeenSet = true;
}

bool ServerPushText::InterruptHasBeenSet() const
{
    return m_interruptHasBeenSet;
}

bool ServerPushText::GetStopAfterPlay() const
{
    return m_stopAfterPlay;
}

void ServerPushText::SetStopAfterPlay(const bool& _stopAfterPlay)
{
    m_stopAfterPlay = _stopAfterPlay;
    m_stopAfterPlayHasBeenSet = true;
}

bool ServerPushText::StopAfterPlayHasBeenSet() const
{
    return m_stopAfterPlayHasBeenSet;
}

string ServerPushText::GetAudio() const
{
    return m_audio;
}

void ServerPushText::SetAudio(const string& _audio)
{
    m_audio = _audio;
    m_audioHasBeenSet = true;
}

bool ServerPushText::AudioHasBeenSet() const
{
    return m_audioHasBeenSet;
}

uint64_t ServerPushText::GetDropMode() const
{
    return m_dropMode;
}

void ServerPushText::SetDropMode(const uint64_t& _dropMode)
{
    m_dropMode = _dropMode;
    m_dropModeHasBeenSet = true;
}

bool ServerPushText::DropModeHasBeenSet() const
{
    return m_dropModeHasBeenSet;
}

uint64_t ServerPushText::GetPriority() const
{
    return m_priority;
}

void ServerPushText::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ServerPushText::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

