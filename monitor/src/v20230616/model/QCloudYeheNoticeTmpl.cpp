/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/monitor/v20230616/model/QCloudYeheNoticeTmpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

QCloudYeheNoticeTmpl::QCloudYeheNoticeTmpl() :
    m_emailHasBeenSet(false),
    m_qYWXHasBeenSet(false),
    m_sMSHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_weChatHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_andonHasBeenSet(false)
{
}

CoreInternalOutcome QCloudYeheNoticeTmpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.Email` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_email.Deserialize(value["Email"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emailHasBeenSet = true;
    }

    if (value.HasMember("QYWX") && !value["QYWX"].IsNull())
    {
        if (!value["QYWX"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.QYWX` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qYWX.Deserialize(value["QYWX"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qYWXHasBeenSet = true;
    }

    if (value.HasMember("SMS") && !value["SMS"].IsNull())
    {
        if (!value["SMS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.SMS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sMS.Deserialize(value["SMS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sMSHasBeenSet = true;
    }

    if (value.HasMember("Voice") && !value["Voice"].IsNull())
    {
        if (!value["Voice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.Voice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voice.Deserialize(value["Voice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceHasBeenSet = true;
    }

    if (value.HasMember("WeChat") && !value["WeChat"].IsNull())
    {
        if (!value["WeChat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.WeChat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weChat.Deserialize(value["WeChat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weChatHasBeenSet = true;
    }

    if (value.HasMember("Site") && !value["Site"].IsNull())
    {
        if (!value["Site"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.Site` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_site.Deserialize(value["Site"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_siteHasBeenSet = true;
    }

    if (value.HasMember("Andon") && !value["Andon"].IsNull())
    {
        if (!value["Andon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheNoticeTmpl.Andon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_andon.Deserialize(value["Andon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_andonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QCloudYeheNoticeTmpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_email.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qYWXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QYWX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qYWX.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sMSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sMS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weChatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_weChat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_site.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_andonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Andon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_andon.ToJsonObject(value[key.c_str()], allocator);
    }

}


QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetEmail() const
{
    return m_email;
}

void QCloudYeheNoticeTmpl::SetEmail(const QCloudYeheNoticeTmplItem& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetQYWX() const
{
    return m_qYWX;
}

void QCloudYeheNoticeTmpl::SetQYWX(const QCloudYeheNoticeTmplItem& _qYWX)
{
    m_qYWX = _qYWX;
    m_qYWXHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::QYWXHasBeenSet() const
{
    return m_qYWXHasBeenSet;
}

QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetSMS() const
{
    return m_sMS;
}

void QCloudYeheNoticeTmpl::SetSMS(const QCloudYeheNoticeTmplItem& _sMS)
{
    m_sMS = _sMS;
    m_sMSHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::SMSHasBeenSet() const
{
    return m_sMSHasBeenSet;
}

QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetVoice() const
{
    return m_voice;
}

void QCloudYeheNoticeTmpl::SetVoice(const QCloudYeheNoticeTmplItem& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

QCloudYeheWeChatNoticeTmplItem QCloudYeheNoticeTmpl::GetWeChat() const
{
    return m_weChat;
}

void QCloudYeheNoticeTmpl::SetWeChat(const QCloudYeheWeChatNoticeTmplItem& _weChat)
{
    m_weChat = _weChat;
    m_weChatHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::WeChatHasBeenSet() const
{
    return m_weChatHasBeenSet;
}

QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetSite() const
{
    return m_site;
}

void QCloudYeheNoticeTmpl::SetSite(const QCloudYeheNoticeTmplItem& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

QCloudYeheNoticeTmplItem QCloudYeheNoticeTmpl::GetAndon() const
{
    return m_andon;
}

void QCloudYeheNoticeTmpl::SetAndon(const QCloudYeheNoticeTmplItem& _andon)
{
    m_andon = _andon;
    m_andonHasBeenSet = true;
}

bool QCloudYeheNoticeTmpl::AndonHasBeenSet() const
{
    return m_andonHasBeenSet;
}

