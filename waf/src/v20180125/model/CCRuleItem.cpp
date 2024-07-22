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

#include <tencentcloud/waf/v20180125/model/CCRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CCRuleItem::CCRuleItem() :
    m_actionTypeHasBeenSet(false),
    m_advanceHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_matchFuncHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_optionsArrHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sessionAppliedHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CCRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.ActionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetUint64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Advance") && !value["Advance"].IsNull())
    {
        if (!value["Advance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Advance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_advance = value["Advance"].GetUint64();
        m_advanceHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("MatchFunc") && !value["MatchFunc"].IsNull())
    {
        if (!value["MatchFunc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.MatchFunc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_matchFunc = value["MatchFunc"].GetUint64();
        m_matchFuncHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.TsVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetUint64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.ValidTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = value["ValidTime"].GetUint64();
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("OptionsArr") && !value["OptionsArr"].IsNull())
    {
        if (!value["OptionsArr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.OptionsArr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionsArr = string(value["OptionsArr"].GetString());
        m_optionsArrHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("SessionApplied") && !value["SessionApplied"].IsNull())
    {
        if (!value["SessionApplied"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.SessionApplied` is not array type"));

        const rapidjson::Value &tmpValue = value["SessionApplied"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sessionApplied.push_back((*itr).GetInt64());
        }
        m_sessionAppliedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_advanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advance, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_matchFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchFunc, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTime, allocator);
    }

    if (m_optionsArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsArr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionsArr.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAppliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionApplied";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sessionApplied.begin(); itr != m_sessionApplied.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


uint64_t CCRuleItem::GetActionType() const
{
    return m_actionType;
}

void CCRuleItem::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool CCRuleItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t CCRuleItem::GetAdvance() const
{
    return m_advance;
}

void CCRuleItem::SetAdvance(const uint64_t& _advance)
{
    m_advance = _advance;
    m_advanceHasBeenSet = true;
}

bool CCRuleItem::AdvanceHasBeenSet() const
{
    return m_advanceHasBeenSet;
}

uint64_t CCRuleItem::GetInterval() const
{
    return m_interval;
}

void CCRuleItem::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CCRuleItem::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t CCRuleItem::GetLimit() const
{
    return m_limit;
}

void CCRuleItem::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CCRuleItem::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CCRuleItem::GetMatchFunc() const
{
    return m_matchFunc;
}

void CCRuleItem::SetMatchFunc(const uint64_t& _matchFunc)
{
    m_matchFunc = _matchFunc;
    m_matchFuncHasBeenSet = true;
}

bool CCRuleItem::MatchFuncHasBeenSet() const
{
    return m_matchFuncHasBeenSet;
}

string CCRuleItem::GetName() const
{
    return m_name;
}

void CCRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CCRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CCRuleItem::GetPriority() const
{
    return m_priority;
}

void CCRuleItem::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CCRuleItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t CCRuleItem::GetStatus() const
{
    return m_status;
}

void CCRuleItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CCRuleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CCRuleItem::GetTsVersion() const
{
    return m_tsVersion;
}

void CCRuleItem::SetTsVersion(const uint64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool CCRuleItem::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

string CCRuleItem::GetUrl() const
{
    return m_url;
}

void CCRuleItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CCRuleItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t CCRuleItem::GetValidTime() const
{
    return m_validTime;
}

void CCRuleItem::SetValidTime(const uint64_t& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool CCRuleItem::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string CCRuleItem::GetOptionsArr() const
{
    return m_optionsArr;
}

void CCRuleItem::SetOptionsArr(const string& _optionsArr)
{
    m_optionsArr = _optionsArr;
    m_optionsArrHasBeenSet = true;
}

bool CCRuleItem::OptionsArrHasBeenSet() const
{
    return m_optionsArrHasBeenSet;
}

uint64_t CCRuleItem::GetLength() const
{
    return m_length;
}

void CCRuleItem::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool CCRuleItem::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

int64_t CCRuleItem::GetRuleId() const
{
    return m_ruleId;
}

void CCRuleItem::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CCRuleItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CCRuleItem::GetEventId() const
{
    return m_eventId;
}

void CCRuleItem::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CCRuleItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<int64_t> CCRuleItem::GetSessionApplied() const
{
    return m_sessionApplied;
}

void CCRuleItem::SetSessionApplied(const vector<int64_t>& _sessionApplied)
{
    m_sessionApplied = _sessionApplied;
    m_sessionAppliedHasBeenSet = true;
}

bool CCRuleItem::SessionAppliedHasBeenSet() const
{
    return m_sessionAppliedHasBeenSet;
}

uint64_t CCRuleItem::GetCreateTime() const
{
    return m_createTime;
}

void CCRuleItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CCRuleItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

