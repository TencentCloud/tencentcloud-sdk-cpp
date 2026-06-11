/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/DescribeOrgMemberAccountBalanceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeOrgMemberAccountBalanceData::DescribeOrgMemberAccountBalanceData() :
    m_memberUinHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_isCreditAccountHasBeenSet(false),
    m_realBalanceHasBeenSet(false),
    m_cashAccountBalanceHasBeenSet(false),
    m_creditAmountHasBeenSet(false),
    m_tempCreditHasBeenSet(false),
    m_basicCreditAmountHasBeenSet(false),
    m_oweAmountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrgMemberAccountBalanceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.MemberUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = string(value["MemberUin"].GetString());
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }

    if (value.HasMember("IsCreditAccount") && !value["IsCreditAccount"].IsNull())
    {
        if (!value["IsCreditAccount"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.IsCreditAccount` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreditAccount = value["IsCreditAccount"].GetBool();
        m_isCreditAccountHasBeenSet = true;
    }

    if (value.HasMember("RealBalance") && !value["RealBalance"].IsNull())
    {
        if (!value["RealBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.RealBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realBalance = value["RealBalance"].GetDouble();
        m_realBalanceHasBeenSet = true;
    }

    if (value.HasMember("CashAccountBalance") && !value["CashAccountBalance"].IsNull())
    {
        if (!value["CashAccountBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.CashAccountBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cashAccountBalance = value["CashAccountBalance"].GetDouble();
        m_cashAccountBalanceHasBeenSet = true;
    }

    if (value.HasMember("CreditAmount") && !value["CreditAmount"].IsNull())
    {
        if (!value["CreditAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.CreditAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditAmount = value["CreditAmount"].GetDouble();
        m_creditAmountHasBeenSet = true;
    }

    if (value.HasMember("TempCredit") && !value["TempCredit"].IsNull())
    {
        if (!value["TempCredit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.TempCredit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tempCredit = value["TempCredit"].GetDouble();
        m_tempCreditHasBeenSet = true;
    }

    if (value.HasMember("BasicCreditAmount") && !value["BasicCreditAmount"].IsNull())
    {
        if (!value["BasicCreditAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.BasicCreditAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_basicCreditAmount = value["BasicCreditAmount"].GetDouble();
        m_basicCreditAmountHasBeenSet = true;
    }

    if (value.HasMember("OweAmount") && !value["OweAmount"].IsNull())
    {
        if (!value["OweAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOrgMemberAccountBalanceData.OweAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_oweAmount = value["OweAmount"].GetDouble();
        m_oweAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeOrgMemberAccountBalanceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberUin.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_isCreditAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCreditAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCreditAccount, allocator);
    }

    if (m_realBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realBalance, allocator);
    }

    if (m_cashAccountBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashAccountBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cashAccountBalance, allocator);
    }

    if (m_creditAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditAmount, allocator);
    }

    if (m_tempCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempCredit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tempCredit, allocator);
    }

    if (m_basicCreditAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicCreditAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basicCreditAmount, allocator);
    }

    if (m_oweAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OweAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oweAmount, allocator);
    }

}


string DescribeOrgMemberAccountBalanceData::GetMemberUin() const
{
    return m_memberUin;
}

void DescribeOrgMemberAccountBalanceData::SetMemberUin(const string& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string DescribeOrgMemberAccountBalanceData::GetMemberName() const
{
    return m_memberName;
}

void DescribeOrgMemberAccountBalanceData::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

bool DescribeOrgMemberAccountBalanceData::GetIsCreditAccount() const
{
    return m_isCreditAccount;
}

void DescribeOrgMemberAccountBalanceData::SetIsCreditAccount(const bool& _isCreditAccount)
{
    m_isCreditAccount = _isCreditAccount;
    m_isCreditAccountHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::IsCreditAccountHasBeenSet() const
{
    return m_isCreditAccountHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetRealBalance() const
{
    return m_realBalance;
}

void DescribeOrgMemberAccountBalanceData::SetRealBalance(const double& _realBalance)
{
    m_realBalance = _realBalance;
    m_realBalanceHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::RealBalanceHasBeenSet() const
{
    return m_realBalanceHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetCashAccountBalance() const
{
    return m_cashAccountBalance;
}

void DescribeOrgMemberAccountBalanceData::SetCashAccountBalance(const double& _cashAccountBalance)
{
    m_cashAccountBalance = _cashAccountBalance;
    m_cashAccountBalanceHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::CashAccountBalanceHasBeenSet() const
{
    return m_cashAccountBalanceHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetCreditAmount() const
{
    return m_creditAmount;
}

void DescribeOrgMemberAccountBalanceData::SetCreditAmount(const double& _creditAmount)
{
    m_creditAmount = _creditAmount;
    m_creditAmountHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::CreditAmountHasBeenSet() const
{
    return m_creditAmountHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetTempCredit() const
{
    return m_tempCredit;
}

void DescribeOrgMemberAccountBalanceData::SetTempCredit(const double& _tempCredit)
{
    m_tempCredit = _tempCredit;
    m_tempCreditHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::TempCreditHasBeenSet() const
{
    return m_tempCreditHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetBasicCreditAmount() const
{
    return m_basicCreditAmount;
}

void DescribeOrgMemberAccountBalanceData::SetBasicCreditAmount(const double& _basicCreditAmount)
{
    m_basicCreditAmount = _basicCreditAmount;
    m_basicCreditAmountHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::BasicCreditAmountHasBeenSet() const
{
    return m_basicCreditAmountHasBeenSet;
}

double DescribeOrgMemberAccountBalanceData::GetOweAmount() const
{
    return m_oweAmount;
}

void DescribeOrgMemberAccountBalanceData::SetOweAmount(const double& _oweAmount)
{
    m_oweAmount = _oweAmount;
    m_oweAmountHasBeenSet = true;
}

bool DescribeOrgMemberAccountBalanceData::OweAmountHasBeenSet() const
{
    return m_oweAmountHasBeenSet;
}

