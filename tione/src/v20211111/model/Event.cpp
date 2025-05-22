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

#include <tencentcloud/tione/v20211111/model/Event.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Event::Event() :
    m_idHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_firstTimestampHasBeenSet(false),
    m_lastTimestampHasBeenSet(false),
    m_countHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourceKindHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

CoreInternalOutcome Event::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
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

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
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

    if (value.HasMember("ResourceKind") && !value["ResourceKind"].IsNull())
    {
        if (!value["ResourceKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ResourceKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceKind = string(value["ResourceKind"].GetString());
        m_resourceKindHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Event::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceKind.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

}


string Event::GetId() const
{
    return m_id;
}

void Event::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Event::IdHasBeenSet() const
{
    return m_idHasBeenSet;
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

uint64_t Event::GetCount() const
{
    return m_count;
}

void Event::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Event::CountHasBeenSet() const
{
    return m_countHasBeenSet;
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

string Event::GetResourceKind() const
{
    return m_resourceKind;
}

void Event::SetResourceKind(const string& _resourceKind)
{
    m_resourceKind = _resourceKind;
    m_resourceKindHasBeenSet = true;
}

bool Event::ResourceKindHasBeenSet() const
{
    return m_resourceKindHasBeenSet;
}

string Event::GetResourceName() const
{
    return m_resourceName;
}

void Event::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool Event::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

