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

#include <tencentcloud/iotcloud/v20180614/model/DescribeDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

DescribeDevicesRequest::DescribeDevicesRequest() :
    m_productIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_deviceNameHasBeenSet(false)
{
}

string DescribeDevicesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDevicesRequest::GetProductId() const
{
    return m_productId;
}

void DescribeDevicesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeDevicesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDevicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDevicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDevicesRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void DescribeDevicesRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool DescribeDevicesRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

string DescribeDevicesRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeDevicesRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeDevicesRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}


