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

#include <tencentcloud/cdb/v20170320/model/AuditRuleFilters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AuditRuleFilters::AuditRuleFilters() :
    m_ruleFiltersHasBeenSet(false)
{
}

CoreInternalOutcome AuditRuleFilters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleFilters") && !value["RuleFilters"].IsNull())
    {
        if (!value["RuleFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditRuleFilters.RuleFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleFilters item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleFilters.push_back(item);
        }
        m_ruleFiltersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditRuleFilters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleFilters.begin(); itr != m_ruleFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RuleFilters> AuditRuleFilters::GetRuleFilters() const
{
    return m_ruleFilters;
}

void AuditRuleFilters::SetRuleFilters(const vector<RuleFilters>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool AuditRuleFilters::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

