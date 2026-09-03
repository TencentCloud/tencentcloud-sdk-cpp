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

#include <tencentcloud/dlc/v20210125/model/DeploymentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DeploymentInfo::DeploymentInfo() :
    m_deploymentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_availableReplicasHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_headHighAvailabilityEnabledHasBeenSet(false),
    m_advancedParamsHasBeenSet(false),
    m_autoscalingEnabledHasBeenSet(false),
    m_modelStorageConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_neutrinoServeIdHasBeenSet(false),
    m_rayDashboardUrlHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false)
{
}

CoreInternalOutcome DeploymentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeploymentId") && !value["DeploymentId"].IsNull())
    {
        if (!value["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(value["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("AvailableReplicas") && !value["AvailableReplicas"].IsNull())
    {
        if (!value["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = value["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("HeadHighAvailabilityEnabled") && !value["HeadHighAvailabilityEnabled"].IsNull())
    {
        if (!value["HeadHighAvailabilityEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.HeadHighAvailabilityEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headHighAvailabilityEnabled = value["HeadHighAvailabilityEnabled"].GetBool();
        m_headHighAvailabilityEnabledHasBeenSet = true;
    }

    if (value.HasMember("AdvancedParams") && !value["AdvancedParams"].IsNull())
    {
        if (!value["AdvancedParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.AdvancedParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedParams = string(value["AdvancedParams"].GetString());
        m_advancedParamsHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingEnabled") && !value["AutoscalingEnabled"].IsNull())
    {
        if (!value["AutoscalingEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.AutoscalingEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingEnabled = value["AutoscalingEnabled"].GetBool();
        m_autoscalingEnabledHasBeenSet = true;
    }

    if (value.HasMember("ModelStorageConfig") && !value["ModelStorageConfig"].IsNull())
    {
        if (!value["ModelStorageConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ModelStorageConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelStorageConfig = string(value["ModelStorageConfig"].GetString());
        m_modelStorageConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NeutrinoServeId") && !value["NeutrinoServeId"].IsNull())
    {
        if (!value["NeutrinoServeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.NeutrinoServeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_neutrinoServeId = string(value["NeutrinoServeId"].GetString());
        m_neutrinoServeIdHasBeenSet = true;
    }

    if (value.HasMember("RayDashboardUrl") && !value["RayDashboardUrl"].IsNull())
    {
        if (!value["RayDashboardUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.RayDashboardUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayDashboardUrl = string(value["RayDashboardUrl"].GetString());
        m_rayDashboardUrlHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionId") && !value["ResourcePartitionId"].IsNull())
    {
        if (!value["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(value["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("AdvancedOptions") && !value["AdvancedOptions"].IsNull())
    {
        if (!value["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(value["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("ResourcePartitionName") && !value["ResourcePartitionName"].IsNull())
    {
        if (!value["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentInfo.ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(value["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeploymentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deploymentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deploymentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_availableReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableReplicas, allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_headHighAvailabilityEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadHighAvailabilityEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headHighAvailabilityEnabled, allocator);
    }

    if (m_advancedParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedParams.c_str(), allocator).Move(), allocator);
    }

    if (m_autoscalingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoscalingEnabled, allocator);
    }

    if (m_modelStorageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelStorageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelStorageConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_neutrinoServeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeutrinoServeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_neutrinoServeId.c_str(), allocator).Move(), allocator);
    }

    if (m_rayDashboardUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayDashboardUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayDashboardUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePartitionName.c_str(), allocator).Move(), allocator);
    }

}


string DeploymentInfo::GetDeploymentId() const
{
    return m_deploymentId;
}

void DeploymentInfo::SetDeploymentId(const string& _deploymentId)
{
    m_deploymentId = _deploymentId;
    m_deploymentIdHasBeenSet = true;
}

bool DeploymentInfo::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string DeploymentInfo::GetName() const
{
    return m_name;
}

void DeploymentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeploymentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeploymentInfo::GetServiceId() const
{
    return m_serviceId;
}

void DeploymentInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DeploymentInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DeploymentInfo::GetModelVersion() const
{
    return m_modelVersion;
}

void DeploymentInfo::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool DeploymentInfo::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string DeploymentInfo::GetStatus() const
{
    return m_status;
}

void DeploymentInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeploymentInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeploymentInfo::GetEngine() const
{
    return m_engine;
}

void DeploymentInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DeploymentInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t DeploymentInfo::GetReplicas() const
{
    return m_replicas;
}

void DeploymentInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool DeploymentInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t DeploymentInfo::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

void DeploymentInfo::SetAvailableReplicas(const int64_t& _availableReplicas)
{
    m_availableReplicas = _availableReplicas;
    m_availableReplicasHasBeenSet = true;
}

bool DeploymentInfo::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

string DeploymentInfo::GetResourceConfig() const
{
    return m_resourceConfig;
}

void DeploymentInfo::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool DeploymentInfo::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

bool DeploymentInfo::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

void DeploymentInfo::SetHeadHighAvailabilityEnabled(const bool& _headHighAvailabilityEnabled)
{
    m_headHighAvailabilityEnabled = _headHighAvailabilityEnabled;
    m_headHighAvailabilityEnabledHasBeenSet = true;
}

bool DeploymentInfo::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

string DeploymentInfo::GetAdvancedParams() const
{
    return m_advancedParams;
}

void DeploymentInfo::SetAdvancedParams(const string& _advancedParams)
{
    m_advancedParams = _advancedParams;
    m_advancedParamsHasBeenSet = true;
}

bool DeploymentInfo::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

bool DeploymentInfo::GetAutoscalingEnabled() const
{
    return m_autoscalingEnabled;
}

void DeploymentInfo::SetAutoscalingEnabled(const bool& _autoscalingEnabled)
{
    m_autoscalingEnabled = _autoscalingEnabled;
    m_autoscalingEnabledHasBeenSet = true;
}

bool DeploymentInfo::AutoscalingEnabledHasBeenSet() const
{
    return m_autoscalingEnabledHasBeenSet;
}

string DeploymentInfo::GetModelStorageConfig() const
{
    return m_modelStorageConfig;
}

void DeploymentInfo::SetModelStorageConfig(const string& _modelStorageConfig)
{
    m_modelStorageConfig = _modelStorageConfig;
    m_modelStorageConfigHasBeenSet = true;
}

bool DeploymentInfo::ModelStorageConfigHasBeenSet() const
{
    return m_modelStorageConfigHasBeenSet;
}

int64_t DeploymentInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeploymentInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeploymentInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DeploymentInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DeploymentInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DeploymentInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DeploymentInfo::GetNeutrinoServeId() const
{
    return m_neutrinoServeId;
}

void DeploymentInfo::SetNeutrinoServeId(const string& _neutrinoServeId)
{
    m_neutrinoServeId = _neutrinoServeId;
    m_neutrinoServeIdHasBeenSet = true;
}

bool DeploymentInfo::NeutrinoServeIdHasBeenSet() const
{
    return m_neutrinoServeIdHasBeenSet;
}

string DeploymentInfo::GetRayDashboardUrl() const
{
    return m_rayDashboardUrl;
}

void DeploymentInfo::SetRayDashboardUrl(const string& _rayDashboardUrl)
{
    m_rayDashboardUrl = _rayDashboardUrl;
    m_rayDashboardUrlHasBeenSet = true;
}

bool DeploymentInfo::RayDashboardUrlHasBeenSet() const
{
    return m_rayDashboardUrlHasBeenSet;
}

string DeploymentInfo::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void DeploymentInfo::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool DeploymentInfo::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string DeploymentInfo::GetQueue() const
{
    return m_queue;
}

void DeploymentInfo::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool DeploymentInfo::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

int64_t DeploymentInfo::GetAppId() const
{
    return m_appId;
}

void DeploymentInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DeploymentInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DeploymentInfo::GetUin() const
{
    return m_uin;
}

void DeploymentInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DeploymentInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DeploymentInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void DeploymentInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool DeploymentInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string DeploymentInfo::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

void DeploymentInfo::SetAdvancedOptions(const string& _advancedOptions)
{
    m_advancedOptions = _advancedOptions;
    m_advancedOptionsHasBeenSet = true;
}

bool DeploymentInfo::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}

string DeploymentInfo::GetImage() const
{
    return m_image;
}

void DeploymentInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool DeploymentInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string DeploymentInfo::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

void DeploymentInfo::SetResourcePartitionName(const string& _resourcePartitionName)
{
    m_resourcePartitionName = _resourcePartitionName;
    m_resourcePartitionNameHasBeenSet = true;
}

bool DeploymentInfo::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

