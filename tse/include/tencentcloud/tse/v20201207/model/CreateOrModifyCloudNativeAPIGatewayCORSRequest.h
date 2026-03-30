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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateOrModifyCloudNativeAPIGatewayCORS请求参数结构体
                */
                class CreateOrModifyCloudNativeAPIGatewayCORSRequest : public AbstractModel
                {
                public:
                    CreateOrModifyCloudNativeAPIGatewayCORSRequest();
                    ~CreateOrModifyCloudNativeAPIGatewayCORSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取跨域插件绑定的资源类型：route|service
                     * @return SourceType 跨域插件绑定的资源类型：route|service
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置跨域插件绑定的资源类型：route|service
                     * @param _sourceType 跨域插件绑定的资源类型：route|service
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取路由或服务的id
                     * @return SourceId 路由或服务的id
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置路由或服务的id
                     * @param _sourceId 路由或服务的id
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取是否启用插件
                     * @return Enabled 是否启用插件
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用插件
                     * @param _enabled 是否启用插件
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取跨域 Access-Control-Allow-Origin
                     * @return Origins 跨域 Access-Control-Allow-Origin
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置跨域 Access-Control-Allow-Origin
                     * @param _origins 跨域 Access-Control-Allow-Origin
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取跨域 Access-Control-Allow-Headers header
                     * @return Headers 跨域 Access-Control-Allow-Headers header
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置跨域 Access-Control-Allow-Headers header
                     * @param _headers 跨域 Access-Control-Allow-Headers header
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取跨域 Access-Control-Allow-Methods
                     * @return Methods 跨域 Access-Control-Allow-Methods
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置跨域 Access-Control-Allow-Methods
                     * @param _methods 跨域 Access-Control-Allow-Methods
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取跨域 Access-Control-Expose-Headers
                     * @return ExposedHeaders 跨域 Access-Control-Expose-Headers
                     * 
                     */
                    std::vector<std::string> GetExposedHeaders() const;

                    /**
                     * 设置跨域 Access-Control-Expose-Headers
                     * @param _exposedHeaders 跨域 Access-Control-Expose-Headers
                     * 
                     */
                    void SetExposedHeaders(const std::vector<std::string>& _exposedHeaders);

                    /**
                     * 判断参数 ExposedHeaders 是否已赋值
                     * @return ExposedHeaders 是否已赋值
                     * 
                     */
                    bool ExposedHeadersHasBeenSet() const;

                    /**
                     * 获取preflight 请求缓存时间
                     * @return MaxAge preflight 请求缓存时间
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置preflight 请求缓存时间
                     * @param _maxAge preflight 请求缓存时间
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取跨域 Access-Control-Allow-Credentials
                     * @return Credentials 跨域 Access-Control-Allow-Credentials
                     * 
                     */
                    bool GetCredentials() const;

                    /**
                     * 设置跨域 Access-Control-Allow-Credentials
                     * @param _credentials 跨域 Access-Control-Allow-Credentials
                     * 
                     */
                    void SetCredentials(const bool& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取是否把OPTIONS请求透传后端
                     * @return PreFlightContinue 是否把OPTIONS请求透传后端
                     * 
                     */
                    bool GetPreFlightContinue() const;

                    /**
                     * 设置是否把OPTIONS请求透传后端
                     * @param _preFlightContinue 是否把OPTIONS请求透传后端
                     * 
                     */
                    void SetPreFlightContinue(const bool& _preFlightContinue);

                    /**
                     * 判断参数 PreFlightContinue 是否已赋值
                     * @return PreFlightContinue 是否已赋值
                     * 
                     */
                    bool PreFlightContinueHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 跨域插件绑定的资源类型：route|service
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 路由或服务的id
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 是否启用插件
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 跨域 Access-Control-Allow-Origin
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * 跨域 Access-Control-Allow-Headers header
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 跨域 Access-Control-Allow-Methods
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 跨域 Access-Control-Expose-Headers
                     */
                    std::vector<std::string> m_exposedHeaders;
                    bool m_exposedHeadersHasBeenSet;

                    /**
                     * preflight 请求缓存时间
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 跨域 Access-Control-Allow-Credentials
                     */
                    bool m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * 是否把OPTIONS请求透传后端
                     */
                    bool m_preFlightContinue;
                    bool m_preFlightContinueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_
