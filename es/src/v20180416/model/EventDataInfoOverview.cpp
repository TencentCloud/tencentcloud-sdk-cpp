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

#include <tencentcloud/es/v20180416/model/EventDataInfoOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

EventDataInfoOverview::EventDataInfoOverview() :
    m_eventTypeHasBeenSet(false),
    m_eventTaskIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventImportanceHasBeenSet(false),
    m_eventContentHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_subEventTypeHasBeenSet(false),
    m_subEventNameHasBeenSet(false)
{
}

CoreInternalOutcome EventDataInfoOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventTaskId") && !value["EventTaskId"].IsNull())
    {
        if (!value["EventTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTaskId = value["EventTaskId"].GetInt64();
        m_eventTaskIdHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventImportance") && !value["EventImportance"].IsNull())
    {
        if (!value["EventImportance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventImportance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventImportance = value["EventImportance"].GetInt64();
        m_eventImportanceHasBeenSet = true;
    }

    if (value.HasMember("EventContent") && !value["EventContent"].IsNull())
    {
        if (!value["EventContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventContent = string(value["EventContent"].GetString());
        m_eventContentHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EventStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = value["EventStatus"].GetInt64();
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("SubEventType") && !value["SubEventType"].IsNull())
    {
        if (!value["SubEventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.SubEventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subEventType = value["SubEventType"].GetInt64();
        m_subEventTypeHasBeenSet = true;
    }

    if (value.HasMember("SubEventName") && !value["SubEventName"].IsNull())
    {
        if (!value["SubEventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDataInfoOverview.SubEventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subEventName = string(value["SubEventName"].GetString());
        m_subEventNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDataInfoOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTaskId, allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventImportanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventImportance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventImportance, allocator);
    }

    if (m_eventContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventContent.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStatus, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subEventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subEventType, allocator);
    }

    if (m_subEventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subEventName.c_str(), allocator).Move(), allocator);
    }

}


int64_t EventDataInfoOverview::GetEventType() const
{
    return m_eventType;
}

void EventDataInfoOverview::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventDataInfoOverview::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t EventDataInfoOverview::GetEventTaskId() const
{
    return m_eventTaskId;
}

void EventDataInfoOverview::SetEventTaskId(const int64_t& _eventTaskId)
{
    m_eventTaskId = _eventTaskId;
    m_eventTaskIdHasBeenSet = true;
}

bool EventDataInfoOverview::EventTaskIdHasBeenSet() const
{
    return m_eventTaskIdHasBeenSet;
}

string EventDataInfoOverview::GetEventName() const
{
    return m_eventName;
}

void EventDataInfoOverview::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventDataInfoOverview::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

int64_t EventDataInfoOverview::GetEventImportance() const
{
    return m_eventImportance;
}

void EventDataInfoOverview::SetEventImportance(const int64_t& _eventImportance)
{
    m_eventImportance = _eventImportance;
    m_eventImportanceHasBeenSet = true;
}

bool EventDataInfoOverview::EventImportanceHasBeenSet() const
{
    return m_eventImportanceHasBeenSet;
}

string EventDataInfoOverview::GetEventContent() const
{
    return m_eventContent;
}

void EventDataInfoOverview::SetEventContent(const string& _eventContent)
{
    m_eventContent = _eventContent;
    m_eventContentHasBeenSet = true;
}

bool EventDataInfoOverview::EventContentHasBeenSet() const
{
    return m_eventContentHasBeenSet;
}

string EventDataInfoOverview::GetInstanceId() const
{
    return m_instanceId;
}

void EventDataInfoOverview::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EventDataInfoOverview::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string EventDataInfoOverview::GetInstanceName() const
{
    return m_instanceName;
}

void EventDataInfoOverview::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool EventDataInfoOverview::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string EventDataInfoOverview::GetNodeId() const
{
    return m_nodeId;
}

void EventDataInfoOverview::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool EventDataInfoOverview::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string EventDataInfoOverview::GetNodeRole() const
{
    return m_nodeRole;
}

void EventDataInfoOverview::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool EventDataInfoOverview::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

int64_t EventDataInfoOverview::GetEventStatus() const
{
    return m_eventStatus;
}

void EventDataInfoOverview::SetEventStatus(const int64_t& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool EventDataInfoOverview::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string EventDataInfoOverview::GetStartTime() const
{
    return m_startTime;
}

void EventDataInfoOverview::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool EventDataInfoOverview::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string EventDataInfoOverview::GetEndTime() const
{
    return m_endTime;
}

void EventDataInfoOverview::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool EventDataInfoOverview::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t EventDataInfoOverview::GetSubEventType() const
{
    return m_subEventType;
}

void EventDataInfoOverview::SetSubEventType(const int64_t& _subEventType)
{
    m_subEventType = _subEventType;
    m_subEventTypeHasBeenSet = true;
}

bool EventDataInfoOverview::SubEventTypeHasBeenSet() const
{
    return m_subEventTypeHasBeenSet;
}

string EventDataInfoOverview::GetSubEventName() const
{
    return m_subEventName;
}

void EventDataInfoOverview::SetSubEventName(const string& _subEventName)
{
    m_subEventName = _subEventName;
    m_subEventNameHasBeenSet = true;
}

bool EventDataInfoOverview::SubEventNameHasBeenSet() const
{
    return m_subEventNameHasBeenSet;
}

