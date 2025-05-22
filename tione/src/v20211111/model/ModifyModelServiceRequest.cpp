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

#include <tencentcloud/tione/v20211111/model/ModifyModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ModifyModelServiceRequest::ModifyModelServiceRequest() :
    m_serviceIdHasBeenSet(false),
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
    m_serviceActionHasBeenSet(false),
    m_serviceDescriptionHasBeenSet(false),
    m_scaleStrategyHasBeenSet(false),
    m_cronScaleJobsHasBeenSet(false),
    m_hybridBillingPrepaidReplicasHasBeenSet(false),
    m_modelHotUpdateEnableHasBeenSet(false),
    m_scheduledActionHasBeenSet(false),
    m_serviceLimitHasBeenSet(false),
    m_volumeMountHasBeenSet(false),
    m_modelTurboEnableHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_serviceEIPHasBeenSet(false),
    m_commandBase64HasBeenSet(false),
    m_servicePortHasBeenSet(false),
    m_instancePerReplicasHasBeenSet(false),
    m_terminationGracePeriodSecondsHasBeenSet(false),
    m_preStopCommandHasBeenSet(false),
    m_grpcEnableHasBeenSet(false),
    m_healthProbeHasBeenSet(false),
    m_rollingUpdateHasBeenSet(false),
    m_sidecarHasBeenSet(false)
{
}

string ModifyModelServiceRequest::ToJsonString() const
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

    if (m_serviceActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceAction.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleStrategy.c_str(), allocator).Move(), allocator);
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

    if (m_hybridBillingPrepaidReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridBillingPrepaidReplicas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hybridBillingPrepaidReplicas, allocator);
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

    if (m_serviceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceLimit.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumeMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeMount.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelTurboEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTurboEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelTurboEnable, allocator);
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


string ModifyModelServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyModelServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

ModelInfo ModifyModelServiceRequest::GetModelInfo() const
{
    return m_modelInfo;
}

void ModifyModelServiceRequest::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool ModifyModelServiceRequest::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

ImageInfo ModifyModelServiceRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void ModifyModelServiceRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool ModifyModelServiceRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

vector<EnvVar> ModifyModelServiceRequest::GetEnv() const
{
    return m_env;
}

void ModifyModelServiceRequest::SetEnv(const vector<EnvVar>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool ModifyModelServiceRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

ResourceInfo ModifyModelServiceRequest::GetResources() const
{
    return m_resources;
}

void ModifyModelServiceRequest::SetResources(const ResourceInfo& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ModifyModelServiceRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string ModifyModelServiceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyModelServiceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyModelServiceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ModifyModelServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void ModifyModelServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool ModifyModelServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

int64_t ModifyModelServiceRequest::GetReplicas() const
{
    return m_replicas;
}

void ModifyModelServiceRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ModifyModelServiceRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

HorizontalPodAutoscaler ModifyModelServiceRequest::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

void ModifyModelServiceRequest::SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler)
{
    m_horizontalPodAutoscaler = _horizontalPodAutoscaler;
    m_horizontalPodAutoscalerHasBeenSet = true;
}

bool ModifyModelServiceRequest::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}

bool ModifyModelServiceRequest::GetLogEnable() const
{
    return m_logEnable;
}

void ModifyModelServiceRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool ModifyModelServiceRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig ModifyModelServiceRequest::GetLogConfig() const
{
    return m_logConfig;
}

void ModifyModelServiceRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool ModifyModelServiceRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string ModifyModelServiceRequest::GetServiceAction() const
{
    return m_serviceAction;
}

