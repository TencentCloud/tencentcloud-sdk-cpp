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

#include <tencentcloud/iotexplorer/v20190423/model/GetVodCloudStorageEventListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

GetVodCloudStorageEventListRequest::GetVodCloudStorageEventListRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_expireSecHasBeenSet(false),
    m_platformHasBeenSet(false)
{
}

string GetVodCloudStorageEventListRequest::ToJsonString() const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetVodCloudStorageEventListRequest::GetProductId() const
{
    return m_productId;
}

void GetVodCloudStorageEventListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string GetVodCloudStorageEventListRequest::GetDeviceName() const
{
    return m_deviceName;
}

void GetVodCloudStorageEventListRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string GetVodCloudStorageEventListRequest::GetDate() const
{
    return m_date;
}

void GetVodCloudStorageEventListRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string GetVodCloudStorageEventListRequest::GetContext() const
{
    return m_context;
}

void GetVodCloudStorageEventListRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

uint64_t GetVodCloudStorageEventListRequest::GetSize() const
{
    return m_size;
}

void GetVodCloudStorageEventListRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t GetVodCloudStorageEventListRequest::GetChannelId() const
{
    return m_channelId;
}

void GetVodCloudStorageEventListRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string GetVodCloudStorageEventListRequest::GetUserId() const
{
    return m_userId;
}

void GetVodCloudStorageEventListRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string GetVodCloudStorageEventListRequest::GetTimeZone() const
{
    return m_timeZone;
}

void GetVodCloudStorageEventListRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

uint64_t GetVodCloudStorageEventListRequest::GetExpireSec() const
{
    return m_expireSec;
}

void GetVodCloudStorageEventListRequest::SetExpireSec(const uint64_t& _expireSec)
{
    m_expireSec = _expireSec;
    m_expireSecHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::ExpireSecHasBeenSet() const
{
    return m_expireSecHasBeenSet;
}

uint64_t GetVodCloudStorageEventListRequest::GetPlatform() const
{
    return m_platform;
}

void GetVodCloudStorageEventListRequest::SetPlatform(const uint64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool GetVodCloudStorageEventListRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}


