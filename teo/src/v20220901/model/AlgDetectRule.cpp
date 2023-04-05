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

#include <tencentcloud/teo/v20220901/model/AlgDetectRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AlgDetectRule::AlgDetectRule() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_algConditionsHasBeenSet(false),
    m_algDetectSessionHasBeenSet(false),
    m_algDetectJSHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlgDetectRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AlgConditions") && !value["AlgConditions"].IsNull())
    {
        if (!value["AlgConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.AlgConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["AlgConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AclCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_algConditions.push_back(item);
        }
        m_algConditionsHasBeenSet = true;
    }

    if (value.HasMember("AlgDetectSession") && !value["AlgDetectSession"].IsNull())
    {
        if (!value["AlgDetectSession"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.AlgDetectSession` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_algDetectSession.Deserialize(value["AlgDetectSession"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_algDetectSessionHasBeenSet = true;
    }

    if (value.HasMember("AlgDetectJS") && !value["AlgDetectJS"].IsNull())
    {
        if (!value["AlgDetectJS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.AlgDetectJS` is not array type"));

        const rapidjson::Value &tmpValue = value["AlgDetectJS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlgDetectJS item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_algDetectJS.push_back(item);
        }
        m_algDetectJSHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgDetectRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_algConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_algConditions.begin(); itr != m_algConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_algDetectSessionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgDetectSession";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_algDetectSession.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_algDetectJSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlgDetectJS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_algDetectJS.begin(); itr != m_algDetectJS.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t AlgDetectRule::GetRuleID() const
{
    return m_ruleID;
}

void AlgDetectRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool AlgDetectRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string AlgDetectRule::GetRuleName() const
{
    return m_ruleName;
}

void AlgDetectRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AlgDetectRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AlgDetectRule::GetSwitch() const
{
    return m_switch;
}

void AlgDetectRule::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AlgDetectRule::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<AclCondition> AlgDetectRule::GetAlgConditions() const
{
    return m_algConditions;
}

void AlgDetectRule::SetAlgConditions(const vector<AclCondition>& _algConditions)
{
    m_algConditions = _algConditions;
    m_algConditionsHasBeenSet = true;
}

bool AlgDetectRule::AlgConditionsHasBeenSet() const
{
    return m_algConditionsHasBeenSet;
}

AlgDetectSession AlgDetectRule::GetAlgDetectSession() const
{
    return m_algDetectSession;
}

void AlgDetectRule::SetAlgDetectSession(const AlgDetectSession& _algDetectSession)
{
    m_algDetectSession = _algDetectSession;
    m_algDetectSessionHasBeenSet = true;
}

bool AlgDetectRule::AlgDetectSessionHasBeenSet() const
{
    return m_algDetectSessionHasBeenSet;
}

vector<AlgDetectJS> AlgDetectRule::GetAlgDetectJS() const
{
    return m_algDetectJS;
}

void AlgDetectRule::SetAlgDetectJS(const vector<AlgDetectJS>& _algDetectJS)
{
    m_algDetectJS = _algDetectJS;
    m_algDetectJSHasBeenSet = true;
}

bool AlgDetectRule::AlgDetectJSHasBeenSet() const
{
    return m_algDetectJSHasBeenSet;
}

string AlgDetectRule::GetUpdateTime() const
{
    return m_updateTime;
}

void AlgDetectRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AlgDetectRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

