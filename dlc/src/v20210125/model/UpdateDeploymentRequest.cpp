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

#include <tencentcloud/dlc/v20210125/model/UpdateDeploymentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateDeploymentRequest::UpdateDeploymentRequest() :
    m_deploymentIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_autoscalingEnabledHasBeenSet(false)
{
}

string UpdateDeploymentRequest::ToJsonString() const
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

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
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

    if (m_autoscalingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoscalingEnabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDeploymentRequest::GetDeploymentId() const
{
    return m_deploymentId;
}

void UpdateDeploymentRequest::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool UpdateDeploymentRequest::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string UpdateDeploymentRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void UpdateDeploymentRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool UpdateDeploymentRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string UpdateDeploymentRequest::GetEngine() const
{
    return m_engine;
}

void UpdateDeploymentRequest::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool UpdateDeploymentRequest::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t UpdateDeploymentRequest::GetReplicas() const
{
    return m_replicas;
}

void UpdateDeploymentRequest::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool UpdateDeploymentRequest::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

bool UpdateDeploymentRequest::GetAutoscalingEnabled() const
{
    return m_autoscalingEnabled;
}

void UpdateDeploymentRequest::SetAutoscalingEnabled(const bool& _autoscalingEnabled)
{
    m_autoscalingEnabled = _autoscalingEnabled;
    m_autoscalingEnabledHasBeenSet = true;
}

bool UpdateDeploymentRequest::AutoscalingEnabledHasBeenSet() const
{
    return m_autoscalingEnabledHasBeenSet;
}


