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

#include <tencentcloud/teo/v20220901/model/WafGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

WafGroupDetail::WafGroupDetail() :
    m_ruleTypeIdHasBeenSet(false),
    m_ruleTypeNameHasBeenSet(false),
    m_ruleTypeDescHasBeenSet(false),
    m_wafGroupRulesHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome WafGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleTypeId") && !value["RuleTypeId"].IsNull())
    {
        if (!value["RuleTypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.RuleTypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeId = value["RuleTypeId"].GetInt64();
        m_ruleTypeIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeName") && !value["RuleTypeName"].IsNull())
    {
        if (!value["RuleTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.RuleTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeName = string(value["RuleTypeName"].GetString());
        m_ruleTypeNameHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeDesc") && !value["RuleTypeDesc"].IsNull())
    {
        if (!value["RuleTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.RuleTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeDesc = string(value["RuleTypeDesc"].GetString());
        m_ruleTypeDescHasBeenSet = true;
    }

    if (value.HasMember("WafGroupRules") && !value["WafGroupRules"].IsNull())
    {
        if (!value["WafGroupRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.WafGroupRules` is not array type"));

        const rapidjson::Value &tmpValue = value["WafGroupRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WafGroupRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wafGroupRules.push_back(item);
        }
        m_wafGroupRulesHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafGroupDetail.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTypeId, allocator);
    }

    if (m_ruleTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_wafGroupRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafGroupRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wafGroupRules.begin(); itr != m_wafGroupRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


int64_t WafGroupDetail::GetRuleTypeId() const
{
    return m_ruleTypeId;
}

void WafGroupDetail::SetRuleTypeId(const int64_t& _ruleTypeId)
{
    m_ruleTypeId = _ruleTypeId;
    m_ruleTypeIdHasBeenSet = true;
}

bool WafGroupDetail::RuleTypeIdHasBeenSet() const
{
    return m_ruleTypeIdHasBeenSet;
}

string WafGroupDetail::GetRuleTypeName() const
{
    return m_ruleTypeName;
}

void WafGroupDetail::SetRuleTypeName(const string& _ruleTypeName)
{
    m_ruleTypeName = _ruleTypeName;
    m_ruleTypeNameHasBeenSet = true;
}

bool WafGroupDetail::RuleTypeNameHasBeenSet() const
{
    return m_ruleTypeNameHasBeenSet;
}

string WafGroupDetail::GetRuleTypeDesc() const
{
    return m_ruleTypeDesc;
}

void WafGroupDetail::SetRuleTypeDesc(const string& _ruleTypeDesc)
{
    m_ruleTypeDesc = _ruleTypeDesc;
    m_ruleTypeDescHasBeenSet = true;
}

bool WafGroupDetail::RuleTypeDescHasBeenSet() const
{
    return m_ruleTypeDescHasBeenSet;
}

vector<WafGroupRule> WafGroupDetail::GetWafGroupRules() const
{
    return m_wafGroupRules;
}

void WafGroupDetail::SetWafGroupRules(const vector<WafGroupRule>& _wafGroupRules)
{
    m_wafGroupRules = _wafGroupRules;
    m_wafGroupRulesHasBeenSet = true;
}

bool WafGroupDetail::WafGroupRulesHasBeenSet() const
{
    return m_wafGroupRulesHasBeenSet;
}

string WafGroupDetail::GetLevel() const
{
    return m_level;
}

void WafGroupDetail::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool WafGroupDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string WafGroupDetail::GetAction() const
{
    return m_action;
}

void WafGroupDetail::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool WafGroupDetail::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

