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

#include <tencentcloud/csip/v20221121/model/AiScheduleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AiScheduleInfo::AiScheduleInfo() :
    m_scheduleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_promptsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_maxFireCountHasBeenSet(false),
    m_currentFireCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_identityHasBeenSet(false)
{
}

CoreInternalOutcome AiScheduleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduleId") && !value["ScheduleId"].IsNull())
    {
        if (!value["ScheduleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.ScheduleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleId = string(value["ScheduleId"].GetString());
        m_scheduleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Prompts") && !value["Prompts"].IsNull())
    {
        if (!value["Prompts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.Prompts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompts = string(value["Prompts"].GetString());
        m_promptsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Triggers") && !value["Triggers"].IsNull())
    {
        if (!value["Triggers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.Triggers` is not array type"));

        const rapidjson::Value &tmpValue = value["Triggers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiScheduleTriggerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggers.push_back(item);
        }
        m_triggersHasBeenSet = true;
    }

    if (value.HasMember("MaxFireCount") && !value["MaxFireCount"].IsNull())
    {
        if (!value["MaxFireCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.MaxFireCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFireCount = value["MaxFireCount"].GetInt64();
        m_maxFireCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentFireCount") && !value["CurrentFireCount"].IsNull())
    {
        if (!value["CurrentFireCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.CurrentFireCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentFireCount = value["CurrentFireCount"].GetInt64();
        m_currentFireCountHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Identity") && !value["Identity"].IsNull())
    {
        if (!value["Identity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleInfo.Identity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_identity.Deserialize(value["Identity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_identityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiScheduleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_promptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompts.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_triggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Triggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggers.begin(); itr != m_triggers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxFireCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFireCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFireCount, allocator);
    }

    if (m_currentFireCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentFireCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentFireCount, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_identityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_identity.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AiScheduleInfo::GetScheduleId() const
{
    return m_scheduleId;
}

void AiScheduleInfo::SetScheduleId(const string& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool AiScheduleInfo::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string AiScheduleInfo::GetName() const
{
    return m_name;
}

void AiScheduleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AiScheduleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AiScheduleInfo::GetPrompts() const
{
    return m_prompts;
}

void AiScheduleInfo::SetPrompts(const string& _prompts)
{
    m_prompts = _prompts;
    m_promptsHasBeenSet = true;
}

bool AiScheduleInfo::PromptsHasBeenSet() const
{
    return m_promptsHasBeenSet;
}

int64_t AiScheduleInfo::GetStatus() const
{
    return m_status;
}

void AiScheduleInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiScheduleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AiScheduleTriggerInfo> AiScheduleInfo::GetTriggers() const
{
    return m_triggers;
}

void AiScheduleInfo::SetTriggers(const vector<AiScheduleTriggerInfo>& _triggers)
{
    m_triggers = _triggers;
    m_triggersHasBeenSet = true;
}

bool AiScheduleInfo::TriggersHasBeenSet() const
{
    return m_triggersHasBeenSet;
}

int64_t AiScheduleInfo::GetMaxFireCount() const
{
    return m_maxFireCount;
}

void AiScheduleInfo::SetMaxFireCount(const int64_t& _maxFireCount)
{
    m_maxFireCount = _maxFireCount;
    m_maxFireCountHasBeenSet = true;
}

bool AiScheduleInfo::MaxFireCountHasBeenSet() const
{
    return m_maxFireCountHasBeenSet;
}

int64_t AiScheduleInfo::GetCurrentFireCount() const
{
    return m_currentFireCount;
}

void AiScheduleInfo::SetCurrentFireCount(const int64_t& _currentFireCount)
{
    m_currentFireCount = _currentFireCount;
    m_currentFireCountHasBeenSet = true;
}

bool AiScheduleInfo::CurrentFireCountHasBeenSet() const
{
    return m_currentFireCountHasBeenSet;
}

int64_t AiScheduleInfo::GetStartTime() const
{
    return m_startTime;
}

void AiScheduleInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AiScheduleInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t AiScheduleInfo::GetEndTime() const
{
    return m_endTime;
}

void AiScheduleInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AiScheduleInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AiScheduleInfo::GetCreateTime() const
{
    return m_createTime;
}

void AiScheduleInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AiScheduleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AiScheduleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AiScheduleInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AiScheduleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

AIScheduleUserIdentity AiScheduleInfo::GetIdentity() const
{
    return m_identity;
}

void AiScheduleInfo::SetIdentity(const AIScheduleUserIdentity& _identity)
{
    m_identity = _identity;
    m_identityHasBeenSet = true;
}

bool AiScheduleInfo::IdentityHasBeenSet() const
{
    return m_identityHasBeenSet;
}

