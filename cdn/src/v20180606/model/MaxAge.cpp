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

#include <tencentcloud/cdn/v20180606/model/MaxAge.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

MaxAge::MaxAge() :
    m_switchHasBeenSet(false),
    m_maxAgeRulesHasBeenSet(false),
    m_maxAgeCodeRuleHasBeenSet(false)
{
}

CoreInternalOutcome MaxAge::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAge.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeRules") && !value["MaxAgeRules"].IsNull())
    {
        if (!value["MaxAgeRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaxAge.MaxAgeRules` is not array type"));

        const rapidjson::Value &tmpValue = value["MaxAgeRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaxAgeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_maxAgeRules.push_back(item);
        }
        m_maxAgeRulesHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeCodeRule") && !value["MaxAgeCodeRule"].IsNull())
    {
        if (!value["MaxAgeCodeRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAge.MaxAgeCodeRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAgeCodeRule.Deserialize(value["MaxAgeCodeRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeCodeRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaxAge::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAgeRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_maxAgeRules.begin(); itr != m_maxAgeRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxAgeCodeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeCodeRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAgeCodeRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MaxAge::GetSwitch() const
{
    return m_switch;
}

void MaxAge::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool MaxAge::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<MaxAgeRule> MaxAge::GetMaxAgeRules() const
{
    return m_maxAgeRules;
}

void MaxAge::SetMaxAgeRules(const vector<MaxAgeRule>& _maxAgeRules)
{
    m_maxAgeRules = _maxAgeRules;
    m_maxAgeRulesHasBeenSet = true;
}

bool MaxAge::MaxAgeRulesHasBeenSet() const
{
    return m_maxAgeRulesHasBeenSet;
}

MaxAgeCodeRule MaxAge::GetMaxAgeCodeRule() const
{
    return m_maxAgeCodeRule;
}

void MaxAge::SetMaxAgeCodeRule(const MaxAgeCodeRule& _maxAgeCodeRule)
{
    m_maxAgeCodeRule = _maxAgeCodeRule;
    m_maxAgeCodeRuleHasBeenSet = true;
}

bool MaxAge::MaxAgeCodeRuleHasBeenSet() const
{
    return m_maxAgeCodeRuleHasBeenSet;
}

