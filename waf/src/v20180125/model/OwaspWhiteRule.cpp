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

#include <tencentcloud/waf/v20180125/model/OwaspWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

OwaspWhiteRule::OwaspWhiteRule() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_validStatusHasBeenSet(false)
{
}

CoreInternalOutcome OwaspWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Ids") && !value["Ids"].IsNull())
    {
        if (!value["Ids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.Ids` is not array type"));

        const rapidjson::Value &tmpValue = value["Ids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ids.push_back((*itr).GetUint64());
        }
        m_idsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Strategies") && !value["Strategies"].IsNull())
    {
        if (!value["Strategies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.Strategies` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.JobDateTime` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspWhiteRule.ValidStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetBool();
        m_validStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwaspWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

}


uint64_t OwaspWhiteRule::GetRuleId() const
{
    return m_ruleId;
}

void OwaspWhiteRule::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool OwaspWhiteRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string OwaspWhiteRule::GetName() const
{
    return m_name;
}

void OwaspWhiteRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OwaspWhiteRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<uint64_t> OwaspWhiteRule::GetIds() const
{
    return m_ids;
}

void OwaspWhiteRule::SetIds(const vector<uint64_t>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool OwaspWhiteRule::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

int64_t OwaspWhiteRule::GetStatus() const
{
    return m_status;
}

void OwaspWhiteRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OwaspWhiteRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t OwaspWhiteRule::GetType() const
{
    return m_type;
}

void OwaspWhiteRule::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OwaspWhiteRule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<Strategy> OwaspWhiteRule::GetStrategies() const
{
    return m_strategies;
}

void OwaspWhiteRule::SetStrategies(const vector<Strategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool OwaspWhiteRule::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

string OwaspWhiteRule::GetCreateTime() const
{
    return m_createTime;
}

void OwaspWhiteRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OwaspWhiteRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OwaspWhiteRule::GetUpdateTime() const
{
    return m_updateTime;
}

void OwaspWhiteRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool OwaspWhiteRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string OwaspWhiteRule::GetJobType() const
{
    return m_jobType;
}

void OwaspWhiteRule::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool OwaspWhiteRule::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

JobDateTime OwaspWhiteRule::GetJobDateTime() const
{
    return m_jobDateTime;
}

void OwaspWhiteRule::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool OwaspWhiteRule::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

string OwaspWhiteRule::GetCronType() const
{
    return m_cronType;
}

void OwaspWhiteRule::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool OwaspWhiteRule::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

bool OwaspWhiteRule::GetValidStatus() const
{
    return m_validStatus;
}

void OwaspWhiteRule::SetValidStatus(const bool& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool OwaspWhiteRule::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

