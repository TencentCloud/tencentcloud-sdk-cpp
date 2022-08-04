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

#include <tencentcloud/cdn/v20180606/model/ScdnConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnConfig::ScdnConfig() :
    m_switchHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_advancedRulesHasBeenSet(false),
    m_globalAdvancedRulesHasBeenSet(false)
{
}

CoreInternalOutcome ScdnConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnConfig.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnCCRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("AdvancedRules") && !value["AdvancedRules"].IsNull())
    {
        if (!value["AdvancedRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnConfig.AdvancedRules` is not array type"));

        const rapidjson::Value &tmpValue = value["AdvancedRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedCCRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_advancedRules.push_back(item);
        }
        m_advancedRulesHasBeenSet = true;
    }

    if (value.HasMember("GlobalAdvancedRules") && !value["GlobalAdvancedRules"].IsNull())
    {
        if (!value["GlobalAdvancedRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnConfig.GlobalAdvancedRules` is not array type"));

        const rapidjson::Value &tmpValue = value["GlobalAdvancedRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedCCRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_globalAdvancedRules.push_back(item);
        }
        m_globalAdvancedRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_advancedRules.begin(); itr != m_advancedRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_globalAdvancedRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAdvancedRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_globalAdvancedRules.begin(); itr != m_globalAdvancedRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScdnConfig::GetSwitch() const
{
    return m_switch;
}

void ScdnConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ScdnConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<ScdnCCRules> ScdnConfig::GetRules() const
{
    return m_rules;
}

void ScdnConfig::SetRules(const vector<ScdnCCRules>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ScdnConfig::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

vector<AdvancedCCRules> ScdnConfig::GetAdvancedRules() const
{
    return m_advancedRules;
}

void ScdnConfig::SetAdvancedRules(const vector<AdvancedCCRules>& _advancedRules)
{
    m_advancedRules = _advancedRules;
    m_advancedRulesHasBeenSet = true;
}

bool ScdnConfig::AdvancedRulesHasBeenSet() const
{
    return m_advancedRulesHasBeenSet;
}

vector<AdvancedCCRules> ScdnConfig::GetGlobalAdvancedRules() const
{
    return m_globalAdvancedRules;
}

void ScdnConfig::SetGlobalAdvancedRules(const vector<AdvancedCCRules>& _globalAdvancedRules)
{
    m_globalAdvancedRules = _globalAdvancedRules;
    m_globalAdvancedRulesHasBeenSet = true;
}

bool ScdnConfig::GlobalAdvancedRulesHasBeenSet() const
{
    return m_globalAdvancedRulesHasBeenSet;
}

