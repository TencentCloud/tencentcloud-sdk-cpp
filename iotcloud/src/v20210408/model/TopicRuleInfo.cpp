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

#include <tencentcloud/iotcloud/v20210408/model/TopicRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

TopicRuleInfo::TopicRuleInfo() :
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_ruleDisabledHasBeenSet(false),
    m_topicPatternHasBeenSet(false)
{
}

CoreInternalOutcome TopicRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRuleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRuleInfo.CreatedAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetUint64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("RuleDisabled") && !value["RuleDisabled"].IsNull())
    {
        if (!value["RuleDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRuleInfo.RuleDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDisabled = value["RuleDisabled"].GetBool();
        m_ruleDisabledHasBeenSet = true;
    }

    if (value.HasMember("TopicPattern") && !value["TopicPattern"].IsNull())
    {
        if (!value["TopicPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRuleInfo.TopicPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicPattern = string(value["TopicPattern"].GetString());
        m_topicPatternHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_ruleDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleDisabled, allocator);
    }

    if (m_topicPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicPattern.c_str(), allocator).Move(), allocator);
    }

}


string TopicRuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void TopicRuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool TopicRuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string TopicRuleInfo::GetDescription() const
{
    return m_description;
}

void TopicRuleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TopicRuleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t TopicRuleInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void TopicRuleInfo::SetCreatedAt(const uint64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool TopicRuleInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

bool TopicRuleInfo::GetRuleDisabled() const
{
    return m_ruleDisabled;
}

void TopicRuleInfo::SetRuleDisabled(const bool& _ruleDisabled)
{
    m_ruleDisabled = _ruleDisabled;
    m_ruleDisabledHasBeenSet = true;
}

bool TopicRuleInfo::RuleDisabledHasBeenSet() const
{
    return m_ruleDisabledHasBeenSet;
}

string TopicRuleInfo::GetTopicPattern() const
{
    return m_topicPattern;
}

void TopicRuleInfo::SetTopicPattern(const string& _topicPattern)
{
    m_topicPattern = _topicPattern;
    m_topicPatternHasBeenSet = true;
}

bool TopicRuleInfo::TopicPatternHasBeenSet() const
{
    return m_topicPatternHasBeenSet;
}

