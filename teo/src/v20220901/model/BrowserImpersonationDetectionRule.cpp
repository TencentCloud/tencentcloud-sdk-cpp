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

#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetectionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BrowserImpersonationDetectionRule::BrowserImpersonationDetectionRule() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome BrowserImpersonationDetectionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionRule.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionRule.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrowserImpersonationDetectionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BrowserImpersonationDetectionRule::GetId() const
{
    return m_id;
}

void BrowserImpersonationDetectionRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BrowserImpersonationDetectionRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BrowserImpersonationDetectionRule::GetName() const
{
    return m_name;
}

void BrowserImpersonationDetectionRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BrowserImpersonationDetectionRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BrowserImpersonationDetectionRule::GetEnabled() const
{
    return m_enabled;
}

void BrowserImpersonationDetectionRule::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool BrowserImpersonationDetectionRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string BrowserImpersonationDetectionRule::GetCondition() const
{
    return m_condition;
}

void BrowserImpersonationDetectionRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool BrowserImpersonationDetectionRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

BrowserImpersonationDetectionAction BrowserImpersonationDetectionRule::GetAction() const
{
    return m_action;
}

void BrowserImpersonationDetectionRule::SetAction(const BrowserImpersonationDetectionAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BrowserImpersonationDetectionRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

