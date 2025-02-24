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

#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyCustomRuleRequest::ModifyCustomRuleRequest() :
    m_domainHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_logicalOpHasBeenSet(false)
{
}

string ModifyCustomRuleRequest::ToJsonString() const
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

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
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

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCustomRuleRequest::GetDomain() const
{
    return m_domain;
}

void ModifyCustomRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyCustomRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifyCustomRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyCustomRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyCustomRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyCustomRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyCustomRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyCustomRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ModifyCustomRuleRequest::GetRuleAction() const
{
    return m_ruleAction;
}

void ModifyCustomRuleRequest::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool ModifyCustomRuleRequest::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

vector<Strategy> ModifyCustomRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void ModifyCustomRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool ModifyCustomRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string ModifyCustomRuleRequest::GetEdition() const
{
    return m_edition;
}

void ModifyCustomRuleRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ModifyCustomRuleRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string ModifyCustomRuleRequest::GetRedirect() const
{
    return m_redirect;
}

void ModifyCustomRuleRequest::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool ModifyCustomRuleRequest::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string ModifyCustomRuleRequest::GetBypass() const
{
    return m_bypass;
}

void ModifyCustomRuleRequest::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool ModifyCustomRuleRequest::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

uint64_t ModifyCustomRuleRequest::GetSortId() const
{
    return m_sortId;
}

void ModifyCustomRuleRequest::SetSortId(const uint64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool ModifyCustomRuleRequest::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

uint64_t ModifyCustomRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyCustomRuleRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyCustomRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ModifyCustomRuleRequest::GetJobType() const
{
    return m_jobType;
}

void ModifyCustomRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ModifyCustomRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime ModifyCustomRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void ModifyCustomRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool ModifyCustomRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string ModifyCustomRuleRequest::GetSource() const
{
    return m_source;
}

void ModifyCustomRuleRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ModifyCustomRuleRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t ModifyCustomRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyCustomRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyCustomRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyCustomRuleRequest::GetPageId() const
{
    return m_pageId;
}

void ModifyCustomRuleRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ModifyCustomRuleRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string ModifyCustomRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void ModifyCustomRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool ModifyCustomRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}


