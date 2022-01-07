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

#include <tencentcloud/eb/v20210416/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_eventPatternHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetEventPattern() const
{
    return m_eventPattern;
}

void CreateRuleRequest::SetEventPattern(const string& _eventPattern)
{
    m_eventPattern = _eventPattern;
    m_eventPatternHasBeenSet = true;
}

bool CreateRuleRequest::EventPatternHasBeenSet() const
{
    return m_eventPatternHasBeenSet;
}

string CreateRuleRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void CreateRuleRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool CreateRuleRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string CreateRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void CreateRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CreateRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

bool CreateRuleRequest::GetEnable() const
{
    return m_enable;
}

void CreateRuleRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateRuleRequest::GetDescription() const
{
    return m_description;
}

void CreateRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


