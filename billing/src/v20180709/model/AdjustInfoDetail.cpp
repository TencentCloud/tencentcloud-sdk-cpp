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

#include <tencentcloud/billing/v20180709/model/AdjustInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AdjustInfoDetail::AdjustInfoDetail() :
    m_payerUinHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_adjustTypeHasBeenSet(false),
    m_adjustNumHasBeenSet(false),
    m_adjustCompletionTimeHasBeenSet(false),
    m_adjustAmountHasBeenSet(false)
{
}

CoreInternalOutcome AdjustInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.PayerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = string(value["PayerUin"].GetString());
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("Month") && !value["Month"].IsNull())
    {
        if (!value["Month"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.Month` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_month = string(value["Month"].GetString());
        m_monthHasBeenSet = true;
    }

    if (value.HasMember("AdjustType") && !value["AdjustType"].IsNull())
    {
        if (!value["AdjustType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.AdjustType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adjustType = string(value["AdjustType"].GetString());
        m_adjustTypeHasBeenSet = true;
    }

    if (value.HasMember("AdjustNum") && !value["AdjustNum"].IsNull())
    {
        if (!value["AdjustNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.AdjustNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adjustNum = string(value["AdjustNum"].GetString());
        m_adjustNumHasBeenSet = true;
    }

    if (value.HasMember("AdjustCompletionTime") && !value["AdjustCompletionTime"].IsNull())
    {
        if (!value["AdjustCompletionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.AdjustCompletionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adjustCompletionTime = string(value["AdjustCompletionTime"].GetString());
        m_adjustCompletionTimeHasBeenSet = true;
    }

    if (value.HasMember("AdjustAmount") && !value["AdjustAmount"].IsNull())
    {
        if (!value["AdjustAmount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AdjustInfoDetail.AdjustAmount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_adjustAmount = value["AdjustAmount"].GetDouble();
        m_adjustAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdjustInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adjustType.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adjustNum.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustCompletionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustCompletionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adjustCompletionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_adjustAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdjustAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adjustAmount, allocator);
    }

}


string AdjustInfoDetail::GetPayerUin() const
{
    return m_payerUin;
}

void AdjustInfoDetail::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool AdjustInfoDetail::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string AdjustInfoDetail::GetMonth() const
{
    return m_month;
}

void AdjustInfoDetail::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool AdjustInfoDetail::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string AdjustInfoDetail::GetAdjustType() const
{
    return m_adjustType;
}

void AdjustInfoDetail::SetAdjustType(const string& _adjustType)
{
    m_adjustType = _adjustType;
    m_adjustTypeHasBeenSet = true;
}

bool AdjustInfoDetail::AdjustTypeHasBeenSet() const
{
    return m_adjustTypeHasBeenSet;
}

string AdjustInfoDetail::GetAdjustNum() const
{
    return m_adjustNum;
}

void AdjustInfoDetail::SetAdjustNum(const string& _adjustNum)
{
    m_adjustNum = _adjustNum;
    m_adjustNumHasBeenSet = true;
}

bool AdjustInfoDetail::AdjustNumHasBeenSet() const
{
    return m_adjustNumHasBeenSet;
}

string AdjustInfoDetail::GetAdjustCompletionTime() const
{
    return m_adjustCompletionTime;
}

void AdjustInfoDetail::SetAdjustCompletionTime(const string& _adjustCompletionTime)
{
    m_adjustCompletionTime = _adjustCompletionTime;
    m_adjustCompletionTimeHasBeenSet = true;
}

bool AdjustInfoDetail::AdjustCompletionTimeHasBeenSet() const
{
    return m_adjustCompletionTimeHasBeenSet;
}

double AdjustInfoDetail::GetAdjustAmount() const
{
    return m_adjustAmount;
}

void AdjustInfoDetail::SetAdjustAmount(const double& _adjustAmount)
{
    m_adjustAmount = _adjustAmount;
    m_adjustAmountHasBeenSet = true;
}

bool AdjustInfoDetail::AdjustAmountHasBeenSet() const
{
    return m_adjustAmountHasBeenSet;
}

