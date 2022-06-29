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

#include <tencentcloud/iecp/v20210914/model/ModifyIotDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyIotDeviceRequest::ModifyIotDeviceRequest() :
    m_deviceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_logSettingHasBeenSet(false),
    m_logLevelHasBeenSet(false)
{
}

string ModifyIotDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deviceId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disabled, allocator);
    }

    if (m_logSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logSetting, allocator);
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


int64_t ModifyIotDeviceRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ModifyIotDeviceRequest::SetDeviceId(const int64_t& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ModifyIotDeviceRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string ModifyIotDeviceRequest::GetDescription() const
{
    return m_description;
}

void ModifyIotDeviceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyIotDeviceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyIotDeviceRequest::GetDisabled() const
{
    return m_disabled;
}

void ModifyIotDeviceRequest::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool ModifyIotDeviceRequest::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

int64_t ModifyIotDeviceRequest::GetLogSetting() const
{
    return m_logSetting;
}

void ModifyIotDeviceRequest::SetLogSetting(const int64_t& _logSetting)
{
    m_logSetting = _logSetting;
    m_logSettingHasBeenSet = true;
}

bool ModifyIotDeviceRequest::LogSettingHasBeenSet() const
{
    return m_logSettingHasBeenSet;
}

int64_t ModifyIotDeviceRequest::GetLogLevel() const
{
    return m_logLevel;
}

void ModifyIotDeviceRequest::SetLogLevel(const int64_t& _logLevel)
{
    m_logLevel = _logLevel;
    m_logLevelHasBeenSet = true;
}

bool ModifyIotDeviceRequest::LogLevelHasBeenSet() const
{
    return m_logLevelHasBeenSet;
}


