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

#include <tencentcloud/wedata/v20210820/model/AlarmReceiverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmReceiverInfo::AlarmReceiverInfo() :
    m_alarmIdHasBeenSet(false),
    m_alarmReceiverHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_smsHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_wecomHasBeenSet(false),
    m_httpHasBeenSet(false),
    m_wecomGroupHasBeenSet(false),
    m_larkGroupHasBeenSet(false),
    m_alarmMessageSendResultHasBeenSet(false)
{
}

CoreInternalOutcome AlarmReceiverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmReceiver") && !value["AlarmReceiver"].IsNull())
    {
        if (!value["AlarmReceiver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.AlarmReceiver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmReceiver = string(value["AlarmReceiver"].GetString());
        m_alarmReceiverHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Email` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_email = value["Email"].GetUint64();
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Sms") && !value["Sms"].IsNull())
    {
        if (!value["Sms"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Sms` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sms = value["Sms"].GetUint64();
        m_smsHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Wechat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = value["Wechat"].GetUint64();
        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Voice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_voice = value["Voice"].GetUint64();
        m_voiceHasBeenSet = true;
    }

    if (value.HasMember("Wecom") && !value["Wecom"].IsNull())
    {
        if (!value["Wecom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Wecom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wecom = value["Wecom"].GetUint64();
        m_wecomHasBeenSet = true;
    }

    if (value.HasMember("Http") && !value["Http"].IsNull())
    {
        if (!value["Http"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.Http` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_http = value["Http"].GetUint64();
        m_httpHasBeenSet = true;
    }

    if (value.HasMember("WecomGroup") && !value["WecomGroup"].IsNull())
    {
        if (!value["WecomGroup"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.WecomGroup` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wecomGroup = value["WecomGroup"].GetUint64();
        m_wecomGroupHasBeenSet = true;
    }

    if (value.HasMember("LarkGroup") && !value["LarkGroup"].IsNull())
    {
        if (!value["LarkGroup"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.LarkGroup` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_larkGroup = value["LarkGroup"].GetUint64();
        m_larkGroupHasBeenSet = true;
    }

    if (value.HasMember("AlarmMessageSendResult") && !value["AlarmMessageSendResult"].IsNull())
    {
        if (!value["AlarmMessageSendResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmReceiverInfo.AlarmMessageSendResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmMessageSendResult = string(value["AlarmMessageSendResult"].GetString());
        m_alarmMessageSendResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmReceiverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmReceiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmReceiver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmReceiver.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_email, allocator);
    }

    if (m_smsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sms, allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechat, allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voice, allocator);
    }

    if (m_wecomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wecom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wecom, allocator);
    }

    if (m_httpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http, allocator);
    }

    if (m_wecomGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wecomGroup, allocator);
    }

    if (m_larkGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LarkGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_larkGroup, allocator);
    }

    if (m_alarmMessageSendResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmMessageSendResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmMessageSendResult.c_str(), allocator).Move(), allocator);
    }

}


string AlarmReceiverInfo::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmReceiverInfo::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmReceiverInfo::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmReceiverInfo::GetAlarmReceiver() const
{
    return m_alarmReceiver;
}

void AlarmReceiverInfo::SetAlarmReceiver(const string& _alarmReceiver)
{
    m_alarmReceiver = _alarmReceiver;
    m_alarmReceiverHasBeenSet = true;
}

bool AlarmReceiverInfo::AlarmReceiverHasBeenSet() const
{
    return m_alarmReceiverHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetEmail() const
{
    return m_email;
}

void AlarmReceiverInfo::SetEmail(const uint64_t& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool AlarmReceiverInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetSms() const
{
    return m_sms;
}

void AlarmReceiverInfo::SetSms(const uint64_t& _sms)
{
    m_sms = _sms;
    m_smsHasBeenSet = true;
}

bool AlarmReceiverInfo::SmsHasBeenSet() const
{
    return m_smsHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetWechat() const
{
    return m_wechat;
}

void AlarmReceiverInfo::SetWechat(const uint64_t& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool AlarmReceiverInfo::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetVoice() const
{
    return m_voice;
}

void AlarmReceiverInfo::SetVoice(const uint64_t& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool AlarmReceiverInfo::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetWecom() const
{
    return m_wecom;
}

void AlarmReceiverInfo::SetWecom(const uint64_t& _wecom)
{
    m_wecom = _wecom;
    m_wecomHasBeenSet = true;
}

bool AlarmReceiverInfo::WecomHasBeenSet() const
{
    return m_wecomHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetHttp() const
{
    return m_http;
}

void AlarmReceiverInfo::SetHttp(const uint64_t& _http)
{
    m_http = _http;
    m_httpHasBeenSet = true;
}

bool AlarmReceiverInfo::HttpHasBeenSet() const
{
    return m_httpHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetWecomGroup() const
{
    return m_wecomGroup;
}

void AlarmReceiverInfo::SetWecomGroup(const uint64_t& _wecomGroup)
{
    m_wecomGroup = _wecomGroup;
    m_wecomGroupHasBeenSet = true;
}

bool AlarmReceiverInfo::WecomGroupHasBeenSet() const
{
    return m_wecomGroupHasBeenSet;
}

uint64_t AlarmReceiverInfo::GetLarkGroup() const
{
    return m_larkGroup;
}

void AlarmReceiverInfo::SetLarkGroup(const uint64_t& _larkGroup)
{
    m_larkGroup = _larkGroup;
    m_larkGroupHasBeenSet = true;
}

bool AlarmReceiverInfo::LarkGroupHasBeenSet() const
{
    return m_larkGroupHasBeenSet;
}

string AlarmReceiverInfo::GetAlarmMessageSendResult() const
{
    return m_alarmMessageSendResult;
}

void AlarmReceiverInfo::SetAlarmMessageSendResult(const string& _alarmMessageSendResult)
{
    m_alarmMessageSendResult = _alarmMessageSendResult;
    m_alarmMessageSendResultHasBeenSet = true;
}

bool AlarmReceiverInfo::AlarmMessageSendResultHasBeenSet() const
{
    return m_alarmMessageSendResultHasBeenSet;
}

