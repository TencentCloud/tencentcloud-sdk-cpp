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

#include <tencentcloud/zj/v20190121/model/SendSmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

SendSmsRequest::SendSmsRequest() :
    m_licenseHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_signHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_smsTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string SendSmsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_phone.begin(); itr != m_phone.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_paramsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_signHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_senderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SenderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_senderId.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smsType, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_content.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendSmsRequest::GetLicense() const
{
    return m_license;
}

void SendSmsRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool SendSmsRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

vector<string> SendSmsRequest::GetPhone() const
{
    return m_phone;
}

void SendSmsRequest::SetPhone(const vector<string>& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool SendSmsRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string SendSmsRequest::GetTemplateId() const
{
    return m_templateId;
}

void SendSmsRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SendSmsRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> SendSmsRequest::GetParams() const
{
    return m_params;
}

void SendSmsRequest::SetParams(const vector<string>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool SendSmsRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string SendSmsRequest::GetSign() const
{
    return m_sign;
}

void SendSmsRequest::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool SendSmsRequest::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}

string SendSmsRequest::GetSenderId() const
{
    return m_senderId;
}

void SendSmsRequest::SetSenderId(const string& _senderId)
{
    m_senderId = _senderId;
    m_senderIdHasBeenSet = true;
}

bool SendSmsRequest::SenderIdHasBeenSet() const
{
    return m_senderIdHasBeenSet;
}

uint64_t SendSmsRequest::GetSmsType() const
{
    return m_smsType;
}

void SendSmsRequest::SetSmsType(const uint64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool SendSmsRequest::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}

uint64_t SendSmsRequest::GetInternational() const
{
    return m_international;
}

void SendSmsRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool SendSmsRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

string SendSmsRequest::GetContent() const
{
    return m_content;
}

void SendSmsRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool SendSmsRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


