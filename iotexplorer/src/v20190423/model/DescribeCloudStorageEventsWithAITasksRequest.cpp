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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageEventsWithAITasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeCloudStorageEventsWithAITasksRequest::DescribeCloudStorageEventsWithAITasksRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelIdHasBeenSet(false)
{
}

string DescribeCloudStorageEventsWithAITasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceTypes.begin(); itr != m_serviceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudStorageEventsWithAITasksRequest::GetProductId() const
{
    return m_productId;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeCloudStorageEventsWithAITasksRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

vector<string> DescribeCloudStorageEventsWithAITasksRequest::GetServiceTypes() const
{
    return m_serviceTypes;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetServiceTypes(const vector<string>& _serviceTypes)
{
    m_serviceTypes = _serviceTypes;
    m_serviceTypesHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::ServiceTypesHasBeenSet() const
{
    return m_serviceTypesHasBeenSet;
}

uint64_t DescribeCloudStorageEventsWithAITasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeCloudStorageEventsWithAITasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCloudStorageEventsWithAITasksRequest::GetContext() const
{
    return m_context;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

uint64_t DescribeCloudStorageEventsWithAITasksRequest::GetSize() const
{
    return m_size;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeCloudStorageEventsWithAITasksRequest::GetEventId() const
{
    return m_eventId;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeCloudStorageEventsWithAITasksRequest::GetUserId() const
{
    return m_userId;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t DescribeCloudStorageEventsWithAITasksRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeCloudStorageEventsWithAITasksRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeCloudStorageEventsWithAITasksRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}


