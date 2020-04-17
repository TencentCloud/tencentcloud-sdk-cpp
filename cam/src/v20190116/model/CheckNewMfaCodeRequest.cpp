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

#include <tencentcloud/cam/v20190116/model/CheckNewMfaCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

CheckNewMfaCodeRequest::CheckNewMfaCodeRequest() :
    m_skeyHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_phoneCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_mailCodeHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_countryCodeHasBeenSet(false)
{
}

string CheckNewMfaCodeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_skeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_interfaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_interface.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientUA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientUA.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_phoneCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phoneCode, allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phoneNumber, allocator);
    }

    if (m_mailCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MailCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mailCode, allocator);
    }

    if (m_mailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_countryCode, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckNewMfaCodeRequest::GetSkey() const
{
    return m_skey;
}

void CheckNewMfaCodeRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string CheckNewMfaCodeRequest::GetInterface() const
{
    return m_interface;
}

void CheckNewMfaCodeRequest::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

string CheckNewMfaCodeRequest::GetClientIP() const
{
    return m_clientIP;
}

void CheckNewMfaCodeRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string CheckNewMfaCodeRequest::GetClientUA() const
{
    return m_clientUA;
}

void CheckNewMfaCodeRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetAuthType() const
{
    return m_authType;
}

void CheckNewMfaCodeRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void CheckNewMfaCodeRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetPhoneCode() const
{
    return m_phoneCode;
}

void CheckNewMfaCodeRequest::SetPhoneCode(const uint64_t& _phoneCode)
{
    m_phoneCode = _phoneCode;
    m_phoneCodeHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::PhoneCodeHasBeenSet() const
{
    return m_phoneCodeHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void CheckNewMfaCodeRequest::SetPhoneNumber(const uint64_t& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetMailCode() const
{
    return m_mailCode;
}

void CheckNewMfaCodeRequest::SetMailCode(const uint64_t& _mailCode)
{
    m_mailCode = _mailCode;
    m_mailCodeHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::MailCodeHasBeenSet() const
{
    return m_mailCodeHasBeenSet;
}

string CheckNewMfaCodeRequest::GetMail() const
{
    return m_mail;
}

void CheckNewMfaCodeRequest::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

uint64_t CheckNewMfaCodeRequest::GetCountryCode() const
{
    return m_countryCode;
}

void CheckNewMfaCodeRequest::SetCountryCode(const uint64_t& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool CheckNewMfaCodeRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}


