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

#include <tencentcloud/cwp/v20180228/model/CheckBashPolicyParamsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CheckBashPolicyParamsRequest::CheckBashPolicyParamsRequest() :
    m_checkFieldHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_idHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string CheckBashPolicyParamsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_checkFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkField.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rules.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckBashPolicyParamsRequest::GetCheckField() const
{
    return m_checkField;
}

void CheckBashPolicyParamsRequest::SetCheckField(const string& _checkField)
{
    m_checkField = _checkField;
    m_checkFieldHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::CheckFieldHasBeenSet() const
{
    return m_checkFieldHasBeenSet;
}

uint64_t CheckBashPolicyParamsRequest::GetEventId() const
{
    return m_eventId;
}

void CheckBashPolicyParamsRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string CheckBashPolicyParamsRequest::GetName() const
{
    return m_name;
}

void CheckBashPolicyParamsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckBashPolicyParamsRequest::GetRule() const
{
    return m_rule;
}

void CheckBashPolicyParamsRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t CheckBashPolicyParamsRequest::GetId() const
{
    return m_id;
}

void CheckBashPolicyParamsRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

PolicyRules CheckBashPolicyParamsRequest::GetRules() const
{
    return m_rules;
}

void CheckBashPolicyParamsRequest::SetRules(const PolicyRules& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool CheckBashPolicyParamsRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


