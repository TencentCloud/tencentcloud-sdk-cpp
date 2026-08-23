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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPSystemRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxDLPSystemRuleItem::TrafficSandboxDLPSystemRuleItem() :
    m_iDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleContentHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxDLPSystemRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPSystemRuleItem.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPSystemRuleItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPSystemRuleItem.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxDLPSystemRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

}


int64_t TrafficSandboxDLPSystemRuleItem::GetID() const
{
    return m_iD;
}

void TrafficSandboxDLPSystemRuleItem::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool TrafficSandboxDLPSystemRuleItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string TrafficSandboxDLPSystemRuleItem::GetRuleName() const
{
    return m_ruleName;
}

void TrafficSandboxDLPSystemRuleItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TrafficSandboxDLPSystemRuleItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TrafficSandboxDLPSystemRuleItem::GetRuleContent() const
{
    return m_ruleContent;
}

void TrafficSandboxDLPSystemRuleItem::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool TrafficSandboxDLPSystemRuleItem::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

