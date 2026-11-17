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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceCloudStoragePackagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceCloudStoragePackagesRequest::DescribeDeviceCloudStoragePackagesRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_mediaTypeHasBeenSet(false)
{
}

string DescribeDeviceCloudStoragePackagesRequest::ToJsonString() const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceCloudStoragePackagesRequest::GetProductId() const
{
    return m_productId;
}

void DescribeDeviceCloudStoragePackagesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeDeviceCloudStoragePackagesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeDeviceCloudStoragePackagesRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeDeviceCloudStoragePackagesRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeDeviceCloudStoragePackagesRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DescribeDeviceCloudStoragePackagesRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeDeviceCloudStoragePackagesRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeDeviceCloudStoragePackagesRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeDeviceCloudStoragePackagesRequest::GetMediaType() const
{
    return m_mediaType;
}

void DescribeDeviceCloudStoragePackagesRequest::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool DescribeDeviceCloudStoragePackagesRequest::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}


