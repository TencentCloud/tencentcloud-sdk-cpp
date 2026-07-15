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

#include <tencentcloud/es/v20180416/model/DescribeEventDataDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DescribeEventDataDetailRequest::DescribeEventDataDetailRequest() :
    m_instanceIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventTaskIdHasBeenSet(false)
{
}

string DescribeEventDataDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventTaskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEventDataDetailRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeEventDataDetailRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeEventDataDetailRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeEventDataDetailRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeEventDataDetailRequest::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeEventDataDetailRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t DescribeEventDataDetailRequest::GetEventTaskId() const
{
    return m_eventTaskId;
}

void DescribeEventDataDetailRequest::SetEventTaskId(const int64_t& _eventTaskId)
{
    m_eventTaskId = _eventTaskId;
    m_eventTaskIdHasBeenSet = true;
}

bool DescribeEventDataDetailRequest::EventTaskIdHasBeenSet() const
{
    return m_eventTaskIdHasBeenSet;
}


