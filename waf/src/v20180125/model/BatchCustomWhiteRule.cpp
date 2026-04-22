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

#include <tencentcloud/waf/v20180125/model/BatchCustomWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

BatchCustomWhiteRule::BatchCustomWhiteRule() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sortIdHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_bypassHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_logicalOpHasBeenSet(false)
{
}

CoreInternalOutcome BatchCustomWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.SortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = value["SortId"].GetInt64();
        m_sortIdHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.Strategies` is not array type"));

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

    if (value.HasMember("Bypass") && !value["Bypass"].IsNull())
    {
        if (!value["Bypass"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.Bypass` is not array type"));

        const rapidjson::Value &tmpValue = value["Bypass"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bypass.push_back((*itr).GetString());
        }
        m_bypassHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.JobDateTime` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.Domains` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetUint64());
        }
        m_groupIdsHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.ValidStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetUint64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LogicalOp") && !value["LogicalOp"].IsNull())
    {
        if (!value["LogicalOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCustomWhiteRule.LogicalOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logicalOp = string(value["LogicalOp"].GetString());
        m_logicalOpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCustomWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortId, allocator);
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

    if (m_bypassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bypass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bypass.begin(); itr != m_bypass.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_logicalOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logicalOp.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BatchCustomWhiteRule::GetID() const
{
    return m_iD;
}

void BatchCustomWhiteRule::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BatchCustomWhiteRule::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BatchCustomWhiteRule::GetName() const
{
    return m_name;
}

void BatchCustomWhiteRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BatchCustomWhiteRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BatchCustomWhiteRule::GetSortId() const
{
    return m_sortId;
}

void BatchCustomWhiteRule::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool BatchCustomWhiteRule::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

vector<Strategy> BatchCustomWhiteRule::GetStrategies() const
{
    return m_strategies;
}

void BatchCustomWhiteRule::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool BatchCustomWhiteRule::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

vector<string> BatchCustomWhiteRule::GetBypass() const
{
    return m_bypass;
}

void BatchCustomWhiteRule::SetBypass(const vector<string>& _bypass)
{
    m_bypass = _bypass;
    m_bypassHasBeenSet = true;
}

bool BatchCustomWhiteRule::BypassHasBeenSet() const
{
    return m_bypassHasBeenSet;
}

string BatchCustomWhiteRule::GetJobType() const
{
    return m_jobType;
}

void BatchCustomWhiteRule::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool BatchCustomWhiteRule::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime BatchCustomWhiteRule::GetJobDateTime() const
{
    return m_jobDateTime;
}

void BatchCustomWhiteRule::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool BatchCustomWhiteRule::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string BatchCustomWhiteRule::GetCronType() const
{
    return m_cronType;
}

void BatchCustomWhiteRule::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool BatchCustomWhiteRule::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

vector<string> BatchCustomWhiteRule::GetDomains() const
{
    return m_domains;
}

void BatchCustomWhiteRule::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool BatchCustomWhiteRule::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<uint64_t> BatchCustomWhiteRule::GetGroupIds() const
{
    return m_groupIds;
}

void BatchCustomWhiteRule::SetGroupIds(const vector<uint64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool BatchCustomWhiteRule::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

uint64_t BatchCustomWhiteRule::GetValidStatus() const
{
    return m_validStatus;
}

void BatchCustomWhiteRule::SetValidStatus(const uint64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool BatchCustomWhiteRule::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string BatchCustomWhiteRule::GetCreateTime() const
{
    return m_createTime;
}

void BatchCustomWhiteRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BatchCustomWhiteRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BatchCustomWhiteRule::GetUpdateTime() const
{
    return m_updateTime;
}

void BatchCustomWhiteRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BatchCustomWhiteRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t BatchCustomWhiteRule::GetStatus() const
{
    return m_status;
}

void BatchCustomWhiteRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchCustomWhiteRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchCustomWhiteRule::GetLogicalOp() const
{
    return m_logicalOp;
}

void BatchCustomWhiteRule::SetLogicalOp(const string& _logicalOp)
{
    m_logicalOp = _logicalOp;
    m_logicalOpHasBeenSet = true;
}

bool BatchCustomWhiteRule::LogicalOpHasBeenSet() const
{
    return m_logicalOpHasBeenSet;
}

