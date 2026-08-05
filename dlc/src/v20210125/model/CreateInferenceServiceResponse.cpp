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

#include <tencentcloud/dlc/v20210125/model/CreateInferenceServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateInferenceServiceResponse::CreateInferenceServiceResponse() :
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
    m_headHighAvailabilityEnabledHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_deploymentCountHasBeenSet(false),
    m_hasRunningDeploymentHasBeenSet(false),
    m_apiKeyAuthEnabledHasBeenSet(false),
    m_apiKeyAuthForceEnabledHasBeenSet(false),
    m_skipTlsVerifyHasBeenSet(false),
    m_apiKeyBindMessageHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_cpuResourceSummaryHasBeenSet(false),
    m_resourceConfigHasBeenSet(false)
{
}

CoreInternalOutcome CreateInferenceServiceResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("ModelId") && !rsp["ModelId"].IsNull())
    {
        if (!rsp["ModelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = rsp["ModelId"].GetUint64();
        m_modelIdHasBeenSet = true;
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

    if (rsp.HasMember("HeadHighAvailabilityEnabled") && !rsp["HeadHighAvailabilityEnabled"].IsNull())
    {
        if (!rsp["HeadHighAvailabilityEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HeadHighAvailabilityEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headHighAvailabilityEnabled = rsp["HeadHighAvailabilityEnabled"].GetBool();
        m_headHighAvailabilityEnabledHasBeenSet = true;
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

    if (rsp.HasMember("ApiKeyBindMessage") && !rsp["ApiKeyBindMessage"].IsNull())
    {
        if (!rsp["ApiKeyBindMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyBindMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyBindMessage = string(rsp["ApiKeyBindMessage"].GetString());
        m_apiKeyBindMessageHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string CreateInferenceServiceResponse::ToJsonString() const
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

    if (m_headHighAvailabilityEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadHighAvailabilityEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headHighAvailabilityEnabled, allocator);
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

    if (m_apiKeyBindMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyBindMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyBindMessage.c_str(), allocator).Move(), allocator);
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateInferenceServiceResponse::GetServiceId() const
{
    return m_serviceId;
}

bool CreateInferenceServiceResponse::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateInferenceServiceResponse::GetName() const
{
    return m_name;
}

bool CreateInferenceServiceResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateInferenceServiceResponse::GetModelId() const
{
    return m_modelId;
}

bool CreateInferenceServiceResponse::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string CreateInferenceServiceResponse::GetModelUid() const
{
    return m_modelUid;
}

bool CreateInferenceServiceResponse::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string CreateInferenceServiceResponse::GetModelName() const
{
    return m_modelName;
}

bool CreateInferenceServiceResponse::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateInferenceServiceResponse::GetModelVersion() const
{
    return m_modelVersion;
}

bool CreateInferenceServiceResponse::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateInferenceServiceResponse::GetModelIdentifier() const
{
    return m_modelIdentifier;
}

bool CreateInferenceServiceResponse::ModelIdentifierHasBeenSet() const
{
    return m_modelIdentifierHasBeenSet;
}

string CreateInferenceServiceResponse::GetModelType() const
{
    return m_modelType;
}

bool CreateInferenceServiceResponse::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string CreateInferenceServiceResponse::GetStatus() const
{
    return m_status;
}

bool CreateInferenceServiceResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateInferenceServiceResponse::GetEndpointUrl() const
{
    return m_endpointUrl;
}

bool CreateInferenceServiceResponse::EndpointUrlHasBeenSet() const
{
    return m_endpointUrlHasBeenSet;
}

string CreateInferenceServiceResponse::GetUnifiedEndpointUrl() const
{
    return m_unifiedEndpointUrl;
}

bool CreateInferenceServiceResponse::UnifiedEndpointUrlHasBeenSet() const
{
    return m_unifiedEndpointUrlHasBeenSet;
}

string CreateInferenceServiceResponse::GetUnifiedV2EndpointUrl() const
{
    return m_unifiedV2EndpointUrl;
}

bool CreateInferenceServiceResponse::UnifiedV2EndpointUrlHasBeenSet() const
{
    return m_unifiedV2EndpointUrlHasBeenSet;
}

bool CreateInferenceServiceResponse::GetHeadHighAvailabilityEnabled() const
{
    return m_headHighAvailabilityEnabled;
}

bool CreateInferenceServiceResponse::HeadHighAvailabilityEnabledHasBeenSet() const
{
    return m_headHighAvailabilityEnabledHasBeenSet;
}

int64_t CreateInferenceServiceResponse::GetAppId() const
{
    return m_appId;
}

bool CreateInferenceServiceResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateInferenceServiceResponse::GetUin() const
{
    return m_uin;
}

bool CreateInferenceServiceResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t CreateInferenceServiceResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateInferenceServiceResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CreateInferenceServiceResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool CreateInferenceServiceResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t CreateInferenceServiceResponse::GetDeploymentCount() const
{
    return m_deploymentCount;
}

bool CreateInferenceServiceResponse::DeploymentCountHasBeenSet() const
{
    return m_deploymentCountHasBeenSet;
}

bool CreateInferenceServiceResponse::GetHasRunningDeployment() const
{
    return m_hasRunningDeployment;
}

bool CreateInferenceServiceResponse::HasRunningDeploymentHasBeenSet() const
{
    return m_hasRunningDeploymentHasBeenSet;
}

bool CreateInferenceServiceResponse::GetApiKeyAuthEnabled() const
{
    return m_apiKeyAuthEnabled;
}

bool CreateInferenceServiceResponse::ApiKeyAuthEnabledHasBeenSet() const
{
    return m_apiKeyAuthEnabledHasBeenSet;
}

bool CreateInferenceServiceResponse::GetApiKeyAuthForceEnabled() const
{
    return m_apiKeyAuthForceEnabled;
}

bool CreateInferenceServiceResponse::ApiKeyAuthForceEnabledHasBeenSet() const
{
    return m_apiKeyAuthForceEnabledHasBeenSet;
}

bool CreateInferenceServiceResponse::GetSkipTlsVerify() const
{
    return m_skipTlsVerify;
}

bool CreateInferenceServiceResponse::SkipTlsVerifyHasBeenSet() const
{
    return m_skipTlsVerifyHasBeenSet;
}

string CreateInferenceServiceResponse::GetApiKeyBindMessage() const
{
    return m_apiKeyBindMessage;
}

bool CreateInferenceServiceResponse::ApiKeyBindMessageHasBeenSet() const
{
    return m_apiKeyBindMessageHasBeenSet;
}

string CreateInferenceServiceResponse::GetSubAccountUin() const
{
    return m_subAccountUin;
}

bool CreateInferenceServiceResponse::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

CpuSummaryItem CreateInferenceServiceResponse::GetCpuResourceSummary() const
{
    return m_cpuResourceSummary;
}

bool CreateInferenceServiceResponse::CpuResourceSummaryHasBeenSet() const
{
    return m_cpuResourceSummaryHasBeenSet;
}

string CreateInferenceServiceResponse::GetResourceConfig() const
{
    return m_resourceConfig;
}

bool CreateInferenceServiceResponse::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}


