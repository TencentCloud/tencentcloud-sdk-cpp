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

#include <tencentcloud/clb/v20180317/model/CoefficientTier.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CoefficientTier::CoefficientTier() :
    m_conditionHasBeenSet(false),
    m_coefficientHasBeenSet(false)
{
}

CoreInternalOutcome CoefficientTier::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientTier.Condition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_condition.Deserialize(value["Condition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Coefficient") && !value["Coefficient"].IsNull())
    {
        if (!value["Coefficient"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientTier.Coefficient` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coefficient.Deserialize(value["Coefficient"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coefficientHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoefficientTier::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coefficientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coefficient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coefficient.ToJsonObject(value[key.c_str()], allocator);
    }

}


CoefficientTierCondition CoefficientTier::GetCondition() const
{
    return m_condition;
}

void CoefficientTier::SetCondition(const CoefficientTierCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CoefficientTier::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

Coefficient CoefficientTier::GetCoefficient() const
{
    return m_coefficient;
}

void CoefficientTier::SetCoefficient(const Coefficient& _coefficient)
{
    m_coefficient = _coefficient;
    m_coefficientHasBeenSet = true;
}

bool CoefficientTier::CoefficientHasBeenSet() const
{
    return m_coefficientHasBeenSet;
}

