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

#include <tencentcloud/ags/v20250920/model/CreateDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CreateDeploymentRequest::CreateDeploymentRequest() :
    m_deploymentNameHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_affinityConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDeploymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_scalingConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScalingConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scalingConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lifecycleConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycleConfiguration.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_affinityConfigurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffinityConfiguration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_affinityConfiguration.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDeploymentRequest::GetDeploymentName() const
{
    return m_deploymentName;
}

void CreateDeploymentRequest::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool CreateDeploymentRequest::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string CreateDeploymentRequest::GetToolId() const
{
    return m_toolId;
}

void CreateDeploymentRequest::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool CreateDeploymentRequest::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

ScalingConfiguration CreateDeploymentRequest::GetScalingConfiguration() const
{
    return m_scalingConfiguration;
}

void CreateDeploymentRequest::SetScalingConfiguration(const ScalingConfiguration& _scalingConfiguration)
{
    m_scalingConfiguration = _scalingConfiguration;
    m_scalingConfigurationHasBeenSet = true;
}

bool CreateDeploymentRequest::ScalingConfigurationHasBeenSet() const
{
    return m_scalingConfigurationHasBeenSet;
}

LifecycleConfiguration CreateDeploymentRequest::GetLifecycleConfiguration() const
{
    return m_lifecycleConfiguration;
}

void CreateDeploymentRequest::SetLifecycleConfiguration(const LifecycleConfiguration& _lifecycleConfiguration)
{
    m_lifecycleConfiguration = _lifecycleConfiguration;
    m_lifecycleConfigurationHasBeenSet = true;
}

bool CreateDeploymentRequest::LifecycleConfigurationHasBeenSet() const
{
    return m_lifecycleConfigurationHasBeenSet;
}

AffinityConfiguration CreateDeploymentRequest::GetAffinityConfiguration() const
{
    return m_affinityConfiguration;
}

void CreateDeploymentRequest::SetAffinityConfiguration(const AffinityConfiguration& _affinityConfiguration)
{
    m_affinityConfiguration = _affinityConfiguration;
    m_affinityConfigurationHasBeenSet = true;
}

bool CreateDeploymentRequest::AffinityConfigurationHasBeenSet() const
{
    return m_affinityConfigurationHasBeenSet;
}

vector<Tag> CreateDeploymentRequest::GetTags() const
{
    return m_tags;
}

void CreateDeploymentRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDeploymentRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


