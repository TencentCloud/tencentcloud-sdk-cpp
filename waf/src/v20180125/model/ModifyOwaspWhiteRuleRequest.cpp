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

#include <tencentcloud/waf/v20180125/model/ModifyOwaspWhiteRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyOwaspWhiteRuleRequest::ModifyOwaspWhiteRuleRequest() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyOwaspWhiteRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyOwaspWhiteRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyOwaspWhiteRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyOwaspWhiteRuleRequest::GetName() const
{
    return m_name;
}

void ModifyOwaspWhiteRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyOwaspWhiteRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyOwaspWhiteRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<Strategy> ModifyOwaspWhiteRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void ModifyOwaspWhiteRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

vector<uint64_t> ModifyOwaspWhiteRuleRequest::GetIds() const
{
    return m_ids;
}

void ModifyOwaspWhiteRuleRequest::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

int64_t ModifyOwaspWhiteRuleRequest::GetType() const
{
    return m_type;
}

void ModifyOwaspWhiteRuleRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyOwaspWhiteRuleRequest::GetJobType() const
{
    return m_jobType;
}

void ModifyOwaspWhiteRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime ModifyOwaspWhiteRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void ModifyOwaspWhiteRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

uint64_t ModifyOwaspWhiteRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyOwaspWhiteRuleRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t ModifyOwaspWhiteRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyOwaspWhiteRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyOwaspWhiteRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


