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

#include <tencentcloud/sms/v20190711/model/SendSmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

SendSmsRequest::SendSmsRequest() :
    m_phoneNumberSetHasBeenSet(false),
    m_templateIDHasBeenSet(false),
    m_smsSdkAppidHasBeenSet(false),
    m_signHasBeenSet(false),
    m_templateParamSetHasBeenSet(false),
    m_extendCodeHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_senderIdHasBeenSet(false)
{
}

string SendSmsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_phoneNumberSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumberSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phoneNumberSet.begin(); itr != m_phoneNumberSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateID.c_str(), allocator).Move(), allocator);
    }

    if (m_smsSdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_templateParamSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateParamSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateParamSet.begin(); itr != m_templateParamSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extendCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_senderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_senderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SendSmsRequest::GetPhoneNumberSet() const
{
    return m_phoneNumberSet;
}

void SendSmsRequest::SetPhoneNumberSet(const vector<string>& _phoneNumberSet)
{
    m_phoneNumberSet = _phoneNumberSet;
    m_phoneNumberSetHasBeenSet = true;
}

bool SendSmsRequest::PhoneNumberSetHasBeenSet() const
{
    return m_phoneNumberSetHasBeenSet;
}

string SendSmsRequest::GetTemplateID() const
{
    return m_templateID;
}

void SendSmsRequest::SetTemplateID(const string& _templateID)
{
    m_templateID = _templateID;
    m_templateIDHasBeenSet = true;
}

bool SendSmsRequest::TemplateIDHasBeenSet() const
{
    return m_templateIDHasBeenSet;
}

string SendSmsRequest::GetSmsSdkAppid() const
{
    return m_smsSdkAppid;
}

void SendSmsRequest::SetSmsSdkAppid(const string& _smsSdkAppid)
{
    m_smsSdkAppid = _smsSdkAppid;
    m_smsSdkAppidHasBeenSet = true;
}

bool SendSmsRequest::SmsSdkAppidHasBeenSet() const
{
    return m_smsSdkAppidHasBeenSet;
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

vector<string> SendSmsRequest::GetTemplateParamSet() const
{
    return m_templateParamSet;
}

void SendSmsRequest::SetTemplateParamSet(const vector<string>& _templateParamSet)
{
    m_templateParamSet = _templateParamSet;
    m_templateParamSetHasBeenSet = true;
}

bool SendSmsRequest::TemplateParamSetHasBeenSet() const
{
    return m_templateParamSetHasBeenSet;
}

string SendSmsRequest::GetExtendCode() const
{
    return m_extendCode;
}

void SendSmsRequest::SetExtendCode(const string& _extendCode)
{
    m_extendCode = _extendCode;
    m_extendCodeHasBeenSet = true;
}

bool SendSmsRequest::ExtendCodeHasBeenSet() const
{
    return m_extendCodeHasBeenSet;
}

string SendSmsRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void SendSmsRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool SendSmsRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
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


