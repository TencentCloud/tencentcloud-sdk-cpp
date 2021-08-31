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

#include <tencentcloud/cwp/v20180228/model/CheckBashRuleParamsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CheckBashRuleParamsRequest::CheckBashRuleParamsRequest() :
    m_checkFieldHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

string CheckBashRuleParamsRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckBashRuleParamsRequest::GetCheckField() const
{
    return m_checkField;
}

void CheckBashRuleParamsRequest::SetCheckField(const string& _checkField)
{
    m_checkField = _checkField;
    m_checkFieldHasBeenSet = true;
}

bool CheckBashRuleParamsRequest::CheckFieldHasBeenSet() const
{
    return m_checkFieldHasBeenSet;
}

uint64_t CheckBashRuleParamsRequest::GetEventId() const
{
    return m_eventId;
}

void CheckBashRuleParamsRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CheckBashRuleParamsRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string CheckBashRuleParamsRequest::GetName() const
{
    return m_name;
}

void CheckBashRuleParamsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CheckBashRuleParamsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckBashRuleParamsRequest::GetRule() const
{
    return m_rule;
}

void CheckBashRuleParamsRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CheckBashRuleParamsRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

uint64_t CheckBashRuleParamsRequest::GetId() const
{
    return m_id;
}

void CheckBashRuleParamsRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CheckBashRuleParamsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}


