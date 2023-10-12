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

#include <tencentcloud/apigateway/v20180808/model/ModifyApiRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ModifyApiRequest::ModifyApiRequest() :
    m_serviceIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_requestConfigHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiDescHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_authRequiredHasBeenSet(false),
    m_serviceTimeoutHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_enableCORSHasBeenSet(false),
    m_constantParametersHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_apiBusinessTypeHasBeenSet(false),
    m_serviceMockReturnMessageHasBeenSet(false),
    m_microServicesHasBeenSet(false),
    m_serviceTsfLoadBalanceConfHasBeenSet(false),
    m_serviceTsfHealthCheckConfHasBeenSet(false),
    m_targetServicesLoadBalanceConfHasBeenSet(false),
    m_targetServicesHealthCheckConfHasBeenSet(false),
    m_serviceScfFunctionNameHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNameHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNameHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNameHasBeenSet(false),
    m_serviceScfFunctionNamespaceHasBeenSet(false),
    m_serviceScfFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet(false),
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet(false),
    m_serviceScfIsIntegratedResponseHasBeenSet(false),
    m_isDebugAfterChargeHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_isDeleteResponseErrorCodesHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_responseSuccessExampleHasBeenSet(false),
    m_responseFailExampleHasBeenSet(false),
    m_serviceConfigHasBeenSet(false),
    m_authRelationApiIdHasBeenSet(false),
    m_serviceParametersHasBeenSet(false),
    m_oauthConfigHasBeenSet(false),
    m_responseErrorCodesHasBeenSet(false),
    m_isBase64EncodedHasBeenSet(false),
    m_isBase64TriggerHasBeenSet(false),
    m_base64EncodedTriggerRulesHasBeenSet(false),
    m_eventBusIdHasBeenSet(false),
    m_serviceScfFunctionTypeHasBeenSet(false),
    m_serviceScfEventIsAsyncCallHasBeenSet(false),
    m_eIAMAppTypeHasBeenSet(false),
    m_eIAMAuthTypeHasBeenSet(false),
    m_eIAMAppIdHasBeenSet(false),
    m_tokenTimeoutHasBeenSet(false)
{
}

