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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyPresetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifyPresetRequest::ModifyPresetRequest() :
    m_channelIdHasBeenSet(false),
    m_presetIdHasBeenSet(false),
    m_presetNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false)
{
}

string ModifyPresetRequest::ToJsonString() const
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

    if (m_presetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_presetId, allocator);
    }

    if (m_presetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_presetName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPresetRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyPresetRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyPresetRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ModifyPresetRequest::GetPresetId() const
{
    return m_presetId;
}

void ModifyPresetRequest::SetPresetId(const int64_t& _presetId)
{
    m_presetId = _presetId;
    m_presetIdHasBeenSet = true;
}

bool ModifyPresetRequest::PresetIdHasBeenSet() const
{
    return m_presetIdHasBeenSet;
}

string ModifyPresetRequest::GetPresetName() const
{
    return m_presetName;
}

void ModifyPresetRequest::SetPresetName(const string& _presetName)
{
    m_presetName = _presetName;
    m_presetNameHasBeenSet = true;
}

bool ModifyPresetRequest::PresetNameHasBeenSet() const
{
    return m_presetNameHasBeenSet;
}

string ModifyPresetRequest::GetDeviceId() const
{
    return m_deviceId;
}

void ModifyPresetRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ModifyPresetRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}


