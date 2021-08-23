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

#include <tencentcloud/yunjing/v20180228/model/SecurityDynamic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

SecurityDynamic::SecurityDynamic() :
    m_uuidHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_securityLevelHasBeenSet(false)
{
}

CoreInternalOutcome SecurityDynamic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityDynamic.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityDynamic.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityDynamic.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityDynamic.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("SecurityLevel") && !value["SecurityLevel"].IsNull())
    {
        if (!value["SecurityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityDynamic.SecurityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityLevel = string(value["SecurityLevel"].GetString());
        m_securityLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityDynamic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_securityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityLevel.c_str(), allocator).Move(), allocator);
    }

}


string SecurityDynamic::GetUuid() const
{
    return m_uuid;
}

void SecurityDynamic::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool SecurityDynamic::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string SecurityDynamic::GetEventTime() const
{
    return m_eventTime;
}

void SecurityDynamic::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool SecurityDynamic::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string SecurityDynamic::GetEventType() const
{
    return m_eventType;
}

void SecurityDynamic::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool SecurityDynamic::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string SecurityDynamic::GetMessage() const
{
    return m_message;
}

void SecurityDynamic::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SecurityDynamic::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string SecurityDynamic::GetSecurityLevel() const
{
    return m_securityLevel;
}

void SecurityDynamic::SetSecurityLevel(const string& _securityLevel)
{
    m_securityLevel = _securityLevel;
    m_securityLevelHasBeenSet = true;
}

bool SecurityDynamic::SecurityLevelHasBeenSet() const
{
    return m_securityLevelHasBeenSet;
}

