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

#include <tencentcloud/waf/v20180125/model/CCRuleItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CCRuleItems::CCRuleItems() :
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_advanceHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_matchFuncHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_sessionAppliedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_limitMethodHasBeenSet(false),
    m_celRuleHasBeenSet(false),
    m_logicalOpHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_actionRatioHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome CCRuleItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Advance") && !value["Advance"].IsNull())
    {
        if (!value["Advance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Advance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_advance = value["Advance"].GetUint64();
        m_advanceHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("MatchFunc") && !value["MatchFunc"].IsNull())
    {
        if (!value["MatchFunc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.MatchFunc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_matchFunc = value["MatchFunc"].GetUint64();
        m_matchFuncHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.ActionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetUint64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.ValidTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = value["ValidTime"].GetUint64();
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.TsVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetUint64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Options` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_options = string(value["Options"].GetString());
        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("SessionApplied") && !value["SessionApplied"].IsNull())
    {
        if (!value["SessionApplied"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.SessionApplied` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LimitMethod") && !value["LimitMethod"].IsNull())
    {
        if (!value["LimitMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.LimitMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitMethod = string(value["LimitMethod"].GetString());
        m_limitMethodHasBeenSet = true;
    }

    if (value.HasMember("CelRule") && !value["CelRule"].IsNull())
    {
        if (!value["CelRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.CelRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_celRule = string(value["CelRule"].GetString());
        m_celRuleHasBeenSet = true;
    }

    if (value.HasMember("LogicalOp") && !value["LogicalOp"].IsNull())
    {
        if (!value["LogicalOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.LogicalOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicalOp = string(value["LogicalOp"].GetString());
        m_logicalOpHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.PageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = string(value["PageId"].GetString());
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("ActionRatio") && !value["ActionRatio"].IsNull())
    {
        if (!value["ActionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.ActionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionRatio = value["ActionRatio"].GetUint64();
        m_actionRatioHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("GroupIds") && !value["GroupIds"].IsNull())
    {
        if (!value["GroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetUint64());
        }
        m_groupIdsHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.JobDateTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobDateTime.Deserialize(value["JobDateTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobDateTimeHasBeenSet = true;
    }

    if (value.HasMember("CronType") && !value["CronType"].IsNull())
    {
        if (!value["CronType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.ValidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetInt64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleItems.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCRuleItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_advanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advance, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_matchFunc, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTime, allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_options.c_str(), allocator).Move(), allocator);
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

    if (m_limitMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_celRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CelRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_celRule.c_str(), allocator).Move(), allocator);
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionRatio, allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cronTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronType.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

}


string CCRuleItems::GetName() const
{
    return m_name;
}

void CCRuleItems::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CCRuleItems::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CCRuleItems::GetStatus() const
{
    return m_status;
}

void CCRuleItems::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CCRuleItems::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t CCRuleItems::GetAdvance() const
{
    return m_advance;
}

void CCRuleItems::SetAdvance(const uint64_t& _advance)
{
    m_advance = _advance;
    m_advanceHasBeenSet = true;
}

bool CCRuleItems::AdvanceHasBeenSet() const
{
    return m_advanceHasBeenSet;
}

uint64_t CCRuleItems::GetLimit() const
{
    return m_limit;
}

void CCRuleItems::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CCRuleItems::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CCRuleItems::GetInterval() const
{
    return m_interval;
}

void CCRuleItems::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool CCRuleItems::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string CCRuleItems::GetUrl() const
{
    return m_url;
}

void CCRuleItems::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CCRuleItems::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t CCRuleItems::GetMatchFunc() const
{
    return m_matchFunc;
}

void CCRuleItems::SetMatchFunc(const uint64_t& _matchFunc)
{
    m_matchFunc = _matchFunc;
    m_matchFuncHasBeenSet = true;
}

bool CCRuleItems::MatchFuncHasBeenSet() const
{
    return m_matchFuncHasBeenSet;
}

uint64_t CCRuleItems::GetActionType() const
{
    return m_actionType;
}

void CCRuleItems::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool CCRuleItems::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

uint64_t CCRuleItems::GetPriority() const
{
    return m_priority;
}

void CCRuleItems::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CCRuleItems::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

uint64_t CCRuleItems::GetValidTime() const
{
    return m_validTime;
}

void CCRuleItems::SetValidTime(const uint64_t& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool CCRuleItems::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

uint64_t CCRuleItems::GetTsVersion() const
{
    return m_tsVersion;
}

void CCRuleItems::SetTsVersion(const uint64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool CCRuleItems::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

string CCRuleItems::GetOptions() const
{
    return m_options;
}

void CCRuleItems::SetOptions(const string& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool CCRuleItems::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

uint64_t CCRuleItems::GetRuleId() const
{
    return m_ruleId;
}

void CCRuleItems::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CCRuleItems::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CCRuleItems::GetEventId() const
{
    return m_eventId;
}

void CCRuleItems::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool CCRuleItems::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

vector<int64_t> CCRuleItems::GetSessionApplied() const
{
    return m_sessionApplied;
}

void CCRuleItems::SetSessionApplied(const vector<int64_t>& _sessionApplied)
{
    m_sessionApplied = _sessionApplied;
    m_sessionAppliedHasBeenSet = true;
}

bool CCRuleItems::SessionAppliedHasBeenSet() const
{
    return m_sessionAppliedHasBeenSet;
}

uint64_t CCRuleItems::GetCreateTime() const
{
    return m_createTime;
}

void CCRuleItems::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CCRuleItems::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CCRuleItems::GetLimitMethod() const
{
    return m_limitMethod;
}

void CCRuleItems::SetLimitMethod(const string& _limitMethod)
{
    m_limitMethod = _limitMethod;
    m_limitMethodHasBeenSet = true;
}

bool CCRuleItems::LimitMethodHasBeenSet() const
{
    return m_limitMethodHasBeenSet;
}

string CCRuleItems::GetCelRule() const
{
    return m_celRule;
}

void CCRuleItems::SetCelRule(const string& _celRule)
{
    m_celRule = _celRule;
    m_celRuleHasBeenSet = true;
}

bool CCRuleItems::CelRuleHasBeenSet() const
{
    return m_celRuleHasBeenSet;
}

string CCRuleItems::GetLogicalOp() const
{
    return m_logicalOp;
}

void CCRuleItems::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool CCRuleItems::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

string CCRuleItems::GetPageId() const
{
    return m_pageId;
}

void CCRuleItems::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool CCRuleItems::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

uint64_t CCRuleItems::GetActionRatio() const
{
    return m_actionRatio;
}

void CCRuleItems::SetActionRatio(const uint64_t& _actionRatio)
{
    m_actionRatio = _actionRatio;
    m_actionRatioHasBeenSet = true;
}

bool CCRuleItems::ActionRatioHasBeenSet() const
{
    return m_actionRatioHasBeenSet;
}

vector<string> CCRuleItems::GetDomains() const
{
    return m_domains;
}

void CCRuleItems::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CCRuleItems::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<uint64_t> CCRuleItems::GetGroupIds() const
{
    return m_groupIds;
}

void CCRuleItems::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CCRuleItems::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string CCRuleItems::GetJobType() const
{
    return m_jobType;
}

void CCRuleItems::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CCRuleItems::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime CCRuleItems::GetJobDateTime() const
{
    return m_jobDateTime;
}

void CCRuleItems::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool CCRuleItems::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string CCRuleItems::GetCronType() const
{
    return m_cronType;
}

void CCRuleItems::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool CCRuleItems::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

uint64_t CCRuleItems::GetExpireTime() const
{
    return m_expireTime;
}

void CCRuleItems::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CCRuleItems::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t CCRuleItems::GetValidStatus() const
{
    return m_validStatus;
}

void CCRuleItems::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool CCRuleItems::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string CCRuleItems::GetSource() const
{
    return m_source;
}

void CCRuleItems::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CCRuleItems::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

