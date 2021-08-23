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

#include <tencentcloud/tsf/v20180326/model/ContainerEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerEvent::ContainerEvent() :
    m_firstTimestampHasBeenSet(false),
    m_lastTimestampHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ContainerEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstTimestamp") && !value["FirstTimestamp"].IsNull())
    {
        if (!value["FirstTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.FirstTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_firstTimestamp = value["FirstTimestamp"].GetInt64();
        m_firstTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastTimestamp") && !value["LastTimestamp"].IsNull())
    {
        if (!value["LastTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.LastTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastTimestamp = value["LastTimestamp"].GetInt64();
        m_lastTimestampHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerEvent.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstTimestamp, allocator);
    }

    if (m_lastTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTimestamp, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t ContainerEvent::GetFirstTimestamp() const
{
    return m_firstTimestamp;
}

void ContainerEvent::SetFirstTimestamp(const int64_t& _firstTimestamp)
{
    m_firstTimestamp = _firstTimestamp;
    m_firstTimestampHasBeenSet = true;
}

bool ContainerEvent::FirstTimestampHasBeenSet() const
{
    return m_firstTimestampHasBeenSet;
}

int64_t ContainerEvent::GetLastTimestamp() const
{
    return m_lastTimestamp;
}

void ContainerEvent::SetLastTimestamp(const int64_t& _lastTimestamp)
{
    m_lastTimestamp = _lastTimestamp;
    m_lastTimestampHasBeenSet = true;
}

bool ContainerEvent::LastTimestampHasBeenSet() const
{
    return m_lastTimestampHasBeenSet;
}

string ContainerEvent::GetType() const
{
    return m_type;
}

void ContainerEvent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContainerEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ContainerEvent::GetKind() const
{
    return m_kind;
}

void ContainerEvent::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool ContainerEvent::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string ContainerEvent::GetName() const
{
    return m_name;
}

void ContainerEvent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerEvent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerEvent::GetReason() const
{
    return m_reason;
}

void ContainerEvent::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ContainerEvent::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ContainerEvent::GetMessage() const
{
    return m_message;
}

void ContainerEvent::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ContainerEvent::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t ContainerEvent::GetCount() const
{
    return m_count;
}

void ContainerEvent::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ContainerEvent::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

