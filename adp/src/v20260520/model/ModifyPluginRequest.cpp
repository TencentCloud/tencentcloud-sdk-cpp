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

#include <tencentcloud/adp/v20260520/model/ModifyPluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ModifyPluginRequest::ModifyPluginRequest() :
    m_pluginIdHasBeenSet(false),
    m_pluginVersionHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_configHasBeenSet(false),
    m_updateMaskHasBeenSet(false),
    m_toolListHasBeenSet(false)
{
}

string ModifyPluginRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pluginVersion, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_updateMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMask";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateMask.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_toolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolList.begin(); itr != m_toolList.end(); ++itr, ++i)
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


string ModifyPluginRequest::GetPluginId() const
{
    return m_pluginId;
}

void ModifyPluginRequest::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool ModifyPluginRequest::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

int64_t ModifyPluginRequest::GetPluginVersion() const
{
    return m_pluginVersion;
}

void ModifyPluginRequest::SetPluginVersion(const int64_t& _pluginVersion)
{
    m_pluginVersion = _pluginVersion;
    m_pluginVersionHasBeenSet = true;
}

bool ModifyPluginRequest::PluginVersionHasBeenSet() const
{
    return m_pluginVersionHasBeenSet;
}

PluginProfile ModifyPluginRequest::GetProfile() const
{
    return m_profile;
}

void ModifyPluginRequest::SetProfile(const PluginProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ModifyPluginRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

PluginConfig ModifyPluginRequest::GetConfig() const
{
    return m_config;
}

void ModifyPluginRequest::SetConfig(const PluginConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyPluginRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

FieldMask ModifyPluginRequest::GetUpdateMask() const
{
    return m_updateMask;
}

void ModifyPluginRequest::SetUpdateMask(const FieldMask& _updateMask)
{
    m_updateMask = _updateMask;
    m_updateMaskHasBeenSet = true;
}

bool ModifyPluginRequest::UpdateMaskHasBeenSet() const
{
    return m_updateMaskHasBeenSet;
}

vector<Tool> ModifyPluginRequest::GetToolList() const
{
    return m_toolList;
}

void ModifyPluginRequest::SetToolList(const vector<Tool>& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool ModifyPluginRequest::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}


