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

#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyCustomRuleStatusRequest::ModifyCustomRuleStatusRequest() :
    m_domainHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_domainRuleIdListHasBeenSet(false)
{
}

string ModifyCustomRuleStatusRequest::ToJsonString() const
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_domainRuleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainRuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domainRuleIdList.begin(); itr != m_domainRuleIdList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomRuleStatusRequest::GetDomain() const
{
    return m_domain;
}

void ModifyCustomRuleStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyCustomRuleStatusRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyCustomRuleStatusRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t ModifyCustomRuleStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyCustomRuleStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyCustomRuleStatusRequest::GetEdition() const
{
    return m_edition;
}

void ModifyCustomRuleStatusRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

vector<DomainRuleId> ModifyCustomRuleStatusRequest::GetDomainRuleIdList() const
{
    return m_domainRuleIdList;
}

void ModifyCustomRuleStatusRequest::SetDomainRuleIdList(const vector<DomainRuleId>& _domainRuleIdList)
{
    m_domainRuleIdList = _domainRuleIdList;
    m_domainRuleIdListHasBeenSet = true;
}

bool ModifyCustomRuleStatusRequest::DomainRuleIdListHasBeenSet() const
{
    return m_domainRuleIdListHasBeenSet;
}


