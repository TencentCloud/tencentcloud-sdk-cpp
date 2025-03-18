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

#include <tencentcloud/dbbrain/v20210527/model/AutonomyEventVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AutonomyEventVo::AutonomyEventVo() :
    m_eventIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_lastTriggerTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome AutonomyEventVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("TriggerTime") && !value["TriggerTime"].IsNull())
    {
        if (!value["TriggerTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.TriggerTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerTime = value["TriggerTime"].GetInt64();
        m_triggerTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTriggerTime") && !value["LastTriggerTime"].IsNull())
    {
        if (!value["LastTriggerTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.LastTriggerTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastTriggerTime = value["LastTriggerTime"].GetInt64();
        m_lastTriggerTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyEventVo.FinishTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = value["FinishTime"].GetInt64();
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutonomyEventVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerTime, allocator);
    }

    if (m_lastTriggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTriggerTime, allocator);
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

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finishTime, allocator);
    }

}


int64_t AutonomyEventVo::GetEventId() const
{
    return m_eventId;
}

void AutonomyEventVo::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AutonomyEventVo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string AutonomyEventVo::GetType() const
{
    return m_type;
}

void AutonomyEventVo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AutonomyEventVo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AutonomyEventVo::GetStatus() const
{
    return m_status;
}

void AutonomyEventVo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutonomyEventVo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AutonomyEventVo::GetReason() const
{
    return m_reason;
}

void AutonomyEventVo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool AutonomyEventVo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

int64_t AutonomyEventVo::GetTriggerTime() const
{
    return m_triggerTime;
}

void AutonomyEventVo::SetTriggerTime(const int64_t& _triggerTime)
{
    m_triggerTime = _triggerTime;
    m_triggerTimeHasBeenSet = true;
}

bool AutonomyEventVo::TriggerTimeHasBeenSet() const
{
    return m_triggerTimeHasBeenSet;
}

int64_t AutonomyEventVo::GetLastTriggerTime() const
{
    return m_lastTriggerTime;
}

void AutonomyEventVo::SetLastTriggerTime(const int64_t& _lastTriggerTime)
{
    m_lastTriggerTime = _lastTriggerTime;
    m_lastTriggerTimeHasBeenSet = true;
}

bool AutonomyEventVo::LastTriggerTimeHasBeenSet() const
{
    return m_lastTriggerTimeHasBeenSet;
}

int64_t AutonomyEventVo::GetCreateTime() const
{
    return m_createTime;
}

void AutonomyEventVo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AutonomyEventVo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AutonomyEventVo::GetUpdateTime() const
{
    return m_updateTime;
}

void AutonomyEventVo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AutonomyEventVo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t AutonomyEventVo::GetFinishTime() const
{
    return m_finishTime;
}

void AutonomyEventVo::SetFinishTime(const int64_t& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AutonomyEventVo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

