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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantBankAccountData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubMerchantBankAccountData::QueryOpenBankExternalSubMerchantBankAccountData() :
    m_accountBankHasBeenSet(false),
    m_bindSerialNoHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_bankBranchIdHasBeenSet(false),
    m_accountNumberLastFourHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankExternalSubMerchantBankAccountData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountBank") && !value["AccountBank"].IsNull())
    {
        if (!value["AccountBank"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountData.AccountBank` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountBank = string(value["AccountBank"].GetString());
        m_accountBankHasBeenSet = true;
    }

    if (value.HasMember("BindSerialNo") && !value["BindSerialNo"].IsNull())
    {
        if (!value["BindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountData.BindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindSerialNo = string(value["BindSerialNo"].GetString());
        m_bindSerialNoHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountData.AccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = string(value["AccountType"].GetString());
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("BankBranchId") && !value["BankBranchId"].IsNull())
    {
        if (!value["BankBranchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountData.BankBranchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankBranchId = string(value["BankBranchId"].GetString());
        m_bankBranchIdHasBeenSet = true;
    }

    if (value.HasMember("AccountNumberLastFour") && !value["AccountNumberLastFour"].IsNull())
    {
        if (!value["AccountNumberLastFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankExternalSubMerchantBankAccountData.AccountNumberLastFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNumberLastFour = string(value["AccountNumberLastFour"].GetString());
        m_accountNumberLastFourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankExternalSubMerchantBankAccountData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountBankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountBank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountBank.c_str(), allocator).Move(), allocator);
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

    if (m_bankBranchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankBranchId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNumberLastFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNumberLastFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountNumberLastFour.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankExternalSubMerchantBankAccountData::GetAccountBank() const
{
    return m_accountBank;
}

void QueryOpenBankExternalSubMerchantBankAccountData::SetAccountBank(const string& _accountBank)
{
    m_accountBank = _accountBank;
    m_accountBankHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountData::AccountBankHasBeenSet() const
{
    return m_accountBankHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountData::GetBindSerialNo() const
{
    return m_bindSerialNo;
}

void QueryOpenBankExternalSubMerchantBankAccountData::SetBindSerialNo(const string& _bindSerialNo)
{
    m_bindSerialNo = _bindSerialNo;
    m_bindSerialNoHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountData::BindSerialNoHasBeenSet() const
{
    return m_bindSerialNoHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountData::GetAccountType() const
{
    return m_accountType;
}

void QueryOpenBankExternalSubMerchantBankAccountData::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountData::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountData::GetBankBranchId() const
{
    return m_bankBranchId;
}

void QueryOpenBankExternalSubMerchantBankAccountData::SetBankBranchId(const string& _bankBranchId)
{
    m_bankBranchId = _bankBranchId;
    m_bankBranchIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountData::BankBranchIdHasBeenSet() const
{
    return m_bankBranchIdHasBeenSet;
}

string QueryOpenBankExternalSubMerchantBankAccountData::GetAccountNumberLastFour() const
{
    return m_accountNumberLastFour;
}

void QueryOpenBankExternalSubMerchantBankAccountData::SetAccountNumberLastFour(const string& _accountNumberLastFour)
{
    m_accountNumberLastFour = _accountNumberLastFour;
    m_accountNumberLastFourHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantBankAccountData::AccountNumberLastFourHasBeenSet() const
{
    return m_accountNumberLastFourHasBeenSet;
}

