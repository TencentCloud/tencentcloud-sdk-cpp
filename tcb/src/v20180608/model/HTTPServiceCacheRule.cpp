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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceCacheRule::HTTPServiceCacheRule() :
    m_descriptionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceCacheRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheRule.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheRule.Condition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_condition.Deserialize(value["Condition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HTTPServiceCacheRule.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HTTPServiceCacheAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actions.push_back(item);
        }
        m_actionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceCacheRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HTTPServiceCacheRule::GetDescription() const
{
    return m_description;
}

void HTTPServiceCacheRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HTTPServiceCacheRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool HTTPServiceCacheRule::GetEnable() const
{
    return m_enable;
}

void HTTPServiceCacheRule::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool HTTPServiceCacheRule::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

HTTPServiceRuleCondition HTTPServiceCacheRule::GetCondition() const
{
    return m_condition;
}

void HTTPServiceCacheRule::SetCondition(const HTTPServiceRuleCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool HTTPServiceCacheRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

vector<HTTPServiceCacheAction> HTTPServiceCacheRule::GetActions() const
{
    return m_actions;
}

void HTTPServiceCacheRule::SetActions(const vector<HTTPServiceCacheAction>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool HTTPServiceCacheRule::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

