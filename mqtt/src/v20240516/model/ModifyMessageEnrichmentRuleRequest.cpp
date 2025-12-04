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

#include <tencentcloud/mqtt/v20240516/model/ModifyMessageEnrichmentRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyMessageEnrichmentRuleRequest::ModifyMessageEnrichmentRuleRequest() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyMessageEnrichmentRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actions.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyMessageEnrichmentRuleRequest::GetId() const
{
    return m_id;
}

void ModifyMessageEnrichmentRuleRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyMessageEnrichmentRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMessageEnrichmentRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyMessageEnrichmentRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyMessageEnrichmentRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ModifyMessageEnrichmentRuleRequest::GetCondition() const
{
    return m_condition;
}

void ModifyMessageEnrichmentRuleRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string ModifyMessageEnrichmentRuleRequest::GetActions() const
{
    return m_actions;
}

void ModifyMessageEnrichmentRuleRequest::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

int64_t ModifyMessageEnrichmentRuleRequest::GetPriority() const
{
    return m_priority;
}

void ModifyMessageEnrichmentRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t ModifyMessageEnrichmentRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyMessageEnrichmentRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyMessageEnrichmentRuleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyMessageEnrichmentRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyMessageEnrichmentRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


