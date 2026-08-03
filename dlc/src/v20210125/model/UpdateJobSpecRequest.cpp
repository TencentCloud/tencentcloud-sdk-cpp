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

#include <tencentcloud/dlc/v20210125/model/UpdateJobSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateJobSpecRequest::UpdateJobSpecRequest() :
    m_specIdHasBeenSet(false),
    m_entrypointHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imagePullTypeHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_autoscalerOptionsHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_resourceConfigIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_jobPackageHasBeenSet(false),
    m_jobPackageNameHasBeenSet(false),
    m_jobPackageSourceHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dispatchStrategyHasBeenSet(false)
{
}

string UpdateJobSpecRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullType.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
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

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobPackageSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobPackageSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobPackageSource.c_str(), allocator).Move(), allocator);
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

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_dispatchStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispatchStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dispatchStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateJobSpecRequest::GetSpecId() const
{
    return m_specId;
}

void UpdateJobSpecRequest::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool UpdateJobSpecRequest::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string UpdateJobSpecRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void UpdateJobSpecRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool UpdateJobSpecRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string UpdateJobSpecRequest::GetName() const
{
    return m_name;
}

void UpdateJobSpecRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateJobSpecRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateJobSpecRequest::GetDescription() const
{
    return m_description;
}

void UpdateJobSpecRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateJobSpecRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateJobSpecRequest::GetImage() const
{
    return m_image;
}

void UpdateJobSpecRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool UpdateJobSpecRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string UpdateJobSpecRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void UpdateJobSpecRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool UpdateJobSpecRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string UpdateJobSpecRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void UpdateJobSpecRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool UpdateJobSpecRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string UpdateJobSpecRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void UpdateJobSpecRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool UpdateJobSpecRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string UpdateJobSpecRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void UpdateJobSpecRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool UpdateJobSpecRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string UpdateJobSpecRequest::GetCatalog() const
{
    return m_catalog;
}

void UpdateJobSpecRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool UpdateJobSpecRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string UpdateJobSpecRequest::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void UpdateJobSpecRequest::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool UpdateJobSpecRequest::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string UpdateJobSpecRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void UpdateJobSpecRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool UpdateJobSpecRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string UpdateJobSpecRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void UpdateJobSpecRequest::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool UpdateJobSpecRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string UpdateJobSpecRequest::GetQueue() const
{
    return m_queue;
}

void UpdateJobSpecRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool UpdateJobSpecRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string UpdateJobSpecRequest::GetJobPackage() const
{
    return m_jobPackage;
}

void UpdateJobSpecRequest::SetJobPackage(const string& _jobPackage)
{
    m_jobPackage = _jobPackage;
    m_jobPackageHasBeenSet = true;
}

bool UpdateJobSpecRequest::JobPackageHasBeenSet() const
{
    return m_jobPackageHasBeenSet;
}

string UpdateJobSpecRequest::GetJobPackageName() const
{
    return m_jobPackageName;
}

void UpdateJobSpecRequest::SetJobPackageName(const string& _jobPackageName)
{
    m_jobPackageName = _jobPackageName;
    m_jobPackageNameHasBeenSet = true;
}

bool UpdateJobSpecRequest::JobPackageNameHasBeenSet() const
{
    return m_jobPackageNameHasBeenSet;
}

string UpdateJobSpecRequest::GetJobPackageSource() const
{
    return m_jobPackageSource;
}

void UpdateJobSpecRequest::SetJobPackageSource(const string& _jobPackageSource)
{
    m_jobPackageSource = _jobPackageSource;
    m_jobPackageSourceHasBeenSet = true;
}

bool UpdateJobSpecRequest::JobPackageSourceHasBeenSet() const
{
    return m_jobPackageSourceHasBeenSet;
}

string UpdateJobSpecRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void UpdateJobSpecRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool UpdateJobSpecRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string UpdateJobSpecRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdateJobSpecRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdateJobSpecRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpdateJobSpecRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateJobSpecRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateJobSpecRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t UpdateJobSpecRequest::GetPriority() const
{
    return m_priority;
}

void UpdateJobSpecRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool UpdateJobSpecRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> UpdateJobSpecRequest::GetTags() const
{
    return m_tags;
}

void UpdateJobSpecRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UpdateJobSpecRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string UpdateJobSpecRequest::GetDispatchStrategy() const
{
    return m_dispatchStrategy;
}

void UpdateJobSpecRequest::SetDispatchStrategy(const string& _dispatchStrategy)
{
    m_dispatchStrategy = _dispatchStrategy;
    m_dispatchStrategyHasBeenSet = true;
}

bool UpdateJobSpecRequest::DispatchStrategyHasBeenSet() const
{
    return m_dispatchStrategyHasBeenSet;
}


