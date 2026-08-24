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

#include <tencentcloud/ags/v20250920/model/ModifyDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ModifyDeploymentRequest::ModifyDeploymentRequest() :
    m_deploymentIdHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string ModifyDeploymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
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


string ModifyDeploymentRequest::GetDeploymentId() const
{
    return m_deploymentId;
}

void ModifyDeploymentRequest::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool ModifyDeploymentRequest::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

ScalingConfiguration ModifyDeploymentRequest::GetScalingConfiguration() const
{
    return m_scalingConfiguration;
}

void ModifyDeploymentRequest::SetScalingConfiguration(const ScalingConfiguration& _scalingConfiguration)
{
    m_scalingConfiguration = _scalingConfiguration;
    m_scalingConfigurationHasBeenSet = true;
}

bool ModifyDeploymentRequest::ScalingConfigurationHasBeenSet() const
{
    return m_scalingConfigurationHasBeenSet;
}

LifecycleConfiguration ModifyDeploymentRequest::GetLifecycleConfiguration() const
{
    return m_lifecycleConfiguration;
}

void ModifyDeploymentRequest::SetLifecycleConfiguration(const LifecycleConfiguration& _lifecycleConfiguration)
{
    m_lifecycleConfiguration = _lifecycleConfiguration;
    m_lifecycleConfigurationHasBeenSet = true;
}

bool ModifyDeploymentRequest::LifecycleConfigurationHasBeenSet() const
{
    return m_lifecycleConfigurationHasBeenSet;
}

vector<Tag> ModifyDeploymentRequest::GetTags() const
{
    return m_tags;
}

void ModifyDeploymentRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModifyDeploymentRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


