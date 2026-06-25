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

#include <tencentcloud/clb/v20180317/model/CreditUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreditUsage::CreditUsage() :
    m_budgetDurationHasBeenSet(false),
    m_budgetResetAtHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome CreditUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetDuration") && !value["BudgetDuration"].IsNull())
    {
        if (!value["BudgetDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreditUsage.BudgetDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetDuration = string(value["BudgetDuration"].GetString());
        m_budgetDurationHasBeenSet = true;
    }

    if (value.HasMember("BudgetResetAt") && !value["BudgetResetAt"].IsNull())
    {
        if (!value["BudgetResetAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreditUsage.BudgetResetAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetResetAt = string(value["BudgetResetAt"].GetString());
        m_budgetResetAtHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreditUsage.Limit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetDouble();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreditUsage.Used` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetDouble();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreditUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_budgetDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetResetAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetResetAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetResetAt.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


string CreditUsage::GetBudgetDuration() const
{
    return m_budgetDuration;
}

void CreditUsage::SetBudgetDuration(const string& _budgetDuration)
{
    m_budgetDuration = _budgetDuration;
    m_budgetDurationHasBeenSet = true;
}

bool CreditUsage::BudgetDurationHasBeenSet() const
{
    return m_budgetDurationHasBeenSet;
}

string CreditUsage::GetBudgetResetAt() const
{
    return m_budgetResetAt;
}

void CreditUsage::SetBudgetResetAt(const string& _budgetResetAt)
{
    m_budgetResetAt = _budgetResetAt;
    m_budgetResetAtHasBeenSet = true;
}

bool CreditUsage::BudgetResetAtHasBeenSet() const
{
    return m_budgetResetAtHasBeenSet;
}

double CreditUsage::GetLimit() const
{
    return m_limit;
}

void CreditUsage::SetLimit(const double& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreditUsage::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

double CreditUsage::GetUsed() const
{
    return m_used;
}

void CreditUsage::SetUsed(const double& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool CreditUsage::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

