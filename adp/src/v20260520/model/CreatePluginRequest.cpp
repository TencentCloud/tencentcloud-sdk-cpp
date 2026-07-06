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

#include <tencentcloud/adp/v20260520/model/CreatePluginRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CreatePluginRequest::CreatePluginRequest() :
    m_profileHasBeenSet(false),
    m_configHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_toolListHasBeenSet(false)
{
}

string CreatePluginRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_toolList.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


PluginProfile CreatePluginRequest::GetProfile() const
{
    return m_profile;
}

void CreatePluginRequest::SetProfile(const PluginProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreatePluginRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

PluginConfig CreatePluginRequest::GetConfig() const
{
    return m_config;
}

void CreatePluginRequest::SetConfig(const PluginConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreatePluginRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string CreatePluginRequest::GetSpaceId() const
{
    return m_spaceId;
}

void CreatePluginRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool CreatePluginRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

Tool CreatePluginRequest::GetToolList() const
{
    return m_toolList;
}

void CreatePluginRequest::SetToolList(const Tool& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool CreatePluginRequest::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}


