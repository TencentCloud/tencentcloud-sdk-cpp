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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>
#include <tencentcloud/apigateway/v20180808/model/RequestConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ErrorCodes.h>
#include <tencentcloud/apigateway/v20180808/model/ReqParameter.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceConfig.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiResultServiceParametersInfo.h>
#include <tencentcloud/apigateway/v20180808/model/ConstantParameter.h>
#include <tencentcloud/apigateway/v20180808/model/MicroService.h>
#include <tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h>
#include <tencentcloud/apigateway/v20180808/model/HealthCheckConf.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>
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
                * 展示api信息
                */
                class ApiInfo : public AbstractModel
                {
                public:
                    ApiInfo();
                    ~ApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 所在的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId API 所在的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置API 所在的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId API 所在的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 所在的服务的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName API 所在的服务的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置API 所在的服务的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName API 所在的服务的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取API 所在的服务的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDesc API 所在的服务的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置API 所在的服务的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDesc API 所在的服务的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取API 接口唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API 接口唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API 接口唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId API 接口唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 接口的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiDesc API 接口的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API 接口的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiDesc API 接口的描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime 最后修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime 最后修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取API 接口的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName API 接口的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API 接口的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName API 接口的名称。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 类型。可取值为NORMAL（普通API）、TSF（微服务API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiType API 类型。可取值为NORMAL（普通API）、TSF（微服务API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API 类型。可取值为NORMAL（普通API）、TSF（微服务API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiType API 类型。可取值为NORMAL（普通API）、TSF（微服务API）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 鉴权类型。可取值为 SECRET（密钥对鉴权）、NONE（免鉴权）、OAUTH。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType API 鉴权类型。可取值为 SECRET（密钥对鉴权）、NONE（免鉴权）、OAUTH。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置API 鉴权类型。可取值为 SECRET（密钥对鉴权）、NONE（免鉴权）、OAUTH。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType API 鉴权类型。可取值为 SECRET（密钥对鉴权）、NONE（免鉴权）、OAUTH。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取OAUTH API的类型。可取值为NORMAL（业务API）、OAUTH（授权API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiBusinessType OAUTH API的类型。可取值为NORMAL（业务API）、OAUTH（授权API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置OAUTH API的类型。可取值为NORMAL（业务API）、OAUTH（授权API）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiBusinessType OAUTH API的类型。可取值为NORMAL（业务API）、OAUTH（授权API）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取OAUTH 业务API 关联的授权API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthRelationApiId OAUTH 业务API 关联的授权API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置OAUTH 业务API 关联的授权API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authRelationApiId OAUTH 业务API 关联的授权API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取OAUTH配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OauthConfig OAUTH配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置OAUTH配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oauthConfig OAUTH配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否购买后调试（云市场预留参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDebugAfterCharge 是否购买后调试（云市场预留参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置是否购买后调试（云市场预留参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDebugAfterCharge 是否购买后调试（云市场预留参数）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求的前端配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestConfig 请求的前端配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RequestConfig GetRequestConfig() const;

                    /**
                     * 设置请求的前端配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestConfig 请求的前端配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取返回类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseType 返回类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置返回类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseType 返回类型。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseSuccessExample 自定义响应配置成功响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseSuccessExample() const;

                    /**
                     * 设置自定义响应配置成功响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseSuccessExample 自定义响应配置成功响应示例。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseFailExample 自定义响应配置失败响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResponseFailExample() const;

                    /**
                     * 设置自定义响应配置失败响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseFailExample 自定义响应配置失败响应示例。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户自定义错误码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseErrorCodes 用户自定义错误码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ErrorCodes> GetResponseErrorCodes() const;

                    /**
                     * 设置用户自定义错误码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseErrorCodes 用户自定义错误码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseErrorCodes(const std::vector<ErrorCodes>& _responseErrorCodes);

                    /**
                     * 判断参数 ResponseErrorCodes 是否已赋值
                     * @return ResponseErrorCodes 是否已赋值
                     * 
                     */
                    bool ResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取前端请求参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestParameters 前端请求参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReqParameter> GetRequestParameters() const;

                    /**
                     * 设置前端请求参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestParameters 前端请求参数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 的后端服务超时时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTimeout API 的后端服务超时时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServiceTimeout() const;

                    /**
                     * 设置API 的后端服务超时时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceTimeout API 的后端服务超时时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 的后端服务类型。可取值为 HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType API 的后端服务类型。可取值为 HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置API 的后端服务类型。可取值为 HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType API 的后端服务类型。可取值为 HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 的后端服务配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceConfig API 的后端服务配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceConfig GetServiceConfig() const;

                    /**
                     * 设置API 的后端服务配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceConfig API 的后端服务配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API的后端服务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceParameters API的后端服务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeApiResultServiceParametersInfo> GetServiceParameters() const;

                    /**
                     * 设置API的后端服务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceParameters API的后端服务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceParameters(const std::vector<DescribeApiResultServiceParametersInfo>& _serviceParameters);

                    /**
                     * 判断参数 ServiceParameters 是否已赋值
                     * @return ServiceParameters 是否已赋值
                     * 
                     */
                    bool ServiceParametersHasBeenSet() const;

                    /**
                     * 获取常量参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConstantParameters 常量参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConstantParameter> GetConstantParameters() const;

                    /**
                     * 设置常量参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _constantParameters 常量参数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceMockReturnMessage API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceMockReturnMessage() const;

                    /**
                     * 设置API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceMockReturnMessage API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf 函数名称。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceScfFunctionName scf 函数名称。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceScfFunctionName() const;

                    /**
                     * 设置scf 函数名称。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceScfFunctionName scf 函数名称。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf 函数命名空间。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceScfFunctionNamespace scf 函数命名空间。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceScfFunctionNamespace() const;

                    /**
                     * 设置scf 函数命名空间。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceScfFunctionNamespace scf 函数命名空间。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceScfFunctionQualifier scf函数版本。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceScfFunctionQualifier() const;

                    /**
                     * 设置scf函数版本。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceScfFunctionQualifier scf函数版本。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启集成响应。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceScfIsIntegratedResponse 是否开启集成响应。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetServiceScfIsIntegratedResponse() const;

                    /**
                     * 设置是否开启集成响应。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceScfIsIntegratedResponse 是否开启集成响应。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketRegisterFunctionName scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionName() const;

                    /**
                     * 设置scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketRegisterFunctionName scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketRegisterFunctionNamespace scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionNamespace() const;

                    /**
                     * 设置scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketRegisterFunctionNamespace scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketRegisterFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionQualifier() const;

                    /**
                     * 设置scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketRegisterFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketCleanupFunctionName scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionName() const;

                    /**
                     * 设置scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketCleanupFunctionName scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketCleanupFunctionNamespace scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionNamespace() const;

                    /**
                     * 设置scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketCleanupFunctionNamespace scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketCleanupFunctionQualifier scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionQualifier() const;

                    /**
                     * 设置scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketCleanupFunctionQualifier scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取WEBSOCKET 回推地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalDomain WEBSOCKET 回推地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置WEBSOCKET 回推地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalDomain WEBSOCKET 回推地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketTransportFunctionName scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionName() const;

                    /**
                     * 设置scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketTransportFunctionName scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketTransportFunctionNamespace scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionNamespace() const;

                    /**
                     * 设置scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketTransportFunctionNamespace scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceWebsocketTransportFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionQualifier() const;

                    /**
                     * 设置scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceWebsocketTransportFunctionQualifier scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API绑定微服务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroServices API绑定微服务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MicroService> GetMicroServices() const;

                    /**
                     * 设置API绑定微服务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microServices API绑定微服务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroServices(const std::vector<MicroService>& _microServices);

                    /**
                     * 判断参数 MicroServices 是否已赋值
                     * @return MicroServices 是否已赋值
                     * 
                     */
                    bool MicroServicesHasBeenSet() const;

                    /**
                     * 获取微服务信息详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroServicesInfo 微服务信息详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetMicroServicesInfo() const;

                    /**
                     * 设置微服务信息详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microServicesInfo 微服务信息详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroServicesInfo(const std::vector<int64_t>& _microServicesInfo);

                    /**
                     * 判断参数 MicroServicesInfo 是否已赋值
                     * @return MicroServicesInfo 是否已赋值
                     * 
                     */
                    bool MicroServicesInfoHasBeenSet() const;

                    /**
                     * 获取微服务的负载均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTsfLoadBalanceConf 微服务的负载均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TsfLoadBalanceConfResp GetServiceTsfLoadBalanceConf() const;

                    /**
                     * 设置微服务的负载均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceTsfLoadBalanceConf 微服务的负载均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceTsfHealthCheckConf 微服务的健康检查配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckConf GetServiceTsfHealthCheckConf() const;

                    /**
                     * 设置微服务的健康检查配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceTsfHealthCheckConf 微服务的健康检查配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启跨域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableCORS 是否开启跨域。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableCORS() const;

                    /**
                     * 设置是否开启跨域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableCORS 是否开启跨域。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取API绑定的tag信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags API绑定的tag信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置API绑定的tag信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags API绑定的tag信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取API已发布的环境信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environments API已发布的环境信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEnvironments() const;

                    /**
                     * 设置API已发布的环境信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environments API已发布的环境信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironments(const std::vector<std::string>& _environments);

                    /**
                     * 判断参数 Environments 是否已赋值
                     * @return Environments 是否已赋值
                     * 
                     */
                    bool EnvironmentsHasBeenSet() const;

                    /**
                     * 获取是否开启Base64编码，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBase64Encoded 是否开启Base64编码，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsBase64Encoded() const;

                    /**
                     * 设置是否开启Base64编码，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBase64Encoded 是否开启Base64编码，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBase64Trigger 是否开启Base64编码的header触发，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsBase64Trigger() const;

                    /**
                     * 设置是否开启Base64编码的header触发，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBase64Trigger 是否开启Base64编码的header触发，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Header触发规则，总规则数量不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Base64EncodedTriggerRules Header触发规则，总规则数量不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Base64EncodedTriggerRule> GetBase64EncodedTriggerRules() const;

                    /**
                     * 设置Header触发规则，总规则数量不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _base64EncodedTriggerRules Header触发规则，总规则数量不超过10。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启SCF Event异步调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceScfEventIsAsyncCall 是否开启SCF Event异步调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetServiceScfEventIsAsyncCall() const;

                    /**
                     * 设置是否开启SCF Event异步调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceScfEventIsAsyncCall 是否开启SCF Event异步调用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceScfEventIsAsyncCall(const bool& _serviceScfEventIsAsyncCall);

                    /**
                     * 判断参数 ServiceScfEventIsAsyncCall 是否已赋值
                     * @return ServiceScfEventIsAsyncCall 是否已赋值
                     * 
                     */
                    bool ServiceScfEventIsAsyncCallHasBeenSet() const;

                private:

                    /**
                     * API 所在的服务唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 所在的服务的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * API 所在的服务的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * API 接口唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API 接口的描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * 创建时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后修改时间，按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * API 接口的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API 类型。可取值为NORMAL（普通API）、TSF（微服务API）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API 的前端请求类型，如 HTTP 或 HTTPS 或者 HTTP 和 HTTPS。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * API 鉴权类型。可取值为 SECRET（密钥对鉴权）、NONE（免鉴权）、OAUTH。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * OAUTH API的类型。可取值为NORMAL（业务API）、OAUTH（授权API）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * OAUTH 业务API 关联的授权API 唯一 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * OAUTH配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * 是否购买后调试（云市场预留参数）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * 请求的前端配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RequestConfig m_requestConfig;
                    bool m_requestConfigHasBeenSet;

                    /**
                     * 返回类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 自定义响应配置成功响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseSuccessExample;
                    bool m_responseSuccessExampleHasBeenSet;

                    /**
                     * 自定义响应配置失败响应示例。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_responseFailExample;
                    bool m_responseFailExampleHasBeenSet;

                    /**
                     * 用户自定义错误码配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ErrorCodes> m_responseErrorCodes;
                    bool m_responseErrorCodesHasBeenSet;

                    /**
                     * 前端请求参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReqParameter> m_requestParameters;
                    bool m_requestParametersHasBeenSet;

                    /**
                     * API 的后端服务超时时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceTimeout;
                    bool m_serviceTimeoutHasBeenSet;

                    /**
                     * API 的后端服务类型。可取值为 HTTP、MOCK、TSF、CLB、SCF、WEBSOCKET、TARGET（内测）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * API 的后端服务配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceConfig m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * API的后端服务参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeApiResultServiceParametersInfo> m_serviceParameters;
                    bool m_serviceParametersHasBeenSet;

                    /**
                     * 常量参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConstantParameter> m_constantParameters;
                    bool m_constantParametersHasBeenSet;

                    /**
                     * API 的后端 Mock 返回信息。如果 ServiceType 是 Mock，则此参数必传。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceMockReturnMessage;
                    bool m_serviceMockReturnMessageHasBeenSet;

                    /**
                     * scf 函数名称。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceScfFunctionName;
                    bool m_serviceScfFunctionNameHasBeenSet;

                    /**
                     * scf 函数命名空间。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceScfFunctionNamespace;
                    bool m_serviceScfFunctionNamespaceHasBeenSet;

                    /**
                     * scf函数版本。当后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceScfFunctionQualifier;
                    bool m_serviceScfFunctionQualifierHasBeenSet;

                    /**
                     * 是否开启集成响应。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_serviceScfIsIntegratedResponse;
                    bool m_serviceScfIsIntegratedResponseHasBeenSet;

                    /**
                     * scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketRegisterFunctionName;
                    bool m_serviceWebsocketRegisterFunctionNameHasBeenSet;

                    /**
                     * scf websocket注册函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketRegisterFunctionNamespace;
                    bool m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketRegisterFunctionQualifier;
                    bool m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;

                    /**
                     * scf websocket清理函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketCleanupFunctionName;
                    bool m_serviceWebsocketCleanupFunctionNameHasBeenSet;

                    /**
                     * scf websocket清理函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketCleanupFunctionNamespace;
                    bool m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket清理函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketCleanupFunctionQualifier;
                    bool m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;

                    /**
                     * WEBSOCKET 回推地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * scf websocket传输函数。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketTransportFunctionName;
                    bool m_serviceWebsocketTransportFunctionNameHasBeenSet;

                    /**
                     * scf websocket传输函数命名空间。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketTransportFunctionNamespace;
                    bool m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;

                    /**
                     * scf websocket传输函数版本。当前端类型是WEBSOCKET且后端类型是SCF时生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceWebsocketTransportFunctionQualifier;
                    bool m_serviceWebsocketTransportFunctionQualifierHasBeenSet;

                    /**
                     * API绑定微服务列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MicroService> m_microServices;
                    bool m_microServicesHasBeenSet;

                    /**
                     * 微服务信息详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_microServicesInfo;
                    bool m_microServicesInfoHasBeenSet;

                    /**
                     * 微服务的负载均衡配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TsfLoadBalanceConfResp m_serviceTsfLoadBalanceConf;
                    bool m_serviceTsfLoadBalanceConfHasBeenSet;

                    /**
                     * 微服务的健康检查配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckConf m_serviceTsfHealthCheckConf;
                    bool m_serviceTsfHealthCheckConfHasBeenSet;

                    /**
                     * 是否开启跨域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableCORS;
                    bool m_enableCORSHasBeenSet;

                    /**
                     * API绑定的tag信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * API已发布的环境信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_environments;
                    bool m_environmentsHasBeenSet;

                    /**
                     * 是否开启Base64编码，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isBase64Encoded;
                    bool m_isBase64EncodedHasBeenSet;

                    /**
                     * 是否开启Base64编码的header触发，只有后端为scf时才会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isBase64Trigger;
                    bool m_isBase64TriggerHasBeenSet;

                    /**
                     * Header触发规则，总规则数量不超过10。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Base64EncodedTriggerRule> m_base64EncodedTriggerRules;
                    bool m_base64EncodedTriggerRulesHasBeenSet;

                    /**
                     * 是否开启SCF Event异步调用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_serviceScfEventIsAsyncCall;
                    bool m_serviceScfEventIsAsyncCallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_
