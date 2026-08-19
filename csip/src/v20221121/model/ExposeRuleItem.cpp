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

#include <tencentcloud/csip/v20221121/model/ExposeRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ExposeRuleItem::ExposeRuleItem() :
    m_ruleTypeHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_fixAdviceHasBeenSet(false)
{
}

CoreInternalOutcome ExposeRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeRuleItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeRuleItem.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeRuleItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("FixAdvice") && !value["FixAdvice"].IsNull())
    {
        if (!value["FixAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeRuleItem.FixAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixAdvice = string(value["FixAdvice"].GetString());
        m_fixAdviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExposeRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_fixAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixAdvice.c_str(), allocator).Move(), allocator);
    }

}


string ExposeRuleItem::GetRuleType() const
{
    return m_ruleType;
}

void ExposeRuleItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ExposeRuleItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string ExposeRuleItem::GetSeverity() const
{
    return m_severity;
}

void ExposeRuleItem::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool ExposeRuleItem::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string ExposeRuleItem::GetTitle() const
{
    return m_title;
}

void ExposeRuleItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ExposeRuleItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string ExposeRuleItem::GetFixAdvice() const
{
    return m_fixAdvice;
}

void ExposeRuleItem::SetFixAdvice(const string& _fixAdvice)
{
    m_fixAdvice = _fixAdvice;
    m_fixAdviceHasBeenSet = true;
}

bool ExposeRuleItem::FixAdviceHasBeenSet() const
{
    return m_fixAdviceHasBeenSet;
}

