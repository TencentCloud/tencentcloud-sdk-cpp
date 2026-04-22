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

#include <tencentcloud/waf/v20180125/model/BatchCustomRuleListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BatchCustomRuleListItem::BatchCustomRuleListItem() :
    m_idHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_redirectHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_pageIdHasBeenSet(false),
    m_logicalOpHasBeenSet(false),
    m_actionRatioHasBeenSet(false)
{
}

CoreInternalOutcome BatchCustomRuleListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.ActionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetInt64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Bypass") && !value["Bypass"].IsNull())
    {
        if (!value["Bypass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Bypass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bypass = string(value["Bypass"].GetString());
        m_bypassHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Redirect") && !value["Redirect"].IsNull())
    {
        if (!value["Redirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Redirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirect = string(value["Redirect"].GetString());
        m_redirectHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.SortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = value["SortId"].GetInt64();
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Domains` is not array type"));

        const rapidjson::Value &tmpValue = value["Domains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domains.push_back((*itr).GetString());
        }
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Strategies` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.ValidStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetUint64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.JobDateTime` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.PageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = string(value["PageId"].GetString());
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("LogicalOp") && !value["LogicalOp"].IsNull())
    {
        if (!value["LogicalOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.LogicalOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicalOp = string(value["LogicalOp"].GetString());
        m_logicalOpHasBeenSet = true;
    }

    if (value.HasMember("ActionRatio") && !value["ActionRatio"].IsNull())
    {
        if (!value["ActionRatio"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomRuleListItem.ActionRatio` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionRatio = value["ActionRatio"].GetUint64();
        m_actionRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCustomRuleListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bypass.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
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

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

    if (m_actionRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionRatio, allocator);
    }

}


uint64_t BatchCustomRuleListItem::GetId() const
{
    return m_id;
}

void BatchCustomRuleListItem::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BatchCustomRuleListItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t BatchCustomRuleListItem::GetActionType() const
{
    return m_actionType;
}

void BatchCustomRuleListItem::SetActionType(const int64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool BatchCustomRuleListItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string BatchCustomRuleListItem::GetBypass() const
{
    return m_bypass;
}

void BatchCustomRuleListItem::SetBypass(const string& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool BatchCustomRuleListItem::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

uint64_t BatchCustomRuleListItem::GetExpireTime() const
{
    return m_expireTime;
}

void BatchCustomRuleListItem::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool BatchCustomRuleListItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string BatchCustomRuleListItem::GetName() const
{
    return m_name;
}

void BatchCustomRuleListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BatchCustomRuleListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BatchCustomRuleListItem::GetRedirect() const
{
    return m_redirect;
}

void BatchCustomRuleListItem::SetRedirect(const string& _redirect)
{
    m_redirect = _redirect;
    m_redirectHasBeenSet = true;
}

bool BatchCustomRuleListItem::RedirectHasBeenSet() const
{
    return m_redirectHasBeenSet;
}

int64_t BatchCustomRuleListItem::GetSortId() const
{
    return m_sortId;
}

void BatchCustomRuleListItem::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool BatchCustomRuleListItem::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

uint64_t BatchCustomRuleListItem::GetStatus() const
{
    return m_status;
}

void BatchCustomRuleListItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchCustomRuleListItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> BatchCustomRuleListItem::GetDomains() const
{
    return m_domains;
}

void BatchCustomRuleListItem::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool BatchCustomRuleListItem::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string BatchCustomRuleListItem::GetRemark() const
{
    return m_remark;
}

void BatchCustomRuleListItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool BatchCustomRuleListItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<Strategy> BatchCustomRuleListItem::GetStrategies() const
{
    return m_strategies;
}

void BatchCustomRuleListItem::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool BatchCustomRuleListItem::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string BatchCustomRuleListItem::GetEventId() const
{
    return m_eventId;
}

void BatchCustomRuleListItem::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool BatchCustomRuleListItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

uint64_t BatchCustomRuleListItem::GetValidStatus() const
{
    return m_validStatus;
}

void BatchCustomRuleListItem::SetValidStatus(const uint64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool BatchCustomRuleListItem::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string BatchCustomRuleListItem::GetCreateTime() const
{
    return m_createTime;
}

void BatchCustomRuleListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BatchCustomRuleListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BatchCustomRuleListItem::GetUpdateTime() const
{
    return m_updateTime;
}

void BatchCustomRuleListItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BatchCustomRuleListItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BatchCustomRuleListItem::GetJobType() const
{
    return m_jobType;
}

void BatchCustomRuleListItem::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool BatchCustomRuleListItem::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime BatchCustomRuleListItem::GetJobDateTime() const
{
    return m_jobDateTime;
}

void BatchCustomRuleListItem::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool BatchCustomRuleListItem::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string BatchCustomRuleListItem::GetCronType() const
{
    return m_cronType;
}

void BatchCustomRuleListItem::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool BatchCustomRuleListItem::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

string BatchCustomRuleListItem::GetLabel() const
{
    return m_label;
}

void BatchCustomRuleListItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool BatchCustomRuleListItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string BatchCustomRuleListItem::GetPageId() const
{
    return m_pageId;
}

void BatchCustomRuleListItem::SetPageId(const string& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool BatchCustomRuleListItem::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

string BatchCustomRuleListItem::GetLogicalOp() const
{
    return m_logicalOp;
}

void BatchCustomRuleListItem::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool BatchCustomRuleListItem::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

uint64_t BatchCustomRuleListItem::GetActionRatio() const
{
    return m_actionRatio;
}

void BatchCustomRuleListItem::SetActionRatio(const uint64_t& _actionRatio)
{
    m_actionRatio = _actionRatio;
    m_actionRatioHasBeenSet = true;
}

bool BatchCustomRuleListItem::ActionRatioHasBeenSet() const
{
    return m_actionRatioHasBeenSet;
}

