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

#include <tencentcloud/cpdp/v20190820/model/OpenBankPayerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankPayerInfo::OpenBankPayerInfo() :
    m_payerIdHasBeenSet(false),
    m_payerNameHasBeenSet(false),
    m_bindSerialNoHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_bankCardTypeHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankPayerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerId") && !value["PayerId"].IsNull())
    {
        if (!value["PayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayerInfo.PayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerId = string(value["PayerId"].GetString());
        m_payerIdHasBeenSet = true;
    }

    if (value.HasMember("PayerName") && !value["PayerName"].IsNull())
    {
        if (!value["PayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayerInfo.PayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerName = string(value["PayerName"].GetString());
        m_payerNameHasBeenSet = true;
    }

    if (value.HasMember("BindSerialNo") && !value["BindSerialNo"].IsNull())
    {
        if (!value["BindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayerInfo.BindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindSerialNo = string(value["BindSerialNo"].GetString());
        m_bindSerialNoHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayerInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("BankCardType") && !value["BankCardType"].IsNull())
    {
        if (!value["BankCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayerInfo.BankCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankCardType = string(value["BankCardType"].GetString());
        m_bankCardTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankPayerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerId.c_str(), allocator).Move(), allocator);
    }

    if (m_payerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_bankCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankCardType.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankPayerInfo::GetPayerId() const
{
    return m_payerId;
}

void OpenBankPayerInfo::SetPayerId(const string& _payerId)
{
    m_payerId = _payerId;
    m_payerIdHasBeenSet = true;
}

bool OpenBankPayerInfo::PayerIdHasBeenSet() const
{
    return m_payerIdHasBeenSet;
}

string OpenBankPayerInfo::GetPayerName() const
{
    return m_payerName;
}

void OpenBankPayerInfo::SetPayerName(const string& _payerName)
{
    m_payerName = _payerName;
    m_payerNameHasBeenSet = true;
}

bool OpenBankPayerInfo::PayerNameHasBeenSet() const
{
    return m_payerNameHasBeenSet;
}

string OpenBankPayerInfo::GetBindSerialNo() const
{
    return m_bindSerialNo;
}

void OpenBankPayerInfo::SetBindSerialNo(const string& _bindSerialNo)
{
    m_bindSerialNo = _bindSerialNo;
    m_bindSerialNoHasBeenSet = true;
}

bool OpenBankPayerInfo::BindSerialNoHasBeenSet() const
{
    return m_bindSerialNoHasBeenSet;
}

string OpenBankPayerInfo::GetAccountType() const
{
    return m_accountType;
}

void OpenBankPayerInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool OpenBankPayerInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string OpenBankPayerInfo::GetBankCardType() const
{
    return m_bankCardType;
}

void OpenBankPayerInfo::SetBankCardType(const string& _bankCardType)
{
    m_bankCardType = _bankCardType;
    m_bankCardTypeHasBeenSet = true;
}

bool OpenBankPayerInfo::BankCardTypeHasBeenSet() const
{
    return m_bankCardTypeHasBeenSet;
}

