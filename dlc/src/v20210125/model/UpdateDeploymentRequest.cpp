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
    m_autoscalingEnabledHasBeenSet(false),
    m_codePackageUriHasBeenSet(false),
    m_codePackageOriginalNameHasBeenSet(false),
    m_crOverridesHasBeenSet(false),
    m_headHighAvailabilityEnabledHasBeenSet(false),
    m_loraBindingsHasBeenSet(false),
    m_runtimeEnvHasBeenSet(false)
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

    if (m_codePackageUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackageUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codePackageUri.c_str(), allocator).Move(), allocator);
    }

    if (m_codePackageOriginalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackageOriginalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codePackageOriginalName.c_str(), allocator).Move(), allocator);
    }

    if (m_crOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrOverrides";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crOverrides.c_str(), allocator).Move(), allocator);
    }

    if (m_headHighAvailabilityEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadHighAvailabilityEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_headHighAvailabilityEnabled, allocator);
    }

    if (m_loraBindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoraBindings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loraBindings.begin(); itr != m_loraBindings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_runtimeEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runtimeEnv.c_str(), allocator).Move(), allocator);
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

string UpdateDeploymentRequest::GetCodePackageUri() const
{
    return m_codePackageUri;
}

void UpdateDeploymentRequest::SetCodePackageUri(const string& _codePackageUri)
{
    m_codePackageUri = _codePackageUri;
    m_codePackageUriHasBeenSet = true;
}

bool UpdateDeploymentRequest::CodePackageUriHasBeenSet() const
{
    return m_codePackageUriHasBeenSet;
}

string UpdateDeploymentRequest::GetCodePackageOriginalName() const
{
    return m_codePackageOriginalName;
}

void UpdateDeploymentRequest::SetCodePackageOriginalName(const string& _codePackageOriginalName)
{
    m_codePackageOriginalName = _codePackageOriginalName;
    m_codePackageOriginalNameHasBeenSet = true;
}

bool UpdateDeploymentRequest::CodePackageOriginalNameHasBeenSet() const
{
    return m_codePackageOriginalNameHasBeenSet;
}

string UpdateDeploymentRequest::GetCrOverrides() const
{
    return m_crOverrides;
}

void UpdateDeploymentRequest::SetCrOverrides(const string& _crOverrides)
{
    m_crOverrides = _crOverrides;
    m_crOverridesHasBeenSet = true;
}

bool UpdateDeploymentRequest::CrOverridesHasBeenSet() const
{
    return m_crOverridesHasBeenSet;
}

bool UpdateDeploymentRequest::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

void UpdateDeploymentRequest::SetHeadHighAvailabilityEnabled(const bool& _headHighAvailabilityEnabled)
{
    m_headHighAvailabilityEnabled = _headHighAvailabilityEnabled;
    m_headHighAvailabilityEnabledHasBeenSet = true;
}

bool UpdateDeploymentRequest::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

vector<LoraAdapterBinding> UpdateDeploymentRequest::GetLoraBindings() const
{
    return m_loraBindings;
}

void UpdateDeploymentRequest::SetLoraBindings(const vector<LoraAdapterBinding>& _loraBindings)
{
    m_loraBindings = _loraBindings;
    m_loraBindingsHasBeenSet = true;
}

bool UpdateDeploymentRequest::LoraBindingsHasBeenSet() const
{
    return m_loraBindingsHasBeenSet;
}

string UpdateDeploymentRequest::GetRuntimeEnv() const
{
    return m_runtimeEnv;
}

void UpdateDeploymentRequest::SetRuntimeEnv(const string& _runtimeEnv)
{
    m_runtimeEnv = _runtimeEnv;
    m_runtimeEnvHasBeenSet = true;
}

bool UpdateDeploymentRequest::RuntimeEnvHasBeenSet() const
{
    return m_runtimeEnvHasBeenSet;
}


