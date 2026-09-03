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

#include <tencentcloud/dlc/v20210125/model/AddDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AddDeploymentRequest::AddDeploymentRequest() :
    m_serviceIdHasBeenSet(false),
    m_deploymentNameHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_headHighAvailabilityEnabledHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_autoscalingEnabledHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

string AddDeploymentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deploymentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentName.c_str(), allocator).Move(), allocator);
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

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoscalingEnabled, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddDeploymentRequest::GetServiceId() const
{
    return m_serviceId;
}

void AddDeploymentRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool AddDeploymentRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string AddDeploymentRequest::GetDeploymentName() const
{
    return m_deploymentName;
}

void AddDeploymentRequest::SetDeploymentName(const string& _deploymentName)
{
    m_deploymentName = _deploymentName;
    m_deploymentNameHasBeenSet = true;
}

bool AddDeploymentRequest::DeploymentNameHasBeenSet() const
{
    return m_deploymentNameHasBeenSet;
}

string AddDeploymentRequest::GetEngine() const
{
    return m_engine;
}

void AddDeploymentRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool AddDeploymentRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t AddDeploymentRequest::GetReplicas() const
{
    return m_replicas;
}

void AddDeploymentRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool AddDeploymentRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

string AddDeploymentRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void AddDeploymentRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool AddDeploymentRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string AddDeploymentRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void AddDeploymentRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool AddDeploymentRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

bool AddDeploymentRequest::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

void AddDeploymentRequest::SetHeadHighAvailabilityEnabled(const bool& _headHighAvailabilityEnabled)
{
    m_headHighAvailabilityEnabled = _headHighAvailabilityEnabled;
    m_headHighAvailabilityEnabledHasBeenSet = true;
}

bool AddDeploymentRequest::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

string AddDeploymentRequest::GetAdvancedParams() const
{
    return m_advancedParams;
}

void AddDeploymentRequest::SetAdvancedParams(const string& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool AddDeploymentRequest::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

string AddDeploymentRequest::GetQueue() const
{
    return m_queue;
}

void AddDeploymentRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool AddDeploymentRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

bool AddDeploymentRequest::GetAutoscalingEnabled() const
{
    return m_autoscalingEnabled;
}

void AddDeploymentRequest::SetAutoscalingEnabled(const bool& _autoscalingEnabled)
{
    m_autoscalingEnabled = _autoscalingEnabled;
    m_autoscalingEnabledHasBeenSet = true;
}

bool AddDeploymentRequest::AutoscalingEnabledHasBeenSet() const
{
    return m_autoscalingEnabledHasBeenSet;
}

string AddDeploymentRequest::GetImage() const
{
    return m_image;
}

void AddDeploymentRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool AddDeploymentRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string AddDeploymentRequest::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void AddDeploymentRequest::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool AddDeploymentRequest::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}


