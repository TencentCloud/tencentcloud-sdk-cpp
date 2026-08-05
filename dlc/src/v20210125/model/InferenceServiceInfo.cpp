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

#include <tencentcloud/dlc/v20210125/model/InferenceServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

InferenceServiceInfo::InferenceServiceInfo() :
    m_serviceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelIdentifierHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_unifiedEndpointUrlHasBeenSet(false),
    m_unifiedV2EndpointUrlHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deploymentCountHasBeenSet(false),
    m_hasRunningDeploymentHasBeenSet(false),
    m_rayDashboardUrlHasBeenSet(false),
    m_apiKeyAuthEnabledHasBeenSet(false),
    m_apiKeyAuthForceEnabledHasBeenSet(false),
    m_skipTlsVerifyHasBeenSet(false),
    m_gpuResourceSummaryHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_cpuResourceSummaryHasBeenSet(false),
    m_resourceConfigHasBeenSet(false)
{
}

CoreInternalOutcome InferenceServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = value["ModelId"].GetUint64();
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelUid") && !value["ModelUid"].IsNull())
    {
        if (!value["ModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUid = string(value["ModelUid"].GetString());
        m_modelUidHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("ModelIdentifier") && !value["ModelIdentifier"].IsNull())
    {
        if (!value["ModelIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelIdentifier = string(value["ModelIdentifier"].GetString());
        m_modelIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EndpointUrl") && !value["EndpointUrl"].IsNull())
    {
        if (!value["EndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.EndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointUrl = string(value["EndpointUrl"].GetString());
        m_endpointUrlHasBeenSet = true;
    }

    if (value.HasMember("UnifiedEndpointUrl") && !value["UnifiedEndpointUrl"].IsNull())
    {
        if (!value["UnifiedEndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.UnifiedEndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedEndpointUrl = string(value["UnifiedEndpointUrl"].GetString());
        m_unifiedEndpointUrlHasBeenSet = true;
    }

    if (value.HasMember("UnifiedV2EndpointUrl") && !value["UnifiedV2EndpointUrl"].IsNull())
    {
        if (!value["UnifiedV2EndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.UnifiedV2EndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedV2EndpointUrl = string(value["UnifiedV2EndpointUrl"].GetString());
        m_unifiedV2EndpointUrlHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DeploymentCount") && !value["DeploymentCount"].IsNull())
    {
        if (!value["DeploymentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.DeploymentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentCount = value["DeploymentCount"].GetInt64();
        m_deploymentCountHasBeenSet = true;
    }

    if (value.HasMember("HasRunningDeployment") && !value["HasRunningDeployment"].IsNull())
    {
        if (!value["HasRunningDeployment"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.HasRunningDeployment` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRunningDeployment = value["HasRunningDeployment"].GetBool();
        m_hasRunningDeploymentHasBeenSet = true;
    }

    if (value.HasMember("RayDashboardUrl") && !value["RayDashboardUrl"].IsNull())
    {
        if (!value["RayDashboardUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.RayDashboardUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayDashboardUrl = string(value["RayDashboardUrl"].GetString());
        m_rayDashboardUrlHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyAuthEnabled") && !value["ApiKeyAuthEnabled"].IsNull())
    {
        if (!value["ApiKeyAuthEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ApiKeyAuthEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyAuthEnabled = value["ApiKeyAuthEnabled"].GetBool();
        m_apiKeyAuthEnabledHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyAuthForceEnabled") && !value["ApiKeyAuthForceEnabled"].IsNull())
    {
        if (!value["ApiKeyAuthForceEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ApiKeyAuthForceEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyAuthForceEnabled = value["ApiKeyAuthForceEnabled"].GetBool();
        m_apiKeyAuthForceEnabledHasBeenSet = true;
    }

    if (value.HasMember("SkipTlsVerify") && !value["SkipTlsVerify"].IsNull())
    {
        if (!value["SkipTlsVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.SkipTlsVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipTlsVerify = value["SkipTlsVerify"].GetBool();
        m_skipTlsVerifyHasBeenSet = true;
    }

    if (value.HasMember("GpuResourceSummary") && !value["GpuResourceSummary"].IsNull())
    {
        if (!value["GpuResourceSummary"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.GpuResourceSummary` is not array type"));

        const rapidjson::Value &tmpValue = value["GpuResourceSummary"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GpuSummaryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gpuResourceSummary.push_back(item);
        }
        m_gpuResourceSummaryHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CpuResourceSummary") && !value["CpuResourceSummary"].IsNull())
    {
        if (!value["CpuResourceSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.CpuResourceSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuResourceSummary.Deserialize(value["CpuResourceSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuResourceSummaryHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceServiceInfo.ResourceConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfig = string(value["ResourceConfig"].GetString());
        m_resourceConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelId, allocator);
    }

    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedEndpointUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedEndpointUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedEndpointUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedV2EndpointUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedV2EndpointUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedV2EndpointUrl.c_str(), allocator).Move(), allocator);
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

    if (m_deploymentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deploymentCount, allocator);
    }

    if (m_hasRunningDeploymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRunningDeployment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRunningDeployment, allocator);
    }

    if (m_rayDashboardUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayDashboardUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayDashboardUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyAuthEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyAuthEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiKeyAuthEnabled, allocator);
    }

    if (m_apiKeyAuthForceEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyAuthForceEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiKeyAuthForceEnabled, allocator);
    }

    if (m_skipTlsVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipTlsVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipTlsVerify, allocator);
    }

    if (m_gpuResourceSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuResourceSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gpuResourceSummary.begin(); itr != m_gpuResourceSummary.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuResourceSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuResourceSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuResourceSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceConfig.c_str(), allocator).Move(), allocator);
    }

}


string InferenceServiceInfo::GetServiceId() const
{
    return m_serviceId;
}

void InferenceServiceInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool InferenceServiceInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string InferenceServiceInfo::GetName() const
{
    return m_name;
}

void InferenceServiceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InferenceServiceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t InferenceServiceInfo::GetModelId() const
{
    return m_modelId;
}

void InferenceServiceInfo::SetModelId(const uint64_t& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool InferenceServiceInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string InferenceServiceInfo::GetModelUid() const
{
    return m_modelUid;
}

void InferenceServiceInfo::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool InferenceServiceInfo::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string InferenceServiceInfo::GetModelName() const
{
    return m_modelName;
}

void InferenceServiceInfo::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool InferenceServiceInfo::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string InferenceServiceInfo::GetModelVersion() const
{
    return m_modelVersion;
}

void InferenceServiceInfo::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool InferenceServiceInfo::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string InferenceServiceInfo::GetModelIdentifier() const
{
    return m_modelIdentifier;
}

void InferenceServiceInfo::SetModelIdentifier(const string& _modelIdentifier)
{
    m_modelIdentifier = _modelIdentifier;
    m_modelIdentifierHasBeenSet = true;
}

bool InferenceServiceInfo::ModelIdentifierHasBeenSet() const
{
    return m_modelIdentifierHasBeenSet;
}

string InferenceServiceInfo::GetModelType() const
{
    return m_modelType;
}

void InferenceServiceInfo::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool InferenceServiceInfo::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string InferenceServiceInfo::GetStatus() const
{
    return m_status;
}

void InferenceServiceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InferenceServiceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InferenceServiceInfo::GetEndpointUrl() const
{
    return m_endpointUrl;
}

void InferenceServiceInfo::SetEndpointUrl(const string& _endpointUrl)
{
    m_endpointUrl = _endpointUrl;
    m_endpointUrlHasBeenSet = true;
}

bool InferenceServiceInfo::EndpointUrlHasBeenSet() const
{
    return m_endpointUrlHasBeenSet;
}

string InferenceServiceInfo::GetUnifiedEndpointUrl() const
{
    return m_unifiedEndpointUrl;
}

void InferenceServiceInfo::SetUnifiedEndpointUrl(const string& _unifiedEndpointUrl)
{
    m_unifiedEndpointUrl = _unifiedEndpointUrl;
    m_unifiedEndpointUrlHasBeenSet = true;
}

bool InferenceServiceInfo::UnifiedEndpointUrlHasBeenSet() const
{
    return m_unifiedEndpointUrlHasBeenSet;
}

string InferenceServiceInfo::GetUnifiedV2EndpointUrl() const
{
    return m_unifiedV2EndpointUrl;
}

void InferenceServiceInfo::SetUnifiedV2EndpointUrl(const string& _unifiedV2EndpointUrl)
{
    m_unifiedV2EndpointUrl = _unifiedV2EndpointUrl;
    m_unifiedV2EndpointUrlHasBeenSet = true;
}

bool InferenceServiceInfo::UnifiedV2EndpointUrlHasBeenSet() const
{
    return m_unifiedV2EndpointUrlHasBeenSet;
}

int64_t InferenceServiceInfo::GetAppId() const
{
    return m_appId;
}

void InferenceServiceInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InferenceServiceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InferenceServiceInfo::GetUin() const
{
    return m_uin;
}

void InferenceServiceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InferenceServiceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t InferenceServiceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InferenceServiceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InferenceServiceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InferenceServiceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void InferenceServiceInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InferenceServiceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t InferenceServiceInfo::GetDeploymentCount() const
{
    return m_deploymentCount;
}

void InferenceServiceInfo::SetDeploymentCount(const int64_t& _deploymentCount)
{
    m_deploymentCount = _deploymentCount;
    m_deploymentCountHasBeenSet = true;
}

bool InferenceServiceInfo::DeploymentCountHasBeenSet() const
{
    return m_deploymentCountHasBeenSet;
}

bool InferenceServiceInfo::GetHasRunningDeployment() const
{
    return m_hasRunningDeployment;
}

void InferenceServiceInfo::SetHasRunningDeployment(const bool& _hasRunningDeployment)
{
    m_hasRunningDeployment = _hasRunningDeployment;
    m_hasRunningDeploymentHasBeenSet = true;
}

bool InferenceServiceInfo::HasRunningDeploymentHasBeenSet() const
{
    return m_hasRunningDeploymentHasBeenSet;
}

string InferenceServiceInfo::GetRayDashboardUrl() const
{
    return m_rayDashboardUrl;
}

void InferenceServiceInfo::SetRayDashboardUrl(const string& _rayDashboardUrl)
{
    m_rayDashboardUrl = _rayDashboardUrl;
    m_rayDashboardUrlHasBeenSet = true;
}

bool InferenceServiceInfo::RayDashboardUrlHasBeenSet() const
{
    return m_rayDashboardUrlHasBeenSet;
}

bool InferenceServiceInfo::GetApiKeyAuthEnabled() const
{
    return m_apiKeyAuthEnabled;
}

void InferenceServiceInfo::SetApiKeyAuthEnabled(const bool& _apiKeyAuthEnabled)
{
    m_apiKeyAuthEnabled = _apiKeyAuthEnabled;
    m_apiKeyAuthEnabledHasBeenSet = true;
}

bool InferenceServiceInfo::ApiKeyAuthEnabledHasBeenSet() const
{
    return m_apiKeyAuthEnabledHasBeenSet;
}

bool InferenceServiceInfo::GetApiKeyAuthForceEnabled() const
{
    return m_apiKeyAuthForceEnabled;
}

void InferenceServiceInfo::SetApiKeyAuthForceEnabled(const bool& _apiKeyAuthForceEnabled)
{
    m_apiKeyAuthForceEnabled = _apiKeyAuthForceEnabled;
    m_apiKeyAuthForceEnabledHasBeenSet = true;
}

bool InferenceServiceInfo::ApiKeyAuthForceEnabledHasBeenSet() const
{
    return m_apiKeyAuthForceEnabledHasBeenSet;
}

bool InferenceServiceInfo::GetSkipTlsVerify() const
{
    return m_skipTlsVerify;
}

void InferenceServiceInfo::SetSkipTlsVerify(const bool& _skipTlsVerify)
{
    m_skipTlsVerify = _skipTlsVerify;
    m_skipTlsVerifyHasBeenSet = true;
}

bool InferenceServiceInfo::SkipTlsVerifyHasBeenSet() const
{
    return m_skipTlsVerifyHasBeenSet;
}

vector<GpuSummaryItem> InferenceServiceInfo::GetGpuResourceSummary() const
{
    return m_gpuResourceSummary;
}

void InferenceServiceInfo::SetGpuResourceSummary(const vector<GpuSummaryItem>& _gpuResourceSummary)
{
    m_gpuResourceSummary = _gpuResourceSummary;
    m_gpuResourceSummaryHasBeenSet = true;
}

bool InferenceServiceInfo::GpuResourceSummaryHasBeenSet() const
{
    return m_gpuResourceSummaryHasBeenSet;
}

string InferenceServiceInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void InferenceServiceInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool InferenceServiceInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

CpuSummaryItem InferenceServiceInfo::GetCpuResourceSummary() const
{
    return m_cpuResourceSummary;
}

void InferenceServiceInfo::SetCpuResourceSummary(const CpuSummaryItem& _cpuResourceSummary)
{
    m_cpuResourceSummary = _cpuResourceSummary;
    m_cpuResourceSummaryHasBeenSet = true;
}

bool InferenceServiceInfo::CpuResourceSummaryHasBeenSet() const
{
    return m_cpuResourceSummaryHasBeenSet;
}

string InferenceServiceInfo::GetResourceConfig() const
{
    return m_resourceConfig;
}

void InferenceServiceInfo::SetResourceConfig(const string& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool InferenceServiceInfo::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

