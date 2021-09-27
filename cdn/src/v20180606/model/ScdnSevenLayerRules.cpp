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

#include <tencentcloud/cdn/v20180606/model/ScdnSevenLayerRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnSevenLayerRules::ScdnSevenLayerRules() :
    m_caseSensitiveHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_logicOperatorHasBeenSet(false),
    m_ruleValueHasBeenSet(false),
    m_ruleParamHasBeenSet(false)
{
}

CoreInternalOutcome ScdnSevenLayerRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseSensitive") && !value["CaseSensitive"].IsNull())
    {
        if (!value["CaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnSevenLayerRules.CaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caseSensitive = value["CaseSensitive"].GetBool();
        m_caseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnSevenLayerRules.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("LogicOperator") && !value["LogicOperator"].IsNull())
    {
        if (!value["LogicOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnSevenLayerRules.LogicOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicOperator = string(value["LogicOperator"].GetString());
        m_logicOperatorHasBeenSet = true;
    }

    if (value.HasMember("RuleValue") && !value["RuleValue"].IsNull())
    {
        if (!value["RuleValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnSevenLayerRules.RuleValue` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleValue.push_back((*itr).GetString());
        }
        m_ruleValueHasBeenSet = true;
    }

    if (value.HasMember("RuleParam") && !value["RuleParam"].IsNull())
    {
        if (!value["RuleParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnSevenLayerRules.RuleParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleParam = string(value["RuleParam"].GetString());
        m_ruleParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnSevenLayerRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_logicOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleValue.begin(); itr != m_ruleValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleParam.c_str(), allocator).Move(), allocator);
    }

}


bool ScdnSevenLayerRules::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void ScdnSevenLayerRules::SetCaseSensitive(const bool& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool ScdnSevenLayerRules::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

string ScdnSevenLayerRules::GetRuleType() const
{
    return m_ruleType;
}

void ScdnSevenLayerRules::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ScdnSevenLayerRules::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string ScdnSevenLayerRules::GetLogicOperator() const
{
    return m_logicOperator;
}

void ScdnSevenLayerRules::SetLogicOperator(const string& _logicOperator)
{
    m_logicOperator = _logicOperator;
    m_logicOperatorHasBeenSet = true;
}

bool ScdnSevenLayerRules::LogicOperatorHasBeenSet() const
{
    return m_logicOperatorHasBeenSet;
}

vector<string> ScdnSevenLayerRules::GetRuleValue() const
{
    return m_ruleValue;
}

void ScdnSevenLayerRules::SetRuleValue(const vector<string>& _ruleValue)
{
    m_ruleValue = _ruleValue;
    m_ruleValueHasBeenSet = true;
}

bool ScdnSevenLayerRules::RuleValueHasBeenSet() const
{
    return m_ruleValueHasBeenSet;
}

string ScdnSevenLayerRules::GetRuleParam() const
{
    return m_ruleParam;
}

void ScdnSevenLayerRules::SetRuleParam(const string& _ruleParam)
{
    m_ruleParam = _ruleParam;
    m_ruleParamHasBeenSet = true;
}

bool ScdnSevenLayerRules::RuleParamHasBeenSet() const
{
    return m_ruleParamHasBeenSet;
}

