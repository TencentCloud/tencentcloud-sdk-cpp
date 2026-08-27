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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceRuleCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceRuleCondition::HTTPServiceRuleCondition() :
    m_targetHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceRuleCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRuleCondition.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRuleCondition.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRuleCondition.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceRuleCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string HTTPServiceRuleCondition::GetTarget() const
{
    return m_target;
}

void HTTPServiceRuleCondition::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool HTTPServiceRuleCondition::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string HTTPServiceRuleCondition::GetMatchType() const
{
    return m_matchType;
}

void HTTPServiceRuleCondition::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool HTTPServiceRuleCondition::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

vector<string> HTTPServiceRuleCondition::GetValues() const
{
    return m_values;
}

void HTTPServiceRuleCondition::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool HTTPServiceRuleCondition::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

