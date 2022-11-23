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

#include <tencentcloud/smh/v20210712/model/SendSmsCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

SendSmsCodeRequest::SendSmsCodeRequest() :
    m_purposeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_countryCodeHasBeenSet(false)
{
}

string SendSmsCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendSmsCodeRequest::GetPurpose() const
{
    return m_purpose;
}

void SendSmsCodeRequest::SetPurpose(const string& _purpose)
{
    m_purpose = _purpose;
    m_purposeHasBeenSet = true;
}

bool SendSmsCodeRequest::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

string SendSmsCodeRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SendSmsCodeRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SendSmsCodeRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string SendSmsCodeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SendSmsCodeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SendSmsCodeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SendSmsCodeRequest::GetCountryCode() const
{
    return m_countryCode;
}

void SendSmsCodeRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool SendSmsCodeRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}


