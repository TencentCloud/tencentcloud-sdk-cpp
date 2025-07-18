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

#include <tencentcloud/iotvideoindustry/v20201201/model/ModifyBindSceneDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

ModifyBindSceneDeviceRequest::ModifyBindSceneDeviceRequest() :
    m_sceneIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_devicesHasBeenSet(false)
{
}

string ModifyBindSceneDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sceneId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBindSceneDeviceRequest::GetSceneId() const
{
    return m_sceneId;
}

void ModifyBindSceneDeviceRequest::SetSceneId(const int64_t& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool ModifyBindSceneDeviceRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

int64_t ModifyBindSceneDeviceRequest::GetType() const
{
    return m_type;
}

void ModifyBindSceneDeviceRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyBindSceneDeviceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<DeviceItem> ModifyBindSceneDeviceRequest::GetDevices() const
{
    return m_devices;
}

void ModifyBindSceneDeviceRequest::SetDevices(const vector<DeviceItem>& _devices)
{
    m_devices = _devices;
    m_devicesHasBeenSet = true;
}

bool ModifyBindSceneDeviceRequest::DevicesHasBeenSet() const
{
    return m_devicesHasBeenSet;
}


