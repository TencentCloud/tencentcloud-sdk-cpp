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

#include <tencentcloud/gse/v20191112/model/Event.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

Event::Event() :
    m_eventCodeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_preSignedLogUrlHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome Event::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("PreSignedLogUrl") && !value["PreSignedLogUrl"].IsNull())
    {
        if (!value["PreSignedLogUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.PreSignedLogUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preSignedLogUrl = string(value["PreSignedLogUrl"].GetString());
        m_preSignedLogUrlHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Event::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_preSignedLogUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreSignedLogUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preSignedLogUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string Event::GetEventCode() const
{
    return m_eventCode;
}

void Event::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool Event::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

string Event::GetEventId() const
{
    return m_eventId;
}

void Event::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool Event::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string Event::GetEventTime() const
{
    return m_eventTime;
}

void Event::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool Event::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string Event::GetMessage() const
{
    return m_message;
}

void Event::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Event::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string Event::GetPreSignedLogUrl() const
{
    return m_preSignedLogUrl;
}

void Event::SetPreSignedLogUrl(const string& _preSignedLogUrl)
{
    m_preSignedLogUrl = _preSignedLogUrl;
    m_preSignedLogUrlHasBeenSet = true;
}

bool Event::PreSignedLogUrlHasBeenSet() const
{
    return m_preSignedLogUrlHasBeenSet;
}

string Event::GetResourceId() const
{
    return m_resourceId;
}

void Event::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Event::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

