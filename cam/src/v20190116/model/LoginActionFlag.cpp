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

#include <tencentcloud/cam/v20190116/model/LoginActionFlag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

LoginActionFlag::LoginActionFlag() :
    m_phoneHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_stokenHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_customHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_u2FTokenHasBeenSet(false)
{
}

CoreInternalOutcome LoginActionFlag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Phone` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_phone = value["Phone"].GetUint64();
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Token` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_token = value["Token"].GetUint64();
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Stoken") && !value["Stoken"].IsNull())
    {
        if (!value["Stoken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Stoken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stoken = value["Stoken"].GetUint64();
        m_stokenHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Wechat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wechat = value["Wechat"].GetUint64();
        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("Custom") && !value["Custom"].IsNull())
    {
        if (!value["Custom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Custom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_custom = value["Custom"].GetUint64();
        m_customHasBeenSet = true;
    }

    if (value.HasMember("Mail") && !value["Mail"].IsNull())
    {
        if (!value["Mail"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.Mail` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mail = value["Mail"].GetUint64();
        m_mailHasBeenSet = true;
    }

    if (value.HasMember("U2FToken") && !value["U2FToken"].IsNull())
    {
        if (!value["U2FToken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginActionFlag.U2FToken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_u2FToken = value["U2FToken"].GetUint64();
        m_u2FTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginActionFlag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phone, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_token, allocator);
    }

    if (m_stokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stoken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stoken, allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wechat, allocator);
    }

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_custom, allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mail, allocator);
    }

    if (m_u2FTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "U2FToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_u2FToken, allocator);
    }

}


uint64_t LoginActionFlag::GetPhone() const
{
    return m_phone;
}

void LoginActionFlag::SetPhone(const uint64_t& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool LoginActionFlag::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

uint64_t LoginActionFlag::GetToken() const
{
    return m_token;
}

void LoginActionFlag::SetToken(const uint64_t& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool LoginActionFlag::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t LoginActionFlag::GetStoken() const
{
    return m_stoken;
}

void LoginActionFlag::SetStoken(const uint64_t& _stoken)
{
    m_stoken = _stoken;
    m_stokenHasBeenSet = true;
}

bool LoginActionFlag::StokenHasBeenSet() const
{
    return m_stokenHasBeenSet;
}

uint64_t LoginActionFlag::GetWechat() const
{
    return m_wechat;
}

void LoginActionFlag::SetWechat(const uint64_t& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool LoginActionFlag::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

uint64_t LoginActionFlag::GetCustom() const
{
    return m_custom;
}

void LoginActionFlag::SetCustom(const uint64_t& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool LoginActionFlag::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

uint64_t LoginActionFlag::GetMail() const
{
    return m_mail;
}

void LoginActionFlag::SetMail(const uint64_t& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool LoginActionFlag::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

uint64_t LoginActionFlag::GetU2FToken() const
{
    return m_u2FToken;
}

void LoginActionFlag::SetU2FToken(const uint64_t& _u2FToken)
{
    m_u2FToken = _u2FToken;
    m_u2FTokenHasBeenSet = true;
}

bool LoginActionFlag::U2FTokenHasBeenSet() const
{
    return m_u2FTokenHasBeenSet;
}

