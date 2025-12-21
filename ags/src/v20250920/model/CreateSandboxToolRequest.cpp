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

#include <tencentcloud/ags/v20250920/model/CreateSandboxToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CreateSandboxToolRequest::CreateSandboxToolRequest() :
    m_toolNameHasBeenSet(false),
    m_toolTypeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultTimeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_storageMountsHasBeenSet(false)
{
}

string CreateSandboxToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultTimeout.c_str(), allocator).Move(), allocator);
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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_storageMountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_storageMounts.begin(); itr != m_storageMounts.end(); ++itr, ++i)
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


string CreateSandboxToolRequest::GetToolName() const
{
    return m_toolName;
}

void CreateSandboxToolRequest::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool CreateSandboxToolRequest::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string CreateSandboxToolRequest::GetToolType() const
{
    return m_toolType;
}

void CreateSandboxToolRequest::SetToolType(const string& _toolType)
{
    m_toolType = _toolType;
    m_toolTypeHasBeenSet = true;
}

bool CreateSandboxToolRequest::ToolTypeHasBeenSet() const
{
    return m_toolTypeHasBeenSet;
}

NetworkConfiguration CreateSandboxToolRequest::GetNetworkConfiguration() const
{
    return m_networkConfiguration;
}

void CreateSandboxToolRequest::SetNetworkConfiguration(const NetworkConfiguration& _networkConfiguration)
{
    m_networkConfiguration = _networkConfiguration;
    m_networkConfigurationHasBeenSet = true;
}

bool CreateSandboxToolRequest::NetworkConfigurationHasBeenSet() const
{
    return m_networkConfigurationHasBeenSet;
}

string CreateSandboxToolRequest::GetDescription() const
{
    return m_description;
}

void CreateSandboxToolRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateSandboxToolRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateSandboxToolRequest::GetDefaultTimeout() const
{
    return m_defaultTimeout;
}

void CreateSandboxToolRequest::SetDefaultTimeout(const string& _defaultTimeout)
{
    m_defaultTimeout = _defaultTimeout;
    m_defaultTimeoutHasBeenSet = true;
}

bool CreateSandboxToolRequest::DefaultTimeoutHasBeenSet() const
{
    return m_defaultTimeoutHasBeenSet;
}

vector<Tag> CreateSandboxToolRequest::GetTags() const
{
    return m_tags;
}

void CreateSandboxToolRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSandboxToolRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateSandboxToolRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateSandboxToolRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateSandboxToolRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string CreateSandboxToolRequest::GetRoleArn() const
{
    return m_roleArn;
}

void CreateSandboxToolRequest::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool CreateSandboxToolRequest::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

vector<StorageMount> CreateSandboxToolRequest::GetStorageMounts() const
{
    return m_storageMounts;
}

void CreateSandboxToolRequest::SetStorageMounts(const vector<StorageMount>& _storageMounts)
{
    m_storageMounts = _storageMounts;
    m_storageMountsHasBeenSet = true;
}

bool CreateSandboxToolRequest::StorageMountsHasBeenSet() const
{
    return m_storageMountsHasBeenSet;
}


