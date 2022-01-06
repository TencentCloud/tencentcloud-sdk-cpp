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

#include <tencentcloud/iotvideoindustry/v20201201/model/CreateSceneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

CreateSceneRequest::CreateSceneRequest() :
    m_sceneNameHasBeenSet(false),
    m_sceneTriggerHasBeenSet(false),
    m_recordDurationHasBeenSet(false),
    m_storeDurationHasBeenSet(false),
    m_devicesHasBeenSet(false),
    m_channelsHasBeenSet(false)
{
}

string CreateSceneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTrigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneTrigger.c_str(), allocator).Move(), allocator);
    }

    if (m_recordDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordDuration, allocator);
    }

    if (m_storeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storeDuration, allocator);
    }

    if (m_devicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Devices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devices.begin(); itr != m_devices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSceneRequest::GetSceneName() const
{
    return m_sceneName;
}

void CreateSceneRequest::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool CreateSceneRequest::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

string CreateSceneRequest::GetSceneTrigger() const
{
    return m_sceneTrigger;
}

void CreateSceneRequest::SetSceneTrigger(const string& _sceneTrigger)
{
    m_sceneTrigger = _sceneTrigger;
    m_sceneTriggerHasBeenSet = true;
}

bool CreateSceneRequest::SceneTriggerHasBeenSet() const
{
    return m_sceneTriggerHasBeenSet;
}

int64_t CreateSceneRequest::GetRecordDuration() const
{
    return m_recordDuration;
}

void CreateSceneRequest::SetRecordDuration(const int64_t& _recordDuration)
{
    m_recordDuration = _recordDuration;
    m_recordDurationHasBeenSet = true;
}

bool CreateSceneRequest::RecordDurationHasBeenSet() const
{
    return m_recordDurationHasBeenSet;
}

int64_t CreateSceneRequest::GetStoreDuration() const
{
    return m_storeDuration;
}

void CreateSceneRequest::SetStoreDuration(const int64_t& _storeDuration)
{
    m_storeDuration = _storeDuration;
    m_storeDurationHasBeenSet = true;
}

bool CreateSceneRequest::StoreDurationHasBeenSet() const
{
    return m_storeDurationHasBeenSet;
}

vector<DeviceItem> CreateSceneRequest::GetDevices() const
{
    return m_devices;
}

void CreateSceneRequest::SetDevices(const vector<DeviceItem>& _devices)
{
    m_devices = _devices;
    m_devicesHasBeenSet = true;
}

bool CreateSceneRequest::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}

vector<ChannelItem> CreateSceneRequest::GetChannels() const
{
    return m_channels;
}

void CreateSceneRequest::SetChannels(const vector<ChannelItem>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool CreateSceneRequest::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}


