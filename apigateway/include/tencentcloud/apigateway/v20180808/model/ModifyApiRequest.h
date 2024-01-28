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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/RequestConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ConstantParameter.h>
#include <tencentcloud/apigateway/v20180808/model/ReqParameter.h>
#include <tencentcloud/apigateway/v20180808/model/MicroServiceReq.h>
#include <tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h>
#include <tencentcloud/apigateway/v20180808/model/HealthCheckConf.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceParameter.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ResponseErrorCodeReq.h>
#include <tencentcloud/apigateway/v20180808/model/Base64EncodedTriggerRule.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyApi请求参数结构体
                */
                class ModifyApiRequest : public AbstractModel
                {
                public:
                    ModifyApiRequest();
                    ~ModifyApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API 所在的服务唯一 ID。
                     * @return ServiceId API 所在的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置API 所在的服务唯一 ID。
                     * @param _serviceId API 所在的服务唯一 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API 的后端服务类型。支持HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
                     * @return ServiceType API 的后端服务类型。支持HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置API 的后端服务类型。支持HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
                     * @param _serviceType API 的后端服务类型。支持HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取请求的前端配置。
                     * @return RequestConfig 请求的前端配置。
                     * 
                     */
                    RequestConfig GetRequestConfig() const;

                    /**
                     * 设置请求的前端配置。
                     * @param _requestConfig 请求的前端配置。
                     * 
                     */
                    void SetRequestConfig(const RequestConfig& _requestConfig);

                    /**
                     * 判断参数 RequestConfig 是否已赋值
                     * @return RequestConfig 是否已赋值
                     * 
                     */
                    bool RequestConfigHasBeenSet() const;

                    /**
                     * 获取API 接口唯一 ID。
                     * @return ApiId API 接口唯一 ID。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 接口唯一 ID。
                     * @param _apiId API 接口唯一 ID。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取用户自定义的 API 名称。
                     * @return ApiName 用户自定义的 API 名称。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置用户自定义的 API 名称。
                     * @param _apiName 用户自定义的 API 名称。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取用户自定义的 API 接口描述。
                     * @return ApiDesc 用户自定义的 API 接口描述。
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置用户自定义的 API 接口描述。
                     * @param _apiDesc 用户自定义的 API 接口描述。
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取API 类型，支持NORMAL和TSF，默认为NORMAL。
                     * @return ApiType API 类型，支持NORMAL和TSF，默认为NORMAL。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API 类型，支持NORMAL和TSF，默认为NORMAL。
                     * @param _apiType API 类型，支持NORMAL和TSF，默认为NORMAL。
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API 鉴权类型。支持SECRET、NONE、OAUTH、APP。默认为NONE。
                     * @return AuthType API 鉴权类型。支持SECRET、NONE、OAUTH、APP。默认为NONE。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置API 鉴权类型。支持SECRET、NONE、OAUTH、APP。默认为NONE。
                     * @param _authType API 鉴权类型。支持SECRET、NONE、OAUTH、APP。默认为NONE。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取是否需要签名认证，True 表示需要，False 表示不需要。待废弃。
                     * @return AuthRequired 是否需要签名认证，True 表示需要，False 表示不需要。待废弃。
                     * 
                     */
                    bool GetAuthRequired() const;

                    /**
                     * 设置是否需要签名认证，True 表示需要，False 表示不需要。待废弃。
                     * @param _authRequired 是否需要签名认证，True 表示需要，False 表示不需要。待废弃。
                     * 
                     */
                    void SetAuthRequired(const bool& _authRequired);

                    /**
                     * 判断参数 AuthRequired 是否已赋值
                     * @return AuthRequired 是否已赋值
                     * 
                     */
                    bool AuthRequiredHasBeenSet() const;

                    /**
                     * 获取API 的后端服务超时时间，单位是秒。
                     * @return ServiceTimeout API 的后端服务超时时间，单位是秒。
                     * 
                     */
                    int64_t GetServiceTimeout() const;

                    /**
                     * 设置API 的后端服务超时时间，单位是秒。
                     * @param _serviceTimeout API 的后端服务超时时间，单位是秒。
                     * 
                     */
                    void SetServiceTimeout(const int64_t& _serviceTimeout);

                    /**
                     * 判断参数 ServiceTimeout 是否已赋值
                     * @return ServiceTimeout 是否已赋值
                     * 
                     */
                    bool ServiceTimeoutHasBeenSet() const;

                    /**
                     * 获取API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。修改api时推荐必填
                     * @return Protocol API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。修改api时推荐必填
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。修改api时推荐必填
                     * @param _protocol API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。修改api时推荐必填
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取是否需要开启跨域，Ture 表示需要，False 表示不需要。
                     * @return EnableCORS 是否需要开启跨域，Ture 表示需要，False 表示不需要。
                     * 
                     */
                    bool GetEnableCORS() const;

                    /**
                     * 设置是否需要开启跨域，Ture 表示需要，False 表示不需要。
                     * @param _enableCORS 是否需要开启跨域，Ture 表示需要，False 表示不需要。
                     * 
                     */
                    void SetEnableCORS(const bool& _enableCORS);

                    /**
                     * 判断参数 EnableCORS 是否已赋值
                     * @return EnableCORS 是否已赋值
                     * 
                     */
                    bool EnableCORSHasBeenSet() const;

                    /**
                     * 获取常量参数。
                     * @return ConstantParameters 常量参数。
                     * 
                     */
                    std::vector<ConstantParameter> GetConstantParameters() const;

                    /**
                     * 设置常量参数。
                     * @param _constantParameters 常量参数。
                     * 
                     */
                    void SetConstantParameters(const std::vector<ConstantParameter>& _constantParameters);

                    /**
                     * 判断参数 ConstantParameters 是否已赋值
                     * @return ConstantParameters 是否已赋值
                     * 
                     */
                    bool ConstantParametersHasBeenSet() const;

                    /**
                     * 获取前端请求参数。
                     * @return RequestParameters 前端请求参数。
                     * 
                     */
                    std::vector<ReqParameter> GetRequestParameters() const;

                    /**
                     * 设置前端请求参数。
                     * @param _requestParameters 前端请求参数。
                     * 
                     */
                    void SetRequestParameters(const std::vector<ReqParameter>& _requestParameters);

                    /**
                     * 判断参数 RequestParameters 是否已赋值
                     * @return RequestParameters 是否已赋值
                     * 
                     */
                    bool RequestParametersHasBeenSet() const;

                    /**
                     * 获取当AuthType 为 OAUTH时，该字段有效， NORMAL：业务api   OAUTH：授权API。
                     * @return ApiBusinessType 当AuthType 为 OAUTH时，该字段有效， NORMAL：业务api   OAUTH：授权API。
                     * 
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置当AuthType 为 OAUTH时，该字段有效， NORMAL：业务api   OAUTH：授权API。
                     * @param _apiBusinessType 当AuthType 为 OAUTH时，该字段有效， NORMAL：业务api   OAUTH：授权API。
                     * 
                     */
                    void SetApiBusinessType(const std::string& _apiBusinessType);

                    /**
                     * 判断参数 ApiBusinessType 是否已赋值
                     * @return ApiBusinessType 是否已赋值
                     * 
                     */
                    bool ApiBusinessTypeHasBeenSet() const;

                    /**
                     * 获取API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
                     * @return ServiceMockReturnMessage API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
                     * 
                     */
                    std::string GetServiceMockReturnMessage() const;

                    /**
                     * 设置API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
                     * @param _serviceMockReturnMessage API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
                     * 
                     */
                    void SetServiceMockReturnMessage(const std::string& _serviceMockReturnMessage);

                    /**
                     * 判断参数 ServiceMockReturnMessage 是否已赋值
                     * @return ServiceMockReturnMessage 是否已赋值
                     * 
                     */
                    bool ServiceMockReturnMessageHasBeenSet() const;

                    /**
                     * 获取API绑定微服务列表。
                     * @return MicroServices API绑定微服务列表。
                     * 
                     */
                    std::vector<MicroServiceReq> GetMicroServices() const;

                    /**
                     * 设置API绑定微服务列表。
                     * @param _microServices API绑定微服务列表。
                     * 
                     */
                    void SetMicroServices(const std::vector<MicroServiceReq>& _microServices);

                    /**
                     * 判断参数 MicroServices 是否已赋值
                     * @return MicroServices 是否已赋值
                     * 
                     */
                    bool MicroServicesHasBeenSet() const;

                    /**
                     * 获取微服务的负载均衡配置。
                     * @return ServiceTsfLoadBalanceConf 微服务的负载均衡配置。
                     * 
                     */
                    TsfLoadBalanceConfResp GetServiceTsfLoadBalanceConf() const;

                    /**
                     * 设置微服务的负载均衡配置。
                     * @param _serviceTsfLoadBalanceConf 微服务的负载均衡配置。
                     * 
                     */
                    void SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf);

                    /**
                     * 判断参数 ServiceTsfLoadBalanceConf 是否已赋值
                     * @return ServiceTsfLoadBalanceConf 是否已赋值
                     * 
                     */
                    bool ServiceTsfLoadBalanceConfHasBeenSet() const;

                    /**
                     * 获取微服务的健康检查配置。
                     * @return ServiceTsfHealthCheckConf 微服务的健康检查配置。
                     * 
                     */
                    HealthCheckConf GetServiceTsfHealthCheckConf() const;

                    /**
                     * 设置微服务的健康检查配置。
                     * @param _serviceTsfHealthCheckConf 微服务的健康检查配置。
                     * 
                     */
                    void SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf);

                    /**
                     * 判断参数 ServiceTsfHealthCheckConf 是否已赋值
                     * @return ServiceTsfHealthCheckConf 是否已赋值
                     * 
                     */
                    bool ServiceTsfHealthCheckConfHasBeenSet() const;

                    /**
                     * 获取target类型负载均衡配置。（内测阶段）
                     * @return TargetServicesLoadBalanceConf target类型负载均衡配置。（内测阶段）
                     * 
                     */
                    int64_t GetTargetServicesLoadBalanceConf() const;

                    /**
                     * 设置target类型负载均衡配置。（内测阶段）
                     * @param _targetServicesLoadBalanceConf target类型负载均衡配置。（内测阶段）
                     * 
                     */
                    void SetTargetServicesLoadBalanceConf(const int64_t& _targetServicesLoadBalanceConf);

                    /**
                     * 判断参数 TargetServicesLoadBalanceConf 是否已赋值
                     * @return TargetServicesLoadBalanceConf 是否已赋值
                     * 
                     */
                    bool TargetServicesLoadBalanceConfHasBeenSet() const;

                    /**
                     * 获取target健康检查配置。（内测阶段）
                     * @return TargetServicesHealthCheckConf target健康检查配置。（内测阶段）
                     * 
                     */
                    HealthCheckConf GetTargetServicesHealthCheckConf() const;

                    /**
                     * 设置target健康检查配置。（内测阶段）
                     * @param _targetServicesHealthCheckConf target健康检查配置。（内测阶段）
                     * 
                     */
                    void SetTargetServicesHealthCheckConf(const HealthCheckConf& _targetServicesHealthCheckConf);

                    /**
                     * 判断参数 TargetServicesHealthCheckConf 是否已赋值
                     * @return TargetServicesHealthCheckConf 是否已赋值
                     * 
                     */
                    bool TargetServicesHealthCheckConfHasBeenSet() const;

                    /**
                     * 获取scf 函数名称。当后端类型是SCF时生效。
                     * @return ServiceScfFunctionName scf 函数名称。当后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceScfFunctionName() const;

                    /**
                     * 设置scf 函数名称。当后端类型是SCF时生效。
                     * @param _serviceScfFunctionName scf 函数名称。当后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceScfFunctionName(const std::string& _serviceScfFunctionName);

                    /**
                     * 判断参数 ServiceScfFunctionName 是否已赋值
                     * @return ServiceScfFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionNameHasBeenSet() const;

                    /**
                     * 获取scf websocket注册函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketRegisterFunctionName scf websocket注册函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionName() const;

                    /**
                     * 设置scf websocket注册函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketRegisterFunctionName scf websocket注册函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionName(const std::string& _serviceWebsocketRegisterFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionName 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionNameHasBeenSet() const;

                    /**
                     * 获取scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketCleanupFunctionName scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionName() const;

                    /**
                     * 设置scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketCleanupFunctionName scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionName(const std::string& _serviceWebsocketCleanupFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionName 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionNameHasBeenSet() const;

                    /**
                     * 获取scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketTransportFunctionName scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionName() const;

                    /**
                     * 设置scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketTransportFunctionName scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionName(const std::string& _serviceWebsocketTransportFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionName 是否已赋值
                     * @return ServiceWebsocketTransportFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionNameHasBeenSet() const;

                    /**
                     * 获取scf 函数命名空间。当后端类型是SCF时生效。
                     * @return ServiceScfFunctionNamespace scf 函数命名空间。当后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceScfFunctionNamespace() const;

                    /**
                     * 设置scf 函数命名空间。当后端类型是SCF时生效。
                     * @param _serviceScfFunctionNamespace scf 函数命名空间。当后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceScfFunctionNamespace(const std::string& _serviceScfFunctionNamespace);

                    /**
                     * 判断参数 ServiceScfFunctionNamespace 是否已赋值
                     * @return ServiceScfFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取scf函数版本。当后端类型是SCF时生效。
                     * @return ServiceScfFunctionQualifier scf函数版本。当后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceScfFunctionQualifier() const;

                    /**
                     * 设置scf函数版本。当后端类型是SCF时生效。
                     * @param _serviceScfFunctionQualifier scf函数版本。当后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceScfFunctionQualifier(const std::string& _serviceScfFunctionQualifier);

                    /**
                     * 判断参数 ServiceScfFunctionQualifier 是否已赋值
                     * @return ServiceScfFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketRegisterFunctionNamespace scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionNamespace() const;

                    /**
                     * 设置scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketRegisterFunctionNamespace scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionNamespace(const std::string& _serviceWebsocketRegisterFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketRegisterFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionQualifier() const;

                    /**
                     * 设置scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketRegisterFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionQualifier(const std::string& _serviceWebsocketRegisterFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketTransportFunctionNamespace scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionNamespace() const;

                    /**
                     * 设置scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketTransportFunctionNamespace scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionNamespace(const std::string& _serviceWebsocketTransportFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketTransportFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionQualifier() const;

                    /**
                     * 设置scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketTransportFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionQualifier(const std::string& _serviceWebsocketTransportFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketCleanupFunctionNamespace scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionNamespace() const;

                    /**
                     * 设置scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketCleanupFunctionNamespace scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionNamespace(const std::string& _serviceWebsocketCleanupFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @return ServiceWebsocketCleanupFunctionQualifier scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionQualifier() const;

                    /**
                     * 设置scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * @param _serviceWebsocketCleanupFunctionQualifier scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionQualifier(const std::string& _serviceWebsocketCleanupFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取是否开启响应集成。当后端类型是SCF时生效。
                     * @return ServiceScfIsIntegratedResponse 是否开启响应集成。当后端类型是SCF时生效。
                     * 
                     */
                    bool GetServiceScfIsIntegratedResponse() const;

                    /**
                     * 设置是否开启响应集成。当后端类型是SCF时生效。
                     * @param _serviceScfIsIntegratedResponse 是否开启响应集成。当后端类型是SCF时生效。
                     * 
                     */
                    void SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse);

                    /**
                     * 判断参数 ServiceScfIsIntegratedResponse 是否已赋值
                     * @return ServiceScfIsIntegratedResponse 是否已赋值
                     * 
                     */
                    bool ServiceScfIsIntegratedResponseHasBeenSet() const;

                    /**
                     * 获取开始调试后计费。（云市场预留字段）
                     * @return IsDebugAfterCharge 开始调试后计费。（云市场预留字段）
                     * 
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置开始调试后计费。（云市场预留字段）
                     * @param _isDebugAfterCharge 开始调试后计费。（云市场预留字段）
                     * 
                     */
                    void SetIsDebugAfterCharge(const bool& _isDebugAfterCharge);

                    /**
                     * 判断参数 IsDebugAfterCharge 是否已赋值
                     * @return IsDebugAfterCharge 是否已赋值
                     * 
                     */
                    bool IsDebugAfterChargeHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return TagSpecifications 标签。
                     * 
                     */
                    Tag GetTagSpecifications() const;

                    /**
                     * 设置标签。
                     * @param _tagSpecifications 标签。
                     * 
                     */
                    void SetTagSpecifications(const Tag& _tagSpecifications);

                    /**
                     * 判断参数 TagSpecifications 是否已赋值
                     * @return TagSpecifications 是否已赋值
                     * 
                     */
                    bool TagSpecificationsHasBeenSet() const;

                    /**
                     * 获取是否删除自定义响应配置错误码，如果不传或者传 False，不删除，当传 True 时，则删除此 API 所有自定义响应配置错误码。
                     * @return IsDeleteResponseErrorCodes 是否删除自定义响应配置错误码，如果不传或者传 False，不删除，当传 True 时，则删除此 API 所有自定义响应配置错误码。
                     * 
                     */
                    bool GetIsDeleteResponseErrorCodes() const;

                    /**
                     * 设置是否删除自定义响应配置错误码，如果不传或者传 False，不删除，当传 True 时，则删除此 API 所有自定义响应配置错误码。
                     * @param _isDeleteResponseErrorCodes 是否删除自定义响应配置错误码，如果不传或者传 False，不删除，当传 True 时，则删除此 API 所有自定义响应配置错误码。
                     * 
                     */
                    void SetIsDeleteResponseErrorCodes(const bool& _isDeleteResponseErrorCodes);

                    /**
                     * 判断参数 IsDeleteResponseErrorCodes 是否已赋值
                     * @return IsDeleteResponseErrorCodes 是否已赋值
                     * 
                     */
                    bool IsDeleteResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取返回类型。
                     * @return ResponseType 返回类型。
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置返回类型。
                     * @param _responseType 返回类型。
                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取自定义响应配置成功响应示例。
                     * @return ResponseSuccessExample 自定义响应配置成功响应示例。
                     * 
                     */
                    std::string GetResponseSuccessExample() const;

                    /**
                     * 设置自定义响应配置成功响应示例。
                     * @param _responseSuccessExample 自定义响应配置成功响应示例。
                     * 
                     */
                    void SetResponseSuccessExample(const std::string& _responseSuccessExample);

                    /**
                     * 判断参数 ResponseSuccessExample 是否已赋值
                     * @return ResponseSuccessExample 是否已赋值
                     * 
                     */
                    bool ResponseSuccessExampleHasBeenSet() const;

                    /**
                     * 获取自定义响应配置失败响应示例。
                     * @return ResponseFailExample 自定义响应配置失败响应示例。
                     * 
                     */
                    std::string GetResponseFailExample() const;

                    /**
                     * 设置自定义响应配置失败响应示例。
                     * @param _responseFailExample 自定义响应配置失败响应示例。
                     * 
                     */
                    void SetResponseFailExample(const std::string& _responseFailExample);

                    /**
                     * 判断参数 ResponseFailExample 是否已赋值
                     * @return ResponseFailExample 是否已赋值
                     * 
                     */
                    bool ResponseFailExampleHasBeenSet() const;

                    /**
                     * 获取API 的后端服务配置。
                     * @return ServiceConfig API 的后端服务配置。
                     * 
                     */
                    ServiceConfig GetServiceConfig() const;

                    /**
                     * 设置API 的后端服务配置。
                     * @param _serviceConfig API 的后端服务配置。
                     * 
                     */
                    void SetServiceConfig(const ServiceConfig& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     * 
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取关联的授权API 唯一 ID，当AuthType为OAUTH且ApiBusinessType为NORMAL时生效。标示业务API绑定的oauth2.0授权API唯一ID。
                     * @return AuthRelationApiId 关联的授权API 唯一 ID，当AuthType为OAUTH且ApiBusinessType为NORMAL时生效。标示业务API绑定的oauth2.0授权API唯一ID。
                     * 
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置关联的授权API 唯一 ID，当AuthType为OAUTH且ApiBusinessType为NORMAL时生效。标示业务API绑定的oauth2.0授权API唯一ID。
                     * @param _authRelationApiId 关联的授权API 唯一 ID，当AuthType为OAUTH且ApiBusinessType为NORMAL时生效。标示业务API绑定的oauth2.0授权API唯一ID。
                     * 
                     */
                    void SetAuthRelationApiId(const std::string& _authRelationApiId);

                    /**
                     * 判断参数 AuthRelationApiId 是否已赋值
                     * @return AuthRelationApiId 是否已赋值
                     * 
                     */
                    bool AuthRelationApiIdHasBeenSet() const;

                    /**
                     * 获取API的后端服务参数。
                     * @return ServiceParameters API的后端服务参数。
                     * 
                     */
                    std::vector<ServiceParameter> GetServiceParameters() const;

                    /**
                     * 设置API的后端服务参数。
                     * @param _serviceParameters API的后端服务参数。
                     * 
                     */
                    void SetServiceParameters(const std::vector<ServiceParameter>& _serviceParameters);

                    /**
                     * 判断参数 ServiceParameters 是否已赋值
                     * @return ServiceParameters 是否已赋值
                     * 
                     */
                    bool ServiceParametersHasBeenSet() const;

                    /**
                     * 获取oauth配置。当AuthType是OAUTH时生效。
                     * @return OauthConfig oauth配置。当AuthType是OAUTH时生效。
                     * 
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置oauth配置。当AuthType是OAUTH时生效。
                     * @param _oauthConfig oauth配置。当AuthType是OAUTH时生效。
                     * 
                     */
                    void SetOauthConfig(const OauthConfig& _oauthConfig);

                    /**
                     * 判断参数 OauthConfig 是否已赋值
                     * @return OauthConfig 是否已赋值
                     * 
                     */
                    bool OauthConfigHasBeenSet() const;

                    /**
                     * 获取用户自定义错误码配置。
                     * @return ResponseErrorCodes 用户自定义错误码配置。
                     * 
                     */
                    std::vector<ResponseErrorCodeReq> GetResponseErrorCodes() const;

                    /**
                     * 设置用户自定义错误码配置。
                     * @param _responseErrorCodes 用户自定义错误码配置。
                     * 
                     */
                    void SetResponseErrorCodes(const std::vector<ResponseErrorCodeReq>& _responseErrorCodes);

                    /**
                     * 判断参数 ResponseErrorCodes 是否已赋值
                     * @return ResponseErrorCodes 是否已赋值
                     * 
                     */
                    bool ResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取是否开启Base64编码，只有后端为scf时才会生效。
                     * @return IsBase64Encoded 是否开启Base64编码，只有后端为scf时才会生效。
                     * 
                     */
                    bool GetIsBase64Encoded() const;

                    /**
                     * 设置是否开启Base64编码，只有后端为scf时才会生效。
                     * @param _isBase64Encoded 是否开启Base64编码，只有后端为scf时才会生效。
                     * 
                     */
                    void SetIsBase64Encoded(const bool& _isBase64Encoded);

                    /**
                     * 判断参数 IsBase64Encoded 是否已赋值
                     * @return IsBase64Encoded 是否已赋值
                     * 
                     */
                    bool IsBase64EncodedHasBeenSet() const;

                    /**
                     * 获取是否开启Base64编码的header触发，只有后端为scf时才会生效。
                     * @return IsBase64Trigger 是否开启Base64编码的header触发，只有后端为scf时才会生效。
                     * 
                     */
                    bool GetIsBase64Trigger() const;

                    /**
                     * 设置是否开启Base64编码的header触发，只有后端为scf时才会生效。
                     * @param _isBase64Trigger 是否开启Base64编码的header触发，只有后端为scf时才会生效。
                     * 
                     */
                    void SetIsBase64Trigger(const bool& _isBase64Trigger);

                    /**
                     * 判断参数 IsBase64Trigger 是否已赋值
                     * @return IsBase64Trigger 是否已赋值
                     * 
                     */
                    bool IsBase64TriggerHasBeenSet() const;

                    /**
                     * 获取Header触发规则，总规则数不能超过10。
                     * @return Base64EncodedTriggerRules Header触发规则，总规则数不能超过10。
                     * 
                     */
                    std::vector<Base64EncodedTriggerRule> GetBase64EncodedTriggerRules() const;

                    /**
                     * 设置Header触发规则，总规则数不能超过10。
                     * @param _base64EncodedTriggerRules Header触发规则，总规则数不能超过10。
                     * 
                     */
                    void SetBase64EncodedTriggerRules(const std::vector<Base64EncodedTriggerRule>& _base64EncodedTriggerRules);

                    /**
                     * 判断参数 Base64EncodedTriggerRules 是否已赋值
                     * @return Base64EncodedTriggerRules 是否已赋值
                     * 
                     */
                    bool Base64EncodedTriggerRulesHasBeenSet() const;

                    /**
                     * 获取事件总线ID。
                     * @return EventBusId 事件总线ID。
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件总线ID。
                     * @param _eventBusId 事件总线ID。
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取scf函数类型。当后端类型是SCF时生效。支持事件触发(EVENT)，http直通云函数(HTTP)。
                     * @return ServiceScfFunctionType scf函数类型。当后端类型是SCF时生效。支持事件触发(EVENT)，http直通云函数(HTTP)。
                     * 
                     */
                    std::string GetServiceScfFunctionType() const;

                    /**
                     * 设置scf函数类型。当后端类型是SCF时生效。支持事件触发(EVENT)，http直通云函数(HTTP)。
                     * @param _serviceScfFunctionType scf函数类型。当后端类型是SCF时生效。支持事件触发(EVENT)，http直通云函数(HTTP)。
                     * 
                     */
                    void SetServiceScfFunctionType(const std::string& _serviceScfFunctionType);

                    /**
                     * 判断参数 ServiceScfFunctionType 是否已赋值
                     * @return ServiceScfFunctionType 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionTypeHasBeenSet() const;

                    /**
                     * 获取是否开启SCF Event异步调用。
                     * @return ServiceScfEventIsAsyncCall 是否开启SCF Event异步调用。
                     * 
                     */
                    bool GetServiceScfEventIsAsyncCall() const;

                    /**
                     * 设置是否开启SCF Event异步调用。
                     * @param _serviceScfEventIsAsyncCall 是否开启SCF Event异步调用。
                     * 
                     */
                    void SetServiceScfEventIsAsyncCall(const bool& _serviceScfEventIsAsyncCall);

                    /**
                     * 判断参数 ServiceScfEventIsAsyncCall 是否已赋值
                     * @return ServiceScfEventIsAsyncCall 是否已赋值
                     * 
                     */
                    bool ServiceScfEventIsAsyncCallHasBeenSet() const;

                    /**
                     * 获取EIAM应用类型。
                     * @return EIAMAppType EIAM应用类型。
                     * 
                     */
                    std::string GetEIAMAppType() const;

                    /**
                     * 设置EIAM应用类型。
                     * @param _eIAMAppType EIAM应用类型。
                     * 
                     */
                    void SetEIAMAppType(const std::string& _eIAMAppType);

                    /**
                     * 判断参数 EIAMAppType 是否已赋值
                     * @return EIAMAppType 是否已赋值
                     * 
                     */
                    bool EIAMAppTypeHasBeenSet() const;

                    /**
                     * 获取EIAM应用认证类型，支持仅认证（AuthenticationOnly）、认证和鉴权（Authorization）。
                     * @return EIAMAuthType EIAM应用认证类型，支持仅认证（AuthenticationOnly）、认证和鉴权（Authorization）。
                     * 
                     */
                    std::string GetEIAMAuthType() const;

                    /**
                     * 设置EIAM应用认证类型，支持仅认证（AuthenticationOnly）、认证和鉴权（Authorization）。
                     * @param _eIAMAuthType EIAM应用认证类型，支持仅认证（AuthenticationOnly）、认证和鉴权（Authorization）。
                     * 
                     */
                    void SetEIAMAuthType(const std::string& _eIAMAuthType);

                    /**
                     * 判断参数 EIAMAuthType 是否已赋值
                     * @return EIAMAuthType 是否已赋值
                     * 
                     */
                    bool EIAMAuthTypeHasBeenSet() const;

                    /**
                     * 获取EIAM应用Token 有效时间，单位为秒，默认为7200秒。
                     * @return EIAMAppId EIAM应用Token 有效时间，单位为秒，默认为7200秒。
                     * 
                     */
                    std::string GetEIAMAppId() const;

                    /**
                     * 设置EIAM应用Token 有效时间，单位为秒，默认为7200秒。
                     * @param _eIAMAppId EIAM应用Token 有效时间，单位为秒，默认为7200秒。
                     * 
                     */
                    void SetEIAMAppId(const std::string& _eIAMAppId);

                    /**
                     * 判断参数 EIAMAppId 是否已赋值
                     * @return EIAMAppId 是否已赋值
                     * 
                     */
                    bool EIAMAppIdHasBeenSet() const;

                    /**
                     * 获取EIAM应用ID。
                     * @return TokenTimeout EIAM应用ID。
                     * 
                     */
                    int64_t GetTokenTimeout() const;

                    /**
                     * 设置EIAM应用ID。
                     * @param _tokenTimeout EIAM应用ID。
                     * 
                     */
                    void SetTokenTimeout(const int64_t& _tokenTimeout);

                    /**
                     * 判断参数 TokenTimeout 是否已赋值
                     * @return TokenTimeout 是否已赋值
                     * 
                     */
                    bool TokenTimeoutHasBeenSet() const;

                private:

                    /**
                     * API 所在的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 的后端服务类型。支持HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 请求的前端配置。
                     */
                    RequestConfig m_requestConfig;
                    bool m_requestConfigHasBeenSet;

                    /**
                     * API 接口唯一 ID。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 用户自定义的 API 名称。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 用户自定义的 API 接口描述。
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * API 类型，支持NORMAL和TSF，默认为NORMAL。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API 鉴权类型。支持SECRET、NONE、OAUTH、APP。默认为NONE。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 是否需要签名认证，True 表示需要，False 表示不需要。待废弃。
                     */
                    bool m_authRequired;
                    bool m_authRequiredHasBeenSet;

                    /**
                     * API 的后端服务超时时间，单位是秒。
                     */
                    int64_t m_serviceTimeout;
                    bool m_serviceTimeoutHasBeenSet;

                    /**
                     * API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。修改api时推荐必填
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 是否需要开启跨域，Ture 表示需要，False 表示不需要。
                     */
                    bool m_enableCORS;
                    bool m_enableCORSHasBeenSet;

                    /**
                     * 常量参数。
                     */
                    std::vector<ConstantParameter> m_constantParameters;
                    bool m_constantParametersHasBeenSet;

                    /**
                     * 前端请求参数。
                     */
                    std::vector<ReqParameter> m_requestParameters;
                    bool m_requestParametersHasBeenSet;

                    /**
                     * 当AuthType 为 OAUTH时，该字段有效， NORMAL：业务api   OAUTH：授权API。
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
                     */
                    std::string m_serviceMockReturnMessage;
                    bool m_serviceMockReturnMessageHasBeenSet;

                    /**
                     * API绑定微服务列表。
                     */
                    std::vector<MicroServiceReq> m_microServices;
                    bool m_microServicesHasBeenSet;

                    /**
                     * 微服务的负载均衡配置。
                     */
                    TsfLoadBalanceConfResp m_serviceTsfLoadBalanceConf;
                    bool m_serviceTsfLoadBalanceConfHasBeenSet;

                    /**
                     * 微服务的健康检查配置。
                     */
                    HealthCheckConf m_serviceTsfHealthCheckConf;
                    bool m_serviceTsfHealthCheckConfHasBeenSet;

                    /**
                     * target类型负载均衡配置。（内测阶段）
                     */
                    int64_t m_targetServicesLoadBalanceConf;
                    bool m_targetServicesLoadBalanceConfHasBeenSet;

                    /**
                     * target健康检查配置。（内测阶段）
                     */
                    HealthCheckConf m_targetServicesHealthCheckConf;
                    bool m_targetServicesHealthCheckConfHasBeenSet;

                    /**
                     * scf 函数名称。当后端类型是SCF时生效。
                     */
                    std::string m_serviceScfFunctionName;
                    bool m_serviceScfFunctionNameHasBeenSet;

                    /**
                     * scf websocket注册函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketRegisterFunctionName;
                    bool m_serviceWebsocketRegisterFunctionNameHasBeenSet;

                    /**
                     * scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketCleanupFunctionName;
                    bool m_serviceWebsocketCleanupFunctionNameHasBeenSet;

                    /**
                     * scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketTransportFunctionName;
                    bool m_serviceWebsocketTransportFunctionNameHasBeenSet;

                    /**
                     * scf 函数命名空间。当后端类型是SCF时生效。
                     */
                    std::string m_serviceScfFunctionNamespace;
                    bool m_serviceScfFunctionNamespaceHasBeenSet;

                    /**
                     * scf函数版本。当后端类型是SCF时生效。
                     */
                    std::string m_serviceScfFunctionQualifier;
                    bool m_serviceScfFunctionQualifierHasBeenSet;

                    /**
                     * scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketRegisterFunctionNamespace;
                    bool m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketRegisterFunctionQualifier;
                    bool m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;

                    /**
                     * scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketTransportFunctionNamespace;
                    bool m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketTransportFunctionQualifier;
                    bool m_serviceWebsocketTransportFunctionQualifierHasBeenSet;

                    /**
                     * scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketCleanupFunctionNamespace;
                    bool m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
                     */
                    std::string m_serviceWebsocketCleanupFunctionQualifier;
                    bool m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;

                    /**
                     * 是否开启响应集成。当后端类型是SCF时生效。
                     */
                    bool m_serviceScfIsIntegratedResponse;
                    bool m_serviceScfIsIntegratedResponseHasBeenSet;

                    /**
                     * 开始调试后计费。（云市场预留字段）
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * 标签。
                     */
                    Tag m_tagSpecifications;
                    bool m_tagSpecificationsHasBeenSet;

                    /**
                     * 是否删除自定义响应配置错误码，如果不传或者传 False，不删除，当传 True 时，则删除此 API 所有自定义响应配置错误码。
                     */
                    bool m_isDeleteResponseErrorCodes;
                    bool m_isDeleteResponseErrorCodesHasBeenSet;

                    /**
                     * 返回类型。
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 自定义响应配置成功响应示例。
                     */
                    std::string m_responseSuccessExample;
                    bool m_responseSuccessExampleHasBeenSet;

                    /**
                     * 自定义响应配置失败响应示例。
                     */
                    std::string m_responseFailExample;
                    bool m_responseFailExampleHasBeenSet;

                    /**
                     * API 的后端服务配置。
                     */
                    ServiceConfig m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * 关联的授权API 唯一 ID，当AuthType为OAUTH且ApiBusinessType为NORMAL时生效。标示业务API绑定的oauth2.0授权API唯一ID。
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * API的后端服务参数。
                     */
                    std::vector<ServiceParameter> m_serviceParameters;
                    bool m_serviceParametersHasBeenSet;

                    /**
                     * oauth配置。当AuthType是OAUTH时生效。
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * 用户自定义错误码配置。
                     */
                    std::vector<ResponseErrorCodeReq> m_responseErrorCodes;
                    bool m_responseErrorCodesHasBeenSet;

                    /**
                     * 是否开启Base64编码，只有后端为scf时才会生效。
                     */
                    bool m_isBase64Encoded;
                    bool m_isBase64EncodedHasBeenSet;

                    /**
                     * 是否开启Base64编码的header触发，只有后端为scf时才会生效。
                     */
                    bool m_isBase64Trigger;
                    bool m_isBase64TriggerHasBeenSet;

                    /**
                     * Header触发规则，总规则数不能超过10。
                     */
                    std::vector<Base64EncodedTriggerRule> m_base64EncodedTriggerRules;
                    bool m_base64EncodedTriggerRulesHasBeenSet;

                    /**
                     * 事件总线ID。
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * scf函数类型。当后端类型是SCF时生效。支持事件触发(EVENT)，http直通云函数(HTTP)。
                     */
                    std::string m_serviceScfFunctionType;
                    bool m_serviceScfFunctionTypeHasBeenSet;

                    /**
                     * 是否开启SCF Event异步调用。
                     */
                    bool m_serviceScfEventIsAsyncCall;
                    bool m_serviceScfEventIsAsyncCallHasBeenSet;

                    /**
                     * EIAM应用类型。
                     */
                    std::string m_eIAMAppType;
                    bool m_eIAMAppTypeHasBeenSet;

                    /**
                     * EIAM应用认证类型，支持仅认证（AuthenticationOnly）、认证和鉴权（Authorization）。
                     */
                    std::string m_eIAMAuthType;
                    bool m_eIAMAuthTypeHasBeenSet;

                    /**
                     * EIAM应用Token 有效时间，单位为秒，默认为7200秒。
                     */
                    std::string m_eIAMAppId;
                    bool m_eIAMAppIdHasBeenSet;

                    /**
                     * EIAM应用ID。
                     */
                    int64_t m_tokenTimeout;
                    bool m_tokenTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_
