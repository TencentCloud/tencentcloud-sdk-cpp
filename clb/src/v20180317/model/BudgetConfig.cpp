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

#include <tencentcloud/clb/v20180317/model/BudgetConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BudgetConfig::BudgetConfig() :
    m_budgetDurationHasBeenSet(false),
    m_budgetResetAtHasBeenSet(false),
    m_maxBudgetHasBeenSet(false)
{
}

CoreInternalOutcome BudgetConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetDuration") && !value["BudgetDuration"].IsNull())
    {
        if (!value["BudgetDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetConfig.BudgetDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetDuration = string(value["BudgetDuration"].GetString());
        m_budgetDurationHasBeenSet = true;
    }

    if (value.HasMember("BudgetResetAt") && !value["BudgetResetAt"].IsNull())
    {
        if (!value["BudgetResetAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetConfig.BudgetResetAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetResetAt = string(value["BudgetResetAt"].GetString());
        m_budgetResetAtHasBeenSet = true;
    }

    if (value.HasMember("MaxBudget") && !value["MaxBudget"].IsNull())
    {
        if (!value["MaxBudget"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetConfig.MaxBudget` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxBudget = value["MaxBudget"].GetDouble();
        m_maxBudgetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_maxBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBudget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBudget, allocator);
    }

}


string BudgetConfig::GetBudgetDuration() const
{
    return m_budgetDuration;
}

void BudgetConfig::SetBudgetDuration(const string& _budgetDuration)
{
    m_budgetDuration = _budgetDuration;
    m_budgetDurationHasBeenSet = true;
}

bool BudgetConfig::BudgetDurationHasBeenSet() const
{
    return m_budgetDurationHasBeenSet;
}

string BudgetConfig::GetBudgetResetAt() const
{
    return m_budgetResetAt;
}

void BudgetConfig::SetBudgetResetAt(const string& _budgetResetAt)
{
    m_budgetResetAt = _budgetResetAt;
    m_budgetResetAtHasBeenSet = true;
}

bool BudgetConfig::BudgetResetAtHasBeenSet() const
{
    return m_budgetResetAtHasBeenSet;
}

double BudgetConfig::GetMaxBudget() const
{
    return m_maxBudget;
}

void BudgetConfig::SetMaxBudget(const double& _maxBudget)
{
    m_maxBudget = _maxBudget;
    m_maxBudgetHasBeenSet = true;
}

bool BudgetConfig::MaxBudgetHasBeenSet() const
{
    return m_maxBudgetHasBeenSet;
}

