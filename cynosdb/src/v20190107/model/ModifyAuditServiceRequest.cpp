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

#include <tencentcloud/cynosdb/v20190107/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyAuditServiceRequest::ModifyAuditServiceRequest() :
    m_instanceIdHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_highLogExpireDayHasBeenSet(false),
    m_auditAllHasBeenSet(false),
    m_auditRuleFiltersHasBeenSet(false),
    m_ruleTemplateIdsHasBeenSet(false)
{
}

string ModifyAuditServiceRequest::ToJsonString() const
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

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_highLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highLogExpireDay, allocator);
    }

    if (m_auditAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_auditAll, allocator);
    }

    if (m_auditRuleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditRuleFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_auditRuleFilters.begin(); itr != m_auditRuleFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAuditServiceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAuditServiceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAuditServiceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyAuditServiceRequest::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void ModifyAuditServiceRequest::SetLogExpireDay(const uint64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool ModifyAuditServiceRequest::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

uint64_t ModifyAuditServiceRequest::GetHighLogExpireDay() const
{
    return m_highLogExpireDay;
}

void ModifyAuditServiceRequest::SetHighLogExpireDay(const uint64_t& _highLogExpireDay)
{
    m_highLogExpireDay = _highLogExpireDay;
    m_highLogExpireDayHasBeenSet = true;
}

bool ModifyAuditServiceRequest::HighLogExpireDayHasBeenSet() const
{
    return m_highLogExpireDayHasBeenSet;
}

bool ModifyAuditServiceRequest::GetAuditAll() const
{
    return m_auditAll;
}

void ModifyAuditServiceRequest::SetAuditAll(const bool& _auditAll)
{
    m_auditAll = _auditAll;
    m_auditAllHasBeenSet = true;
}

bool ModifyAuditServiceRequest::AuditAllHasBeenSet() const
{
    return m_auditAllHasBeenSet;
}

vector<AuditRuleFilters> ModifyAuditServiceRequest::GetAuditRuleFilters() const
{
    return m_auditRuleFilters;
}

void ModifyAuditServiceRequest::SetAuditRuleFilters(const vector<AuditRuleFilters>& _auditRuleFilters)
{
    m_auditRuleFilters = _auditRuleFilters;
    m_auditRuleFiltersHasBeenSet = true;
}

bool ModifyAuditServiceRequest::AuditRuleFiltersHasBeenSet() const
{
    return m_auditRuleFiltersHasBeenSet;
}

vector<string> ModifyAuditServiceRequest::GetRuleTemplateIds() const
{
    return m_ruleTemplateIds;
}

void ModifyAuditServiceRequest::SetRuleTemplateIds(const vector<string>& _ruleTemplateIds)
{
    m_ruleTemplateIds = _ruleTemplateIds;
    m_ruleTemplateIdsHasBeenSet = true;
}

bool ModifyAuditServiceRequest::RuleTemplateIdsHasBeenSet() const
{
    return m_ruleTemplateIdsHasBeenSet;
}


