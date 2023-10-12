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

#include <tencentcloud/apigateway/v20180808/model/ApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiInfo::ApiInfo() :
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiDescHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_apiBusinessTypeHasBeenSet(false),
    m_authRelationApiIdHasBeenSet(false),
    m_oauthConfigHasBeenSet(false),
    m_isDebugAfterChargeHasBeenSet(false),
    m_requestConfigHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_responseSuccessExampleHasBeenSet(false),
    m_responseFailExampleHasBeenSet(false),
    m_responseErrorCodesHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_serviceTimeoutHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceConfigHasBeenSet(false),
    m_serviceParametersHasBeenSet(false),
    m_constantParametersHasBeenSet(false),
    m_serviceMockReturnMessageHasBeenSet(false),
    m_serviceScfFunctionNameHasBeenSet(false),
    m_serviceScfFunctionNamespaceHasBeenSet(false),
    m_serviceScfFunctionQualifierHasBeenSet(false),
    m_serviceScfIsIntegratedResponseHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNameHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNameHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet(false),
    m_internalDomainHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNameHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet(false),
    m_microServicesHasBeenSet(false),
    m_microServicesInfoHasBeenSet(false),
    m_serviceTsfLoadBalanceConfHasBeenSet(false),
    m_serviceTsfHealthCheckConfHasBeenSet(false),
    m_enableCORSHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_isBase64EncodedHasBeenSet(false),
    m_isBase64TriggerHasBeenSet(false),
    m_base64EncodedTriggerRulesHasBeenSet(false),
    m_serviceScfEventIsAsyncCallHasBeenSet(false)
{
}

