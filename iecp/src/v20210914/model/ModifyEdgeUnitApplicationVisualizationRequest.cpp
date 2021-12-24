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

#include <tencentcloud/iecp/v20210914/model/ModifyEdgeUnitApplicationVisualizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ModifyEdgeUnitApplicationVisualizationRequest::ModifyEdgeUnitApplicationVisualizationRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_basicConfigHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_cronJobHasBeenSet(false),
    m_restartPolicyHasBeenSet(false),
    m_imagePullSecretsHasBeenSet(false),
    m_horizontalPodAutoscalerHasBeenSet(false)
{
}

string ModifyEdgeUnitApplicationVisualizationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_applicationId, allocator);
    }

    if (m_basicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volumes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumes.begin(); itr != m_volumes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_initContainersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitContainers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initContainers.begin(); itr != m_initContainers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_containersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Containers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containers.begin(); itr != m_containers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_service.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_job.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cronJobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJob";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronJob.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePullSecretsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullSecrets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imagePullSecrets.begin(); itr != m_imagePullSecrets.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_horizontalPodAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalPodAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalPodAutoscaler.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEdgeUnitApplicationVisualizationRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

uint64_t ModifyEdgeUnitApplicationVisualizationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetApplicationId(const uint64_t& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

ApplicationBasicConfig ModifyEdgeUnitApplicationVisualizationRequest::GetBasicConfig() const
{
    return m_basicConfig;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetBasicConfig(const ApplicationBasicConfig& _basicConfig)
{
    m_basicConfig = _basicConfig;
    m_basicConfigHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::BasicConfigHasBeenSet() const
{
    return m_basicConfigHasBeenSet;
}

vector<Volume> ModifyEdgeUnitApplicationVisualizationRequest::GetVolumes() const
{
    return m_volumes;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetVolumes(const vector<Volume>& _volumes)
{
    m_volumes = _volumes;
    m_volumesHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::VolumesHasBeenSet() const
{
    return m_volumesHasBeenSet;
}

vector<Container> ModifyEdgeUnitApplicationVisualizationRequest::GetInitContainers() const
{
    return m_initContainers;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetInitContainers(const vector<Container>& _initContainers)
{
    m_initContainers = _initContainers;
    m_initContainersHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::InitContainersHasBeenSet() const
{
    return m_initContainersHasBeenSet;
}

vector<Container> ModifyEdgeUnitApplicationVisualizationRequest::GetContainers() const
{
    return m_containers;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetContainers(const vector<Container>& _containers)
{
    m_containers = _containers;
    m_containersHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::ContainersHasBeenSet() const
{
    return m_containersHasBeenSet;
}

Service ModifyEdgeUnitApplicationVisualizationRequest::GetService() const
{
    return m_service;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetService(const Service& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

Job ModifyEdgeUnitApplicationVisualizationRequest::GetJob() const
{
    return m_job;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetJob(const Job& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

CronJob ModifyEdgeUnitApplicationVisualizationRequest::GetCronJob() const
{
    return m_cronJob;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetCronJob(const CronJob& _cronJob)
{
    m_cronJob = _cronJob;
    m_cronJobHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::CronJobHasBeenSet() const
{
    return m_cronJobHasBeenSet;
}

string ModifyEdgeUnitApplicationVisualizationRequest::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

vector<string> ModifyEdgeUnitApplicationVisualizationRequest::GetImagePullSecrets() const
{
    return m_imagePullSecrets;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetImagePullSecrets(const vector<string>& _imagePullSecrets)
{
    m_imagePullSecrets = _imagePullSecrets;
    m_imagePullSecretsHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::ImagePullSecretsHasBeenSet() const
{
    return m_imagePullSecretsHasBeenSet;
}

HorizontalPodAutoscaler ModifyEdgeUnitApplicationVisualizationRequest::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

void ModifyEdgeUnitApplicationVisualizationRequest::SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler)
{
    m_horizontalPodAutoscaler = _horizontalPodAutoscaler;
    m_horizontalPodAutoscalerHasBeenSet = true;
}

bool ModifyEdgeUnitApplicationVisualizationRequest::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}


