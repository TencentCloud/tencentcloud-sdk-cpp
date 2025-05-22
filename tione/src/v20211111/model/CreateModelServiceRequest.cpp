/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tione/v20211111/model/CreateModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateModelServiceRequest::CreateModelServiceRequest() :
    m_serviceGroupIdHasBeenSet(false),
    m_serviceGroupNameHasBeenSet(false),
    m_serviceDescriptionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_modelInfoHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_horizontalPodAutoscalerHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_newVersionHasBeenSet(false),
    m_cronScaleJobsHasBeenSet(false),
    m_scaleStrategyHasBeenSet(false),
    m_hybridBillingPrepaidReplicasHasBeenSet(false),
    m_createSourceHasBeenSet(false),
    m_modelHotUpdateEnableHasBeenSet(false),
    m_scheduledActionHasBeenSet(false),
    m_volumeMountHasBeenSet(false),
    m_serviceLimitHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_modelTurboEnableHasBeenSet(false),
    m_serviceCategoryHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_serviceEIPHasBeenSet(false),
    m_commandBase64HasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_instancePerReplicasHasBeenSet(false),
    m_terminationGracePeriodSecondsHasBeenSet(false),
    m_preStopCommandHasBeenSet(false),
    m_grpcEnableHasBeenSet(false),
    m_healthProbeHasBeenSet(false),
    m_rollingUpdateHasBeenSet(false),
    m_sidecarHasBeenSet(false)
{
}

string CreateModelServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replicas, allocator);
    }

    if (m_horizontalPodAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalPodAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalPodAutoscaler.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authorizationEnable, allocator);
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

    if (m_newVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newVersion, allocator);
    }

    if (m_cronScaleJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronScaleJobs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cronScaleJobs.begin(); itr != m_cronScaleJobs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_scaleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_hybridBillingPrepaidReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridBillingPrepaidReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridBillingPrepaidReplicas, allocator);
    }

    if (m_createSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createSource.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHotUpdateEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelHotUpdateEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelHotUpdateEnable, allocator);
    }

    if (m_scheduledActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledAction.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumeMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeMount.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTurboEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTurboEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelTurboEnable, allocator);
    }

    if (m_serviceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceEIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceEIP.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_commandBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_servicePort, allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePerReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePerReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instancePerReplicas, allocator);
    }

    if (m_terminationGracePeriodSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminationGracePeriodSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_terminationGracePeriodSeconds, allocator);
    }

    if (m_preStopCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStopCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_preStopCommand.begin(); itr != m_preStopCommand.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_grpcEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrpcEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_grpcEnable, allocator);
    }

    if (m_healthProbeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthProbe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthProbe.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_rollingUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingUpdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rollingUpdate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sidecarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sidecar";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sidecar.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelServiceRequest::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void CreateModelServiceRequest::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string CreateModelServiceRequest::GetServiceGroupName() const
{
    return m_serviceGroupName;
}

void CreateModelServiceRequest::SetServiceGroupName(const string& _serviceGroupName)
{
    m_serviceGroupName = _serviceGroupName;
    m_serviceGroupNameHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceGroupNameHasBeenSet() const
{
    return m_serviceGroupNameHasBeenSet;
}

string CreateModelServiceRequest::GetServiceDescription() const
{
    return m_serviceDescription;
}

void CreateModelServiceRequest::SetServiceDescription(const string& _serviceDescription)
{
    m_serviceDescription = _serviceDescription;
    m_serviceDescriptionHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceDescriptionHasBeenSet() const
{
    return m_serviceDescriptionHasBeenSet;
}

string CreateModelServiceRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateModelServiceRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateModelServiceRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string CreateModelServiceRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateModelServiceRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateModelServiceRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

ModelInfo CreateModelServiceRequest::GetModelInfo() const
{
    return m_modelInfo;
}

void CreateModelServiceRequest::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool CreateModelServiceRequest::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

ImageInfo CreateModelServiceRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateModelServiceRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateModelServiceRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

vector<EnvVar> CreateModelServiceRequest::GetEnv() const
{
    return m_env;
}

void CreateModelServiceRequest::SetEnv(const vector<EnvVar>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool CreateModelServiceRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

ResourceInfo CreateModelServiceRequest::GetResources() const
{
    return m_resources;
}

void CreateModelServiceRequest::SetResources(const ResourceInfo& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool CreateModelServiceRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string CreateModelServiceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateModelServiceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateModelServiceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateModelServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void CreateModelServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool CreateModelServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

int64_t CreateModelServiceRequest::GetReplicas() const
{
    return m_replicas;
}

void CreateModelServiceRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool CreateModelServiceRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

HorizontalPodAutoscaler CreateModelServiceRequest::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

void CreateModelServiceRequest::SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler)
{
    m_horizontalPodAutoscaler = _horizontalPodAutoscaler;
    m_horizontalPodAutoscalerHasBeenSet = true;
}

bool CreateModelServiceRequest::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}

bool CreateModelServiceRequest::GetLogEnable() const
{
    return m_logEnable;
}

void CreateModelServiceRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool CreateModelServiceRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig CreateModelServiceRequest::GetLogConfig() const
{
    return m_logConfig;
}

void CreateModelServiceRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

bool CreateModelServiceRequest::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void CreateModelServiceRequest::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool CreateModelServiceRequest::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}

vector<Tag> CreateModelServiceRequest::GetTags() const
{
    return m_tags;
}

void CreateModelServiceRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateModelServiceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateModelServiceRequest::GetNewVersion() const
{
    return m_newVersion;
}

void CreateModelServiceRequest::SetNewVersion(const bool& _newVersion)
{
    m_newVersion = _newVersion;
    m_newVersionHasBeenSet = true;
}

bool CreateModelServiceRequest::NewVersionHasBeenSet() const
{
    return m_newVersionHasBeenSet;
}

vector<CronScaleJob> CreateModelServiceRequest::GetCronScaleJobs() const
{
    return m_cronScaleJobs;
}

void CreateModelServiceRequest::SetCronScaleJobs(const vector<CronScaleJob>& _cronScaleJobs)
{
    m_cronScaleJobs = _cronScaleJobs;
    m_cronScaleJobsHasBeenSet = true;
}

bool CreateModelServiceRequest::CronScaleJobsHasBeenSet() const
{
    return m_cronScaleJobsHasBeenSet;
}

string CreateModelServiceRequest::GetScaleStrategy() const
{
    return m_scaleStrategy;
}

void CreateModelServiceRequest::SetScaleStrategy(const string& _scaleStrategy)
{
    m_scaleStrategy = _scaleStrategy;
    m_scaleStrategyHasBeenSet = true;
}

bool CreateModelServiceRequest::ScaleStrategyHasBeenSet() const
{
    return m_scaleStrategyHasBeenSet;
}

int64_t CreateModelServiceRequest::GetHybridBillingPrepaidReplicas() const
{
    return m_hybridBillingPrepaidReplicas;
}

void CreateModelServiceRequest::SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas)
{
    m_hybridBillingPrepaidReplicas = _hybridBillingPrepaidReplicas;
    m_hybridBillingPrepaidReplicasHasBeenSet = true;
}

bool CreateModelServiceRequest::HybridBillingPrepaidReplicasHasBeenSet() const
{
    return m_hybridBillingPrepaidReplicasHasBeenSet;
}

string CreateModelServiceRequest::GetCreateSource() const
{
    return m_createSource;
}

void CreateModelServiceRequest::SetCreateSource(const string& _createSource)
{
    m_createSource = _createSource;
    m_createSourceHasBeenSet = true;
}

bool CreateModelServiceRequest::CreateSourceHasBeenSet() const
{
    return m_createSourceHasBeenSet;
}

bool CreateModelServiceRequest::GetModelHotUpdateEnable() const
{
    return m_modelHotUpdateEnable;
}

void CreateModelServiceRequest::SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable)
{
    m_modelHotUpdateEnable = _modelHotUpdateEnable;
    m_modelHotUpdateEnableHasBeenSet = true;
}

