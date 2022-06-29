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

#include <tencentcloud/waf/v20180125/model/ModifyWafAutoDenyRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyWafAutoDenyRulesRequest::ModifyWafAutoDenyRulesRequest() :
    m_domainHasBeenSet(false),
    m_attackThresholdHasBeenSet(false),
    m_timeThresholdHasBeenSet(false),
    m_denyTimeThresholdHasBeenSet(false),
    m_defenseStatusHasBeenSet(false)
{
}

string ModifyWafAutoDenyRulesRequest::ToJsonString() const
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

    if (m_attackThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_attackThreshold, allocator);
    }

    if (m_timeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeThreshold, allocator);
    }

    if (m_denyTimeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyTimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_denyTimeThreshold, allocator);
    }

    if (m_defenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defenseStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWafAutoDenyRulesRequest::GetDomain() const
{
    return m_domain;
}

void ModifyWafAutoDenyRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyWafAutoDenyRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t ModifyWafAutoDenyRulesRequest::GetAttackThreshold() const
{
    return m_attackThreshold;
}

void ModifyWafAutoDenyRulesRequest::SetAttackThreshold(const int64_t& _attackThreshold)
{
    m_attackThreshold = _attackThreshold;
    m_attackThresholdHasBeenSet = true;
}

bool ModifyWafAutoDenyRulesRequest::AttackThresholdHasBeenSet() const
{
    return m_attackThresholdHasBeenSet;
}

int64_t ModifyWafAutoDenyRulesRequest::GetTimeThreshold() const
{
    return m_timeThreshold;
}

void ModifyWafAutoDenyRulesRequest::SetTimeThreshold(const int64_t& _timeThreshold)
{
    m_timeThreshold = _timeThreshold;
    m_timeThresholdHasBeenSet = true;
}

bool ModifyWafAutoDenyRulesRequest::TimeThresholdHasBeenSet() const
{
    return m_timeThresholdHasBeenSet;
}

int64_t ModifyWafAutoDenyRulesRequest::GetDenyTimeThreshold() const
{
    return m_denyTimeThreshold;
}

void ModifyWafAutoDenyRulesRequest::SetDenyTimeThreshold(const int64_t& _denyTimeThreshold)
{
    m_denyTimeThreshold = _denyTimeThreshold;
    m_denyTimeThresholdHasBeenSet = true;
}

bool ModifyWafAutoDenyRulesRequest::DenyTimeThresholdHasBeenSet() const
{
    return m_denyTimeThresholdHasBeenSet;
}

int64_t ModifyWafAutoDenyRulesRequest::GetDefenseStatus() const
{
    return m_defenseStatus;
}

void ModifyWafAutoDenyRulesRequest::SetDefenseStatus(const int64_t& _defenseStatus)
{
    m_defenseStatus = _defenseStatus;
    m_defenseStatusHasBeenSet = true;
}

bool ModifyWafAutoDenyRulesRequest::DefenseStatusHasBeenSet() const
{
    return m_defenseStatusHasBeenSet;
}


