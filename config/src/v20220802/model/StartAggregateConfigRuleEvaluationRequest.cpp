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

#include <tencentcloud/config/v20220802/model/StartAggregateConfigRuleEvaluationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

StartAggregateConfigRuleEvaluationRequest::StartAggregateConfigRuleEvaluationRequest() :
    m_triggerTypeHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false)
{
}

string StartAggregateConfigRuleEvaluationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartAggregateConfigRuleEvaluationRequest::GetTriggerType() const
{
    return m_triggerType;
}

void StartAggregateConfigRuleEvaluationRequest::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool StartAggregateConfigRuleEvaluationRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string StartAggregateConfigRuleEvaluationRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void StartAggregateConfigRuleEvaluationRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool StartAggregateConfigRuleEvaluationRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string StartAggregateConfigRuleEvaluationRequest::GetRuleId() const
{
    return m_ruleId;
}

void StartAggregateConfigRuleEvaluationRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool StartAggregateConfigRuleEvaluationRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string StartAggregateConfigRuleEvaluationRequest::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void StartAggregateConfigRuleEvaluationRequest::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool StartAggregateConfigRuleEvaluationRequest::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}