void ModifyModelServiceRequest::SetServiceAction(const string& _serviceAction)
{
    m_serviceAction = _serviceAction;
    m_serviceActionHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServiceActionHasBeenSet() const
{
    return m_serviceActionHasBeenSet;
}

string ModifyModelServiceRequest::GetServiceDescription() const
{
    return m_serviceDescription;
}

void ModifyModelServiceRequest::SetServiceDescription(const string& _serviceDescription)
{
    m_serviceDescription = _serviceDescription;
    m_serviceDescriptionHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServiceDescriptionHasBeenSet() const
{
    return m_serviceDescriptionHasBeenSet;
}

string ModifyModelServiceRequest::GetScaleStrategy() const
{
    return m_scaleStrategy;
}

void ModifyModelServiceRequest::SetScaleStrategy(const string& _scaleStrategy)
{
    m_scaleStrategy = _scaleStrategy;
    m_scaleStrategyHasBeenSet = true;
}

bool ModifyModelServiceRequest::ScaleStrategyHasBeenSet() const
{
    return m_scaleStrategyHasBeenSet;
}

vector<CronScaleJob> ModifyModelServiceRequest::GetCronScaleJobs() const
{
    return m_cronScaleJobs;
}

void ModifyModelServiceRequest::SetCronScaleJobs(const vector<CronScaleJob>& _cronScaleJobs)
{
    m_cronScaleJobs = _cronScaleJobs;
    m_cronScaleJobsHasBeenSet = true;
}

bool ModifyModelServiceRequest::CronScaleJobsHasBeenSet() const
{
    return m_cronScaleJobsHasBeenSet;
}

int64_t ModifyModelServiceRequest::GetHybridBillingPrepaidReplicas() const
{
    return m_hybridBillingPrepaidReplicas;
}

void ModifyModelServiceRequest::SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas)
{
    m_hybridBillingPrepaidReplicas = _hybridBillingPrepaidReplicas;
    m_hybridBillingPrepaidReplicasHasBeenSet = true;
}

bool ModifyModelServiceRequest::HybridBillingPrepaidReplicasHasBeenSet() const
{
    return m_hybridBillingPrepaidReplicasHasBeenSet;
}

bool ModifyModelServiceRequest::GetModelHotUpdateEnable() const
{
    return m_modelHotUpdateEnable;
}

void ModifyModelServiceRequest::SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable)
{
    m_modelHotUpdateEnable = _modelHotUpdateEnable;
    m_modelHotUpdateEnableHasBeenSet = true;
}

bool ModifyModelServiceRequest::ModelHotUpdateEnableHasBeenSet() const
{
    return m_modelHotUpdateEnableHasBeenSet;
}

ScheduledAction ModifyModelServiceRequest::GetScheduledAction() const
{
    return m_scheduledAction;
}

void ModifyModelServiceRequest::SetScheduledAction(const ScheduledAction& _scheduledAction)
{
    m_scheduledAction = _scheduledAction;
    m_scheduledActionHasBeenSet = true;
}

bool ModifyModelServiceRequest::ScheduledActionHasBeenSet() const
{
    return m_scheduledActionHasBeenSet;
}

ServiceLimit ModifyModelServiceRequest::GetServiceLimit() const
{
    return m_serviceLimit;
}

