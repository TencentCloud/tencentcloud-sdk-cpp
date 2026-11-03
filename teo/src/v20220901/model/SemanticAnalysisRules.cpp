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

#include <tencentcloud/teo/v20220901/model/SemanticAnalysisRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SemanticAnalysisRules::SemanticAnalysisRules() :
    m_enabledHasBeenSet(false),
    m_ruleActionsHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome SemanticAnalysisRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SemanticAnalysisRules.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RuleActions") && !value["RuleActions"].IsNull())
    {
        if (!value["RuleActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SemanticAnalysisRules.RuleActions` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ManagedRuleAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleActions.push_back(item);
        }
        m_ruleActionsHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SemanticAnalysisRules.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SemanticAnalysisRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleActions.begin(); itr != m_ruleActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SemanticAnalysisRules::GetEnabled() const
{
    return m_enabled;
}

void SemanticAnalysisRules::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SemanticAnalysisRules::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<ManagedRuleAction> SemanticAnalysisRules::GetRuleActions() const
{
    return m_ruleActions;
}

void SemanticAnalysisRules::SetRuleActions(const vector<ManagedRuleAction>& _ruleActions)
{
    m_ruleActions = _ruleActions;
    m_ruleActionsHasBeenSet = true;
}

bool SemanticAnalysisRules::RuleActionsHasBeenSet() const
{
    return m_ruleActionsHasBeenSet;
}

ManagedRuleGroupMeta SemanticAnalysisRules::GetMetaData() const
{
    return m_metaData;
}

void SemanticAnalysisRules::SetMetaData(const ManagedRuleGroupMeta& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool SemanticAnalysisRules::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

