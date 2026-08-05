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

#include <tencentcloud/dlc/v20210125/model/CreateInferenceServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateInferenceServiceRequest::CreateInferenceServiceRequest() :
    m_nameHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_modelIdentifierHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_headHighAvailabilityEnabledHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_imagePullPolicyHasBeenSet(false),
    m_autoscalingEnabledHasBeenSet(false),
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_autoscalerOptionsHasBeenSet(false),
    m_apiKeyIdsHasBeenSet(false)
{
}

string CreateInferenceServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicas, allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdentifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_headHighAvailabilityEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadHighAvailabilityEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_headHighAvailabilityEnabled, allocator);
    }

    if (m_advancedParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedParams.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imagePullPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoscalingEnabled, allocator);
    }

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_autoscalerOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalerOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoscalerOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiKeyIds.begin(); itr != m_apiKeyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInferenceServiceRequest::GetName() const
{
    return m_name;
}

void CreateInferenceServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInferenceServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateInferenceServiceRequest::GetModelUid() const
{
    return m_modelUid;
}

void CreateInferenceServiceRequest::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string CreateInferenceServiceRequest::GetEngine() const
{
    return m_engine;
}

void CreateInferenceServiceRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool CreateInferenceServiceRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t CreateInferenceServiceRequest::GetReplicas() const
{
    return m_replicas;
}

void CreateInferenceServiceRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string CreateInferenceServiceRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void CreateInferenceServiceRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CreateInferenceServiceRequest::GetImage() const
{
    return m_image;
}

void CreateInferenceServiceRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreateInferenceServiceRequest::GetModelIdentifier() const
{
    return m_modelIdentifier;
}

void CreateInferenceServiceRequest::SetModelIdentifier(const string& _modelIdentifier)
{
    m_modelIdentifier = _modelIdentifier;
    m_modelIdentifierHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ModelIdentifierHasBeenSet() const
{
    return m_modelIdentifierHasBeenSet;
}

string CreateInferenceServiceRequest::GetQueue() const
{
    return m_queue;
}

void CreateInferenceServiceRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateInferenceServiceRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateInferenceServiceRequest::GetDeploymentName() const
{
    return m_deploymentName;
}

void CreateInferenceServiceRequest::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool CreateInferenceServiceRequest::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string CreateInferenceServiceRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateInferenceServiceRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

bool CreateInferenceServiceRequest::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

void CreateInferenceServiceRequest::SetHeadHighAvailabilityEnabled(const bool& _headHighAvailabilityEnabled)
{
    m_headHighAvailabilityEnabled = _headHighAvailabilityEnabled;
    m_headHighAvailabilityEnabledHasBeenSet = true;
}

bool CreateInferenceServiceRequest::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

string CreateInferenceServiceRequest::GetAdvancedParams() const
{
    return m_advancedParams;
}

void CreateInferenceServiceRequest::SetAdvancedParams(const string& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool CreateInferenceServiceRequest::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

string CreateInferenceServiceRequest::GetImagePullPolicy() const
{
    return m_imagePullPolicy;
}

void CreateInferenceServiceRequest::SetImagePullPolicy(const string& _imagePullPolicy)
{
    m_imagePullPolicy = _imagePullPolicy;
    m_imagePullPolicyHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ImagePullPolicyHasBeenSet() const
{
    return m_imagePullPolicyHasBeenSet;
}

bool CreateInferenceServiceRequest::GetAutoscalingEnabled() const
{
    return m_autoscalingEnabled;
}

void CreateInferenceServiceRequest::SetAutoscalingEnabled(const bool& _autoscalingEnabled)
{
    m_autoscalingEnabled = _autoscalingEnabled;
    m_autoscalingEnabledHasBeenSet = true;
}

bool CreateInferenceServiceRequest::AutoscalingEnabledHasBeenSet() const
{
    return m_autoscalingEnabledHasBeenSet;
}

int64_t CreateInferenceServiceRequest::GetMinReplicas() const
{
    return m_minReplicas;
}

void CreateInferenceServiceRequest::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool CreateInferenceServiceRequest::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t CreateInferenceServiceRequest::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void CreateInferenceServiceRequest::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool CreateInferenceServiceRequest::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

string CreateInferenceServiceRequest::GetAutoscalerOptions() const
{
    return m_autoscalerOptions;
}

void CreateInferenceServiceRequest::SetAutoscalerOptions(const string& _autoscalerOptions)
{
    m_autoscalerOptions = _autoscalerOptions;
    m_autoscalerOptionsHasBeenSet = true;
}

bool CreateInferenceServiceRequest::AutoscalerOptionsHasBeenSet() const
{
    return m_autoscalerOptionsHasBeenSet;
}

vector<string> CreateInferenceServiceRequest::GetApiKeyIds() const
{
    return m_apiKeyIds;
}

void CreateInferenceServiceRequest::SetApiKeyIds(const vector<string>& _apiKeyIds)
{
    m_apiKeyIds = _apiKeyIds;
    m_apiKeyIdsHasBeenSet = true;
}

bool CreateInferenceServiceRequest::ApiKeyIdsHasBeenSet() const
{
    return m_apiKeyIdsHasBeenSet;
}


