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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERAUTHREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWJWTAuthPluginConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWOAuthAuthPluginConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWOIDCAuthPluginConfig.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayMCPServerAuth请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayMCPServerAuthRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayMCPServerAuthRequest();
                    ~ModifyCloudNativeAPIGatewayMCPServerAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例ID</p>
                     * @return GatewayId <p>网关实例ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例ID</p>
                     * @param _gatewayId <p>网关实例ID</p>
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
                     * 获取<p>MCP服务ID</p>
                     * @return ServerId <p>MCP服务ID</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>MCP服务ID</p>
                     * @param _serverId <p>MCP服务ID</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @return AuthType <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @param _authType <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
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
                     * 获取<p>JWT认证配置</p>
                     * @return JWTAuthConfig <p>JWT认证配置</p>
                     * 
                     */
                    AIGWJWTAuthPluginConfig GetJWTAuthConfig() const;

                    /**
                     * 设置<p>JWT认证配置</p>
                     * @param _jWTAuthConfig <p>JWT认证配置</p>
                     * 
                     */
                    void SetJWTAuthConfig(const AIGWJWTAuthPluginConfig& _jWTAuthConfig);

                    /**
                     * 判断参数 JWTAuthConfig 是否已赋值
                     * @return JWTAuthConfig 是否已赋值
                     * 
                     */
                    bool JWTAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>OAuth认证配置</p>
                     * @return OAuthAuthConfig <p>OAuth认证配置</p>
                     * 
                     */
                    AIGWOAuthAuthPluginConfig GetOAuthAuthConfig() const;

                    /**
                     * 设置<p>OAuth认证配置</p>
                     * @param _oAuthAuthConfig <p>OAuth认证配置</p>
                     * 
                     */
                    void SetOAuthAuthConfig(const AIGWOAuthAuthPluginConfig& _oAuthAuthConfig);

                    /**
                     * 判断参数 OAuthAuthConfig 是否已赋值
                     * @return OAuthAuthConfig 是否已赋值
                     * 
                     */
                    bool OAuthAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>OIDC认证配置</p>
                     * @return OIDCAuthConfig <p>OIDC认证配置</p>
                     * 
                     */
                    AIGWOIDCAuthPluginConfig GetOIDCAuthConfig() const;

                    /**
                     * 设置<p>OIDC认证配置</p>
                     * @param _oIDCAuthConfig <p>OIDC认证配置</p>
                     * 
                     */
                    void SetOIDCAuthConfig(const AIGWOIDCAuthPluginConfig& _oIDCAuthConfig);

                    /**
                     * 判断参数 OIDCAuthConfig 是否已赋值
                     * @return OIDCAuthConfig 是否已赋值
                     * 
                     */
                    bool OIDCAuthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>MCP服务ID</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>JWT认证配置</p>
                     */
                    AIGWJWTAuthPluginConfig m_jWTAuthConfig;
                    bool m_jWTAuthConfigHasBeenSet;

                    /**
                     * <p>OAuth认证配置</p>
                     */
                    AIGWOAuthAuthPluginConfig m_oAuthAuthConfig;
                    bool m_oAuthAuthConfigHasBeenSet;

                    /**
                     * <p>OIDC认证配置</p>
                     */
                    AIGWOIDCAuthPluginConfig m_oIDCAuthConfig;
                    bool m_oIDCAuthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYMCPSERVERAUTHREQUEST_H_
