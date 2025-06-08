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

#include <tencentcloud/teo/v20220901/model/RateLimitingRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RateLimitingRule::RateLimitingRule() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_countByHasBeenSet(false),
    m_maxRequestThresholdHasBeenSet(false),
    m_countingPeriodHasBeenSet(false),
    m_actionDurationHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome RateLimitingRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("CountBy") && !value["CountBy"].IsNull())
    {
        if (!value["CountBy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.CountBy` is not array type"));

        const rapidjson::Value &tmpValue = value["CountBy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_countBy.push_back((*itr).GetString());
        }
        m_countByHasBeenSet = true;
    }

    if (value.HasMember("MaxRequestThreshold") && !value["MaxRequestThreshold"].IsNull())
    {
        if (!value["MaxRequestThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.MaxRequestThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestThreshold = value["MaxRequestThreshold"].GetInt64();
        m_maxRequestThresholdHasBeenSet = true;
    }

    if (value.HasMember("CountingPeriod") && !value["CountingPeriod"].IsNull())
    {
        if (!value["CountingPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.CountingPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countingPeriod = string(value["CountingPeriod"].GetString());
        m_countingPeriodHasBeenSet = true;
    }

    if (value.HasMember("ActionDuration") && !value["ActionDuration"].IsNull())
    {
        if (!value["ActionDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.ActionDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDuration = string(value["ActionDuration"].GetString());
        m_actionDurationHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RateLimitingRule.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RateLimitingRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_countByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countBy.begin(); itr != m_countBy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxRequestThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestThreshold, allocator);
    }

    if (m_countingPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountingPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countingPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

}


string RateLimitingRule::GetId() const
{
    return m_id;
}

void RateLimitingRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RateLimitingRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RateLimitingRule::GetName() const
{
    return m_name;
}

void RateLimitingRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RateLimitingRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RateLimitingRule::GetCondition() const
{
    return m_condition;
}

void RateLimitingRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool RateLimitingRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

vector<string> RateLimitingRule::GetCountBy() const
{
    return m_countBy;
}

void RateLimitingRule::SetCountBy(const vector<string>& _countBy)
{
    m_countBy = _countBy;
    m_countByHasBeenSet = true;
}

bool RateLimitingRule::CountByHasBeenSet() const
{
    return m_countByHasBeenSet;
}

int64_t RateLimitingRule::GetMaxRequestThreshold() const
{
    return m_maxRequestThreshold;
}

void RateLimitingRule::SetMaxRequestThreshold(const int64_t& _maxRequestThreshold)
{
    m_maxRequestThreshold = _maxRequestThreshold;
    m_maxRequestThresholdHasBeenSet = true;
}

bool RateLimitingRule::MaxRequestThresholdHasBeenSet() const
{
    return m_maxRequestThresholdHasBeenSet;
}

string RateLimitingRule::GetCountingPeriod() const
{
    return m_countingPeriod;
}

void RateLimitingRule::SetCountingPeriod(const string& _countingPeriod)
{
    m_countingPeriod = _countingPeriod;
    m_countingPeriodHasBeenSet = true;
}

bool RateLimitingRule::CountingPeriodHasBeenSet() const
{
    return m_countingPeriodHasBeenSet;
}

string RateLimitingRule::GetActionDuration() const
{
    return m_actionDuration;
}

void RateLimitingRule::SetActionDuration(const string& _actionDuration)
{
    m_actionDuration = _actionDuration;
    m_actionDurationHasBeenSet = true;
}

bool RateLimitingRule::ActionDurationHasBeenSet() const
{
    return m_actionDurationHasBeenSet;
}

SecurityAction RateLimitingRule::GetAction() const
{
    return m_action;
}

void RateLimitingRule::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool RateLimitingRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t RateLimitingRule::GetPriority() const
{
    return m_priority;
}

void RateLimitingRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RateLimitingRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string RateLimitingRule::GetEnabled() const
{
    return m_enabled;
}

void RateLimitingRule::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RateLimitingRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

