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

#include <tencentcloud/cpdp/v20190820/model/ApplyPayerInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyPayerInfoRequest::ApplyPayerInfoRequest() :
    m_payerIdHasBeenSet(false),
    m_payerTypeHasBeenSet(false),
    m_payerNameHasBeenSet(false),
    m_payerIdTypeHasBeenSet(false),
    m_payerIdNoHasBeenSet(false),
    m_payerCountryCodeHasBeenSet(false),
    m_payerContactNameHasBeenSet(false),
    m_payerContactNumberHasBeenSet(false),
    m_payerEmailAddressHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string ApplyPayerInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerType.c_str(), allocator).Move(), allocator);
    }

    if (m_payerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerName.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_payerIdNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerIdNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerIdNo.c_str(), allocator).Move(), allocator);
    }

    if (m_payerCountryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerCountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerCountryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_payerContactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerContactName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerContactName.c_str(), allocator).Move(), allocator);
    }

    if (m_payerContactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerContactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payerEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyPayerInfoRequest::GetPayerId() const
{
    return m_payerId;
}

void ApplyPayerInfoRequest::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerType() const
{
    return m_payerType;
}

void ApplyPayerInfoRequest::SetPayerType(const string& _payerType)
{
    m_payerType = _payerType;
    m_payerTypeHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerTypeHasBeenSet() const
{
    return m_payerTypeHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerName() const
{
    return m_payerName;
}

void ApplyPayerInfoRequest::SetPayerName(const string& _payerName)
{
    m_payerName = _payerName;
    m_payerNameHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerNameHasBeenSet() const
{
    return m_payerNameHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerIdType() const
{
    return m_payerIdType;
}

void ApplyPayerInfoRequest::SetPayerIdType(const string& _payerIdType)
{
    m_payerIdType = _payerIdType;
    m_payerIdTypeHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerIdTypeHasBeenSet() const
{
    return m_payerIdTypeHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerIdNo() const
{
    return m_payerIdNo;
}

void ApplyPayerInfoRequest::SetPayerIdNo(const string& _payerIdNo)
{
    m_payerIdNo = _payerIdNo;
    m_payerIdNoHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerIdNoHasBeenSet() const
{
    return m_payerIdNoHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerCountryCode() const
{
    return m_payerCountryCode;
}

void ApplyPayerInfoRequest::SetPayerCountryCode(const string& _payerCountryCode)
{
    m_payerCountryCode = _payerCountryCode;
    m_payerCountryCodeHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerCountryCodeHasBeenSet() const
{
    return m_payerCountryCodeHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerContactName() const
{
    return m_payerContactName;
}

void ApplyPayerInfoRequest::SetPayerContactName(const string& _payerContactName)
{
    m_payerContactName = _payerContactName;
    m_payerContactNameHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerContactNameHasBeenSet() const
{
    return m_payerContactNameHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerContactNumber() const
{
    return m_payerContactNumber;
}

void ApplyPayerInfoRequest::SetPayerContactNumber(const string& _payerContactNumber)
{
    m_payerContactNumber = _payerContactNumber;
    m_payerContactNumberHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerContactNumberHasBeenSet() const
{
    return m_payerContactNumberHasBeenSet;
}

string ApplyPayerInfoRequest::GetPayerEmailAddress() const
{
    return m_payerEmailAddress;
}

void ApplyPayerInfoRequest::SetPayerEmailAddress(const string& _payerEmailAddress)
{
    m_payerEmailAddress = _payerEmailAddress;
    m_payerEmailAddressHasBeenSet = true;
}

bool ApplyPayerInfoRequest::PayerEmailAddressHasBeenSet() const
{
    return m_payerEmailAddressHasBeenSet;
}

string ApplyPayerInfoRequest::GetProfile() const
{
    return m_profile;
}

void ApplyPayerInfoRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ApplyPayerInfoRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


