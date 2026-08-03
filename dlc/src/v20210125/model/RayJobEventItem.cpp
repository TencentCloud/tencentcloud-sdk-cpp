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

#include <tencentcloud/dlc/v20210125/model/RayJobEventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RayJobEventItem::RayJobEventItem() :
    m_eventTimeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_involvedObjectNameHasBeenSet(false),
    m_sourceComponentHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome RayJobEventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.EventTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = value["EventTime"].GetUint64();
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InvolvedObjectName") && !value["InvolvedObjectName"].IsNull())
    {
        if (!value["InvolvedObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.InvolvedObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_involvedObjectName = string(value["InvolvedObjectName"].GetString());
        m_involvedObjectNameHasBeenSet = true;
    }

    if (value.HasMember("SourceComponent") && !value["SourceComponent"].IsNull())
    {
        if (!value["SourceComponent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.SourceComponent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceComponent = string(value["SourceComponent"].GetString());
        m_sourceComponentHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RayJobEventItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RayJobEventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTime, allocator);
    }

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_involvedObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvolvedObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_involvedObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceComponent.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RayJobEventItem::GetEventTime() const
{
    return m_eventTime;
}

void RayJobEventItem::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool RayJobEventItem::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string RayJobEventItem::GetComponent() const
{
    return m_component;
}

void RayJobEventItem::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool RayJobEventItem::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string RayJobEventItem::GetLevel() const
{
    return m_level;
}

void RayJobEventItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool RayJobEventItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string RayJobEventItem::GetMessage() const
{
    return m_message;
}

void RayJobEventItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool RayJobEventItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string RayJobEventItem::GetInvolvedObjectName() const
{
    return m_involvedObjectName;
}

void RayJobEventItem::SetInvolvedObjectName(const string& _involvedObjectName)
{
    m_involvedObjectName = _involvedObjectName;
    m_involvedObjectNameHasBeenSet = true;
}

bool RayJobEventItem::InvolvedObjectNameHasBeenSet() const
{
    return m_involvedObjectNameHasBeenSet;
}

string RayJobEventItem::GetSourceComponent() const
{
    return m_sourceComponent;
}

void RayJobEventItem::SetSourceComponent(const string& _sourceComponent)
{
    m_sourceComponent = _sourceComponent;
    m_sourceComponentHasBeenSet = true;
}

bool RayJobEventItem::SourceComponentHasBeenSet() const
{
    return m_sourceComponentHasBeenSet;
}

string RayJobEventItem::GetReason() const
{
    return m_reason;
}

void RayJobEventItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool RayJobEventItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