string ModifyApiRequest::ToJsonString() const
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

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_authRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRequired";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authRequired, allocator);
    }

    if (m_serviceTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceTimeout, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_enableCORSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCORS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCORS, allocator);
    }

    if (m_constantParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConstantParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_constantParameters.begin(); itr != m_constantParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_requestParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestParameters.begin(); itr != m_requestParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_apiBusinessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiBusinessType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceMockReturnMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMockReturnMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceMockReturnMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_microServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroServices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_microServices.begin(); itr != m_microServices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serviceTsfLoadBalanceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTsfLoadBalanceConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceTsfLoadBalanceConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceTsfHealthCheckConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTsfHealthCheckConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceTsfHealthCheckConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetServicesLoadBalanceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServicesLoadBalanceConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetServicesLoadBalanceConf, allocator);
    }

    if (m_targetServicesHealthCheckConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServicesHealthCheckConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetServicesHealthCheckConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceScfFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketRegisterFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketRegisterFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketRegisterFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketTransportFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketTransportFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketTransportFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceWebsocketCleanupFunctionQualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceWebsocketCleanupFunctionQualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceWebsocketCleanupFunctionQualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfIsIntegratedResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfIsIntegratedResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceScfIsIntegratedResponse, allocator);
    }

    if (m_isDebugAfterChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDebugAfterCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDebugAfterCharge, allocator);
    }

    if (m_tagSpecificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecifications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecifications.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_isDeleteResponseErrorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteResponseErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteResponseErrorCodes, allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseSuccessExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseSuccessExample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseSuccessExample.c_str(), allocator).Move(), allocator);
    }

    if (m_responseFailExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseFailExample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_responseFailExample.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authRelationApiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRelationApiId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authRelationApiId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceParameters.begin(); itr != m_serviceParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_oauthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OauthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oauthConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_responseErrorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseErrorCodes.begin(); itr != m_responseErrorCodes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isBase64EncodedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBase64Encoded";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBase64Encoded, allocator);
    }

    if (m_isBase64TriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBase64Trigger";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBase64Trigger, allocator);
    }

    if (m_base64EncodedTriggerRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Base64EncodedTriggerRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_base64EncodedTriggerRules.begin(); itr != m_base64EncodedTriggerRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfFunctionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfFunctionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceScfFunctionType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceScfEventIsAsyncCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceScfEventIsAsyncCall";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceScfEventIsAsyncCall, allocator);
    }

    if (m_eIAMAppTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EIAMAppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eIAMAppType.c_str(), allocator).Move(), allocator);
    }

    if (m_eIAMAuthTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EIAMAuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eIAMAuthType.c_str(), allocator).Move(), allocator);
    }

    if (m_eIAMAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EIAMAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eIAMAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tokenTimeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiRequest::GetServiceId() const
{
    return m_serviceId;
}

void ModifyApiRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ModifyApiRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ModifyApiRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyApiRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyApiRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

RequestConfig ModifyApiRequest::GetRequestConfig() const
{
    return m_requestConfig;
}

void ModifyApiRequest::SetRequestConfig(const RequestConfig& _requestConfig)
{
    m_requestConfig = _requestConfig;
    m_requestConfigHasBeenSet = true;
}

bool ModifyApiRequest::RequestConfigHasBeenSet() const
{
    return m_requestConfigHasBeenSet;
}

string ModifyApiRequest::GetApiId() const
{
    return m_apiId;
}

void ModifyApiRequest::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ModifyApiRequest::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ModifyApiRequest::GetApiName() const
{
    return m_apiName;
}

void ModifyApiRequest::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ModifyApiRequest::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ModifyApiRequest::GetApiDesc() const
{
    return m_apiDesc;
}

void ModifyApiRequest::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool ModifyApiRequest::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

string ModifyApiRequest::GetApiType() const
{
    return m_apiType;
}

void ModifyApiRequest::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool ModifyApiRequest::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string ModifyApiRequest::GetAuthType() const
{
    return m_authType;
}

void ModifyApiRequest::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ModifyApiRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

bool ModifyApiRequest::GetAuthRequired() const
{
    return m_authRequired;
}

void ModifyApiRequest::SetAuthRequired(const bool& _authRequired)
{
    m_authRequired = _authRequired;
    m_authRequiredHasBeenSet = true;
}

bool ModifyApiRequest::AuthRequiredHasBeenSet() const
{
    return m_authRequiredHasBeenSet;
}

int64_t ModifyApiRequest::GetServiceTimeout() const
{
    return m_serviceTimeout;
}

void ModifyApiRequest::SetServiceTimeout(const int64_t& _serviceTimeout)
{
    m_serviceTimeout = _serviceTimeout;
    m_serviceTimeoutHasBeenSet = true;
}

bool ModifyApiRequest::ServiceTimeoutHasBeenSet() const
{
    return m_serviceTimeoutHasBeenSet;
}

string ModifyApiRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyApiRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyApiRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

bool ModifyApiRequest::GetEnableCORS() const
{
    return m_enableCORS;
}

void ModifyApiRequest::SetEnableCORS(const bool& _enableCORS)
{
    m_enableCORS = _enableCORS;
    m_enableCORSHasBeenSet = true;
}

bool ModifyApiRequest::EnableCORSHasBeenSet() const
{
    return m_enableCORSHasBeenSet;
}

vector<ConstantParameter> ModifyApiRequest::GetConstantParameters() const
{
    return m_constantParameters;
}

void ModifyApiRequest::SetConstantParameters(const vector<ConstantParameter>& _constantParameters)
{
    m_constantParameters = _constantParameters;
    m_constantParametersHasBeenSet = true;
}

bool ModifyApiRequest::ConstantParametersHasBeenSet() const
{
    return m_constantParametersHasBeenSet;
}

vector<ReqParameter> ModifyApiRequest::GetRequestParameters() const
{
    return m_requestParameters;
}

void ModifyApiRequest::SetRequestParameters(const vector<ReqParameter>& _requestParameters)
{
    m_requestParameters = _requestParameters;
    m_requestParametersHasBeenSet = true;
}

bool ModifyApiRequest::RequestParametersHasBeenSet() const
{
    return m_requestParametersHasBeenSet;
}

string ModifyApiRequest::GetApiBusinessType() const
{
    return m_apiBusinessType;
}

void ModifyApiRequest::SetApiBusinessType(const string& _apiBusinessType)
{
    m_apiBusinessType = _apiBusinessType;
    m_apiBusinessTypeHasBeenSet = true;
}

bool ModifyApiRequest::ApiBusinessTypeHasBeenSet() const
{
    return m_apiBusinessTypeHasBeenSet;
}

string ModifyApiRequest::GetServiceMockReturnMessage() const
{
    return m_serviceMockReturnMessage;
}

void ModifyApiRequest::SetServiceMockReturnMessage(const string& _serviceMockReturnMessage)
{
    m_serviceMockReturnMessage = _serviceMockReturnMessage;
    m_serviceMockReturnMessageHasBeenSet = true;
}

bool ModifyApiRequest::ServiceMockReturnMessageHasBeenSet() const
{
    return m_serviceMockReturnMessageHasBeenSet;
}

vector<MicroServiceReq> ModifyApiRequest::GetMicroServices() const
{
    return m_microServices;
}

void ModifyApiRequest::SetMicroServices(const vector<MicroServiceReq>& _microServices)
{
    m_microServices = _microServices;
    m_microServicesHasBeenSet = true;
}

bool ModifyApiRequest::MicroServicesHasBeenSet() const
{
    return m_microServicesHasBeenSet;
}

TsfLoadBalanceConfResp ModifyApiRequest::GetServiceTsfLoadBalanceConf() const
{
    return m_serviceTsfLoadBalanceConf;
}

void ModifyApiRequest::SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf)
{
    m_serviceTsfLoadBalanceConf = _serviceTsfLoadBalanceConf;
    m_serviceTsfLoadBalanceConfHasBeenSet = true;
}

