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

#include <tencentcloud/waf/v20180125/model/UpsertCCRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UpsertCCRuleRequest::UpsertCCRuleRequest() :
    m_domainHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_advanceHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_matchFuncHasBeenSet(false),
    m_optionsArrHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sessionAppliedHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_limitMethodHasBeenSet(false),
    m_celRuleHasBeenSet(false),
    m_logicalOpHasBeenSet(false)
{
}

string UpsertCCRuleRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_createTime, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_length, allocator);
    }

    if (m_limitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limitMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_celRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CelRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_celRule.c_str(), allocator).Move(), allocator);
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


string UpsertCCRuleRequest::GetDomain() const
{
    return m_domain;
}

void UpsertCCRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpsertCCRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string UpsertCCRuleRequest::GetName() const
{
    return m_name;
}

void UpsertCCRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpsertCCRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetStatus() const
{
    return m_status;
}

void UpsertCCRuleRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpsertCCRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpsertCCRuleRequest::GetAdvance() const
{
    return m_advance;
}

void UpsertCCRuleRequest::SetAdvance(const string& _advance)
{
    m_advance = _advance;
    m_advanceHasBeenSet = true;
}

bool UpsertCCRuleRequest::AdvanceHasBeenSet() const
{
    return m_advanceHasBeenSet;
}

string UpsertCCRuleRequest::GetLimit() const
{
    return m_limit;
}

void UpsertCCRuleRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool UpsertCCRuleRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string UpsertCCRuleRequest::GetInterval() const
{
    return m_interval;
}

void UpsertCCRuleRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool UpsertCCRuleRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string UpsertCCRuleRequest::GetActionType() const
{
    return m_actionType;
}

void UpsertCCRuleRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool UpsertCCRuleRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetPriority() const
{
    return m_priority;
}

void UpsertCCRuleRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool UpsertCCRuleRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetValidTime() const
{
    return m_validTime;
}

void UpsertCCRuleRequest::SetValidTime(const int64_t& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool UpsertCCRuleRequest::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string UpsertCCRuleRequest::GetUrl() const
{
    return m_url;
}

void UpsertCCRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool UpsertCCRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetMatchFunc() const
{
    return m_matchFunc;
}

void UpsertCCRuleRequest::SetMatchFunc(const int64_t& _matchFunc)
{
    m_matchFunc = _matchFunc;
    m_matchFuncHasBeenSet = true;
}

bool UpsertCCRuleRequest::MatchFuncHasBeenSet() const
{
    return m_matchFuncHasBeenSet;
}

string UpsertCCRuleRequest::GetOptionsArr() const
{
    return m_optionsArr;
}

void UpsertCCRuleRequest::SetOptionsArr(const string& _optionsArr)
{
    m_optionsArr = _optionsArr;
    m_optionsArrHasBeenSet = true;
}

bool UpsertCCRuleRequest::OptionsArrHasBeenSet() const
{
    return m_optionsArrHasBeenSet;
}

string UpsertCCRuleRequest::GetEdition() const
{
    return m_edition;
}

void UpsertCCRuleRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool UpsertCCRuleRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetType() const
{
    return m_type;
}

void UpsertCCRuleRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpsertCCRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpsertCCRuleRequest::GetEventId() const
{
    return m_eventId;
}

void UpsertCCRuleRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool UpsertCCRuleRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<int64_t> UpsertCCRuleRequest::GetSessionApplied() const
{
    return m_sessionApplied;
}

void UpsertCCRuleRequest::SetSessionApplied(const vector<int64_t>& _sessionApplied)
{
    m_sessionApplied = _sessionApplied;
    m_sessionAppliedHasBeenSet = true;
}

bool UpsertCCRuleRequest::SessionAppliedHasBeenSet() const
{
    return m_sessionAppliedHasBeenSet;
}

int64_t UpsertCCRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpsertCCRuleRequest::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpsertCCRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t UpsertCCRuleRequest::GetCreateTime() const
{
    return m_createTime;
}

void UpsertCCRuleRequest::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UpsertCCRuleRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t UpsertCCRuleRequest::GetLength() const
{
    return m_length;
}

void UpsertCCRuleRequest::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool UpsertCCRuleRequest::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string UpsertCCRuleRequest::GetLimitMethod() const
{
    return m_limitMethod;
}

void UpsertCCRuleRequest::SetLimitMethod(const string& _limitMethod)
{
    m_limitMethod = _limitMethod;
    m_limitMethodHasBeenSet = true;
}

bool UpsertCCRuleRequest::LimitMethodHasBeenSet() const
{
    return m_limitMethodHasBeenSet;
}

string UpsertCCRuleRequest::GetCelRule() const
{
    return m_celRule;
}

void UpsertCCRuleRequest::SetCelRule(const string& _celRule)
{
    m_celRule = _celRule;
    m_celRuleHasBeenSet = true;
}

bool UpsertCCRuleRequest::CelRuleHasBeenSet() const
{
    return m_celRuleHasBeenSet;
}

string UpsertCCRuleRequest::GetLogicalOp() const
{
    return m_logicalOp;
}

void UpsertCCRuleRequest::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool UpsertCCRuleRequest::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}


