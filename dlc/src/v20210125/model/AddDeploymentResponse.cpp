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

#include <tencentcloud/dlc/v20210125/model/AddDeploymentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AddDeploymentResponse::AddDeploymentResponse() :
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
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_neutrinoServeIdHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_resourcePartitionNameHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

CoreInternalOutcome AddDeploymentResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DeploymentId") && !rsp["DeploymentId"].IsNull())
    {
        if (!rsp["DeploymentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentId = string(rsp["DeploymentId"].GetString());
        m_deploymentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ModelVersion") && !rsp["ModelVersion"].IsNull())
    {
        if (!rsp["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(rsp["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Engine") && !rsp["Engine"].IsNull())
    {
        if (!rsp["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(rsp["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (rsp.HasMember("Replicas") && !rsp["Replicas"].IsNull())
    {
        if (!rsp["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = rsp["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableReplicas") && !rsp["AvailableReplicas"].IsNull())
    {
        if (!rsp["AvailableReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableReplicas = rsp["AvailableReplicas"].GetInt64();
        m_availableReplicasHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceConfig") && !rsp["ResourceConfig"].IsNull())
    {
        if (!rsp["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(rsp["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }

    if (rsp.HasMember("HeadHighAvailabilityEnabled") && !rsp["HeadHighAvailabilityEnabled"].IsNull())
    {
        if (!rsp["HeadHighAvailabilityEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HeadHighAvailabilityEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headHighAvailabilityEnabled = rsp["HeadHighAvailabilityEnabled"].GetBool();
        m_headHighAvailabilityEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedParams") && !rsp["AdvancedParams"].IsNull())
    {
        if (!rsp["AdvancedParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedParams = string(rsp["AdvancedParams"].GetString());
        m_advancedParamsHasBeenSet = true;
    }

    if (rsp.HasMember("AutoscalingEnabled") && !rsp["AutoscalingEnabled"].IsNull())
    {
        if (!rsp["AutoscalingEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoscalingEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingEnabled = rsp["AutoscalingEnabled"].GetBool();
        m_autoscalingEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("ModelStorageConfig") && !rsp["ModelStorageConfig"].IsNull())
    {
        if (!rsp["ModelStorageConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelStorageConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelStorageConfig = string(rsp["ModelStorageConfig"].GetString());
        m_modelStorageConfigHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NeutrinoServeId") && !rsp["NeutrinoServeId"].IsNull())
    {
        if (!rsp["NeutrinoServeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NeutrinoServeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_neutrinoServeId = string(rsp["NeutrinoServeId"].GetString());
        m_neutrinoServeIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePartitionId") && !rsp["ResourcePartitionId"].IsNull())
    {
        if (!rsp["ResourcePartitionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePartitionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionId = string(rsp["ResourcePartitionId"].GetString());
        m_resourcePartitionIdHasBeenSet = true;
    }

    if (rsp.HasMember("Queue") && !rsp["Queue"].IsNull())
    {
        if (!rsp["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(rsp["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (rsp.HasMember("SubAccountUin") && !rsp["SubAccountUin"].IsNull())
    {
        if (!rsp["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(rsp["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (rsp.HasMember("Image") && !rsp["Image"].IsNull())
    {
        if (!rsp["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(rsp["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (rsp.HasMember("ResourcePartitionName") && !rsp["ResourcePartitionName"].IsNull())
    {
        if (!rsp["ResourcePartitionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePartitionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePartitionName = string(rsp["ResourcePartitionName"].GetString());
        m_resourcePartitionNameHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedOptions") && !rsp["AdvancedOptions"].IsNull())
    {
        if (!rsp["AdvancedOptions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedOptions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedOptions = string(rsp["AdvancedOptions"].GetString());
        m_advancedOptionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AddDeploymentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
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

    if (m_advancedOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedOptions.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string AddDeploymentResponse::GetDeploymentId() const
{
    return m_deploymentId;
}

bool AddDeploymentResponse::DeploymentIdHasBeenSet() const
{
    return m_deploymentIdHasBeenSet;
}

string AddDeploymentResponse::GetName() const
{
    return m_name;
}

bool AddDeploymentResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddDeploymentResponse::GetServiceId() const
{
    return m_serviceId;
}

bool AddDeploymentResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string AddDeploymentResponse::GetModelVersion() const
{
    return m_modelVersion;
}

bool AddDeploymentResponse::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string AddDeploymentResponse::GetStatus() const
{
    return m_status;
}

bool AddDeploymentResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AddDeploymentResponse::GetEngine() const
{
    return m_engine;
}

bool AddDeploymentResponse::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

int64_t AddDeploymentResponse::GetReplicas() const
{
    return m_replicas;
}

bool AddDeploymentResponse::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t AddDeploymentResponse::GetAvailableReplicas() const
{
    return m_availableReplicas;
}

bool AddDeploymentResponse::AvailableReplicasHasBeenSet() const
{
    return m_availableReplicasHasBeenSet;
}

string AddDeploymentResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool AddDeploymentResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

bool AddDeploymentResponse::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

bool AddDeploymentResponse::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

string AddDeploymentResponse::GetAdvancedParams() const
{
    return m_advancedParams;
}

bool AddDeploymentResponse::AdvancedParamsHasBeenSet() const
{
    return m_advancedParamsHasBeenSet;
}

bool AddDeploymentResponse::GetAutoscalingEnabled() const
{
    return m_autoscalingEnabled;
}

bool AddDeploymentResponse::AutoscalingEnabledHasBeenSet() const
{
    return m_autoscalingEnabledHasBeenSet;
}

string AddDeploymentResponse::GetModelStorageConfig() const
{
    return m_modelStorageConfig;
}

bool AddDeploymentResponse::ModelStorageConfigHasBeenSet() const
{
    return m_modelStorageConfigHasBeenSet;
}

int64_t AddDeploymentResponse::GetAppId() const
{
    return m_appId;
}

bool AddDeploymentResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AddDeploymentResponse::GetUin() const
{
    return m_uin;
}

bool AddDeploymentResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t AddDeploymentResponse::GetCreateTime() const
{
    return m_createTime;
}

bool AddDeploymentResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AddDeploymentResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool AddDeploymentResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AddDeploymentResponse::GetNeutrinoServeId() const
{
    return m_neutrinoServeId;
}

bool AddDeploymentResponse::NeutrinoServeIdHasBeenSet() const
{
    return m_neutrinoServeIdHasBeenSet;
}

string AddDeploymentResponse::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

bool AddDeploymentResponse::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string AddDeploymentResponse::GetQueue() const
{
    return m_queue;
}

bool AddDeploymentResponse::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string AddDeploymentResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool AddDeploymentResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string AddDeploymentResponse::GetImage() const
{
    return m_image;
}

bool AddDeploymentResponse::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string AddDeploymentResponse::GetResourcePartitionName() const
{
    return m_resourcePartitionName;
}

bool AddDeploymentResponse::ResourcePartitionNameHasBeenSet() const
{
    return m_resourcePartitionNameHasBeenSet;
}

string AddDeploymentResponse::GetAdvancedOptions() const
{
    return m_advancedOptions;
}

bool AddDeploymentResponse::AdvancedOptionsHasBeenSet() const
{
    return m_advancedOptionsHasBeenSet;
}


