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

#include <tencentcloud/iotvideoindustry/v20201201/model/ControlHomePositionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ControlHomePositionRequest::ControlHomePositionRequest() :
    m_channelIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_resetTimeHasBeenSet(false)
{
}

string ControlHomePositionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_presetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_presetId, allocator);
    }

    if (m_resetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resetTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlHomePositionRequest::GetChannelId() const
{
    return m_channelId;
}

void ControlHomePositionRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ControlHomePositionRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string ControlHomePositionRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ControlHomePositionRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ControlHomePositionRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

int64_t ControlHomePositionRequest::GetEnable() const
{
    return m_enable;
}

void ControlHomePositionRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ControlHomePositionRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t ControlHomePositionRequest::GetPresetId() const
{
    return m_presetId;
}

void ControlHomePositionRequest::SetPresetId(const int64_t& _presetId)
{
    m_presetId = _presetId;
    m_presetIdHasBeenSet = true;
}

bool ControlHomePositionRequest::PresetIdHasBeenSet() const
{
    return m_presetIdHasBeenSet;
}

int64_t ControlHomePositionRequest::GetResetTime() const
{
    return m_resetTime;
}

void ControlHomePositionRequest::SetResetTime(const int64_t& _resetTime)
{
    m_resetTime = _resetTime;
    m_resetTimeHasBeenSet = true;
}

bool ControlHomePositionRequest::ResetTimeHasBeenSet() const
{
    return m_resetTimeHasBeenSet;
}


