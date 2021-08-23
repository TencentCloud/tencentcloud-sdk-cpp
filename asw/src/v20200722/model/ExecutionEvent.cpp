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

#include <tencentcloud/asw/v20200722/model/ExecutionEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

ExecutionEvent::ExecutionEvent() :
    m_executionResourceNameHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventCategoryHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_exceptionHasBeenSet(false)
{
}

CoreInternalOutcome ExecutionEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecutionResourceName") && !value["ExecutionResourceName"].IsNull())
    {
        if (!value["ExecutionResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.ExecutionResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionResourceName = string(value["ExecutionResourceName"].GetString());
        m_executionResourceNameHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("EventCategory") && !value["EventCategory"].IsNull())
    {
        if (!value["EventCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.EventCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCategory = string(value["EventCategory"].GetString());
        m_eventCategoryHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Exception") && !value["Exception"].IsNull())
    {
        if (!value["Exception"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionEvent.Exception` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exception = string(value["Exception"].GetString());
        m_exceptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutionEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executionResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_eventCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exception";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exception.c_str(), allocator).Move(), allocator);
    }

}


string ExecutionEvent::GetExecutionResourceName() const
{
    return m_executionResourceName;
}

void ExecutionEvent::SetExecutionResourceName(const string& _executionResourceName)
{
    m_executionResourceName = _executionResourceName;
    m_executionResourceNameHasBeenSet = true;
}

bool ExecutionEvent::ExecutionResourceNameHasBeenSet() const
{
    return m_executionResourceNameHasBeenSet;
}

int64_t ExecutionEvent::GetEventId() const
{
    return m_eventId;
}

void ExecutionEvent::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool ExecutionEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string ExecutionEvent::GetEventCategory() const
{
    return m_eventCategory;
}

void ExecutionEvent::SetEventCategory(const string& _eventCategory)
{
    m_eventCategory = _eventCategory;
    m_eventCategoryHasBeenSet = true;
}

bool ExecutionEvent::EventCategoryHasBeenSet() const
{
    return m_eventCategoryHasBeenSet;
}

string ExecutionEvent::GetStepName() const
{
    return m_stepName;
}

void ExecutionEvent::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool ExecutionEvent::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string ExecutionEvent::GetResourceName() const
{
    return m_resourceName;
}

void ExecutionEvent::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ExecutionEvent::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ExecutionEvent::GetTimestamp() const
{
    return m_timestamp;
}

void ExecutionEvent::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ExecutionEvent::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string ExecutionEvent::GetContent() const
{
    return m_content;
}

void ExecutionEvent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ExecutionEvent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ExecutionEvent::GetException() const
{
    return m_exception;
}

void ExecutionEvent::SetException(const string& _exception)
{
    m_exception = _exception;
    m_exceptionHasBeenSet = true;
}

bool ExecutionEvent::ExceptionHasBeenSet() const
{
    return m_exceptionHasBeenSet;
}

