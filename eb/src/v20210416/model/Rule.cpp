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

#include <tencentcloud/eb/v20210416/model/Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Rule::Rule() :
    m_statusHasBeenSet(false),
    m_modTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false)
{
}

CoreInternalOutcome Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("EventBusId") && !value["EventBusId"].IsNull())
    {
        if (!value["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(value["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Targets") && !value["Targets"].IsNull())
    {
        if (!value["Targets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.Targets` is not array type"));

        const rapidjson::Value &tmpValue = value["Targets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targets.push_back(item);
        }
        m_targetsHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterConfig") && !value["DeadLetterConfig"].IsNull())
    {
        if (!value["DeadLetterConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.DeadLetterConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deadLetterConfig.Deserialize(value["DeadLetterConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deadLetterConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deadLetterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deadLetterConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Rule::GetStatus() const
{
    return m_status;
}

void Rule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Rule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Rule::GetModTime() const
{
    return m_modTime;
}

void Rule::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Rule::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

bool Rule::GetEnable() const
{
    return m_enable;
}

void Rule::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool Rule::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string Rule::GetDescription() const
{
    return m_description;
}

void Rule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Rule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Rule::GetRuleId() const
{
    return m_ruleId;
}

void Rule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Rule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string Rule::GetAddTime() const
{
    return m_addTime;
}

void Rule::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Rule::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string Rule::GetEventBusId() const
{
    return m_eventBusId;
}

void Rule::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool Rule::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string Rule::GetRuleName() const
{
    return m_ruleName;
}

void Rule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool Rule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<TargetBrief> Rule::GetTargets() const
{
    return m_targets;
}

void Rule::SetTargets(const vector<TargetBrief>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool Rule::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

DeadLetterConfig Rule::GetDeadLetterConfig() const
{
    return m_deadLetterConfig;
}

void Rule::SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig)
{
    m_deadLetterConfig = _deadLetterConfig;
    m_deadLetterConfigHasBeenSet = true;
}

bool Rule::DeadLetterConfigHasBeenSet() const
{
    return m_deadLetterConfigHasBeenSet;
}

