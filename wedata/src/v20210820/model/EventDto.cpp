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

#include <tencentcloud/wedata/v20210820/model/EventDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventDto::EventDto() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_isAlarmHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_belongToHasBeenSet(false),
    m_baselineIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome EventDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.EventStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = string(value["EventStatus"].GetString());
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAlarm") && !value["IsAlarm"].IsNull())
    {
        if (!value["IsAlarm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.IsAlarm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isAlarm = string(value["IsAlarm"].GetString());
        m_isAlarmHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("BelongTo") && !value["BelongTo"].IsNull())
    {
        if (!value["BelongTo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.BelongTo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_belongTo = string(value["BelongTo"].GetString());
        m_belongToHasBeenSet = true;
    }

    if (value.HasMember("BaselineId") && !value["BaselineId"].IsNull())
    {
        if (!value["BaselineId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.BaselineId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineId = value["BaselineId"].GetUint64();
        m_baselineIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDto.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_isAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isAlarm.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_belongToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BelongTo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_belongTo.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineId, allocator);
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EventDto::GetId() const
{
    return m_id;
}

void EventDto::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EventDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EventDto::GetInstanceId() const
{
    return m_instanceId;
}

void EventDto::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EventDto::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EventDto::GetEventTime() const
{
    return m_eventTime;
}

void EventDto::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool EventDto::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string EventDto::GetEventName() const
{
    return m_eventName;
}

void EventDto::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventDto::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string EventDto::GetEventStatus() const
{
    return m_eventStatus;
}

void EventDto::SetEventStatus(const string& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool EventDto::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string EventDto::GetEventType() const
{
    return m_eventType;
}

void EventDto::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventDto::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventDto::GetIsAlarm() const
{
    return m_isAlarm;
}

void EventDto::SetIsAlarm(const string& _isAlarm)
{
    m_isAlarm = _isAlarm;
    m_isAlarmHasBeenSet = true;
}

bool EventDto::IsAlarmHasBeenSet() const
{
    return m_isAlarmHasBeenSet;
}

string EventDto::GetProjectId() const
{
    return m_projectId;
}

void EventDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool EventDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string EventDto::GetBelongTo() const
{
    return m_belongTo;
}

void EventDto::SetBelongTo(const string& _belongTo)
{
    m_belongTo = _belongTo;
    m_belongToHasBeenSet = true;
}

bool EventDto::BelongToHasBeenSet() const
{
    return m_belongToHasBeenSet;
}

uint64_t EventDto::GetBaselineId() const
{
    return m_baselineId;
}

void EventDto::SetBaselineId(const uint64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool EventDto::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

string EventDto::GetCreateTime() const
{
    return m_createTime;
}

void EventDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EventDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EventDto::GetUpdateTime() const
{
    return m_updateTime;
}

void EventDto::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool EventDto::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string EventDto::GetAppId() const
{
    return m_appId;
}

void EventDto::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EventDto::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EventDto::GetUserUin() const
{
    return m_userUin;
}

void EventDto::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool EventDto::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string EventDto::GetOwnerUin() const
{
    return m_ownerUin;
}

void EventDto::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool EventDto::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

