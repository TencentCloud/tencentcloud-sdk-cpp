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

#include <tencentcloud/cdb/v20170320/model/InstEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InstEventInfo::InstEventInfo() :
    m_eventNameHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_occurTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

CoreInternalOutcome InstEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstEventInfo.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstEventInfo.EventStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = string(value["EventStatus"].GetString());
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("OccurTime") && !value["OccurTime"].IsNull())
    {
        if (!value["OccurTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstEventInfo.OccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occurTime = string(value["OccurTime"].GetString());
        m_occurTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstEventInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstEventInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_occurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

}


string InstEventInfo::GetEventName() const
{
    return m_eventName;
}

void InstEventInfo::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool InstEventInfo::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string InstEventInfo::GetEventStatus() const
{
    return m_eventStatus;
}

void InstEventInfo::SetEventStatus(const string& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool InstEventInfo::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string InstEventInfo::GetOccurTime() const
{
    return m_occurTime;
}

void InstEventInfo::SetOccurTime(const string& _occurTime)
{
    m_occurTime = _occurTime;
    m_occurTimeHasBeenSet = true;
}

bool InstEventInfo::OccurTimeHasBeenSet() const
{
    return m_occurTimeHasBeenSet;
}

string InstEventInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstEventInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstEventInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstEventInfo::GetNodeId() const
{
    return m_nodeId;
}

void InstEventInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InstEventInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

