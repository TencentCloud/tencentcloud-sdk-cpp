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

#include <tencentcloud/waf/v20180125/model/ModifyBatchCustomRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyBatchCustomRuleRequest::ModifyBatchCustomRuleRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_logicalOpHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_actionRatioHasBeenSet(false)
{
}

string ModifyBatchCustomRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

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

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
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

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


uint64_t ModifyBatchCustomRuleRequest::GetId() const
{
    return m_id;
}

void ModifyBatchCustomRuleRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetName() const
{
    return m_name;
}

void ModifyBatchCustomRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ModifyBatchCustomRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyBatchCustomRuleRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t ModifyBatchCustomRuleRequest::GetSortId() const
{
    return m_sortId;
}

void ModifyBatchCustomRuleRequest::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

int64_t ModifyBatchCustomRuleRequest::GetActionType() const
{
    return m_actionType;
}

void ModifyBatchCustomRuleRequest::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetRedirect() const
{
    return m_redirect;
}

void ModifyBatchCustomRuleRequest::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyBatchCustomRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetEventId() const
{
    return m_eventId;
}

void ModifyBatchCustomRuleRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<Strategy> ModifyBatchCustomRuleRequest::GetStrategies() const
{
    return m_strategies;
}

void ModifyBatchCustomRuleRequest::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetBypass() const
{
    return m_bypass;
}

void ModifyBatchCustomRuleRequest::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

vector<string> ModifyBatchCustomRuleRequest::GetDomains() const
{
    return m_domains;
}

void ModifyBatchCustomRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetJobType() const
{
    return m_jobType;
}

void ModifyBatchCustomRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime ModifyBatchCustomRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void ModifyBatchCustomRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

vector<uint64_t> ModifyBatchCustomRuleRequest::GetGroupIds() const
{
    return m_groupIds;
}

void ModifyBatchCustomRuleRequest::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void ModifyBatchCustomRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

string ModifyBatchCustomRuleRequest::GetPageId() const
{
    return m_pageId;
}

void ModifyBatchCustomRuleRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

uint64_t ModifyBatchCustomRuleRequest::GetActionRatio() const
{
    return m_actionRatio;
}

void ModifyBatchCustomRuleRequest::SetActionRatio(const uint64_t& _actionRatio)
{
    m_actionRatio = _actionRatio;
    m_actionRatioHasBeenSet = true;
}

bool ModifyBatchCustomRuleRequest::ActionRatioHasBeenSet() const
{
    return m_actionRatioHasBeenSet;
}


