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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeCloudStorageAIServiceTasksRequest::DescribeCloudStorageAIServiceTasksRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fileURLExpireTimeHasBeenSet(false)
{
}

string DescribeCloudStorageAIServiceTasksRequest::ToJsonString() const
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

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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

    if (m_deviceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
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


string DescribeCloudStorageAIServiceTasksRequest::GetProductId() const
{
    return m_productId;
}

void DescribeCloudStorageAIServiceTasksRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeCloudStorageAIServiceTasksRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeCloudStorageAIServiceTasksRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeCloudStorageAIServiceTasksRequest::GetServiceType() const
{
    return m_serviceType;
}

void DescribeCloudStorageAIServiceTasksRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudStorageAIServiceTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudStorageAIServiceTasksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceTasksRequest::GetStatus() const
{
    return m_status;
}

void DescribeCloudStorageAIServiceTasksRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudStorageAIServiceTasksRequest::GetUserId() const
{
    return m_userId;
}

void DescribeCloudStorageAIServiceTasksRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t DescribeCloudStorageAIServiceTasksRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeCloudStorageAIServiceTasksRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

vector<string> DescribeCloudStorageAIServiceTasksRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void DescribeCloudStorageAIServiceTasksRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

int64_t DescribeCloudStorageAIServiceTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCloudStorageAIServiceTasksRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeCloudStorageAIServiceTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCloudStorageAIServiceTasksRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeCloudStorageAIServiceTasksRequest::GetFileURLExpireTime() const
{
    return m_fileURLExpireTime;
}

void DescribeCloudStorageAIServiceTasksRequest::SetFileURLExpireTime(const int64_t& _fileURLExpireTime)
{
    m_fileURLExpireTime = _fileURLExpireTime;
    m_fileURLExpireTimeHasBeenSet = true;
}

bool DescribeCloudStorageAIServiceTasksRequest::FileURLExpireTimeHasBeenSet() const
{
    return m_fileURLExpireTimeHasBeenSet;
}


