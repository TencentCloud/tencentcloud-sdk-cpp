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

#include <tencentcloud/iotvideo/v20211125/model/ControlDeviceDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ControlDeviceDataRequest::ControlDeviceDataRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_dataTimestampHasBeenSet(false)
{
}

string ControlDeviceDataRequest::ToJsonString() const
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

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataTimestamp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlDeviceDataRequest::GetProductId() const
{
    return m_productId;
}

void ControlDeviceDataRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ControlDeviceDataRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ControlDeviceDataRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ControlDeviceDataRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ControlDeviceDataRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ControlDeviceDataRequest::GetData() const
{
    return m_data;
}

void ControlDeviceDataRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ControlDeviceDataRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string ControlDeviceDataRequest::GetMethod() const
{
    return m_method;
}

void ControlDeviceDataRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ControlDeviceDataRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

int64_t ControlDeviceDataRequest::GetDataTimestamp() const
{
    return m_dataTimestamp;
}

void ControlDeviceDataRequest::SetDataTimestamp(const int64_t& _dataTimestamp)
{
    m_dataTimestamp = _dataTimestamp;
    m_dataTimestampHasBeenSet = true;
}

bool ControlDeviceDataRequest::DataTimestampHasBeenSet() const
{
    return m_dataTimestampHasBeenSet;
}


