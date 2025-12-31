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

#include <tencentcloud/ags/v20250920/model/UpdateSandboxToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

UpdateSandboxToolRequest::UpdateSandboxToolRequest() :
    m_toolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_customConfigurationHasBeenSet(false)
{
}

string UpdateSandboxToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateSandboxToolRequest::GetToolId() const
{
    return m_toolId;
}

void UpdateSandboxToolRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool UpdateSandboxToolRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string UpdateSandboxToolRequest::GetDescription() const
{
    return m_description;
}

void UpdateSandboxToolRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateSandboxToolRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

NetworkConfiguration UpdateSandboxToolRequest::GetNetworkConfiguration() const
{
    return m_networkConfiguration;
}

void UpdateSandboxToolRequest::SetNetworkConfiguration(const NetworkConfiguration& _networkConfiguration)
{
    m_networkConfiguration = _networkConfiguration;
    m_networkConfigurationHasBeenSet = true;
}

bool UpdateSandboxToolRequest::NetworkConfigurationHasBeenSet() const
{
    return m_networkConfigurationHasBeenSet;
}

vector<Tag> UpdateSandboxToolRequest::GetTags() const
{
    return m_tags;
}

void UpdateSandboxToolRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UpdateSandboxToolRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

CustomConfiguration UpdateSandboxToolRequest::GetCustomConfiguration() const
{
    return m_customConfiguration;
}

void UpdateSandboxToolRequest::SetCustomConfiguration(const CustomConfiguration& _customConfiguration)
{
    m_customConfiguration = _customConfiguration;
    m_customConfigurationHasBeenSet = true;
}

bool UpdateSandboxToolRequest::CustomConfigurationHasBeenSet() const
{
    return m_customConfigurationHasBeenSet;
}


