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

#include <tencentcloud/mqtt/v20240516/model/CreateMessageEnrichmentRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CreateMessageEnrichmentRuleRequest::CreateMessageEnrichmentRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateMessageEnrichmentRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateMessageEnrichmentRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateMessageEnrichmentRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateMessageEnrichmentRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateMessageEnrichmentRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateMessageEnrichmentRuleRequest::GetCondition() const
{
    return m_condition;
}

void CreateMessageEnrichmentRuleRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string CreateMessageEnrichmentRuleRequest::GetActions() const
{
    return m_actions;
}

void CreateMessageEnrichmentRuleRequest::SetActions(const string& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

int64_t CreateMessageEnrichmentRuleRequest::GetPriority() const
{
    return m_priority;
}

void CreateMessageEnrichmentRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t CreateMessageEnrichmentRuleRequest::GetStatus() const
{
    return m_status;
}

void CreateMessageEnrichmentRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateMessageEnrichmentRuleRequest::GetRemark() const
{
    return m_remark;
}

void CreateMessageEnrichmentRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateMessageEnrichmentRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


