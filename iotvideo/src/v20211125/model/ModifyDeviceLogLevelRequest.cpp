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

#include <tencentcloud/iotvideo/v20211125/model/ModifyDeviceLogLevelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ModifyDeviceLogLevelRequest::ModifyDeviceLogLevelRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_logLevelHasBeenSet(false)
{
}

string ModifyDeviceLogLevelRequest::ToJsonString() const
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

    if (m_logLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logLevel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDeviceLogLevelRequest::GetProductId() const
{
    return m_productId;
}

void ModifyDeviceLogLevelRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyDeviceLogLevelRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyDeviceLogLevelRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyDeviceLogLevelRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyDeviceLogLevelRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t ModifyDeviceLogLevelRequest::GetLogLevel() const
{
    return m_logLevel;
}

void ModifyDeviceLogLevelRequest::SetLogLevel(const uint64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool ModifyDeviceLogLevelRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}


