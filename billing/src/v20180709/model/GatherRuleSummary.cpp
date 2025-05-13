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

#include <tencentcloud/billing/v20180709/model/GatherRuleSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

GatherRuleSummary::GatherRuleSummary() :
    m_ruleDetailHasBeenSet(false)
{
}

CoreInternalOutcome GatherRuleSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleDetail") && !value["RuleDetail"].IsNull())
    {
        if (!value["RuleDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GatherRuleSummary.RuleDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ruleDetail.Deserialize(value["RuleDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ruleDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatherRuleSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


AllocationRuleExpression GatherRuleSummary::GetRuleDetail() const
{
    return m_ruleDetail;
}

void GatherRuleSummary::SetRuleDetail(const AllocationRuleExpression& _ruleDetail)
{
    m_ruleDetail = _ruleDetail;
    m_ruleDetailHasBeenSet = true;
}

bool GatherRuleSummary::RuleDetailHasBeenSet() const
{
    return m_ruleDetailHasBeenSet;
}

