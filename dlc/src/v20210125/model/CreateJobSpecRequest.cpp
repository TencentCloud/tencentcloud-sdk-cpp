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

#include <tencentcloud/dlc/v20210125/model/CreateJobSpecRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateJobSpecRequest::CreateJobSpecRequest() :
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

string CreateJobSpecRequest::ToJsonString() const
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


string CreateJobSpecRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void CreateJobSpecRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool CreateJobSpecRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}

string CreateJobSpecRequest::GetName() const
{
    return m_name;
}

void CreateJobSpecRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobSpecRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateJobSpecRequest::GetDescription() const
{
    return m_description;
}

void CreateJobSpecRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateJobSpecRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateJobSpecRequest::GetImage() const
{
    return m_image;
}

void CreateJobSpecRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateJobSpecRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreateJobSpecRequest::GetImagePullType() const
{
    return m_imagePullType;
}

void CreateJobSpecRequest::SetImagePullType(const string& _imagePullType)
{
    m_imagePullType = _imagePullType;
    m_imagePullTypeHasBeenSet = true;
}

bool CreateJobSpecRequest::ImagePullTypeHasBeenSet() const
{
    return m_imagePullTypeHasBeenSet;
}

string CreateJobSpecRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void CreateJobSpecRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool CreateJobSpecRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

string CreateJobSpecRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void CreateJobSpecRequest::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool CreateJobSpecRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string CreateJobSpecRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void CreateJobSpecRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool CreateJobSpecRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}

string CreateJobSpecRequest::GetCatalog() const
{
    return m_catalog;
}

void CreateJobSpecRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool CreateJobSpecRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string CreateJobSpecRequest::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void CreateJobSpecRequest::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool CreateJobSpecRequest::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

string CreateJobSpecRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void CreateJobSpecRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool CreateJobSpecRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CreateJobSpecRequest::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void CreateJobSpecRequest::SetResourceConfigId(const string& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool CreateJobSpecRequest::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

string CreateJobSpecRequest::GetQueue() const
{
    return m_queue;
}

void CreateJobSpecRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateJobSpecRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateJobSpecRequest::GetJobPackage() const
{
    return m_jobPackage;
}

void CreateJobSpecRequest::SetJobPackage(const string& _jobPackage)
{
    m_jobPackage = _jobPackage;
    m_jobPackageHasBeenSet = true;
}

bool CreateJobSpecRequest::JobPackageHasBeenSet() const
{
    return m_jobPackageHasBeenSet;
}

string CreateJobSpecRequest::GetJobPackageName() const
{
    return m_jobPackageName;
}

void CreateJobSpecRequest::SetJobPackageName(const string& _jobPackageName)
{
    m_jobPackageName = _jobPackageName;
    m_jobPackageNameHasBeenSet = true;
}

bool CreateJobSpecRequest::JobPackageNameHasBeenSet() const
{
    return m_jobPackageNameHasBeenSet;
}

string CreateJobSpecRequest::GetJobPackageSource() const
{
    return m_jobPackageSource;
}

void CreateJobSpecRequest::SetJobPackageSource(const string& _jobPackageSource)
{
    m_jobPackageSource = _jobPackageSource;
    m_jobPackageSourceHasBeenSet = true;
}

bool CreateJobSpecRequest::JobPackageSourceHasBeenSet() const
{
    return m_jobPackageSourceHasBeenSet;
}

string CreateJobSpecRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void CreateJobSpecRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool CreateJobSpecRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string CreateJobSpecRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateJobSpecRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateJobSpecRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateJobSpecRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateJobSpecRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateJobSpecRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CreateJobSpecRequest::GetPriority() const
{
    return m_priority;
}

void CreateJobSpecRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateJobSpecRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

vector<Tag> CreateJobSpecRequest::GetTags() const
{
    return m_tags;
}

void CreateJobSpecRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateJobSpecRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateJobSpecRequest::GetDispatchStrategy() const
{
    return m_dispatchStrategy;
}

void CreateJobSpecRequest::SetDispatchStrategy(const string& _dispatchStrategy)
{
    m_dispatchStrategy = _dispatchStrategy;
    m_dispatchStrategyHasBeenSet = true;
}

bool CreateJobSpecRequest::DispatchStrategyHasBeenSet() const
{
    return m_dispatchStrategyHasBeenSet;
}


