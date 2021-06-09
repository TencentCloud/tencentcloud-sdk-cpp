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

#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeDeviceActionHistoryRequest::DescribeDeviceActionHistoryRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_minTimeHasBeenSet(false),
    m_maxTimeHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

string DescribeDeviceActionHistoryRequest::ToJsonString() const
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

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionId.c_str(), allocator).Move(), allocator);
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


string DescribeDeviceActionHistoryRequest::GetProductId() const
{
    return m_productId;
}

void DescribeDeviceActionHistoryRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeDeviceActionHistoryRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeDeviceActionHistoryRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DescribeDeviceActionHistoryRequest::GetMinTime() const
{
    return m_minTime;
}

void DescribeDeviceActionHistoryRequest::SetMinTime(const uint64_t& _minTime)
{
    m_minTime = _minTime;
    m_minTimeHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::MinTimeHasBeenSet() const
{
    return m_minTimeHasBeenSet;
}

uint64_t DescribeDeviceActionHistoryRequest::GetMaxTime() const
{
    return m_maxTime;
}

void DescribeDeviceActionHistoryRequest::SetMaxTime(const uint64_t& _maxTime)
{
    m_maxTime = _maxTime;
    m_maxTimeHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::MaxTimeHasBeenSet() const
{
    return m_maxTimeHasBeenSet;
}

string DescribeDeviceActionHistoryRequest::GetActionId() const
{
    return m_actionId;
}

void DescribeDeviceActionHistoryRequest::SetActionId(const string& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

uint64_t DescribeDeviceActionHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeviceActionHistoryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDeviceActionHistoryRequest::GetContext() const
{
    return m_context;
}

void DescribeDeviceActionHistoryRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeDeviceActionHistoryRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}


