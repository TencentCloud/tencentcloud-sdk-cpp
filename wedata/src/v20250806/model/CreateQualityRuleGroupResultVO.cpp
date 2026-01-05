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

#include <tencentcloud/wedata/v20250806/model/CreateQualityRuleGroupResultVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateQualityRuleGroupResultVO::CreateQualityRuleGroupResultVO() :
    m_ruleGroupResultListHasBeenSet(false)
{
}

CoreInternalOutcome CreateQualityRuleGroupResultVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupResultList") && !value["RuleGroupResultList"].IsNull())
    {
        if (!value["RuleGroupResultList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateQualityRuleGroupResultVO.RuleGroupResultList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleGroupResultList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityRuleGroupResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleGroupResultList.push_back(item);
        }
        m_ruleGroupResultListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateQualityRuleGroupResultVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupResultListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupResultList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleGroupResultList.begin(); itr != m_ruleGroupResultList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QualityRuleGroupResult> CreateQualityRuleGroupResultVO::GetRuleGroupResultList() const
{
    return m_ruleGroupResultList;
}

void CreateQualityRuleGroupResultVO::SetRuleGroupResultList(const vector<QualityRuleGroupResult>& _ruleGroupResultList)
{
    m_ruleGroupResultList = _ruleGroupResultList;
    m_ruleGroupResultListHasBeenSet = true;
}

bool CreateQualityRuleGroupResultVO::RuleGroupResultListHasBeenSet() const
{
    return m_ruleGroupResultListHasBeenSet;
}