void ModifyModelServiceRequest::SetServiceLimit(const ServiceLimit& _serviceLimit)
{
    m_serviceLimit = _serviceLimit;
    m_serviceLimitHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServiceLimitHasBeenSet() const
{
    return m_serviceLimitHasBeenSet;
}

VolumeMount ModifyModelServiceRequest::GetVolumeMount() const
{
    return m_volumeMount;
}

void ModifyModelServiceRequest::SetVolumeMount(const VolumeMount& _volumeMount)
{
    m_volumeMount = _volumeMount;
    m_volumeMountHasBeenSet = true;
}

bool ModifyModelServiceRequest::VolumeMountHasBeenSet() const
{
    return m_volumeMountHasBeenSet;
}

bool ModifyModelServiceRequest::GetModelTurboEnable() const
{
    return m_modelTurboEnable;
}

void ModifyModelServiceRequest::SetModelTurboEnable(const bool& _modelTurboEnable)
{
    m_modelTurboEnable = _modelTurboEnable;
    m_modelTurboEnableHasBeenSet = true;
}

bool ModifyModelServiceRequest::ModelTurboEnableHasBeenSet() const
{
    return m_modelTurboEnableHasBeenSet;
}

string ModifyModelServiceRequest::GetCommand() const
{
    return m_command;
}

void ModifyModelServiceRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ModifyModelServiceRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

ServiceEIP ModifyModelServiceRequest::GetServiceEIP() const
{
    return m_serviceEIP;
}

void ModifyModelServiceRequest::SetServiceEIP(const ServiceEIP& _serviceEIP)
{
    m_serviceEIP = _serviceEIP;
    m_serviceEIPHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServiceEIPHasBeenSet() const
{
    return m_serviceEIPHasBeenSet;
}

string ModifyModelServiceRequest::GetCommandBase64() const
{
    return m_commandBase64;
}

void ModifyModelServiceRequest::SetCommandBase64(const string& _commandBase64)
{
    m_commandBase64 = _commandBase64;
    m_commandBase64HasBeenSet = true;
}

bool ModifyModelServiceRequest::CommandBase64HasBeenSet() const
{
    return m_commandBase64HasBeenSet;
}

int64_t ModifyModelServiceRequest::GetServicePort() const
{
    return m_servicePort;
}

void ModifyModelServiceRequest::SetServicePort(const int64_t& _servicePort)
{
    m_servicePort = _servicePort;
    m_servicePortHasBeenSet = true;
}

bool ModifyModelServiceRequest::ServicePortHasBeenSet() const
{
    return m_servicePortHasBeenSet;
}

int64_t ModifyModelServiceRequest::GetInstancePerReplicas() const
{
    return m_instancePerReplicas;
}

void ModifyModelServiceRequest::SetInstancePerReplicas(const int64_t& _instancePerReplicas)
{
    m_instancePerReplicas = _instancePerReplicas;
    m_instancePerReplicasHasBeenSet = true;
}

bool ModifyModelServiceRequest::InstancePerReplicasHasBeenSet() const
{
    return m_instancePerReplicasHasBeenSet;
}

int64_t ModifyModelServiceRequest::GetTerminationGracePeriodSeconds() const
{
    return m_terminationGracePeriodSeconds;
}

void ModifyModelServiceRequest::SetTerminationGracePeriodSeconds(const int64_t& _terminationGracePeriodSeconds)
{
    m_terminationGracePeriodSeconds = _terminationGracePeriodSeconds;
    m_terminationGracePeriodSecondsHasBeenSet = true;
}

bool ModifyModelServiceRequest::TerminationGracePeriodSecondsHasBeenSet() const
{
    return m_terminationGracePeriodSecondsHasBeenSet;
}

vector<string> ModifyModelServiceRequest::GetPreStopCommand() const
{
    return m_preStopCommand;
}

void ModifyModelServiceRequest::SetPreStopCommand(const vector<string>& _preStopCommand)
{
    m_preStopCommand = _preStopCommand;
    m_preStopCommandHasBeenSet = true;
}

bool ModifyModelServiceRequest::PreStopCommandHasBeenSet() const
{
    return m_preStopCommandHasBeenSet;
}

bool ModifyModelServiceRequest::GetGrpcEnable() const
{
    return m_grpcEnable;
}

void ModifyModelServiceRequest::SetGrpcEnable(const bool& _grpcEnable)
{
    m_grpcEnable = _grpcEnable;
    m_grpcEnableHasBeenSet = true;
}

bool ModifyModelServiceRequest::GrpcEnableHasBeenSet() const
{
    return m_grpcEnableHasBeenSet;
}

HealthProbe ModifyModelServiceRequest::GetHealthProbe() const
{
    return m_healthProbe;
}

void ModifyModelServiceRequest::SetHealthProbe(const HealthProbe& _healthProbe)
{
    m_healthProbe = _healthProbe;
    m_healthProbeHasBeenSet = true;
}

bool ModifyModelServiceRequest::HealthProbeHasBeenSet() const
{
    return m_healthProbeHasBeenSet;
}

RollingUpdate ModifyModelServiceRequest::GetRollingUpdate() const
{
    return m_rollingUpdate;
}

void ModifyModelServiceRequest::SetRollingUpdate(const RollingUpdate& _rollingUpdate)
{
    m_rollingUpdate = _rollingUpdate;
    m_rollingUpdateHasBeenSet = true;
}

bool ModifyModelServiceRequest::RollingUpdateHasBeenSet() const
{
    return m_rollingUpdateHasBeenSet;
}

SidecarSpec ModifyModelServiceRequest::GetSidecar() const
{
    return m_sidecar;
}

void ModifyModelServiceRequest::SetSidecar(const SidecarSpec& _sidecar)
{
    m_sidecar = _sidecar;
    m_sidecarHasBeenSet = true;
}

bool ModifyModelServiceRequest::SidecarHasBeenSet() const
{
    return m_sidecarHasBeenSet;
}