bool ModifyApiRequest::ServiceTsfLoadBalanceConfHasBeenSet() const
{
    return m_serviceTsfLoadBalanceConfHasBeenSet;
}

HealthCheckConf ModifyApiRequest::GetServiceTsfHealthCheckConf() const
{
    return m_serviceTsfHealthCheckConf;
}

void ModifyApiRequest::SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf)
{
    m_serviceTsfHealthCheckConf = _serviceTsfHealthCheckConf;
    m_serviceTsfHealthCheckConfHasBeenSet = true;
}

bool ModifyApiRequest::ServiceTsfHealthCheckConfHasBeenSet() const
{
    return m_serviceTsfHealthCheckConfHasBeenSet;
}

int64_t ModifyApiRequest::GetTargetServicesLoadBalanceConf() const
{
    return m_targetServicesLoadBalanceConf;
}

void ModifyApiRequest::SetTargetServicesLoadBalanceConf(const int64_t& _targetServicesLoadBalanceConf)
{
    m_targetServicesLoadBalanceConf = _targetServicesLoadBalanceConf;
    m_targetServicesLoadBalanceConfHasBeenSet = true;
}

bool ModifyApiRequest::TargetServicesLoadBalanceConfHasBeenSet() const
{
    return m_targetServicesLoadBalanceConfHasBeenSet;
}

HealthCheckConf ModifyApiRequest::GetTargetServicesHealthCheckConf() const
{
    return m_targetServicesHealthCheckConf;
}

void ModifyApiRequest::SetTargetServicesHealthCheckConf(const HealthCheckConf& _targetServicesHealthCheckConf)
{
    m_targetServicesHealthCheckConf = _targetServicesHealthCheckConf;
    m_targetServicesHealthCheckConfHasBeenSet = true;
}

