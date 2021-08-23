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

#include <tencentcloud/iotexplorer/v20190423/model/TopicRulePayload.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TopicRulePayload::TopicRulePayload() :
    m_sqlHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleDisabledHasBeenSet(false)
{
}

CoreInternalOutcome TopicRulePayload::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRulePayload.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRulePayload.Actions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actions = string(value["Actions"].GetString());
        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRulePayload.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleDisabled") && !value["RuleDisabled"].IsNull())
    {
        if (!value["RuleDisabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRulePayload.RuleDisabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDisabled = value["RuleDisabled"].GetBool();
        m_ruleDisabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicRulePayload::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actions.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDisabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDisabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleDisabled, allocator);
    }

}


string TopicRulePayload::GetSql() const
{
    return m_sql;
}

void TopicRulePayload::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool TopicRulePayload::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string TopicRulePayload::GetActions() const
{
    return m_actions;
}

void TopicRulePayload::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool TopicRulePayload::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string TopicRulePayload::GetDescription() const
{
    return m_description;
}

void TopicRulePayload::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TopicRulePayload::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool TopicRulePayload::GetRuleDisabled() const
{
    return m_ruleDisabled;
}

void TopicRulePayload::SetRuleDisabled(const bool& _ruleDisabled)
{
    m_ruleDisabled = _ruleDisabled;
    m_ruleDisabledHasBeenSet = true;
}

bool TopicRulePayload::RuleDisabledHasBeenSet() const
{
    return m_ruleDisabledHasBeenSet;
}

