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

#include <tencentcloud/cpdp/v20190820/model/OpenBankPayeeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankPayeeInfo::OpenBankPayeeInfo() :
    m_payeeIdHasBeenSet(false),
    m_bankBranchNameHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_payeeNameHasBeenSet(false),
    m_bankBranchIdHasBeenSet(false),
    m_bindSerialNoHasBeenSet(false),
    m_accountTypeHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankPayeeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("BankBranchName") && !value["BankBranchName"].IsNull())
    {
        if (!value["BankBranchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.BankBranchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchName = string(value["BankBranchName"].GetString());
        m_bankBranchNameHasBeenSet = true;
    }

    if (value.HasMember("BankAccountNumber") && !value["BankAccountNumber"].IsNull())
    {
        if (!value["BankAccountNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.BankAccountNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankAccountNumber = string(value["BankAccountNumber"].GetString());
        m_bankAccountNumberHasBeenSet = true;
    }

    if (value.HasMember("PayeeName") && !value["PayeeName"].IsNull())
    {
        if (!value["PayeeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.PayeeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeName = string(value["PayeeName"].GetString());
        m_payeeNameHasBeenSet = true;
    }

    if (value.HasMember("BankBranchId") && !value["BankBranchId"].IsNull())
    {
        if (!value["BankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.BankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchId = string(value["BankBranchId"].GetString());
        m_bankBranchIdHasBeenSet = true;
    }

    if (value.HasMember("BindSerialNo") && !value["BindSerialNo"].IsNull())
    {
        if (!value["BindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.BindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindSerialNo = string(value["BindSerialNo"].GetString());
        m_bindSerialNoHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankPayeeInfo.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankPayeeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchId.c_str(), allocator).Move(), allocator);
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

}


string OpenBankPayeeInfo::GetPayeeId() const
{
    return m_payeeId;
}

void OpenBankPayeeInfo::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool OpenBankPayeeInfo::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string OpenBankPayeeInfo::GetBankBranchName() const
{
    return m_bankBranchName;
}

void OpenBankPayeeInfo::SetBankBranchName(const string& _bankBranchName)
{
    m_bankBranchName = _bankBranchName;
    m_bankBranchNameHasBeenSet = true;
}

bool OpenBankPayeeInfo::BankBranchNameHasBeenSet() const
{
    return m_bankBranchNameHasBeenSet;
}

string OpenBankPayeeInfo::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void OpenBankPayeeInfo::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool OpenBankPayeeInfo::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string OpenBankPayeeInfo::GetPayeeName() const
{
    return m_payeeName;
}

void OpenBankPayeeInfo::SetPayeeName(const string& _payeeName)
{
    m_payeeName = _payeeName;
    m_payeeNameHasBeenSet = true;
}

bool OpenBankPayeeInfo::PayeeNameHasBeenSet() const
{
    return m_payeeNameHasBeenSet;
}

string OpenBankPayeeInfo::GetBankBranchId() const
{
    return m_bankBranchId;
}

void OpenBankPayeeInfo::SetBankBranchId(const string& _bankBranchId)
{
    m_bankBranchId = _bankBranchId;
    m_bankBranchIdHasBeenSet = true;
}

bool OpenBankPayeeInfo::BankBranchIdHasBeenSet() const
{
    return m_bankBranchIdHasBeenSet;
}

string OpenBankPayeeInfo::GetBindSerialNo() const
{
    return m_bindSerialNo;
}

void OpenBankPayeeInfo::SetBindSerialNo(const string& _bindSerialNo)
{
    m_bindSerialNo = _bindSerialNo;
    m_bindSerialNoHasBeenSet = true;
}

bool OpenBankPayeeInfo::BindSerialNoHasBeenSet() const
{
    return m_bindSerialNoHasBeenSet;
}

string OpenBankPayeeInfo::GetAccountType() const
{
    return m_accountType;
}

void OpenBankPayeeInfo::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool OpenBankPayeeInfo::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