bool CreateModelServiceRequest::ModelHotUpdateEnableHasBeenSet() const
{
    return m_modelHotUpdateEnableHasBeenSet;
}

ScheduledAction CreateModelServiceRequest::GetScheduledAction() const
{
    return m_scheduledAction;
}

void CreateModelServiceRequest::SetScheduledAction(const ScheduledAction& _scheduledAction)
{
    m_scheduledAction = _scheduledAction;
    m_scheduledActionHasBeenSet = true;
}

bool CreateModelServiceRequest::ScheduledActionHasBeenSet() const
{
    return m_scheduledActionHasBeenSet;
}

VolumeMount CreateModelServiceRequest::GetVolumeMount() const
{
    return m_volumeMount;
}

void CreateModelServiceRequest::SetVolumeMount(const VolumeMount& _volumeMount)
{
    m_volumeMount = _volumeMount;
    m_volumeMountHasBeenSet = true;
}

bool CreateModelServiceRequest::VolumeMountHasBeenSet() const
{
    return m_volumeMountHasBeenSet;
}

ServiceLimit CreateModelServiceRequest::GetServiceLimit() const
{
    return m_serviceLimit;
}

void CreateModelServiceRequest::SetServiceLimit(const ServiceLimit& _serviceLimit)
{
    m_serviceLimit = _serviceLimit;
    m_serviceLimitHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceLimitHasBeenSet() const
{
    return m_serviceLimitHasBeenSet;
}

string CreateModelServiceRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateModelServiceRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateModelServiceRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool CreateModelServiceRequest::GetModelTurboEnable() const
{
    return m_modelTurboEnable;
}

void CreateModelServiceRequest::SetModelTurboEnable(const bool& _modelTurboEnable)
{
    m_modelTurboEnable = _modelTurboEnable;
    m_modelTurboEnableHasBeenSet = true;
}

bool CreateModelServiceRequest::ModelTurboEnableHasBeenSet() const
{
    return m_modelTurboEnableHasBeenSet;
}

string CreateModelServiceRequest::GetServiceCategory() const
{
    return m_serviceCategory;
}

void CreateModelServiceRequest::SetServiceCategory(const string& _serviceCategory)
{
    m_serviceCategory = _serviceCategory;
    m_serviceCategoryHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceCategoryHasBeenSet() const
{
    return m_serviceCategoryHasBeenSet;
}

string CreateModelServiceRequest::GetCommand() const
{
    return m_command;
}

void CreateModelServiceRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CreateModelServiceRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

ServiceEIP CreateModelServiceRequest::GetServiceEIP() const
{
    return m_serviceEIP;
}

void CreateModelServiceRequest::SetServiceEIP(const ServiceEIP& _serviceEIP)
{
    m_serviceEIP = _serviceEIP;
    m_serviceEIPHasBeenSet = true;
}

bool CreateModelServiceRequest::ServiceEIPHasBeenSet() const
{
    return m_serviceEIPHasBeenSet;
}

string CreateModelServiceRequest::GetCommandBase64() const
{
    return m_commandBase64;
}

void CreateModelServiceRequest::SetCommandBase64(const string& _commandBase64)
{
    m_commandBase64 = _commandBase64;
    m_commandBase64HasBeenSet = true;
}

bool CreateModelServiceRequest::CommandBase64HasBeenSet() const
{
    return m_commandBase64HasBeenSet;
}

int64_t CreateModelServiceRequest::GetServicePort() const
{
    return m_servicePort;
}

void CreateModelServiceRequest::SetServicePort(const int64_t& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool CreateModelServiceRequest::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

string CreateModelServiceRequest::GetDeployType() const
{
    return m_deployType;
}

void CreateModelServiceRequest::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool CreateModelServiceRequest::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

int64_t CreateModelServiceRequest::GetInstancePerReplicas() const
{
    return m_instancePerReplicas;
}

void CreateModelServiceRequest::SetInstancePerReplicas(const int64_t& _instancePerReplicas)
{
    m_instancePerReplicas = _instancePerReplicas;
    m_instancePerReplicasHasBeenSet = true;
}

bool CreateModelServiceRequest::InstancePerReplicasHasBeenSet() const
{
    return m_instancePerReplicasHasBeenSet;
}

int64_t CreateModelServiceRequest::GetTerminationGracePeriodSeconds() const
{
    return m_terminationGracePeriodSeconds;
}

void CreateModelServiceRequest::SetTerminationGracePeriodSeconds(const int64_t& _terminationGracePeriodSeconds)
{
    m_terminationGracePeriodSeconds = _terminationGracePeriodSeconds;
    m_terminationGracePeriodSecondsHasBeenSet = true;
}

bool CreateModelServiceRequest::TerminationGracePeriodSecondsHasBeenSet() const
{
    return m_terminationGracePeriodSecondsHasBeenSet;
}

vector<string> CreateModelServiceRequest::GetPreStopCommand() const
{
    return m_preStopCommand;
}

void CreateModelServiceRequest::SetPreStopCommand(const vector<string>& _preStopCommand)
{
    m_preStopCommand = _preStopCommand;
    m_preStopCommandHasBeenSet = true;
}

bool CreateModelServiceRequest::PreStopCommandHasBeenSet() const
{
    return m_preStopCommandHasBeenSet;
}

bool CreateModelServiceRequest::GetGrpcEnable() const
{
    return m_grpcEnable;
}

void CreateModelServiceRequest::SetGrpcEnable(const bool& _grpcEnable)
{
    m_grpcEnable = _grpcEnable;
    m_grpcEnableHasBeenSet = true;
}

bool CreateModelServiceRequest::GrpcEnableHasBeenSet() const
{
    return m_grpcEnableHasBeenSet;
}

HealthProbe CreateModelServiceRequest::GetHealthProbe() const
{
    return m_healthProbe;
}

void CreateModelServiceRequest::SetHealthProbe(const HealthProbe& _healthProbe)
{
    m_healthProbe = _healthProbe;
    m_healthProbeHasBeenSet = true;
}

bool CreateModelServiceRequest::HealthProbeHasBeenSet() const
{
    return m_healthProbeHasBeenSet;
}

RollingUpdate CreateModelServiceRequest::GetRollingUpdate() const
{
    return m_rollingUpdate;
}

void CreateModelServiceRequest::SetRollingUpdate(const RollingUpdate& _rollingUpdate)
{
    m_rollingUpdate = _rollingUpdate;
    m_rollingUpdateHasBeenSet = true;
}

bool CreateModelServiceRequest::RollingUpdateHasBeenSet() const
{
    return m_rollingUpdateHasBeenSet;
}

SidecarSpec CreateModelServiceRequest::GetSidecar() const
{
    return m_sidecar;
}

void CreateModelServiceRequest::SetSidecar(const SidecarSpec& _sidecar)
{
    m_sidecar = _sidecar;
    m_sidecarHasBeenSet = true;
}

bool CreateModelServiceRequest::SidecarHasBeenSet() const
{
    return m_sidecarHasBeenSet;
}


