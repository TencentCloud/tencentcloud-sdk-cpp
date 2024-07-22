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

#include <tencentcloud/waf/v20180125/model/IpAccessControlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IpAccessControlItem::IpAccessControlItem() :
    m_idHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_tsVersionHasBeenSet(false),
    m_validTsHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_cronTypeHasBeenSet(false),
    m_jobDateTimeHasBeenSet(false)
{
}

CoreInternalOutcome IpAccessControlItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.ActionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = value["ActionType"].GetUint64();
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TsVersion") && !value["TsVersion"].IsNull())
    {
        if (!value["TsVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.TsVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tsVersion = value["TsVersion"].GetUint64();
        m_tsVersionHasBeenSet = true;
    }

    if (value.HasMember("ValidTs") && !value["ValidTs"].IsNull())
    {
        if (!value["ValidTs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.ValidTs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validTs = value["ValidTs"].GetUint64();
        m_validTsHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.ValidStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = value["ValidStatus"].GetInt64();
        m_validStatusHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("CronType") && !value["CronType"].IsNull())
    {
        if (!value["CronType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.CronType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronType = string(value["CronType"].GetString());
        m_cronTypeHasBeenSet = true;
    }

    if (value.HasMember("JobDateTime") && !value["JobDateTime"].IsNull())
    {
        if (!value["JobDateTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlItem.JobDateTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jobDateTime.Deserialize(value["JobDateTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jobDateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpAccessControlItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionType, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_tsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tsVersion, allocator);
    }

    if (m_validTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validTs, allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_cronTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronType.c_str(), allocator).Move(), allocator);
    }

    if (m_jobDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobDateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jobDateTime.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IpAccessControlItem::GetId() const
{
    return m_id;
}

void IpAccessControlItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IpAccessControlItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t IpAccessControlItem::GetActionType() const
{
    return m_actionType;
}

void IpAccessControlItem::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool IpAccessControlItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string IpAccessControlItem::GetIp() const
{
    return m_ip;
}

void IpAccessControlItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpAccessControlItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string IpAccessControlItem::GetNote() const
{
    return m_note;
}

void IpAccessControlItem::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool IpAccessControlItem::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string IpAccessControlItem::GetSource() const
{
    return m_source;
}

void IpAccessControlItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool IpAccessControlItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t IpAccessControlItem::GetTsVersion() const
{
    return m_tsVersion;
}

void IpAccessControlItem::SetTsVersion(const uint64_t& _tsVersion)
{
    m_tsVersion = _tsVersion;
    m_tsVersionHasBeenSet = true;
}

bool IpAccessControlItem::TsVersionHasBeenSet() const
{
    return m_tsVersionHasBeenSet;
}

uint64_t IpAccessControlItem::GetValidTs() const
{
    return m_validTs;
}

void IpAccessControlItem::SetValidTs(const uint64_t& _validTs)
{
    m_validTs = _validTs;
    m_validTsHasBeenSet = true;
}

bool IpAccessControlItem::ValidTsHasBeenSet() const
{
    return m_validTsHasBeenSet;
}

int64_t IpAccessControlItem::GetValidStatus() const
{
    return m_validStatus;
}

void IpAccessControlItem::SetValidStatus(const int64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool IpAccessControlItem::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

uint64_t IpAccessControlItem::GetRuleId() const
{
    return m_ruleId;
}

void IpAccessControlItem::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool IpAccessControlItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<string> IpAccessControlItem::GetIpList() const
{
    return m_ipList;
}

void IpAccessControlItem::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool IpAccessControlItem::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

uint64_t IpAccessControlItem::GetCreateTime() const
{
    return m_createTime;
}

void IpAccessControlItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool IpAccessControlItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string IpAccessControlItem::GetJobType() const
{
    return m_jobType;
}

void IpAccessControlItem::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool IpAccessControlItem::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string IpAccessControlItem::GetCronType() const
{
    return m_cronType;
}

void IpAccessControlItem::SetCronType(const string& _cronType)
{
    m_cronType = _cronType;
    m_cronTypeHasBeenSet = true;
}

bool IpAccessControlItem::CronTypeHasBeenSet() const
{
    return m_cronTypeHasBeenSet;
}

JobDateTime IpAccessControlItem::GetJobDateTime() const
{
    return m_jobDateTime;
}

void IpAccessControlItem::SetJobDateTime(const JobDateTime& _jobDateTime)
{
    m_jobDateTime = _jobDateTime;
    m_jobDateTimeHasBeenSet = true;
}

bool IpAccessControlItem::JobDateTimeHasBeenSet() const
{
    return m_jobDateTimeHasBeenSet;
}

