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

#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesRspRuleListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeCustomRulesRspRuleListItem::DescribeCustomRulesRspRuleListItem() :
    m_actionTypeHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_logicalOpHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomRulesRspRuleListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Bypass") && !value["Bypass"].IsNull())
    {
        if (!value["Bypass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Bypass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bypass = string(value["Bypass"].GetString());
        m_bypassHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Redirect") && !value["Redirect"].IsNull())
    {
        if (!value["Redirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Redirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirect = string(value["Redirect"].GetString());
        m_redirectHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.SortId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = string(value["SortId"].GetString());
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Strategies` is not array type"));

        const rapidjson::Value &tmpValue = value["Strategies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Strategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_strategies.push_back(item);
        }
        m_strategiesHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.ValidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetInt64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.JobDateTime` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.PageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = string(value["PageId"].GetString());
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("LogicalOp") && !value["LogicalOp"].IsNull())
    {
        if (!value["LogicalOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCustomRulesRspRuleListItem.LogicalOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicalOp = string(value["LogicalOp"].GetString());
        m_logicalOpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomRulesRspRuleListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirect.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sortId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

}


string DescribeCustomRulesRspRuleListItem::GetActionType() const
{
    return m_actionType;
}

void DescribeCustomRulesRspRuleListItem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetBypass() const
{
    return m_bypass;
}

void DescribeCustomRulesRspRuleListItem::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetCreateTime() const
{
    return m_createTime;
}

void DescribeCustomRulesRspRuleListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetExpireTime() const
{
    return m_expireTime;
}

void DescribeCustomRulesRspRuleListItem::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetName() const
{
    return m_name;
}

void DescribeCustomRulesRspRuleListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetRedirect() const
{
    return m_redirect;
}

void DescribeCustomRulesRspRuleListItem::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetRuleId() const
{
    return m_ruleId;
}

void DescribeCustomRulesRspRuleListItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetSortId() const
{
    return m_sortId;
}

void DescribeCustomRulesRspRuleListItem::SetSortId(const string& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetStatus() const
{
    return m_status;
}

void DescribeCustomRulesRspRuleListItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Strategy> DescribeCustomRulesRspRuleListItem::GetStrategies() const
{
    return m_strategies;
}

void DescribeCustomRulesRspRuleListItem::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetEventId() const
{
    return m_eventId;
}

void DescribeCustomRulesRspRuleListItem::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetModifyTime() const
{
    return m_modifyTime;
}

void DescribeCustomRulesRspRuleListItem::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

int64_t DescribeCustomRulesRspRuleListItem::GetValidStatus() const
{
    return m_validStatus;
}

void DescribeCustomRulesRspRuleListItem::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetSource() const
{
    return m_source;
}

void DescribeCustomRulesRspRuleListItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetJobType() const
{
    return m_jobType;
}

void DescribeCustomRulesRspRuleListItem::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime DescribeCustomRulesRspRuleListItem::GetJobDateTime() const
{
    return m_jobDateTime;
}

void DescribeCustomRulesRspRuleListItem::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetCronType() const
{
    return m_cronType;
}

void DescribeCustomRulesRspRuleListItem::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetLabel() const
{
    return m_label;
}

void DescribeCustomRulesRspRuleListItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetPageId() const
{
    return m_pageId;
}

void DescribeCustomRulesRspRuleListItem::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetDomain() const
{
    return m_domain;
}

void DescribeCustomRulesRspRuleListItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCustomRulesRspRuleListItem::GetLogicalOp() const
{
    return m_logicalOp;
}

void DescribeCustomRulesRspRuleListItem::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool DescribeCustomRulesRspRuleListItem::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

