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

#include <tencentcloud/cynosdb/v20190107/model/CreateAuditRuleTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateAuditRuleTemplateRequest::CreateAuditRuleTemplateRequest() :
    m_ruleFiltersHasBeenSet(false),
    m_ruleTemplateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmPolicyHasBeenSet(false)
{
}

string CreateAuditRuleTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleFilters.begin(); itr != m_ruleFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ruleTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmPolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<RuleFilters> CreateAuditRuleTemplateRequest::GetRuleFilters() const
{
    return m_ruleFilters;
}

void CreateAuditRuleTemplateRequest::SetRuleFilters(const vector<RuleFilters>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool CreateAuditRuleTemplateRequest::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

string CreateAuditRuleTemplateRequest::GetRuleTemplateName() const
{
    return m_ruleTemplateName;
}

void CreateAuditRuleTemplateRequest::SetRuleTemplateName(const string& _ruleTemplateName)
{
    m_ruleTemplateName = _ruleTemplateName;
    m_ruleTemplateNameHasBeenSet = true;
}

bool CreateAuditRuleTemplateRequest::RuleTemplateNameHasBeenSet() const
{
    return m_ruleTemplateNameHasBeenSet;
}

string CreateAuditRuleTemplateRequest::GetDescription() const
{
    return m_description;
}

void CreateAuditRuleTemplateRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAuditRuleTemplateRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateAuditRuleTemplateRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void CreateAuditRuleTemplateRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool CreateAuditRuleTemplateRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

uint64_t CreateAuditRuleTemplateRequest::GetAlarmPolicy() const
{
    return m_alarmPolicy;
}

void CreateAuditRuleTemplateRequest::SetAlarmPolicy(const uint64_t& _alarmPolicy)
{
    m_alarmPolicy = _alarmPolicy;
    m_alarmPolicyHasBeenSet = true;
}

bool CreateAuditRuleTemplateRequest::AlarmPolicyHasBeenSet() const
{
    return m_alarmPolicyHasBeenSet;
}


