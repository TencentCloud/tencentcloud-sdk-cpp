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

#include <tencentcloud/cpdp/v20190820/model/OrderSummaryResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OrderSummaryResult::OrderSummaryResult() :
    m_summaryIdHasBeenSet(false),
    m_payeeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_summaryAmountHasBeenSet(false),
    m_summaryTimeHasBeenSet(false),
    m_summaryCountHasBeenSet(false),
    m_outUserIdHasBeenSet(false)
{
}

CoreInternalOutcome OrderSummaryResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SummaryId") && !value["SummaryId"].IsNull())
    {
        if (!value["SummaryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.SummaryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryId = string(value["SummaryId"].GetString());
        m_summaryIdHasBeenSet = true;
    }

    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.IncomeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = string(value["IncomeType"].GetString());
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("SummaryAmount") && !value["SummaryAmount"].IsNull())
    {
        if (!value["SummaryAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.SummaryAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryAmount = string(value["SummaryAmount"].GetString());
        m_summaryAmountHasBeenSet = true;
    }

    if (value.HasMember("SummaryTime") && !value["SummaryTime"].IsNull())
    {
        if (!value["SummaryTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.SummaryTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryTime = string(value["SummaryTime"].GetString());
        m_summaryTimeHasBeenSet = true;
    }

    if (value.HasMember("SummaryCount") && !value["SummaryCount"].IsNull())
    {
        if (!value["SummaryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.SummaryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_summaryCount = value["SummaryCount"].GetInt64();
        m_summaryCountHasBeenSet = true;
    }

    if (value.HasMember("OutUserId") && !value["OutUserId"].IsNull())
    {
        if (!value["OutUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderSummaryResult.OutUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outUserId = string(value["OutUserId"].GetString());
        m_outUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderSummaryResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_summaryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryId.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryTime.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_summaryCount, allocator);
    }

    if (m_outUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outUserId.c_str(), allocator).Move(), allocator);
    }

}


string OrderSummaryResult::GetSummaryId() const
{
    return m_summaryId;
}

void OrderSummaryResult::SetSummaryId(const string& _summaryId)
{
    m_summaryId = _summaryId;
    m_summaryIdHasBeenSet = true;
}

bool OrderSummaryResult::SummaryIdHasBeenSet() const
{
    return m_summaryIdHasBeenSet;
}

string OrderSummaryResult::GetPayeeId() const
{
    return m_payeeId;
}

void OrderSummaryResult::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool OrderSummaryResult::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string OrderSummaryResult::GetName() const
{
    return m_name;
}

void OrderSummaryResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OrderSummaryResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OrderSummaryResult::GetIncomeType() const
{
    return m_incomeType;
}

void OrderSummaryResult::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool OrderSummaryResult::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string OrderSummaryResult::GetSummaryAmount() const
{
    return m_summaryAmount;
}

void OrderSummaryResult::SetSummaryAmount(const string& _summaryAmount)
{
    m_summaryAmount = _summaryAmount;
    m_summaryAmountHasBeenSet = true;
}

bool OrderSummaryResult::SummaryAmountHasBeenSet() const
{
    return m_summaryAmountHasBeenSet;
}

string OrderSummaryResult::GetSummaryTime() const
{
    return m_summaryTime;
}

void OrderSummaryResult::SetSummaryTime(const string& _summaryTime)
{
    m_summaryTime = _summaryTime;
    m_summaryTimeHasBeenSet = true;
}

bool OrderSummaryResult::SummaryTimeHasBeenSet() const
{
    return m_summaryTimeHasBeenSet;
}

int64_t OrderSummaryResult::GetSummaryCount() const
{
    return m_summaryCount;
}

void OrderSummaryResult::SetSummaryCount(const int64_t& _summaryCount)
{
    m_summaryCount = _summaryCount;
    m_summaryCountHasBeenSet = true;
}

bool OrderSummaryResult::SummaryCountHasBeenSet() const
{
    return m_summaryCountHasBeenSet;
}

string OrderSummaryResult::GetOutUserId() const
{
    return m_outUserId;
}

void OrderSummaryResult::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool OrderSummaryResult::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

