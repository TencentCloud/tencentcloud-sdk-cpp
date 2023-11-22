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

#include <tencentcloud/cdb/v20170320/model/DescribeAuditRuleTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeAuditRuleTemplatesRequest::DescribeAuditRuleTemplatesRequest() :
    m_ruleTemplateIdsHasBeenSet(false),
    m_ruleTemplateNamesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmPolicyHasBeenSet(false)
{
}

string DescribeAuditRuleTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTemplateIds.begin(); itr != m_ruleTemplateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleTemplateNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTemplateNames.begin(); itr != m_ruleTemplateNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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


vector<string> DescribeAuditRuleTemplatesRequest::GetRuleTemplateIds() const
{
    return m_ruleTemplateIds;
}

void DescribeAuditRuleTemplatesRequest::SetRuleTemplateIds(const vector<string>& _ruleTemplateIds)
{
    m_ruleTemplateIds = _ruleTemplateIds;
    m_ruleTemplateIdsHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::RuleTemplateIdsHasBeenSet() const
{
    return m_ruleTemplateIdsHasBeenSet;
}

vector<string> DescribeAuditRuleTemplatesRequest::GetRuleTemplateNames() const
{
    return m_ruleTemplateNames;
}

void DescribeAuditRuleTemplatesRequest::SetRuleTemplateNames(const vector<string>& _ruleTemplateNames)
{
    m_ruleTemplateNames = _ruleTemplateNames;
    m_ruleTemplateNamesHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::RuleTemplateNamesHasBeenSet() const
{
    return m_ruleTemplateNamesHasBeenSet;
}

uint64_t DescribeAuditRuleTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAuditRuleTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAuditRuleTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAuditRuleTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAuditRuleTemplatesRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void DescribeAuditRuleTemplatesRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

uint64_t DescribeAuditRuleTemplatesRequest::GetAlarmPolicy() const
{
    return m_alarmPolicy;
}

void DescribeAuditRuleTemplatesRequest::SetAlarmPolicy(const uint64_t& _alarmPolicy)
{
    m_alarmPolicy = _alarmPolicy;
    m_alarmPolicyHasBeenSet = true;
}

bool DescribeAuditRuleTemplatesRequest::AlarmPolicyHasBeenSet() const
{
    return m_alarmPolicyHasBeenSet;
}


