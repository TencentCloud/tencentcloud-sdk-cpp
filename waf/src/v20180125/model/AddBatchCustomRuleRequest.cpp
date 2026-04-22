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

#include <tencentcloud/waf/v20180125/model/AddBatchCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AddBatchCustomRuleRequest::AddBatchCustomRuleRequest() :
    m_nameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_logicalOpHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_actionRatioHasBeenSet(false)
{
}

string AddBatchCustomRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sortId, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionRatio, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddBatchCustomRuleRequest::GetName() const
{
    return m_name;
}

void AddBatchCustomRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AddBatchCustomRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void AddBatchCustomRuleRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t AddBatchCustomRuleRequest::GetSortId() const
{
    return m_sortId;
}

void AddBatchCustomRuleRequest::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

int64_t AddBatchCustomRuleRequest::GetActionType() const
{
    return m_actionType;
}

void AddBatchCustomRuleRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string AddBatchCustomRuleRequest::GetRedirect() const
{
    return m_redirect;
}

void AddBatchCustomRuleRequest::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string AddBatchCustomRuleRequest::GetBypass() const
{
    return m_bypass;
}

void AddBatchCustomRuleRequest::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string AddBatchCustomRuleRequest::GetRemark() const
{
    return m_remark;
}

void AddBatchCustomRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AddBatchCustomRuleRequest::GetEventId() const
{
    return m_eventId;
}

void AddBatchCustomRuleRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<string> AddBatchCustomRuleRequest::GetDomains() const
{
    return m_domains;
}

void AddBatchCustomRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<Strategy> AddBatchCustomRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void AddBatchCustomRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string AddBatchCustomRuleRequest::GetJobType() const
{
    return m_jobType;
}

void AddBatchCustomRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime AddBatchCustomRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void AddBatchCustomRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string AddBatchCustomRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void AddBatchCustomRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

string AddBatchCustomRuleRequest::GetPageId() const
{
    return m_pageId;
}

void AddBatchCustomRuleRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

uint64_t AddBatchCustomRuleRequest::GetActionRatio() const
{
    return m_actionRatio;
}

void AddBatchCustomRuleRequest::SetActionRatio(const uint64_t& _actionRatio)
{
    m_actionRatio = _actionRatio;
    m_actionRatioHasBeenSet = true;
}

bool AddBatchCustomRuleRequest::ActionRatioHasBeenSet() const
{
    return m_actionRatioHasBeenSet;
}


