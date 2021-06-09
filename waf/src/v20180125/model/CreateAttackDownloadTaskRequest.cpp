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

#include <tencentcloud/waf/v20180125/model/CreateAttackDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateAttackDownloadTaskRequest::CreateAttackDownloadTaskRequest() :
    m_domainHasBeenSet(false),
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_attackIpHasBeenSet(false),
    m_attackTypeHasBeenSet(false)
{
}

string CreateAttackDownloadTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromTime.c_str(), allocator).Move(), allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_attackIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attackIp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAttackDownloadTaskRequest::GetDomain() const
{
    return m_domain;
}

void CreateAttackDownloadTaskRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateAttackDownloadTaskRequest::GetFromTime() const
{
    return m_fromTime;
}

void CreateAttackDownloadTaskRequest::SetFromTime(const string& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

string CreateAttackDownloadTaskRequest::GetToTime() const
{
    return m_toTime;
}

void CreateAttackDownloadTaskRequest::SetToTime(const string& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}

string CreateAttackDownloadTaskRequest::GetName() const
{
    return m_name;
}

void CreateAttackDownloadTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateAttackDownloadTaskRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void CreateAttackDownloadTaskRequest::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

uint64_t CreateAttackDownloadTaskRequest::GetStatus() const
{
    return m_status;
}

void CreateAttackDownloadTaskRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CreateAttackDownloadTaskRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateAttackDownloadTaskRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateAttackDownloadTaskRequest::GetAttackIp() const
{
    return m_attackIp;
}

void CreateAttackDownloadTaskRequest::SetAttackIp(const string& _attackIp)
{
    m_attackIp = _attackIp;
    m_attackIpHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::AttackIpHasBeenSet() const
{
    return m_attackIpHasBeenSet;
}

string CreateAttackDownloadTaskRequest::GetAttackType() const
{
    return m_attackType;
}

void CreateAttackDownloadTaskRequest::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool CreateAttackDownloadTaskRequest::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}


