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

#include <tencentcloud/tke/v20180525/model/Event.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

Event::Event() :
    m_podNameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_firstTimestampHasBeenSet(false),
    m_lastTimestampHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome Event::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("FirstTimestamp") && !value["FirstTimestamp"].IsNull())
    {
        if (!value["FirstTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.FirstTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTimestamp = string(value["FirstTimestamp"].GetString());
        m_firstTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastTimestamp") && !value["LastTimestamp"].IsNull())
    {
        if (!value["LastTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.LastTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTimestamp = string(value["LastTimestamp"].GetString());
        m_lastTimestampHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void Event::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_firstTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string Event::GetPodName() const
{
    return m_podName;
}

void Event::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool Event::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string Event::GetReason() const
{
    return m_reason;
}

void Event::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool Event::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string Event::GetType() const
{
    return m_type;
}

void Event::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Event::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Event::GetCount() const
{
    return m_count;
}

void Event::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Event::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string Event::GetFirstTimestamp() const
{
    return m_firstTimestamp;
}

void Event::SetFirstTimestamp(const string& _firstTimestamp)
{
    m_firstTimestamp = _firstTimestamp;
    m_firstTimestampHasBeenSet = true;
}

bool Event::FirstTimestampHasBeenSet() const
{
    return m_firstTimestampHasBeenSet;
}

string Event::GetLastTimestamp() const
{
    return m_lastTimestamp;
}

void Event::SetLastTimestamp(const string& _lastTimestamp)
{
    m_lastTimestamp = _lastTimestamp;
    m_lastTimestampHasBeenSet = true;
}

bool Event::LastTimestampHasBeenSet() const
{
    return m_lastTimestampHasBeenSet;
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

