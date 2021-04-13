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

#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeAccountBalanceResponse::DescribeAccountBalanceResponse() :
    m_balanceHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_realBalanceHasBeenSet(false),
    m_cashAccountBalanceHasBeenSet(false),
    m_incomeIntoAccountBalanceHasBeenSet(false),
    m_presentAccountBalanceHasBeenSet(false),
    m_freezeAmountHasBeenSet(false),
    m_oweAmountHasBeenSet(false),
    m_isAllowArrearsHasBeenSet(false),
    m_isCreditLimitedHasBeenSet(false),
    m_creditAmountHasBeenSet(false),
    m_creditBalanceHasBeenSet(false),
    m_realCreditBalanceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountBalanceResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Balance") && !rsp["Balance"].IsNull())
    {
        if (!rsp["Balance"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Balance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = rsp["Balance"].GetInt64();
        m_balanceHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = rsp["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("RealBalance") && !rsp["RealBalance"].IsNull())
    {
        if (!rsp["RealBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `RealBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realBalance = rsp["RealBalance"].GetDouble();
        m_realBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("CashAccountBalance") && !rsp["CashAccountBalance"].IsNull())
    {
        if (!rsp["CashAccountBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `CashAccountBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cashAccountBalance = rsp["CashAccountBalance"].GetDouble();
        m_cashAccountBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("IncomeIntoAccountBalance") && !rsp["IncomeIntoAccountBalance"].IsNull())
    {
        if (!rsp["IncomeIntoAccountBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `IncomeIntoAccountBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_incomeIntoAccountBalance = rsp["IncomeIntoAccountBalance"].GetDouble();
        m_incomeIntoAccountBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("PresentAccountBalance") && !rsp["PresentAccountBalance"].IsNull())
    {
        if (!rsp["PresentAccountBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `PresentAccountBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_presentAccountBalance = rsp["PresentAccountBalance"].GetDouble();
        m_presentAccountBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("FreezeAmount") && !rsp["FreezeAmount"].IsNull())
    {
        if (!rsp["FreezeAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `FreezeAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_freezeAmount = rsp["FreezeAmount"].GetDouble();
        m_freezeAmountHasBeenSet = true;
    }

    if (rsp.HasMember("OweAmount") && !rsp["OweAmount"].IsNull())
    {
        if (!rsp["OweAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `OweAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_oweAmount = rsp["OweAmount"].GetDouble();
        m_oweAmountHasBeenSet = true;
    }

    if (rsp.HasMember("IsAllowArrears") && !rsp["IsAllowArrears"].IsNull())
    {
        if (!rsp["IsAllowArrears"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsAllowArrears` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAllowArrears = rsp["IsAllowArrears"].GetBool();
        m_isAllowArrearsHasBeenSet = true;
    }

    if (rsp.HasMember("IsCreditLimited") && !rsp["IsCreditLimited"].IsNull())
    {
        if (!rsp["IsCreditLimited"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsCreditLimited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCreditLimited = rsp["IsCreditLimited"].GetBool();
        m_isCreditLimitedHasBeenSet = true;
    }

    if (rsp.HasMember("CreditAmount") && !rsp["CreditAmount"].IsNull())
    {
        if (!rsp["CreditAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `CreditAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditAmount = rsp["CreditAmount"].GetDouble();
        m_creditAmountHasBeenSet = true;
    }

    if (rsp.HasMember("CreditBalance") && !rsp["CreditBalance"].IsNull())
    {
        if (!rsp["CreditBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `CreditBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditBalance = rsp["CreditBalance"].GetDouble();
        m_creditBalanceHasBeenSet = true;
    }

    if (rsp.HasMember("RealCreditBalance") && !rsp["RealCreditBalance"].IsNull())
    {
        if (!rsp["RealCreditBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `RealCreditBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realCreditBalance = rsp["RealCreditBalance"].GetDouble();
        m_realCreditBalanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t DescribeAccountBalanceResponse::GetBalance() const
{
    return m_balance;
}

bool DescribeAccountBalanceResponse::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

uint64_t DescribeAccountBalanceResponse::GetUin() const
{
    return m_uin;
}

bool DescribeAccountBalanceResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

double DescribeAccountBalanceResponse::GetRealBalance() const
{
    return m_realBalance;
}

bool DescribeAccountBalanceResponse::RealBalanceHasBeenSet() const
{
    return m_realBalanceHasBeenSet;
}

double DescribeAccountBalanceResponse::GetCashAccountBalance() const
{
    return m_cashAccountBalance;
}

bool DescribeAccountBalanceResponse::CashAccountBalanceHasBeenSet() const
{
    return m_cashAccountBalanceHasBeenSet;
}

double DescribeAccountBalanceResponse::GetIncomeIntoAccountBalance() const
{
    return m_incomeIntoAccountBalance;
}

bool DescribeAccountBalanceResponse::IncomeIntoAccountBalanceHasBeenSet() const
{
    return m_incomeIntoAccountBalanceHasBeenSet;
}

double DescribeAccountBalanceResponse::GetPresentAccountBalance() const
{
    return m_presentAccountBalance;
}

bool DescribeAccountBalanceResponse::PresentAccountBalanceHasBeenSet() const
{
    return m_presentAccountBalanceHasBeenSet;
}

double DescribeAccountBalanceResponse::GetFreezeAmount() const
{
    return m_freezeAmount;
}

bool DescribeAccountBalanceResponse::FreezeAmountHasBeenSet() const
{
    return m_freezeAmountHasBeenSet;
}

double DescribeAccountBalanceResponse::GetOweAmount() const
{
    return m_oweAmount;
}

bool DescribeAccountBalanceResponse::OweAmountHasBeenSet() const
{
    return m_oweAmountHasBeenSet;
}

bool DescribeAccountBalanceResponse::GetIsAllowArrears() const
{
    return m_isAllowArrears;
}

bool DescribeAccountBalanceResponse::IsAllowArrearsHasBeenSet() const
{
    return m_isAllowArrearsHasBeenSet;
}

bool DescribeAccountBalanceResponse::GetIsCreditLimited() const
{
    return m_isCreditLimited;
}

bool DescribeAccountBalanceResponse::IsCreditLimitedHasBeenSet() const
{
    return m_isCreditLimitedHasBeenSet;
}

double DescribeAccountBalanceResponse::GetCreditAmount() const
{
    return m_creditAmount;
}

bool DescribeAccountBalanceResponse::CreditAmountHasBeenSet() const
{
    return m_creditAmountHasBeenSet;
}

double DescribeAccountBalanceResponse::GetCreditBalance() const
{
    return m_creditBalance;
}

bool DescribeAccountBalanceResponse::CreditBalanceHasBeenSet() const
{
    return m_creditBalanceHasBeenSet;
}

double DescribeAccountBalanceResponse::GetRealCreditBalance() const
{
    return m_realCreditBalance;
}

bool DescribeAccountBalanceResponse::RealCreditBalanceHasBeenSet() const
{
    return m_realCreditBalanceHasBeenSet;
}


