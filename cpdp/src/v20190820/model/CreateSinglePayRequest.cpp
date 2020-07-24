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

#include <tencentcloud/cpdp/v20190820/model/CreateSinglePayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

CreateSinglePayRequest::CreateSinglePayRequest() :
    m_serialNumberHasBeenSet(false),
    m_payAccountNumberHasBeenSet(false),
    m_payAccountNameHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_recvAccountNumberHasBeenSet(false),
    m_recvAccountNameHasBeenSet(false),
    m_payBankCnapsHasBeenSet(false),
    m_payBankTypeHasBeenSet(false),
    m_payBankProvinceHasBeenSet(false),
    m_payBankCityHasBeenSet(false),
    m_recvBankCnapsHasBeenSet(false),
    m_recvBankTypeHasBeenSet(false),
    m_recvBankProvinceHasBeenSet(false),
    m_recvBankCityHasBeenSet(false),
    m_recvCertTypeHasBeenSet(false),
    m_recvCertNoHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateSinglePayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serialNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payAccountNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payAccountNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayAccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amount, allocator);
    }

    if (m_recvAccountNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_recvAccountNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvAccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_payBankCnapsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayBankCnaps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payBankCnaps.c_str(), allocator).Move(), allocator);
    }

    if (m_payBankTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayBankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payBankType.c_str(), allocator).Move(), allocator);
    }

    if (m_payBankProvinceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayBankProvince";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payBankProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_payBankCityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayBankCity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payBankCity.c_str(), allocator).Move(), allocator);
    }

    if (m_recvBankCnapsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvBankCnaps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvBankCnaps.c_str(), allocator).Move(), allocator);
    }

    if (m_recvBankTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvBankType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvBankType.c_str(), allocator).Move(), allocator);
    }

    if (m_recvBankProvinceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvBankProvince";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvBankProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_recvBankCityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvBankCity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvBankCity.c_str(), allocator).Move(), allocator);
    }

    if (m_recvCertTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvCertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvCertType.c_str(), allocator).Move(), allocator);
    }

    if (m_recvCertNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RecvCertNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_recvCertNo.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSinglePayRequest::GetSerialNumber() const
{
    return m_serialNumber;
}

void CreateSinglePayRequest::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool CreateSinglePayRequest::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

string CreateSinglePayRequest::GetPayAccountNumber() const
{
    return m_payAccountNumber;
}

void CreateSinglePayRequest::SetPayAccountNumber(const string& _payAccountNumber)
{
    m_payAccountNumber = _payAccountNumber;
    m_payAccountNumberHasBeenSet = true;
}

bool CreateSinglePayRequest::PayAccountNumberHasBeenSet() const
{
    return m_payAccountNumberHasBeenSet;
}

string CreateSinglePayRequest::GetPayAccountName() const
{
    return m_payAccountName;
}

void CreateSinglePayRequest::SetPayAccountName(const string& _payAccountName)
{
    m_payAccountName = _payAccountName;
    m_payAccountNameHasBeenSet = true;
}

bool CreateSinglePayRequest::PayAccountNameHasBeenSet() const
{
    return m_payAccountNameHasBeenSet;
}

int64_t CreateSinglePayRequest::GetAmount() const
{
    return m_amount;
}

void CreateSinglePayRequest::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CreateSinglePayRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

string CreateSinglePayRequest::GetRecvAccountNumber() const
{
    return m_recvAccountNumber;
}

void CreateSinglePayRequest::SetRecvAccountNumber(const string& _recvAccountNumber)
{
    m_recvAccountNumber = _recvAccountNumber;
    m_recvAccountNumberHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvAccountNumberHasBeenSet() const
{
    return m_recvAccountNumberHasBeenSet;
}

string CreateSinglePayRequest::GetRecvAccountName() const
{
    return m_recvAccountName;
}

void CreateSinglePayRequest::SetRecvAccountName(const string& _recvAccountName)
{
    m_recvAccountName = _recvAccountName;
    m_recvAccountNameHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvAccountNameHasBeenSet() const
{
    return m_recvAccountNameHasBeenSet;
}

string CreateSinglePayRequest::GetPayBankCnaps() const
{
    return m_payBankCnaps;
}

void CreateSinglePayRequest::SetPayBankCnaps(const string& _payBankCnaps)
{
    m_payBankCnaps = _payBankCnaps;
    m_payBankCnapsHasBeenSet = true;
}

bool CreateSinglePayRequest::PayBankCnapsHasBeenSet() const
{
    return m_payBankCnapsHasBeenSet;
}

string CreateSinglePayRequest::GetPayBankType() const
{
    return m_payBankType;
}

void CreateSinglePayRequest::SetPayBankType(const string& _payBankType)
{
    m_payBankType = _payBankType;
    m_payBankTypeHasBeenSet = true;
}

bool CreateSinglePayRequest::PayBankTypeHasBeenSet() const
{
    return m_payBankTypeHasBeenSet;
}

string CreateSinglePayRequest::GetPayBankProvince() const
{
    return m_payBankProvince;
}

void CreateSinglePayRequest::SetPayBankProvince(const string& _payBankProvince)
{
    m_payBankProvince = _payBankProvince;
    m_payBankProvinceHasBeenSet = true;
}

bool CreateSinglePayRequest::PayBankProvinceHasBeenSet() const
{
    return m_payBankProvinceHasBeenSet;
}

string CreateSinglePayRequest::GetPayBankCity() const
{
    return m_payBankCity;
}

void CreateSinglePayRequest::SetPayBankCity(const string& _payBankCity)
{
    m_payBankCity = _payBankCity;
    m_payBankCityHasBeenSet = true;
}

bool CreateSinglePayRequest::PayBankCityHasBeenSet() const
{
    return m_payBankCityHasBeenSet;
}

string CreateSinglePayRequest::GetRecvBankCnaps() const
{
    return m_recvBankCnaps;
}

void CreateSinglePayRequest::SetRecvBankCnaps(const string& _recvBankCnaps)
{
    m_recvBankCnaps = _recvBankCnaps;
    m_recvBankCnapsHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvBankCnapsHasBeenSet() const
{
    return m_recvBankCnapsHasBeenSet;
}

string CreateSinglePayRequest::GetRecvBankType() const
{
    return m_recvBankType;
}

void CreateSinglePayRequest::SetRecvBankType(const string& _recvBankType)
{
    m_recvBankType = _recvBankType;
    m_recvBankTypeHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvBankTypeHasBeenSet() const
{
    return m_recvBankTypeHasBeenSet;
}

string CreateSinglePayRequest::GetRecvBankProvince() const
{
    return m_recvBankProvince;
}

void CreateSinglePayRequest::SetRecvBankProvince(const string& _recvBankProvince)
{
    m_recvBankProvince = _recvBankProvince;
    m_recvBankProvinceHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvBankProvinceHasBeenSet() const
{
    return m_recvBankProvinceHasBeenSet;
}

string CreateSinglePayRequest::GetRecvBankCity() const
{
    return m_recvBankCity;
}

void CreateSinglePayRequest::SetRecvBankCity(const string& _recvBankCity)
{
    m_recvBankCity = _recvBankCity;
    m_recvBankCityHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvBankCityHasBeenSet() const
{
    return m_recvBankCityHasBeenSet;
}

string CreateSinglePayRequest::GetRecvCertType() const
{
    return m_recvCertType;
}

void CreateSinglePayRequest::SetRecvCertType(const string& _recvCertType)
{
    m_recvCertType = _recvCertType;
    m_recvCertTypeHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvCertTypeHasBeenSet() const
{
    return m_recvCertTypeHasBeenSet;
}

string CreateSinglePayRequest::GetRecvCertNo() const
{
    return m_recvCertNo;
}

void CreateSinglePayRequest::SetRecvCertNo(const string& _recvCertNo)
{
    m_recvCertNo = _recvCertNo;
    m_recvCertNoHasBeenSet = true;
}

bool CreateSinglePayRequest::RecvCertNoHasBeenSet() const
{
    return m_recvCertNoHasBeenSet;
}

string CreateSinglePayRequest::GetSummary() const
{
    return m_summary;
}

void CreateSinglePayRequest::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool CreateSinglePayRequest::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string CreateSinglePayRequest::GetProfile() const
{
    return m_profile;
}

void CreateSinglePayRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateSinglePayRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


