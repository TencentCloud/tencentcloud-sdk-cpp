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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERAUTHRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERAUTHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AI 网关 MCP Server 认证配置详情
                */
                class AIGWMCPServerAuthResult : public AbstractModel
                {
                public:
                    AIGWMCPServerAuthResult();
                    ~AIGWMCPServerAuthResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MCP服务认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @return AuthType <p>MCP服务认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>MCP服务认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     * @param _authType <p>MCP服务认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
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
                     * 获取<p>OAuth2认证配置</p>
                     * @return OAuthAuthConfig <p>OAuth2认证配置</p>
                     * 
                     */
                    AIGWOAuthAuthPluginConfig GetOAuthAuthConfig() const;

                    /**
                     * 设置<p>OAuth2认证配置</p>
                     * @param _oAuthAuthConfig <p>OAuth2认证配置</p>
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
                     * <p>MCP服务认证类型</p><p>枚举值：</p><ul><li>None： 无认证</li><li>ApiKey： API Key认证</li></ul>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>JWT认证配置</p>
                     */
                    AIGWJWTAuthPluginConfig m_jWTAuthConfig;
                    bool m_jWTAuthConfigHasBeenSet;

                    /**
                     * <p>OAuth2认证配置</p>
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

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERAUTHRESULT_H_
