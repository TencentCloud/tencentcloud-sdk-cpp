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

#include <tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreateDeviceVirtualGroupRequest::CreateDeviceVirtualGroupRequest() :
    m_deviceVirtualGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_autoMinuteHasBeenSet(false),
    m_autoRulesHasBeenSet(false)
{
}

string CreateDeviceVirtualGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceVirtualGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVirtualGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceVirtualGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osType, allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeType, allocator);
    }

    if (m_autoMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMinute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoMinute, allocator);
    }

    if (m_autoRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoRules.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeviceVirtualGroupRequest::GetDeviceVirtualGroupName() const
{
    return m_deviceVirtualGroupName;
}

void CreateDeviceVirtualGroupRequest::SetDeviceVirtualGroupName(const string& _deviceVirtualGroupName)
{
    m_deviceVirtualGroupName = _deviceVirtualGroupName;
    m_deviceVirtualGroupNameHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::DeviceVirtualGroupNameHasBeenSet() const
{
    return m_deviceVirtualGroupNameHasBeenSet;
}

string CreateDeviceVirtualGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateDeviceVirtualGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateDeviceVirtualGroupRequest::GetOsType() const
{
    return m_osType;
}

void CreateDeviceVirtualGroupRequest::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t CreateDeviceVirtualGroupRequest::GetTimeType() const
{
    return m_timeType;
}

void CreateDeviceVirtualGroupRequest::SetTimeType(const int64_t& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

int64_t CreateDeviceVirtualGroupRequest::GetAutoMinute() const
{
    return m_autoMinute;
}

void CreateDeviceVirtualGroupRequest::SetAutoMinute(const int64_t& _autoMinute)
{
    m_autoMinute = _autoMinute;
    m_autoMinuteHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::AutoMinuteHasBeenSet() const
{
    return m_autoMinuteHasBeenSet;
}

ComplexRule CreateDeviceVirtualGroupRequest::GetAutoRules() const
{
    return m_autoRules;
}

void CreateDeviceVirtualGroupRequest::SetAutoRules(const ComplexRule& _autoRules)
{
    m_autoRules = _autoRules;
    m_autoRulesHasBeenSet = true;
}

bool CreateDeviceVirtualGroupRequest::AutoRulesHasBeenSet() const
{
    return m_autoRulesHasBeenSet;
}


