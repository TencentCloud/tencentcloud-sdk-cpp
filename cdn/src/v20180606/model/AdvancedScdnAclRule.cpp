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

#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedScdnAclRule::AdvancedScdnAclRule() :
    m_matchKeyHasBeenSet(false),
    m_logicOperatorHasBeenSet(false),
    m_matchValueHasBeenSet(false),
    m_caseSensitiveHasBeenSet(false),
    m_matchKeyParamHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedScdnAclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchKey") && !value["MatchKey"].IsNull())
    {
        if (!value["MatchKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclRule.MatchKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchKey = string(value["MatchKey"].GetString());
        m_matchKeyHasBeenSet = true;
    }

    if (value.HasMember("LogicOperator") && !value["LogicOperator"].IsNull())
    {
        if (!value["LogicOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclRule.LogicOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicOperator = string(value["LogicOperator"].GetString());
        m_logicOperatorHasBeenSet = true;
    }

    if (value.HasMember("MatchValue") && !value["MatchValue"].IsNull())
    {
        if (!value["MatchValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclRule.MatchValue` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_matchValue.push_back((*itr).GetString());
        }
        m_matchValueHasBeenSet = true;
    }

    if (value.HasMember("CaseSensitive") && !value["CaseSensitive"].IsNull())
    {
        if (!value["CaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclRule.CaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caseSensitive = value["CaseSensitive"].GetBool();
        m_caseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("MatchKeyParam") && !value["MatchKeyParam"].IsNull())
    {
        if (!value["MatchKeyParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclRule.MatchKeyParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchKeyParam = string(value["MatchKeyParam"].GetString());
        m_matchKeyParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedScdnAclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_logicOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_matchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_matchValue.begin(); itr != m_matchValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_matchKeyParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchKeyParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchKeyParam.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedScdnAclRule::GetMatchKey() const
{
    return m_matchKey;
}

void AdvancedScdnAclRule::SetMatchKey(const string& _matchKey)
{
    m_matchKey = _matchKey;
    m_matchKeyHasBeenSet = true;
}

bool AdvancedScdnAclRule::MatchKeyHasBeenSet() const
{
    return m_matchKeyHasBeenSet;
}

string AdvancedScdnAclRule::GetLogicOperator() const
{
    return m_logicOperator;
}

void AdvancedScdnAclRule::SetLogicOperator(const string& _logicOperator)
{
    m_logicOperator = _logicOperator;
    m_logicOperatorHasBeenSet = true;
}

bool AdvancedScdnAclRule::LogicOperatorHasBeenSet() const
{
    return m_logicOperatorHasBeenSet;
}

vector<string> AdvancedScdnAclRule::GetMatchValue() const
{
    return m_matchValue;
}

void AdvancedScdnAclRule::SetMatchValue(const vector<string>& _matchValue)
{
    m_matchValue = _matchValue;
    m_matchValueHasBeenSet = true;
}

bool AdvancedScdnAclRule::MatchValueHasBeenSet() const
{
    return m_matchValueHasBeenSet;
}

bool AdvancedScdnAclRule::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void AdvancedScdnAclRule::SetCaseSensitive(const bool& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool AdvancedScdnAclRule::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

string AdvancedScdnAclRule::GetMatchKeyParam() const
{
    return m_matchKeyParam;
}

void AdvancedScdnAclRule::SetMatchKeyParam(const string& _matchKeyParam)
{
    m_matchKeyParam = _matchKeyParam;
    m_matchKeyParamHasBeenSet = true;
}

bool AdvancedScdnAclRule::MatchKeyParamHasBeenSet() const
{
    return m_matchKeyParamHasBeenSet;
}

