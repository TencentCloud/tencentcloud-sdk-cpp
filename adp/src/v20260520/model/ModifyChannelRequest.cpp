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

#include <tencentcloud/adp/v20260520/model/ModifyChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyChannelRequest::ModifyChannelRequest() :
    m_appIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_specHasBeenSet(false),
    m_updateMaskHasBeenSet(false)
{
}

string ModifyChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scene, allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyChannelRequest::GetAppId() const
{
    return m_appId;
}

void ModifyChannelRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyChannelRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ModifyChannelRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyChannelRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyChannelRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t ModifyChannelRequest::GetScene() const
{
    return m_scene;
}

void ModifyChannelRequest::SetScene(const int64_t& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ModifyChannelRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

ChannelSpec ModifyChannelRequest::GetSpec() const
{
    return m_spec;
}

void ModifyChannelRequest::SetSpec(const ChannelSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ModifyChannelRequest::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

FieldMask ModifyChannelRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyChannelRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyChannelRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}