CoreInternalOutcome ApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceDesc") && !value["ServiceDesc"].IsNull())
    {
        if (!value["ServiceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDesc = string(value["ServiceDesc"].GetString());
        m_serviceDescHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiDesc") && !value["ApiDesc"].IsNull())
    {
        if (!value["ApiDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDesc = string(value["ApiDesc"].GetString());
        m_apiDescHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiBusinessType") && !value["ApiBusinessType"].IsNull())
    {
        if (!value["ApiBusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiBusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBusinessType = string(value["ApiBusinessType"].GetString());
        m_apiBusinessTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthRelationApiId") && !value["AuthRelationApiId"].IsNull())
    {
        if (!value["AuthRelationApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.AuthRelationApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authRelationApiId = string(value["AuthRelationApiId"].GetString());
        m_authRelationApiIdHasBeenSet = true;
    }

    if (value.HasMember("OauthConfig") && !value["OauthConfig"].IsNull())
    {
        if (!value["OauthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.OauthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oauthConfig.Deserialize(value["OauthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oauthConfigHasBeenSet = true;
    }

    if (value.HasMember("IsDebugAfterCharge") && !value["IsDebugAfterCharge"].IsNull())
    {
        if (!value["IsDebugAfterCharge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.IsDebugAfterCharge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDebugAfterCharge = value["IsDebugAfterCharge"].GetBool();
        m_isDebugAfterChargeHasBeenSet = true;
    }

    if (value.HasMember("RequestConfig") && !value["RequestConfig"].IsNull())
    {
        if (!value["RequestConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.RequestConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestConfig.Deserialize(value["RequestConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestConfigHasBeenSet = true;
    }

    if (value.HasMember("ResponseType") && !value["ResponseType"].IsNull())
    {
        if (!value["ResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseType = string(value["ResponseType"].GetString());
        m_responseTypeHasBeenSet = true;
    }

    if (value.HasMember("ResponseSuccessExample") && !value["ResponseSuccessExample"].IsNull())
    {
        if (!value["ResponseSuccessExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseSuccessExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseSuccessExample = string(value["ResponseSuccessExample"].GetString());
        m_responseSuccessExampleHasBeenSet = true;
    }

    if (value.HasMember("ResponseFailExample") && !value["ResponseFailExample"].IsNull())
    {
        if (!value["ResponseFailExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseFailExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseFailExample = string(value["ResponseFailExample"].GetString());
        m_responseFailExampleHasBeenSet = true;
    }

    if (value.HasMember("ResponseErrorCodes") && !value["ResponseErrorCodes"].IsNull())
    {
        if (!value["ResponseErrorCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseErrorCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseErrorCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorCodes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_responseErrorCodes.push_back(item);
        }
        m_responseErrorCodesHasBeenSet = true;
    }

    if (value.HasMember("RequestParameters") && !value["RequestParameters"].IsNull())
    {
        if (!value["RequestParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.RequestParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReqParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestParameters.push_back(item);
        }
        m_requestParametersHasBeenSet = true;
    }

    if (value.HasMember("ServiceTimeout") && !value["ServiceTimeout"].IsNull())
    {
        if (!value["ServiceTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTimeout = value["ServiceTimeout"].GetInt64();
        m_serviceTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfig") && !value["ServiceConfig"].IsNull())
    {
        if (!value["ServiceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceConfig.Deserialize(value["ServiceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceConfigHasBeenSet = true;
    }

    if (value.HasMember("ServiceParameters") && !value["ServiceParameters"].IsNull())
    {
        if (!value["ServiceParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeApiResultServiceParametersInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceParameters.push_back(item);
        }
        m_serviceParametersHasBeenSet = true;
    }

    if (value.HasMember("ConstantParameters") && !value["ConstantParameters"].IsNull())
    {
        if (!value["ConstantParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ConstantParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["ConstantParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConstantParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_constantParameters.push_back(item);
        }
        m_constantParametersHasBeenSet = true;
    }

    if (value.HasMember("ServiceMockReturnMessage") && !value["ServiceMockReturnMessage"].IsNull())
    {
        if (!value["ServiceMockReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceMockReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceMockReturnMessage = string(value["ServiceMockReturnMessage"].GetString());
        m_serviceMockReturnMessageHasBeenSet = true;
    }

    if (value.HasMember("ServiceScfFunctionName") && !value["ServiceScfFunctionName"].IsNull())
    {
        if (!value["ServiceScfFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceScfFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceScfFunctionName = string(value["ServiceScfFunctionName"].GetString());
        m_serviceScfFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceScfFunctionNamespace") && !value["ServiceScfFunctionNamespace"].IsNull())
    {
        if (!value["ServiceScfFunctionNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceScfFunctionNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceScfFunctionNamespace = string(value["ServiceScfFunctionNamespace"].GetString());
        m_serviceScfFunctionNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceScfFunctionQualifier") && !value["ServiceScfFunctionQualifier"].IsNull())
    {
        if (!value["ServiceScfFunctionQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceScfFunctionQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceScfFunctionQualifier = string(value["ServiceScfFunctionQualifier"].GetString());
        m_serviceScfFunctionQualifierHasBeenSet = true;
    }

    if (value.HasMember("ServiceScfIsIntegratedResponse") && !value["ServiceScfIsIntegratedResponse"].IsNull())
    {
        if (!value["ServiceScfIsIntegratedResponse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceScfIsIntegratedResponse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceScfIsIntegratedResponse = value["ServiceScfIsIntegratedResponse"].GetBool();
        m_serviceScfIsIntegratedResponseHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketRegisterFunctionName") && !value["ServiceWebsocketRegisterFunctionName"].IsNull())
    {
        if (!value["ServiceWebsocketRegisterFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketRegisterFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketRegisterFunctionName = string(value["ServiceWebsocketRegisterFunctionName"].GetString());
        m_serviceWebsocketRegisterFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketRegisterFunctionNamespace") && !value["ServiceWebsocketRegisterFunctionNamespace"].IsNull())
    {
        if (!value["ServiceWebsocketRegisterFunctionNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketRegisterFunctionNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketRegisterFunctionNamespace = string(value["ServiceWebsocketRegisterFunctionNamespace"].GetString());
        m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketRegisterFunctionQualifier") && !value["ServiceWebsocketRegisterFunctionQualifier"].IsNull())
    {
        if (!value["ServiceWebsocketRegisterFunctionQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketRegisterFunctionQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketRegisterFunctionQualifier = string(value["ServiceWebsocketRegisterFunctionQualifier"].GetString());
        m_serviceWebsocketRegisterFunctionQualifierHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketCleanupFunctionName") && !value["ServiceWebsocketCleanupFunctionName"].IsNull())
    {
        if (!value["ServiceWebsocketCleanupFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketCleanupFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketCleanupFunctionName = string(value["ServiceWebsocketCleanupFunctionName"].GetString());
        m_serviceWebsocketCleanupFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketCleanupFunctionNamespace") && !value["ServiceWebsocketCleanupFunctionNamespace"].IsNull())
    {
        if (!value["ServiceWebsocketCleanupFunctionNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketCleanupFunctionNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketCleanupFunctionNamespace = string(value["ServiceWebsocketCleanupFunctionNamespace"].GetString());
        m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketCleanupFunctionQualifier") && !value["ServiceWebsocketCleanupFunctionQualifier"].IsNull())
    {
        if (!value["ServiceWebsocketCleanupFunctionQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketCleanupFunctionQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketCleanupFunctionQualifier = string(value["ServiceWebsocketCleanupFunctionQualifier"].GetString());
        m_serviceWebsocketCleanupFunctionQualifierHasBeenSet = true;
    }

    if (value.HasMember("InternalDomain") && !value["InternalDomain"].IsNull())
    {
        if (!value["InternalDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.InternalDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalDomain = string(value["InternalDomain"].GetString());
        m_internalDomainHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketTransportFunctionName") && !value["ServiceWebsocketTransportFunctionName"].IsNull())
    {
        if (!value["ServiceWebsocketTransportFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketTransportFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketTransportFunctionName = string(value["ServiceWebsocketTransportFunctionName"].GetString());
        m_serviceWebsocketTransportFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketTransportFunctionNamespace") && !value["ServiceWebsocketTransportFunctionNamespace"].IsNull())
    {
        if (!value["ServiceWebsocketTransportFunctionNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketTransportFunctionNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketTransportFunctionNamespace = string(value["ServiceWebsocketTransportFunctionNamespace"].GetString());
        m_serviceWebsocketTransportFunctionNamespaceHasBeenSet = true;
    }

    if (value.HasMember("ServiceWebsocketTransportFunctionQualifier") && !value["ServiceWebsocketTransportFunctionQualifier"].IsNull())
    {
        if (!value["ServiceWebsocketTransportFunctionQualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceWebsocketTransportFunctionQualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceWebsocketTransportFunctionQualifier = string(value["ServiceWebsocketTransportFunctionQualifier"].GetString());
        m_serviceWebsocketTransportFunctionQualifierHasBeenSet = true;
    }

    if (value.HasMember("MicroServices") && !value["MicroServices"].IsNull())
    {
        if (!value["MicroServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.MicroServices` is not array type"));

        const rapidjson::Value &tmpValue = value["MicroServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MicroService item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_microServices.push_back(item);
        }
        m_microServicesHasBeenSet = true;
    }

    if (value.HasMember("MicroServicesInfo") && !value["MicroServicesInfo"].IsNull())
    {
        if (!value["MicroServicesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.MicroServicesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MicroServicesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_microServicesInfo.push_back((*itr).GetInt64());
        }
        m_microServicesInfoHasBeenSet = true;
    }

    if (value.HasMember("ServiceTsfLoadBalanceConf") && !value["ServiceTsfLoadBalanceConf"].IsNull())
    {
        if (!value["ServiceTsfLoadBalanceConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceTsfLoadBalanceConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceTsfLoadBalanceConf.Deserialize(value["ServiceTsfLoadBalanceConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceTsfLoadBalanceConfHasBeenSet = true;
    }

    if (value.HasMember("ServiceTsfHealthCheckConf") && !value["ServiceTsfHealthCheckConf"].IsNull())
    {
        if (!value["ServiceTsfHealthCheckConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceTsfHealthCheckConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceTsfHealthCheckConf.Deserialize(value["ServiceTsfHealthCheckConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceTsfHealthCheckConfHasBeenSet = true;
    }

    if (value.HasMember("EnableCORS") && !value["EnableCORS"].IsNull())
    {
        if (!value["EnableCORS"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.EnableCORS` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCORS = value["EnableCORS"].GetBool();
        m_enableCORSHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Environments") && !value["Environments"].IsNull())
    {
        if (!value["Environments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Environments` is not array type"));

        const rapidjson::Value &tmpValue = value["Environments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_environments.push_back((*itr).GetString());
        }
        m_environmentsHasBeenSet = true;
    }

    if (value.HasMember("IsBase64Encoded") && !value["IsBase64Encoded"].IsNull())
    {
        if (!value["IsBase64Encoded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.IsBase64Encoded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBase64Encoded = value["IsBase64Encoded"].GetBool();
        m_isBase64EncodedHasBeenSet = true;
    }

    if (value.HasMember("IsBase64Trigger") && !value["IsBase64Trigger"].IsNull())
    {
        if (!value["IsBase64Trigger"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.IsBase64Trigger` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBase64Trigger = value["IsBase64Trigger"].GetBool();
        m_isBase64TriggerHasBeenSet = true;
    }

    if (value.HasMember("Base64EncodedTriggerRules") && !value["Base64EncodedTriggerRules"].IsNull())
    {
        if (!value["Base64EncodedTriggerRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Base64EncodedTriggerRules` is not array type"));

        const rapidjson::Value &tmpValue = value["Base64EncodedTriggerRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Base64EncodedTriggerRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_base64EncodedTriggerRules.push_back(item);
        }
        m_base64EncodedTriggerRulesHasBeenSet = true;
    }

    if (value.HasMember("ServiceScfEventIsAsyncCall") && !value["ServiceScfEventIsAsyncCall"].IsNull())
    {
        if (!value["ServiceScfEventIsAsyncCall"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ServiceScfEventIsAsyncCall` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceScfEventIsAsyncCall = value["ServiceScfEventIsAsyncCall"].GetBool();
        m_serviceScfEventIsAsyncCallHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBusinessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBusinessType.c_str(), allocator).Move(), allocator);
    }

    if (m_authRelationApiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRelationApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authRelationApiId.c_str(), allocator).Move(), allocator);
    }

    if (m_oauthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OauthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oauthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isDebugAfterChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDebugAfterCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDebugAfterCharge, allocator);
    }

    if (m_requestConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseSuccessExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseSuccessExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseSuccessExample.c_str(), allocator).Move(), allocator);
    }

    if (m_responseFailExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseFailExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseFailExample.c_str(), allocator).Move(), allocator);
    }

    if (m_responseErrorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseErrorCodes.begin(); itr != m_responseErrorCodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestParameters.begin(); itr != m_requestParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceTimeout, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceParameters.begin(); itr != m_serviceParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_constantParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstantParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_constantParameters.begin(); itr != m_constantParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceMockReturnMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMockReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceMockReturnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfIsIntegratedResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfIsIntegratedResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceScfIsIntegratedResponse, allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_internalDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_microServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_microServices.begin(); itr != m_microServices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_microServicesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroServicesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_microServicesInfo.begin(); itr != m_microServicesInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_serviceTsfLoadBalanceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTsfLoadBalanceConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceTsfLoadBalanceConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceTsfHealthCheckConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTsfHealthCheckConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceTsfHealthCheckConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableCORSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCORS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCORS, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_environmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_environments.begin(); itr != m_environments.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isBase64EncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBase64Encoded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBase64Encoded, allocator);
    }

    if (m_isBase64TriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBase64Trigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBase64Trigger, allocator);
    }

    if (m_base64EncodedTriggerRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Base64EncodedTriggerRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_base64EncodedTriggerRules.begin(); itr != m_base64EncodedTriggerRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_serviceScfEventIsAsyncCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfEventIsAsyncCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceScfEventIsAsyncCall, allocator);
    }

}


string ApiInfo::GetServiceId() const
{
    return m_serviceId;
}

void ApiInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ApiInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ApiInfo::GetServiceName() const
{
    return m_serviceName;
}

void ApiInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ApiInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ApiInfo::GetServiceDesc() const
{
    return m_serviceDesc;
}

void ApiInfo::SetServiceDesc(const string& _serviceDesc)
{
    m_serviceDesc = _serviceDesc;
    m_serviceDescHasBeenSet = true;
}

bool ApiInfo::ServiceDescHasBeenSet() const
{
    return m_serviceDescHasBeenSet;
}

string ApiInfo::GetApiId() const
{
    return m_apiId;
}

void ApiInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiInfo::GetApiDesc() const
{
    return m_apiDesc;
}

void ApiInfo::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool ApiInfo::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

string ApiInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiInfo::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ApiInfo::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ApiInfo::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ApiInfo::GetApiName() const
{
    return m_apiName;
}

void ApiInfo::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiInfo::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiInfo::GetApiType() const
{
    return m_apiType;
}

void ApiInfo::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool ApiInfo::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string ApiInfo::GetProtocol() const
{
    return m_protocol;
}

void ApiInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ApiInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ApiInfo::GetAuthType() const
{
    return m_authType;
}

void ApiInfo::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ApiInfo::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ApiInfo::GetApiBusinessType() const
{
    return m_apiBusinessType;
}

void ApiInfo::SetApiBusinessType(const string& _apiBusinessType)
{
    m_apiBusinessType = _apiBusinessType;
    m_apiBusinessTypeHasBeenSet = true;
}

bool ApiInfo::ApiBusinessTypeHasBeenSet() const
{
    return m_apiBusinessTypeHasBeenSet;
}

string ApiInfo::GetAuthRelationApiId() const
{
    return m_authRelationApiId;
}

void ApiInfo::SetAuthRelationApiId(const string& _authRelationApiId)
{
    m_authRelationApiId = _authRelationApiId;
    m_authRelationApiIdHasBeenSet = true;
}

bool ApiInfo::AuthRelationApiIdHasBeenSet() const
{
    return m_authRelationApiIdHasBeenSet;
}

OauthConfig ApiInfo::GetOauthConfig() const
{
    return m_oauthConfig;
}

void ApiInfo::SetOauthConfig(const OauthConfig& _oauthConfig)
{
    m_oauthConfig = _oauthConfig;
    m_oauthConfigHasBeenSet = true;
}

bool ApiInfo::OauthConfigHasBeenSet() const
{
    return m_oauthConfigHasBeenSet;
}

bool ApiInfo::GetIsDebugAfterCharge() const
{
    return m_isDebugAfterCharge;
}

void ApiInfo::SetIsDebugAfterCharge(const bool& _isDebugAfterCharge)
{
    m_isDebugAfterCharge = _isDebugAfterCharge;
    m_isDebugAfterChargeHasBeenSet = true;
}

bool ApiInfo::IsDebugAfterChargeHasBeenSet() const
{
    return m_isDebugAfterChargeHasBeenSet;
}

RequestConfig ApiInfo::GetRequestConfig() const
{
    return m_requestConfig;
}

void ApiInfo::SetRequestConfig(const RequestConfig& _requestConfig)
{
    m_requestConfig = _requestConfig;
    m_requestConfigHasBeenSet = true;
}

bool ApiInfo::RequestConfigHasBeenSet() const
{
    return m_requestConfigHasBeenSet;
}

string ApiInfo::GetResponseType() const
{
    return m_responseType;
}

void ApiInfo::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool ApiInfo::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string ApiInfo::GetResponseSuccessExample() const
{
    return m_responseSuccessExample;
}

void ApiInfo::SetResponseSuccessExample(const string& _responseSuccessExample)
{
    m_responseSuccessExample = _responseSuccessExample;
    m_responseSuccessExampleHasBeenSet = true;
}

bool ApiInfo::ResponseSuccessExampleHasBeenSet() const
{
    return m_responseSuccessExampleHasBeenSet;
}

string ApiInfo::GetResponseFailExample() const
{
    return m_responseFailExample;
}

void ApiInfo::SetResponseFailExample(const string& _responseFailExample)
{
    m_responseFailExample = _responseFailExample;
    m_responseFailExampleHasBeenSet = true;
}

bool ApiInfo::ResponseFailExampleHasBeenSet() const
{
    return m_responseFailExampleHasBeenSet;
}

vector<ErrorCodes> ApiInfo::GetResponseErrorCodes() const
{
    return m_responseErrorCodes;
}

void ApiInfo::SetResponseErrorCodes(const vector<ErrorCodes>& _responseErrorCodes)
{
    m_responseErrorCodes = _responseErrorCodes;
    m_responseErrorCodesHasBeenSet = true;
}

bool ApiInfo::ResponseErrorCodesHasBeenSet() const
{
    return m_responseErrorCodesHasBeenSet;
}

vector<ReqParameter> ApiInfo::GetRequestParameters() const
{
    return m_requestParameters;
}

void ApiInfo::SetRequestParameters(const vector<ReqParameter>& _requestParameters)
{
    m_requestParameters = _requestParameters;
    m_requestParametersHasBeenSet = true;
}

bool ApiInfo::RequestParametersHasBeenSet() const
{
    return m_requestParametersHasBeenSet;
}

int64_t ApiInfo::GetServiceTimeout() const
{
    return m_serviceTimeout;
}

void ApiInfo::SetServiceTimeout(const int64_t& _serviceTimeout)
{
    m_serviceTimeout = _serviceTimeout;
    m_serviceTimeoutHasBeenSet = true;
}

bool ApiInfo::ServiceTimeoutHasBeenSet() const
{
    return m_serviceTimeoutHasBeenSet;
}

string ApiInfo::GetServiceType() const
{
    return m_serviceType;
}

void ApiInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ApiInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

ServiceConfig ApiInfo::GetServiceConfig() const
{
    return m_serviceConfig;
}

void ApiInfo::SetServiceConfig(const ServiceConfig& _serviceConfig)
{
    m_serviceConfig = _serviceConfig;
    m_serviceConfigHasBeenSet = true;
}

bool ApiInfo::ServiceConfigHasBeenSet() const
{
    return m_serviceConfigHasBeenSet;
}

vector<DescribeApiResultServiceParametersInfo> ApiInfo::GetServiceParameters() const
{
    return m_serviceParameters;
}

void ApiInfo::SetServiceParameters(const vector<DescribeApiResultServiceParametersInfo>& _serviceParameters)
{
    m_serviceParameters = _serviceParameters;
    m_serviceParametersHasBeenSet = true;
}

bool ApiInfo::ServiceParametersHasBeenSet() const
{
    return m_serviceParametersHasBeenSet;
}

vector<ConstantParameter> ApiInfo::GetConstantParameters() const
{
    return m_constantParameters;
}

void ApiInfo::SetConstantParameters(const vector<ConstantParameter>& _constantParameters)
{
    m_constantParameters = _constantParameters;
    m_constantParametersHasBeenSet = true;
}

bool ApiInfo::ConstantParametersHasBeenSet() const
{
    return m_constantParametersHasBeenSet;
}

string ApiInfo::GetServiceMockReturnMessage() const
{
    return m_serviceMockReturnMessage;
}

void ApiInfo::SetServiceMockReturnMessage(const string& _serviceMockReturnMessage)
{
    m_serviceMockReturnMessage = _serviceMockReturnMessage;
    m_serviceMockReturnMessageHasBeenSet = true;
}

bool ApiInfo::ServiceMockReturnMessageHasBeenSet() const
{
    return m_serviceMockReturnMessageHasBeenSet;
}

string ApiInfo::GetServiceScfFunctionName() const
{
    return m_serviceScfFunctionName;
}

void ApiInfo::SetServiceScfFunctionName(const string& _serviceScfFunctionName)
{
    m_serviceScfFunctionName = _serviceScfFunctionName;
    m_serviceScfFunctionNameHasBeenSet = true;
}

bool ApiInfo::ServiceScfFunctionNameHasBeenSet() const
{
    return m_serviceScfFunctionNameHasBeenSet;
}

string ApiInfo::GetServiceScfFunctionNamespace() const
{
    return m_serviceScfFunctionNamespace;
}

void ApiInfo::SetServiceScfFunctionNamespace(const string& _serviceScfFunctionNamespace)
{
    m_serviceScfFunctionNamespace = _serviceScfFunctionNamespace;
    m_serviceScfFunctionNamespaceHasBeenSet = true;
}

bool ApiInfo::ServiceScfFunctionNamespaceHasBeenSet() const
{
    return m_serviceScfFunctionNamespaceHasBeenSet;
}

string ApiInfo::GetServiceScfFunctionQualifier() const
{
    return m_serviceScfFunctionQualifier;
}

void ApiInfo::SetServiceScfFunctionQualifier(const string& _serviceScfFunctionQualifier)
{
    m_serviceScfFunctionQualifier = _serviceScfFunctionQualifier;
    m_serviceScfFunctionQualifierHasBeenSet = true;
}

bool ApiInfo::ServiceScfFunctionQualifierHasBeenSet() const
{
    return m_serviceScfFunctionQualifierHasBeenSet;
}

bool ApiInfo::GetServiceScfIsIntegratedResponse() const
{
    return m_serviceScfIsIntegratedResponse;
}

void ApiInfo::SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse)
{
    m_serviceScfIsIntegratedResponse = _serviceScfIsIntegratedResponse;
    m_serviceScfIsIntegratedResponseHasBeenSet = true;
}

bool ApiInfo::ServiceScfIsIntegratedResponseHasBeenSet() const
{
    return m_serviceScfIsIntegratedResponseHasBeenSet;
}

string ApiInfo::GetServiceWebsocketRegisterFunctionName() const
{
    return m_serviceWebsocketRegisterFunctionName;
}

void ApiInfo::SetServiceWebsocketRegisterFunctionName(const string& _serviceWebsocketRegisterFunctionName)
{
    m_serviceWebsocketRegisterFunctionName = _serviceWebsocketRegisterFunctionName;
    m_serviceWebsocketRegisterFunctionNameHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketRegisterFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNameHasBeenSet;
}

string ApiInfo::GetServiceWebsocketRegisterFunctionNamespace() const
{
    return m_serviceWebsocketRegisterFunctionNamespace;
}

void ApiInfo::SetServiceWebsocketRegisterFunctionNamespace(const string& _serviceWebsocketRegisterFunctionNamespace)
{
    m_serviceWebsocketRegisterFunctionNamespace = _serviceWebsocketRegisterFunctionNamespace;
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;
}

string ApiInfo::GetServiceWebsocketRegisterFunctionQualifier() const
{
    return m_serviceWebsocketRegisterFunctionQualifier;
}

void ApiInfo::SetServiceWebsocketRegisterFunctionQualifier(const string& _serviceWebsocketRegisterFunctionQualifier)
{
    m_serviceWebsocketRegisterFunctionQualifier = _serviceWebsocketRegisterFunctionQualifier;
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;
}

string ApiInfo::GetServiceWebsocketCleanupFunctionName() const
{
    return m_serviceWebsocketCleanupFunctionName;
}

void ApiInfo::SetServiceWebsocketCleanupFunctionName(const string& _serviceWebsocketCleanupFunctionName)
{
    m_serviceWebsocketCleanupFunctionName = _serviceWebsocketCleanupFunctionName;
    m_serviceWebsocketCleanupFunctionNameHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketCleanupFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNameHasBeenSet;
}

string ApiInfo::GetServiceWebsocketCleanupFunctionNamespace() const
{
    return m_serviceWebsocketCleanupFunctionNamespace;
}

void ApiInfo::SetServiceWebsocketCleanupFunctionNamespace(const string& _serviceWebsocketCleanupFunctionNamespace)
{
    m_serviceWebsocketCleanupFunctionNamespace = _serviceWebsocketCleanupFunctionNamespace;
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;
}

string ApiInfo::GetServiceWebsocketCleanupFunctionQualifier() const
{
    return m_serviceWebsocketCleanupFunctionQualifier;
}

void ApiInfo::SetServiceWebsocketCleanupFunctionQualifier(const string& _serviceWebsocketCleanupFunctionQualifier)
{
    m_serviceWebsocketCleanupFunctionQualifier = _serviceWebsocketCleanupFunctionQualifier;
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;
}

string ApiInfo::GetInternalDomain() const
{
    return m_internalDomain;
}

void ApiInfo::SetInternalDomain(const string& _internalDomain)
{
    m_internalDomain = _internalDomain;
    m_internalDomainHasBeenSet = true;
}

bool ApiInfo::InternalDomainHasBeenSet() const
{
    return m_internalDomainHasBeenSet;
}

string ApiInfo::GetServiceWebsocketTransportFunctionName() const
{
    return m_serviceWebsocketTransportFunctionName;
}

void ApiInfo::SetServiceWebsocketTransportFunctionName(const string& _serviceWebsocketTransportFunctionName)
{
    m_serviceWebsocketTransportFunctionName = _serviceWebsocketTransportFunctionName;
    m_serviceWebsocketTransportFunctionNameHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketTransportFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNameHasBeenSet;
}

string ApiInfo::GetServiceWebsocketTransportFunctionNamespace() const
{
    return m_serviceWebsocketTransportFunctionNamespace;
}

void ApiInfo::SetServiceWebsocketTransportFunctionNamespace(const string& _serviceWebsocketTransportFunctionNamespace)
{
    m_serviceWebsocketTransportFunctionNamespace = _serviceWebsocketTransportFunctionNamespace;
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;
}

string ApiInfo::GetServiceWebsocketTransportFunctionQualifier() const
{
    return m_serviceWebsocketTransportFunctionQualifier;
}

void ApiInfo::SetServiceWebsocketTransportFunctionQualifier(const string& _serviceWebsocketTransportFunctionQualifier)
{
    m_serviceWebsocketTransportFunctionQualifier = _serviceWebsocketTransportFunctionQualifier;
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet = true;
}

bool ApiInfo::ServiceWebsocketTransportFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionQualifierHasBeenSet;
}

vector<MicroService> ApiInfo::GetMicroServices() const
{
    return m_microServices;
}

void ApiInfo::SetMicroServices(const vector<MicroService>& _microServices)
{
    m_microServices = _microServices;
    m_microServicesHasBeenSet = true;
}

bool ApiInfo::MicroServicesHasBeenSet() const
{
    return m_microServicesHasBeenSet;
}

vector<int64_t> ApiInfo::GetMicroServicesInfo() const
{
    return m_microServicesInfo;
}

void ApiInfo::SetMicroServicesInfo(const vector<int64_t>& _microServicesInfo)
{
    m_microServicesInfo = _microServicesInfo;
    m_microServicesInfoHasBeenSet = true;
}

bool ApiInfo::MicroServicesInfoHasBeenSet() const
{
    return m_microServicesInfoHasBeenSet;
}

TsfLoadBalanceConfResp ApiInfo::GetServiceTsfLoadBalanceConf() const
{
    return m_serviceTsfLoadBalanceConf;
}

void ApiInfo::SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf)
{
    m_serviceTsfLoadBalanceConf = _serviceTsfLoadBalanceConf;
    m_serviceTsfLoadBalanceConfHasBeenSet = true;
}

bool ApiInfo::ServiceTsfLoadBalanceConfHasBeenSet() const
{
    return m_serviceTsfLoadBalanceConfHasBeenSet;
}

HealthCheckConf ApiInfo::GetServiceTsfHealthCheckConf() const
{
    return m_serviceTsfHealthCheckConf;
}

void ApiInfo::SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf)
{
    m_serviceTsfHealthCheckConf = _serviceTsfHealthCheckConf;
    m_serviceTsfHealthCheckConfHasBeenSet = true;
}

bool ApiInfo::ServiceTsfHealthCheckConfHasBeenSet() const
{
    return m_serviceTsfHealthCheckConfHasBeenSet;
}

bool ApiInfo::GetEnableCORS() const
{
    return m_enableCORS;
}

void ApiInfo::SetEnableCORS(const bool& _enableCORS)
{
    m_enableCORS = _enableCORS;
    m_enableCORSHasBeenSet = true;
}

bool ApiInfo::EnableCORSHasBeenSet() const
{
    return m_enableCORSHasBeenSet;
}

vector<Tag> ApiInfo::GetTags() const
{
    return m_tags;
}

void ApiInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ApiInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> ApiInfo::GetEnvironments() const
{
    return m_environments;
}

void ApiInfo::SetEnvironments(const vector<string>& _environments)
{
    m_environments = _environments;
    m_environmentsHasBeenSet = true;
}

bool ApiInfo::EnvironmentsHasBeenSet() const
{
    return m_environmentsHasBeenSet;
}

bool ApiInfo::GetIsBase64Encoded() const
{
    return m_isBase64Encoded;
}

void ApiInfo::SetIsBase64Encoded(const bool& _isBase64Encoded)
{
    m_isBase64Encoded = _isBase64Encoded;
    m_isBase64EncodedHasBeenSet = true;
}

bool ApiInfo::IsBase64EncodedHasBeenSet() const
{
    return m_isBase64EncodedHasBeenSet;
}

bool ApiInfo::GetIsBase64Trigger() const
{
    return m_isBase64Trigger;
}

void ApiInfo::SetIsBase64Trigger(const bool& _isBase64Trigger)
{
    m_isBase64Trigger = _isBase64Trigger;
    m_isBase64TriggerHasBeenSet = true;
}

bool ApiInfo::IsBase64TriggerHasBeenSet() const
{
    return m_isBase64TriggerHasBeenSet;
}

vector<Base64EncodedTriggerRule> ApiInfo::GetBase64EncodedTriggerRules() const
{
    return m_base64EncodedTriggerRules;
}

void ApiInfo::SetBase64EncodedTriggerRules(const vector<Base64EncodedTriggerRule>& _base64EncodedTriggerRules)
{
    m_base64EncodedTriggerRules = _base64EncodedTriggerRules;
    m_base64EncodedTriggerRulesHasBeenSet = true;
}

bool ApiInfo::Base64EncodedTriggerRulesHasBeenSet() const
{
    return m_base64EncodedTriggerRulesHasBeenSet;
}

bool ApiInfo::GetServiceScfEventIsAsyncCall() const
{
    return m_serviceScfEventIsAsyncCall;
}

void ApiInfo::SetServiceScfEventIsAsyncCall(const bool& _serviceScfEventIsAsyncCall)
{
    m_serviceScfEventIsAsyncCall = _serviceScfEventIsAsyncCall;
    m_serviceScfEventIsAsyncCallHasBeenSet = true;
}

bool ApiInfo::ServiceScfEventIsAsyncCallHasBeenSet() const
{
    return m_serviceScfEventIsAsyncCallHasBeenSet;
}