bool ModifyApiRequest::TargetServicesHealthCheckConfHasBeenSet() const
{
    return m_targetServicesHealthCheckConfHasBeenSet;
}

string ModifyApiRequest::GetServiceScfFunctionName() const
{
    return m_serviceScfFunctionName;
}

void ModifyApiRequest::SetServiceScfFunctionName(const string& _serviceScfFunctionName)
{
    m_serviceScfFunctionName = _serviceScfFunctionName;
    m_serviceScfFunctionNameHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfFunctionNameHasBeenSet() const
{
    return m_serviceScfFunctionNameHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketRegisterFunctionName() const
{
    return m_serviceWebsocketRegisterFunctionName;
}

void ModifyApiRequest::SetServiceWebsocketRegisterFunctionName(const string& _serviceWebsocketRegisterFunctionName)
{
    m_serviceWebsocketRegisterFunctionName = _serviceWebsocketRegisterFunctionName;
    m_serviceWebsocketRegisterFunctionNameHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketRegisterFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNameHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketCleanupFunctionName() const
{
    return m_serviceWebsocketCleanupFunctionName;
}

void ModifyApiRequest::SetServiceWebsocketCleanupFunctionName(const string& _serviceWebsocketCleanupFunctionName)
{
    m_serviceWebsocketCleanupFunctionName = _serviceWebsocketCleanupFunctionName;
    m_serviceWebsocketCleanupFunctionNameHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketCleanupFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNameHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketTransportFunctionName() const
{
    return m_serviceWebsocketTransportFunctionName;
}

void ModifyApiRequest::SetServiceWebsocketTransportFunctionName(const string& _serviceWebsocketTransportFunctionName)
{
    m_serviceWebsocketTransportFunctionName = _serviceWebsocketTransportFunctionName;
    m_serviceWebsocketTransportFunctionNameHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketTransportFunctionNameHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNameHasBeenSet;
}

string ModifyApiRequest::GetServiceScfFunctionNamespace() const
{
    return m_serviceScfFunctionNamespace;
}

void ModifyApiRequest::SetServiceScfFunctionNamespace(const string& _serviceScfFunctionNamespace)
{
    m_serviceScfFunctionNamespace = _serviceScfFunctionNamespace;
    m_serviceScfFunctionNamespaceHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfFunctionNamespaceHasBeenSet() const
{
    return m_serviceScfFunctionNamespaceHasBeenSet;
}

string ModifyApiRequest::GetServiceScfFunctionQualifier() const
{
    return m_serviceScfFunctionQualifier;
}

void ModifyApiRequest::SetServiceScfFunctionQualifier(const string& _serviceScfFunctionQualifier)
{
    m_serviceScfFunctionQualifier = _serviceScfFunctionQualifier;
    m_serviceScfFunctionQualifierHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfFunctionQualifierHasBeenSet() const
{
    return m_serviceScfFunctionQualifierHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketRegisterFunctionNamespace() const
{
    return m_serviceWebsocketRegisterFunctionNamespace;
}

void ModifyApiRequest::SetServiceWebsocketRegisterFunctionNamespace(const string& _serviceWebsocketRegisterFunctionNamespace)
{
    m_serviceWebsocketRegisterFunctionNamespace = _serviceWebsocketRegisterFunctionNamespace;
    m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketRegisterFunctionQualifier() const
{
    return m_serviceWebsocketRegisterFunctionQualifier;
}

void ModifyApiRequest::SetServiceWebsocketRegisterFunctionQualifier(const string& _serviceWebsocketRegisterFunctionQualifier)
{
    m_serviceWebsocketRegisterFunctionQualifier = _serviceWebsocketRegisterFunctionQualifier;
    m_serviceWebsocketRegisterFunctionQualifierHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketTransportFunctionNamespace() const
{
    return m_serviceWebsocketTransportFunctionNamespace;
}

void ModifyApiRequest::SetServiceWebsocketTransportFunctionNamespace(const string& _serviceWebsocketTransportFunctionNamespace)
{
    m_serviceWebsocketTransportFunctionNamespace = _serviceWebsocketTransportFunctionNamespace;
    m_serviceWebsocketTransportFunctionNamespaceHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketTransportFunctionQualifier() const
{
    return m_serviceWebsocketTransportFunctionQualifier;
}

void ModifyApiRequest::SetServiceWebsocketTransportFunctionQualifier(const string& _serviceWebsocketTransportFunctionQualifier)
{
    m_serviceWebsocketTransportFunctionQualifier = _serviceWebsocketTransportFunctionQualifier;
    m_serviceWebsocketTransportFunctionQualifierHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketTransportFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketTransportFunctionQualifierHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketCleanupFunctionNamespace() const
{
    return m_serviceWebsocketCleanupFunctionNamespace;
}

void ModifyApiRequest::SetServiceWebsocketCleanupFunctionNamespace(const string& _serviceWebsocketCleanupFunctionNamespace)
{
    m_serviceWebsocketCleanupFunctionNamespace = _serviceWebsocketCleanupFunctionNamespace;
    m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;
}

string ModifyApiRequest::GetServiceWebsocketCleanupFunctionQualifier() const
{
    return m_serviceWebsocketCleanupFunctionQualifier;
}

void ModifyApiRequest::SetServiceWebsocketCleanupFunctionQualifier(const string& _serviceWebsocketCleanupFunctionQualifier)
{
    m_serviceWebsocketCleanupFunctionQualifier = _serviceWebsocketCleanupFunctionQualifier;
    m_serviceWebsocketCleanupFunctionQualifierHasBeenSet = true;
}

bool ModifyApiRequest::ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const
{
    return m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;
}

bool ModifyApiRequest::GetServiceScfIsIntegratedResponse() const
{
    return m_serviceScfIsIntegratedResponse;
}

void ModifyApiRequest::SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse)
{
    m_serviceScfIsIntegratedResponse = _serviceScfIsIntegratedResponse;
    m_serviceScfIsIntegratedResponseHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfIsIntegratedResponseHasBeenSet() const
{
    return m_serviceScfIsIntegratedResponseHasBeenSet;
}

bool ModifyApiRequest::GetIsDebugAfterCharge() const
{
    return m_isDebugAfterCharge;
}

void ModifyApiRequest::SetIsDebugAfterCharge(const bool& _isDebugAfterCharge)
{
    m_isDebugAfterCharge = _isDebugAfterCharge;
    m_isDebugAfterChargeHasBeenSet = true;
}

bool ModifyApiRequest::IsDebugAfterChargeHasBeenSet() const
{
    return m_isDebugAfterChargeHasBeenSet;
}

Tag ModifyApiRequest::GetTagSpecifications() const
{
    return m_tagSpecifications;
}

void ModifyApiRequest::SetTagSpecifications(const Tag& _tagSpecifications)
{
    m_tagSpecifications = _tagSpecifications;
    m_tagSpecificationsHasBeenSet = true;
}

bool ModifyApiRequest::TagSpecificationsHasBeenSet() const
{
    return m_tagSpecificationsHasBeenSet;
}

bool ModifyApiRequest::GetIsDeleteResponseErrorCodes() const
{
    return m_isDeleteResponseErrorCodes;
}

void ModifyApiRequest::SetIsDeleteResponseErrorCodes(const bool& _isDeleteResponseErrorCodes)
{
    m_isDeleteResponseErrorCodes = _isDeleteResponseErrorCodes;
    m_isDeleteResponseErrorCodesHasBeenSet = true;
}

bool ModifyApiRequest::IsDeleteResponseErrorCodesHasBeenSet() const
{
    return m_isDeleteResponseErrorCodesHasBeenSet;
}

string ModifyApiRequest::GetResponseType() const
{
    return m_responseType;
}

void ModifyApiRequest::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool ModifyApiRequest::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string ModifyApiRequest::GetResponseSuccessExample() const
{
    return m_responseSuccessExample;
}

void ModifyApiRequest::SetResponseSuccessExample(const string& _responseSuccessExample)
{
    m_responseSuccessExample = _responseSuccessExample;
    m_responseSuccessExampleHasBeenSet = true;
}

bool ModifyApiRequest::ResponseSuccessExampleHasBeenSet() const
{
    return m_responseSuccessExampleHasBeenSet;
}

string ModifyApiRequest::GetResponseFailExample() const
{
    return m_responseFailExample;
}

void ModifyApiRequest::SetResponseFailExample(const string& _responseFailExample)
{
    m_responseFailExample = _responseFailExample;
    m_responseFailExampleHasBeenSet = true;
}

bool ModifyApiRequest::ResponseFailExampleHasBeenSet() const
{
    return m_responseFailExampleHasBeenSet;
}

ServiceConfig ModifyApiRequest::GetServiceConfig() const
{
    return m_serviceConfig;
}

void ModifyApiRequest::SetServiceConfig(const ServiceConfig& _serviceConfig)
{
    m_serviceConfig = _serviceConfig;
    m_serviceConfigHasBeenSet = true;
}

bool ModifyApiRequest::ServiceConfigHasBeenSet() const
{
    return m_serviceConfigHasBeenSet;
}

string ModifyApiRequest::GetAuthRelationApiId() const
{
    return m_authRelationApiId;
}

void ModifyApiRequest::SetAuthRelationApiId(const string& _authRelationApiId)
{
    m_authRelationApiId = _authRelationApiId;
    m_authRelationApiIdHasBeenSet = true;
}

bool ModifyApiRequest::AuthRelationApiIdHasBeenSet() const
{
    return m_authRelationApiIdHasBeenSet;
}

vector<ServiceParameter> ModifyApiRequest::GetServiceParameters() const
{
    return m_serviceParameters;
}

void ModifyApiRequest::SetServiceParameters(const vector<ServiceParameter>& _serviceParameters)
{
    m_serviceParameters = _serviceParameters;
    m_serviceParametersHasBeenSet = true;
}

bool ModifyApiRequest::ServiceParametersHasBeenSet() const
{
    return m_serviceParametersHasBeenSet;
}

OauthConfig ModifyApiRequest::GetOauthConfig() const
{
    return m_oauthConfig;
}

void ModifyApiRequest::SetOauthConfig(const OauthConfig& _oauthConfig)
{
    m_oauthConfig = _oauthConfig;
    m_oauthConfigHasBeenSet = true;
}

bool ModifyApiRequest::OauthConfigHasBeenSet() const
{
    return m_oauthConfigHasBeenSet;
}

vector<ResponseErrorCodeReq> ModifyApiRequest::GetResponseErrorCodes() const
{
    return m_responseErrorCodes;
}

void ModifyApiRequest::SetResponseErrorCodes(const vector<ResponseErrorCodeReq>& _responseErrorCodes)
{
    m_responseErrorCodes = _responseErrorCodes;
    m_responseErrorCodesHasBeenSet = true;
}

bool ModifyApiRequest::ResponseErrorCodesHasBeenSet() const
{
    return m_responseErrorCodesHasBeenSet;
}

bool ModifyApiRequest::GetIsBase64Encoded() const
{
    return m_isBase64Encoded;
}

void ModifyApiRequest::SetIsBase64Encoded(const bool& _isBase64Encoded)
{
    m_isBase64Encoded = _isBase64Encoded;
    m_isBase64EncodedHasBeenSet = true;
}

bool ModifyApiRequest::IsBase64EncodedHasBeenSet() const
{
    return m_isBase64EncodedHasBeenSet;
}

bool ModifyApiRequest::GetIsBase64Trigger() const
{
    return m_isBase64Trigger;
}

void ModifyApiRequest::SetIsBase64Trigger(const bool& _isBase64Trigger)
{
    m_isBase64Trigger = _isBase64Trigger;
    m_isBase64TriggerHasBeenSet = true;
}

bool ModifyApiRequest::IsBase64TriggerHasBeenSet() const
{
    return m_isBase64TriggerHasBeenSet;
}

vector<Base64EncodedTriggerRule> ModifyApiRequest::GetBase64EncodedTriggerRules() const
{
    return m_base64EncodedTriggerRules;
}

void ModifyApiRequest::SetBase64EncodedTriggerRules(const vector<Base64EncodedTriggerRule>& _base64EncodedTriggerRules)
{
    m_base64EncodedTriggerRules = _base64EncodedTriggerRules;
    m_base64EncodedTriggerRulesHasBeenSet = true;
}

bool ModifyApiRequest::Base64EncodedTriggerRulesHasBeenSet() const
{
    return m_base64EncodedTriggerRulesHasBeenSet;
}

string ModifyApiRequest::GetEventBusId() const
{
    return m_eventBusId;
}

void ModifyApiRequest::SetEventBusId(const string& _eventBusId)
{
    m_eventBusId = _eventBusId;
    m_eventBusIdHasBeenSet = true;
}

bool ModifyApiRequest::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string ModifyApiRequest::GetServiceScfFunctionType() const
{
    return m_serviceScfFunctionType;
}

void ModifyApiRequest::SetServiceScfFunctionType(const string& _serviceScfFunctionType)
{
    m_serviceScfFunctionType = _serviceScfFunctionType;
    m_serviceScfFunctionTypeHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfFunctionTypeHasBeenSet() const
{
    return m_serviceScfFunctionTypeHasBeenSet;
}

bool ModifyApiRequest::GetServiceScfEventIsAsyncCall() const
{
    return m_serviceScfEventIsAsyncCall;
}

void ModifyApiRequest::SetServiceScfEventIsAsyncCall(const bool& _serviceScfEventIsAsyncCall)
{
    m_serviceScfEventIsAsyncCall = _serviceScfEventIsAsyncCall;
    m_serviceScfEventIsAsyncCallHasBeenSet = true;
}

bool ModifyApiRequest::ServiceScfEventIsAsyncCallHasBeenSet() const
{
    return m_serviceScfEventIsAsyncCallHasBeenSet;
}

string ModifyApiRequest::GetEIAMAppType() const
{
    return m_eIAMAppType;
}

void ModifyApiRequest::SetEIAMAppType(const string& _eIAMAppType)
{
    m_eIAMAppType = _eIAMAppType;
    m_eIAMAppTypeHasBeenSet = true;
}

bool ModifyApiRequest::EIAMAppTypeHasBeenSet() const
{
    return m_eIAMAppTypeHasBeenSet;
}

string ModifyApiRequest::GetEIAMAuthType() const
{
    return m_eIAMAuthType;
}

void ModifyApiRequest::SetEIAMAuthType(const string& _eIAMAuthType)
{
    m_eIAMAuthType = _eIAMAuthType;
    m_eIAMAuthTypeHasBeenSet = true;
}

bool ModifyApiRequest::EIAMAuthTypeHasBeenSet() const
{
    return m_eIAMAuthTypeHasBeenSet;
}

string ModifyApiRequest::GetEIAMAppId() const
{
    return m_eIAMAppId;
}

void ModifyApiRequest::SetEIAMAppId(const string& _eIAMAppId)
{
    m_eIAMAppId = _eIAMAppId;
    m_eIAMAppIdHasBeenSet = true;
}

bool ModifyApiRequest::EIAMAppIdHasBeenSet() const
{
    return m_eIAMAppIdHasBeenSet;
}

int64_t ModifyApiRequest::GetTokenTimeout() const
{
    return m_tokenTimeout;
}

void ModifyApiRequest::SetTokenTimeout(const int64_t& _tokenTimeout)
{
    m_tokenTimeout = _tokenTimeout;
    m_tokenTimeoutHasBeenSet = true;
}

bool ModifyApiRequest::TokenTimeoutHasBeenSet() const
{
    return m_tokenTimeoutHasBeenSet;
}


