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

#include <tencentcloud/gme/v20180711/model/ServiceStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ServiceStatus::ServiceStatus() :
    m_realTimeSpeechHasBeenSet(false),
    m_voiceMessageHasBeenSet(false),
    m_pornHasBeenSet(false),
    m_liveHasBeenSet(false),
    m_realTimeAsrHasBeenSet(false),
    m_textTranslateHasBeenSet(false)
{
}

CoreInternalOutcome ServiceStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealTimeSpeech") && !value["RealTimeSpeech"].IsNull())
    {
        if (!value["RealTimeSpeech"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.RealTimeSpeech` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realTimeSpeech.Deserialize(value["RealTimeSpeech"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realTimeSpeechHasBeenSet = true;
    }

    if (value.HasMember("VoiceMessage") && !value["VoiceMessage"].IsNull())
    {
        if (!value["VoiceMessage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.VoiceMessage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceMessage.Deserialize(value["VoiceMessage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceMessageHasBeenSet = true;
    }

    if (value.HasMember("Porn") && !value["Porn"].IsNull())
    {
        if (!value["Porn"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Porn` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_porn.Deserialize(value["Porn"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornHasBeenSet = true;
    }

    if (value.HasMember("Live") && !value["Live"].IsNull())
    {
        if (!value["Live"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.Live` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_live.Deserialize(value["Live"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveHasBeenSet = true;
    }

    if (value.HasMember("RealTimeAsr") && !value["RealTimeAsr"].IsNull())
    {
        if (!value["RealTimeAsr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.RealTimeAsr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realTimeAsr.Deserialize(value["RealTimeAsr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realTimeAsrHasBeenSet = true;
    }

    if (value.HasMember("TextTranslate") && !value["TextTranslate"].IsNull())
    {
        if (!value["TextTranslate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatus.TextTranslate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTranslate.Deserialize(value["TextTranslate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTranslateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realTimeSpeechHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTimeSpeech";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realTimeSpeech.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceMessage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Porn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_porn.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Live";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_live.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_realTimeAsrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTimeAsr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realTimeAsr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textTranslateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTranslate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTranslate.ToJsonObject(value[key.c_str()], allocator);
    }

}


StatusInfo ServiceStatus::GetRealTimeSpeech() const
{
    return m_realTimeSpeech;
}

void ServiceStatus::SetRealTimeSpeech(const StatusInfo& _realTimeSpeech)
{
    m_realTimeSpeech = _realTimeSpeech;
    m_realTimeSpeechHasBeenSet = true;
}

bool ServiceStatus::RealTimeSpeechHasBeenSet() const
{
    return m_realTimeSpeechHasBeenSet;
}

StatusInfo ServiceStatus::GetVoiceMessage() const
{
    return m_voiceMessage;
}

void ServiceStatus::SetVoiceMessage(const StatusInfo& _voiceMessage)
{
    m_voiceMessage = _voiceMessage;
    m_voiceMessageHasBeenSet = true;
}

bool ServiceStatus::VoiceMessageHasBeenSet() const
{
    return m_voiceMessageHasBeenSet;
}

StatusInfo ServiceStatus::GetPorn() const
{
    return m_porn;
}

void ServiceStatus::SetPorn(const StatusInfo& _porn)
{
    m_porn = _porn;
    m_pornHasBeenSet = true;
}

bool ServiceStatus::PornHasBeenSet() const
{
    return m_pornHasBeenSet;
}

StatusInfo ServiceStatus::GetLive() const
{
    return m_live;
}

void ServiceStatus::SetLive(const StatusInfo& _live)
{
    m_live = _live;
    m_liveHasBeenSet = true;
}

bool ServiceStatus::LiveHasBeenSet() const
{
    return m_liveHasBeenSet;
}

StatusInfo ServiceStatus::GetRealTimeAsr() const
{
    return m_realTimeAsr;
}

void ServiceStatus::SetRealTimeAsr(const StatusInfo& _realTimeAsr)
{
    m_realTimeAsr = _realTimeAsr;
    m_realTimeAsrHasBeenSet = true;
}

bool ServiceStatus::RealTimeAsrHasBeenSet() const
{
    return m_realTimeAsrHasBeenSet;
}

StatusInfo ServiceStatus::GetTextTranslate() const
{
    return m_textTranslate;
}

void ServiceStatus::SetTextTranslate(const StatusInfo& _textTranslate)
{
    m_textTranslate = _textTranslate;
    m_textTranslateHasBeenSet = true;
}

bool ServiceStatus::TextTranslateHasBeenSet() const
{
    return m_textTranslateHasBeenSet;
}

