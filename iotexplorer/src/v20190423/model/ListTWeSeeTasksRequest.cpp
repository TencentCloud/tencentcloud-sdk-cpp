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

#include <tencentcloud/iotexplorer/v20190423/model/ListTWeSeeTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ListTWeSeeTasksRequest::ListTWeSeeTasksRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceCategoryHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_serviceTypesHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileURLExpireTimeHasBeenSet(false)
{
}

string ListTWeSeeTasksRequest::ToJsonString() const
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

    if (m_serviceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_fileURLExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURLExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileURLExpireTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListTWeSeeTasksRequest::GetProductId() const
{
    return m_productId;
}

void ListTWeSeeTasksRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ListTWeSeeTasksRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ListTWeSeeTasksRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ListTWeSeeTasksRequest::GetServiceCategory() const
{
    return m_serviceCategory;
}

void ListTWeSeeTasksRequest::SetServiceCategory(const string& _serviceCategory)
{
    m_serviceCategory = _serviceCategory;
    m_serviceCategoryHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::ServiceCategoryHasBeenSet() const
{
    return m_serviceCategoryHasBeenSet;
}

uint64_t ListTWeSeeTasksRequest::GetLimit() const
{
    return m_limit;
}

void ListTWeSeeTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListTWeSeeTasksRequest::GetOffset() const
{
    return m_offset;
}

void ListTWeSeeTasksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> ListTWeSeeTasksRequest::GetServiceTypes() const
{
    return m_serviceTypes;
}

void ListTWeSeeTasksRequest::SetServiceTypes(const vector<string>& _serviceTypes)
{
    m_serviceTypes = _serviceTypes;
    m_serviceTypesHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::ServiceTypesHasBeenSet() const
{
    return m_serviceTypesHasBeenSet;
}

uint64_t ListTWeSeeTasksRequest::GetChannelId() const
{
    return m_channelId;
}

void ListTWeSeeTasksRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ListTWeSeeTasksRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void ListTWeSeeTasksRequest::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t ListTWeSeeTasksRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void ListTWeSeeTasksRequest::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

int64_t ListTWeSeeTasksRequest::GetStatus() const
{
    return m_status;
}

void ListTWeSeeTasksRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ListTWeSeeTasksRequest::GetFileURLExpireTime() const
{
    return m_fileURLExpireTime;
}

void ListTWeSeeTasksRequest::SetFileURLExpireTime(const int64_t& _fileURLExpireTime)
{
    m_fileURLExpireTime = _fileURLExpireTime;
    m_fileURLExpireTimeHasBeenSet = true;
}

bool ListTWeSeeTasksRequest::FileURLExpireTimeHasBeenSet() const
{
    return m_fileURLExpireTimeHasBeenSet;
}


