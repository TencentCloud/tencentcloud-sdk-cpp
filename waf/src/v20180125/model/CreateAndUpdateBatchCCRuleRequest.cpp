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

#include <tencentcloud/waf/v20180125/model/CreateAndUpdateBatchCCRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreateAndUpdateBatchCCRuleRequest::CreateAndUpdateBatchCCRuleRequest() :
    m_nameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_advanceHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_matchFuncHasBeenSet(false),
    m_optionsArrHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sessionAppliedHasBeenSet(false),
    m_limitMethodHasBeenSet(false),
    m_logicalOpHasBeenSet(false),
    m_celRuleHasBeenSet(false),
    m_actionRatioHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

string CreateAndUpdateBatchCCRuleRequest::ToJsonString() const
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

    if (m_advanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advance.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validTime, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_length, allocator);
    }

    if (m_matchFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_matchFunc, allocator);
    }

    if (m_optionsArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optionsArr.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAppliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionApplied";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sessionApplied.begin(); itr != m_sessionApplied.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_limitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

    if (m_celRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CelRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_celRule.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionRatio, allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
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

    if (m_cronTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronType.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndUpdateBatchCCRuleRequest::GetName() const
{
    return m_name;
}

void CreateAndUpdateBatchCCRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateAndUpdateBatchCCRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetStatus() const
{
    return m_status;
}

void CreateAndUpdateBatchCCRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetAdvance() const
{
    return m_advance;
}

void CreateAndUpdateBatchCCRuleRequest::SetAdvance(const string& _advance)
{
    m_advance = _advance;
    m_advanceHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::AdvanceHasBeenSet() const
{
    return m_advanceHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetLimit() const
{
    return m_limit;
}

void CreateAndUpdateBatchCCRuleRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetInterval() const
{
    return m_interval;
}

void CreateAndUpdateBatchCCRuleRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetActionType() const
{
    return m_actionType;
}

void CreateAndUpdateBatchCCRuleRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetPriority() const
{
    return m_priority;
}

void CreateAndUpdateBatchCCRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetValidTime() const
{
    return m_validTime;
}

void CreateAndUpdateBatchCCRuleRequest::SetValidTime(const int64_t& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetUrl() const
{
    return m_url;
}

void CreateAndUpdateBatchCCRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetLength() const
{
    return m_length;
}

void CreateAndUpdateBatchCCRuleRequest::SetLength(const int64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetMatchFunc() const
{
    return m_matchFunc;
}

void CreateAndUpdateBatchCCRuleRequest::SetMatchFunc(const int64_t& _matchFunc)
{
    m_matchFunc = _matchFunc;
    m_matchFuncHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::MatchFuncHasBeenSet() const
{
    return m_matchFuncHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetOptionsArr() const
{
    return m_optionsArr;
}

void CreateAndUpdateBatchCCRuleRequest::SetOptionsArr(const string& _optionsArr)
{
    m_optionsArr = _optionsArr;
    m_optionsArrHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::OptionsArrHasBeenSet() const
{
    return m_optionsArrHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetEdition() const
{
    return m_edition;
}

void CreateAndUpdateBatchCCRuleRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetType() const
{
    return m_type;
}

void CreateAndUpdateBatchCCRuleRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetEventId() const
{
    return m_eventId;
}

void CreateAndUpdateBatchCCRuleRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<int64_t> CreateAndUpdateBatchCCRuleRequest::GetSessionApplied() const
{
    return m_sessionApplied;
}

void CreateAndUpdateBatchCCRuleRequest::SetSessionApplied(const vector<int64_t>& _sessionApplied)
{
    m_sessionApplied = _sessionApplied;
    m_sessionAppliedHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::SessionAppliedHasBeenSet() const
{
    return m_sessionAppliedHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetLimitMethod() const
{
    return m_limitMethod;
}

void CreateAndUpdateBatchCCRuleRequest::SetLimitMethod(const string& _limitMethod)
{
    m_limitMethod = _limitMethod;
    m_limitMethodHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::LimitMethodHasBeenSet() const
{
    return m_limitMethodHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void CreateAndUpdateBatchCCRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetCelRule() const
{
    return m_celRule;
}

void CreateAndUpdateBatchCCRuleRequest::SetCelRule(const string& _celRule)
{
    m_celRule = _celRule;
    m_celRuleHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::CelRuleHasBeenSet() const
{
    return m_celRuleHasBeenSet;
}

int64_t CreateAndUpdateBatchCCRuleRequest::GetActionRatio() const
{
    return m_actionRatio;
}

void CreateAndUpdateBatchCCRuleRequest::SetActionRatio(const int64_t& _actionRatio)
{
    m_actionRatio = _actionRatio;
    m_actionRatioHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::ActionRatioHasBeenSet() const
{
    return m_actionRatioHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetPageId() const
{
    return m_pageId;
}

void CreateAndUpdateBatchCCRuleRequest::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

vector<string> CreateAndUpdateBatchCCRuleRequest::GetDomains() const
{
    return m_domains;
}

void CreateAndUpdateBatchCCRuleRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<uint64_t> CreateAndUpdateBatchCCRuleRequest::GetGroupIds() const
{
    return m_groupIds;
}

void CreateAndUpdateBatchCCRuleRequest::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetJobType() const
{
    return m_jobType;
}

void CreateAndUpdateBatchCCRuleRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime CreateAndUpdateBatchCCRuleRequest::GetJobDateTime() const
{
    return m_jobDateTime;
}

void CreateAndUpdateBatchCCRuleRequest::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string CreateAndUpdateBatchCCRuleRequest::GetCronType() const
{
    return m_cronType;
}

void CreateAndUpdateBatchCCRuleRequest::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

uint64_t CreateAndUpdateBatchCCRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateAndUpdateBatchCCRuleRequest::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateAndUpdateBatchCCRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}


