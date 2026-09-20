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

#include <tencentcloud/iotexplorer/v20190423/model/GetVodCloudStorageVideoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetVodCloudStorageVideoListRequest::GetVodCloudStorageVideoListRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_expireSecHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_sizeHasBeenSet(false)
{
}

string GetVodCloudStorageVideoListRequest::ToJsonString() const
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

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_expireSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireSec, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetVodCloudStorageVideoListRequest::GetProductId() const
{
    return m_productId;
}

void GetVodCloudStorageVideoListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string GetVodCloudStorageVideoListRequest::GetDeviceName() const
{
    return m_deviceName;
}

void GetVodCloudStorageVideoListRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string GetVodCloudStorageVideoListRequest::GetDate() const
{
    return m_date;
}

void GetVodCloudStorageVideoListRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetChannelId() const
{
    return m_channelId;
}

void GetVodCloudStorageVideoListRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetStartTime() const
{
    return m_startTime;
}

void GetVodCloudStorageVideoListRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetEndTime() const
{
    return m_endTime;
}

void GetVodCloudStorageVideoListRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetVodCloudStorageVideoListRequest::GetUserId() const
{
    return m_userId;
}

void GetVodCloudStorageVideoListRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GetVodCloudStorageVideoListRequest::GetTimeZone() const
{
    return m_timeZone;
}

void GetVodCloudStorageVideoListRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetExpireSec() const
{
    return m_expireSec;
}

void GetVodCloudStorageVideoListRequest::SetExpireSec(const uint64_t& _expireSec)
{
    m_expireSec = _expireSec;
    m_expireSecHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::ExpireSecHasBeenSet() const
{
    return m_expireSecHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetPlatform() const
{
    return m_platform;
}

void GetVodCloudStorageVideoListRequest::SetPlatform(const uint64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string GetVodCloudStorageVideoListRequest::GetContext() const
{
    return m_context;
}

void GetVodCloudStorageVideoListRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

uint64_t GetVodCloudStorageVideoListRequest::GetSize() const
{
    return m_size;
}

void GetVodCloudStorageVideoListRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GetVodCloudStorageVideoListRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}


