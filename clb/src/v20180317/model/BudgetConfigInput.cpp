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

#include <tencentcloud/clb/v20180317/model/BudgetConfigInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

BudgetConfigInput::BudgetConfigInput() :
    m_budgetDurationHasBeenSet(false),
    m_maxBudgetHasBeenSet(false)
{
}

CoreInternalOutcome BudgetConfigInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetDuration") && !value["BudgetDuration"].IsNull())
    {
        if (!value["BudgetDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetConfigInput.BudgetDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetDuration = string(value["BudgetDuration"].GetString());
        m_budgetDurationHasBeenSet = true;
    }

    if (value.HasMember("MaxBudget") && !value["MaxBudget"].IsNull())
    {
        if (!value["MaxBudget"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetConfigInput.MaxBudget` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxBudget = value["MaxBudget"].GetDouble();
        m_maxBudgetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetConfigInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_budgetDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBudget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBudget, allocator);
    }

}


string BudgetConfigInput::GetBudgetDuration() const
{
    return m_budgetDuration;
}

void BudgetConfigInput::SetBudgetDuration(const string& _budgetDuration)
{
    m_budgetDuration = _budgetDuration;
    m_budgetDurationHasBeenSet = true;
}

bool BudgetConfigInput::BudgetDurationHasBeenSet() const
{
    return m_budgetDurationHasBeenSet;
}

double BudgetConfigInput::GetMaxBudget() const
{
    return m_maxBudget;
}

void BudgetConfigInput::SetMaxBudget(const double& _maxBudget)
{
    m_maxBudget = _maxBudget;
    m_maxBudgetHasBeenSet = true;
}

bool BudgetConfigInput::MaxBudgetHasBeenSet() const
{
    return m_maxBudgetHasBeenSet;
}

