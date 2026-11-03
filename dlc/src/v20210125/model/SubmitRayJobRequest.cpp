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

#include <tencentcloud/dlc/v20210125/model/SubmitRayJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SubmitRayJobRequest::SubmitRayJobRequest() :
    m_entrypointHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_autoscalerOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkConfigHasBeenSet(false)
{
}

string SubmitRayJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalerOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoscalerOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
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

    if (m_networkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkConfig.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitRayJobRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void SubmitRayJobRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool SubmitRayJobRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string SubmitRayJobRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void SubmitRayJobRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool SubmitRayJobRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string SubmitRayJobRequest::GetQueue() const
{
    return m_queue;
}

void SubmitRayJobRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool SubmitRayJobRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string SubmitRayJobRequest::GetJobName() const
{
    return m_jobName;
}

void SubmitRayJobRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool SubmitRayJobRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string SubmitRayJobRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void SubmitRayJobRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool SubmitRayJobRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string SubmitRayJobRequest::GetImage() const
{
    return m_image;
}

void SubmitRayJobRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SubmitRayJobRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SubmitRayJobRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void SubmitRayJobRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool SubmitRayJobRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string SubmitRayJobRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void SubmitRayJobRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool SubmitRayJobRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string SubmitRayJobRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void SubmitRayJobRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool SubmitRayJobRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string SubmitRayJobRequest::GetCatalog() const
{
    return m_catalog;
}

void SubmitRayJobRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool SubmitRayJobRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string SubmitRayJobRequest::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void SubmitRayJobRequest::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool SubmitRayJobRequest::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string SubmitRayJobRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void SubmitRayJobRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool SubmitRayJobRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string SubmitRayJobRequest::GetGroupId() const
{
    return m_groupId;
}

void SubmitRayJobRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SubmitRayJobRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t SubmitRayJobRequest::GetPriority() const
{
    return m_priority;
}

void SubmitRayJobRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool SubmitRayJobRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> SubmitRayJobRequest::GetTags() const
{
    return m_tags;
}

void SubmitRayJobRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SubmitRayJobRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string SubmitRayJobRequest::GetNetworkConfig() const
{
    return m_networkConfig;
}

void SubmitRayJobRequest::SetNetworkConfig(const string& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool SubmitRayJobRequest::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}


