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

#include <tencentcloud/dlc/v20210125/model/RestartInferenceServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

RestartInferenceServiceResponse::RestartInferenceServiceResponse() :
    m_serviceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
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
    m_apiKeyAuthEnabledHasBeenSet(false),
    m_apiKeyAuthForceEnabledHasBeenSet(false),
    m_skipTlsVerifyHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_cpuResourceSummaryHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

CoreInternalOutcome RestartInferenceServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ServiceId") && !rsp["ServiceId"].IsNull())
    {
        if (!rsp["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(rsp["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
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

    if (rsp.HasMember("ModelUid") && !rsp["ModelUid"].IsNull())
    {
        if (!rsp["ModelUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUid = string(rsp["ModelUid"].GetString());
        m_modelUidHasBeenSet = true;
    }

    if (rsp.HasMember("ModelName") && !rsp["ModelName"].IsNull())
    {
        if (!rsp["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(rsp["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
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

    if (rsp.HasMember("ModelIdentifier") && !rsp["ModelIdentifier"].IsNull())
    {
        if (!rsp["ModelIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelIdentifier = string(rsp["ModelIdentifier"].GetString());
        m_modelIdentifierHasBeenSet = true;
    }

    if (rsp.HasMember("ModelType") && !rsp["ModelType"].IsNull())
    {
        if (!rsp["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(rsp["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
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

    if (rsp.HasMember("EndpointUrl") && !rsp["EndpointUrl"].IsNull())
    {
        if (!rsp["EndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointUrl = string(rsp["EndpointUrl"].GetString());
        m_endpointUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UnifiedEndpointUrl") && !rsp["UnifiedEndpointUrl"].IsNull())
    {
        if (!rsp["UnifiedEndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnifiedEndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedEndpointUrl = string(rsp["UnifiedEndpointUrl"].GetString());
        m_unifiedEndpointUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UnifiedV2EndpointUrl") && !rsp["UnifiedV2EndpointUrl"].IsNull())
    {
        if (!rsp["UnifiedV2EndpointUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnifiedV2EndpointUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedV2EndpointUrl = string(rsp["UnifiedV2EndpointUrl"].GetString());
        m_unifiedV2EndpointUrlHasBeenSet = true;
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

    if (rsp.HasMember("DeploymentCount") && !rsp["DeploymentCount"].IsNull())
    {
        if (!rsp["DeploymentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeploymentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deploymentCount = rsp["DeploymentCount"].GetInt64();
        m_deploymentCountHasBeenSet = true;
    }

    if (rsp.HasMember("HasRunningDeployment") && !rsp["HasRunningDeployment"].IsNull())
    {
        if (!rsp["HasRunningDeployment"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HasRunningDeployment` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRunningDeployment = rsp["HasRunningDeployment"].GetBool();
        m_hasRunningDeploymentHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyAuthEnabled") && !rsp["ApiKeyAuthEnabled"].IsNull())
    {
        if (!rsp["ApiKeyAuthEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyAuthEnabled = rsp["ApiKeyAuthEnabled"].GetBool();
        m_apiKeyAuthEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKeyAuthForceEnabled") && !rsp["ApiKeyAuthForceEnabled"].IsNull())
    {
        if (!rsp["ApiKeyAuthForceEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyAuthForceEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyAuthForceEnabled = rsp["ApiKeyAuthForceEnabled"].GetBool();
        m_apiKeyAuthForceEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("SkipTlsVerify") && !rsp["SkipTlsVerify"].IsNull())
    {
        if (!rsp["SkipTlsVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SkipTlsVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipTlsVerify = rsp["SkipTlsVerify"].GetBool();
        m_skipTlsVerifyHasBeenSet = true;
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

    if (rsp.HasMember("CpuResourceSummary") && !rsp["CpuResourceSummary"].IsNull())
    {
        if (!rsp["CpuResourceSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CpuResourceSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuResourceSummary.Deserialize(rsp["CpuResourceSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuResourceSummaryHasBeenSet = true;
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

    if (rsp.HasMember("ResourceTags") && !rsp["ResourceTags"].IsNull())
    {
        if (!rsp["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RestartInferenceServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string RestartInferenceServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool RestartInferenceServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string RestartInferenceServiceResponse::GetName() const
{
    return m_name;
}

bool RestartInferenceServiceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RestartInferenceServiceResponse::GetModelUid() const
{
    return m_modelUid;
}

bool RestartInferenceServiceResponse::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string RestartInferenceServiceResponse::GetModelName() const
{
    return m_modelName;
}

bool RestartInferenceServiceResponse::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string RestartInferenceServiceResponse::GetModelVersion() const
{
    return m_modelVersion;
}

bool RestartInferenceServiceResponse::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string RestartInferenceServiceResponse::GetModelIdentifier() const
{
    return m_modelIdentifier;
}

bool RestartInferenceServiceResponse::ModelIdentifierHasBeenSet() const
{
    return m_modelIdentifierHasBeenSet;
}

string RestartInferenceServiceResponse::GetModelType() const
{
    return m_modelType;
}

bool RestartInferenceServiceResponse::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string RestartInferenceServiceResponse::GetStatus() const
{
    return m_status;
}

bool RestartInferenceServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RestartInferenceServiceResponse::GetEndpointUrl() const
{
    return m_endpointUrl;
}

bool RestartInferenceServiceResponse::EndpointUrlHasBeenSet() const
{
    return m_endpointUrlHasBeenSet;
}

string RestartInferenceServiceResponse::GetUnifiedEndpointUrl() const
{
    return m_unifiedEndpointUrl;
}

bool RestartInferenceServiceResponse::UnifiedEndpointUrlHasBeenSet() const
{
    return m_unifiedEndpointUrlHasBeenSet;
}

string RestartInferenceServiceResponse::GetUnifiedV2EndpointUrl() const
{
    return m_unifiedV2EndpointUrl;
}

bool RestartInferenceServiceResponse::UnifiedV2EndpointUrlHasBeenSet() const
{
    return m_unifiedV2EndpointUrlHasBeenSet;
}

int64_t RestartInferenceServiceResponse::GetAppId() const
{
    return m_appId;
}

bool RestartInferenceServiceResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RestartInferenceServiceResponse::GetUin() const
{
    return m_uin;
}

bool RestartInferenceServiceResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t RestartInferenceServiceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool RestartInferenceServiceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t RestartInferenceServiceResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool RestartInferenceServiceResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t RestartInferenceServiceResponse::GetDeploymentCount() const
{
    return m_deploymentCount;
}

bool RestartInferenceServiceResponse::DeploymentCountHasBeenSet() const
{
    return m_deploymentCountHasBeenSet;
}

bool RestartInferenceServiceResponse::GetHasRunningDeployment() const
{
    return m_hasRunningDeployment;
}

bool RestartInferenceServiceResponse::HasRunningDeploymentHasBeenSet() const
{
    return m_hasRunningDeploymentHasBeenSet;
}

bool RestartInferenceServiceResponse::GetApiKeyAuthEnabled() const
{
    return m_apiKeyAuthEnabled;
}

bool RestartInferenceServiceResponse::ApiKeyAuthEnabledHasBeenSet() const
{
    return m_apiKeyAuthEnabledHasBeenSet;
}

bool RestartInferenceServiceResponse::GetApiKeyAuthForceEnabled() const
{
    return m_apiKeyAuthForceEnabled;
}

bool RestartInferenceServiceResponse::ApiKeyAuthForceEnabledHasBeenSet() const
{
    return m_apiKeyAuthForceEnabledHasBeenSet;
}

bool RestartInferenceServiceResponse::GetSkipTlsVerify() const
{
    return m_skipTlsVerify;
}

bool RestartInferenceServiceResponse::SkipTlsVerifyHasBeenSet() const
{
    return m_skipTlsVerifyHasBeenSet;
}

string RestartInferenceServiceResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool RestartInferenceServiceResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

CpuSummaryItem RestartInferenceServiceResponse::GetCpuResourceSummary() const
{
    return m_cpuResourceSummary;
}

bool RestartInferenceServiceResponse::CpuResourceSummaryHasBeenSet() const
{
    return m_cpuResourceSummaryHasBeenSet;
}

string RestartInferenceServiceResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool RestartInferenceServiceResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

vector<Tag> RestartInferenceServiceResponse::GetResourceTags() const
{
    return m_resourceTags;
}

bool RestartInferenceServiceResponse::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}


