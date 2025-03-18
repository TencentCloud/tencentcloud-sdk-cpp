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

#include <tencentcloud/dbbrain/v20210527/model/AutonomyActionVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AutonomyActionVo::AutonomyActionVo() :
    m_actionIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AutonomyActionVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.ActionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = value["ActionId"].GetInt64();
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerTime") && !value["TriggerTime"].IsNull())
    {
        if (!value["TriggerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.TriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerTime = string(value["TriggerTime"].GetString());
        m_triggerTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyActionVo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutonomyActionVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionId, allocator);
    }

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

    if (m_triggerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerTime.c_str(), allocator).Move(), allocator);
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

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


int64_t AutonomyActionVo::GetActionId() const
{
    return m_actionId;
}

void AutonomyActionVo::SetActionId(const int64_t& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool AutonomyActionVo::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

int64_t AutonomyActionVo::GetEventId() const
{
    return m_eventId;
}

void AutonomyActionVo::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AutonomyActionVo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string AutonomyActionVo::GetType() const
{
    return m_type;
}

void AutonomyActionVo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AutonomyActionVo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AutonomyActionVo::GetTriggerTime() const
{
    return m_triggerTime;
}

void AutonomyActionVo::SetTriggerTime(const string& _triggerTime)
{
    m_triggerTime = _triggerTime;
    m_triggerTimeHasBeenSet = true;
}

bool AutonomyActionVo::TriggerTimeHasBeenSet() const
{
    return m_triggerTimeHasBeenSet;
}

string AutonomyActionVo::GetCreateTime() const
{
    return m_createTime;
}

void AutonomyActionVo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AutonomyActionVo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AutonomyActionVo::GetUpdateTime() const
{
    return m_updateTime;
}

void AutonomyActionVo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AutonomyActionVo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AutonomyActionVo::GetFinishTime() const
{
    return m_finishTime;
}

void AutonomyActionVo::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool AutonomyActionVo::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t AutonomyActionVo::GetExpireTime() const
{
    return m_expireTime;
}

void AutonomyActionVo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AutonomyActionVo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string AutonomyActionVo::GetReason() const
{
    return m_reason;
}

void AutonomyActionVo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool AutonomyActionVo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string AutonomyActionVo::GetStatus() const
{
    return m_status;
}

void AutonomyActionVo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AutonomyActionVo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

