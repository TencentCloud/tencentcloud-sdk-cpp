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

#include <tencentcloud/teo/v20220901/model/RuleEngineSubRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleEngineSubRule::RuleEngineSubRule() :
    m_branchesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome RuleEngineSubRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Branches") && !value["Branches"].IsNull())
    {
        if (!value["Branches"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineSubRule.Branches` is not array type"));

        const rapidjson::Value &tmpValue = value["Branches"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleBranch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_branches.push_back(item);
        }
        m_branchesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleEngineSubRule.Description` is not array type"));

        const rapidjson::Value &tmpValue = value["Description"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_description.push_back((*itr).GetString());
        }
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleEngineSubRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_branchesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branches";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_branches.begin(); itr != m_branches.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_description.begin(); itr != m_description.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<RuleBranch> RuleEngineSubRule::GetBranches() const
{
    return m_branches;
}

void RuleEngineSubRule::SetBranches(const vector<RuleBranch>& _branches)
{
    m_branches = _branches;
    m_branchesHasBeenSet = true;
}

bool RuleEngineSubRule::BranchesHasBeenSet() const
{
    return m_branchesHasBeenSet;
}

vector<string> RuleEngineSubRule::GetDescription() const
{
    return m_description;
}

void RuleEngineSubRule::SetDescription(const vector<string>& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleEngineSubRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

