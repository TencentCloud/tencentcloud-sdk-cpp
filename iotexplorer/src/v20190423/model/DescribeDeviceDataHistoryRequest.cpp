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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceDataHistoryRequest::DescribeDeviceDataHistoryRequest() :
    m_minTimeHasBeenSet(false),
    m_maxTimeHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

string DescribeDeviceDataHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_minTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minTime, allocator);
    }

    if (m_maxTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTime, allocator);
    }

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

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDeviceDataHistoryRequest::GetMinTime() const
{
    return m_minTime;
}

void DescribeDeviceDataHistoryRequest::SetMinTime(const uint64_t& _minTime)
{
    m_minTime = _minTime;
    m_minTimeHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::MinTimeHasBeenSet() const
{
    return m_minTimeHasBeenSet;
}

uint64_t DescribeDeviceDataHistoryRequest::GetMaxTime() const
{
    return m_maxTime;
}

void DescribeDeviceDataHistoryRequest::SetMaxTime(const uint64_t& _maxTime)
{
    m_maxTime = _maxTime;
    m_maxTimeHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::MaxTimeHasBeenSet() const
{
    return m_maxTimeHasBeenSet;
}

string DescribeDeviceDataHistoryRequest::GetProductId() const
{
    return m_productId;
}

void DescribeDeviceDataHistoryRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeDeviceDataHistoryRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeDeviceDataHistoryRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DescribeDeviceDataHistoryRequest::GetFieldName() const
{
    return m_fieldName;
}

void DescribeDeviceDataHistoryRequest::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

int64_t DescribeDeviceDataHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeviceDataHistoryRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDeviceDataHistoryRequest::GetContext() const
{
    return m_context;
}

void DescribeDeviceDataHistoryRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeDeviceDataHistoryRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


