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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCAUTHPLUGINCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCAUTHPLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 资源端 OIDC 认证插件配置
                */
                class AIGWOIDCAuthPluginConfig : public AbstractModel
                {
                public:
                    AIGWOIDCAuthPluginConfig();
                    ~AIGWOIDCAuthPluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标受众</p>
                     * @return Audience <p>目标受众</p>
                     * 
                     */
                    std::string GetAudience() const;

                    /**
                     * 设置<p>目标受众</p>
                     * @param _audience <p>目标受众</p>
                     * 
                     */
                    void SetAudience(const std::string& _audience);

                    /**
                     * 判断参数 Audience 是否已赋值
                     * @return Audience 是否已赋值
                     * 
                     */
                    bool AudienceHasBeenSet() const;

                    /**
                     * 获取<p>是否BearerOnly</p><p>目前只能为true</p>
                     * @return BearerOnly <p>是否BearerOnly</p><p>目前只能为true</p>
                     * 
                     */
                    bool GetBearerOnly() const;

                    /**
                     * 设置<p>是否BearerOnly</p><p>目前只能为true</p>
                     * @param _bearerOnly <p>是否BearerOnly</p><p>目前只能为true</p>
                     * 
                     */
                    void SetBearerOnly(const bool& _bearerOnly);

                    /**
                     * 判断参数 BearerOnly 是否已赋值
                     * @return BearerOnly 是否已赋值
                     * 
                     */
                    bool BearerOnlyHasBeenSet() const;

                    /**
                     * 获取<p>授权范围</p>
                     * @return Scopes <p>授权范围</p>
                     * 
                     */
                    std::vector<std::string> GetScopes() const;

                    /**
                     * 设置<p>授权范围</p>
                     * @param _scopes <p>授权范围</p>
                     * 
                     */
                    void SetScopes(const std::vector<std::string>& _scopes);

                    /**
                     * 判断参数 Scopes 是否已赋值
                     * @return Scopes 是否已赋值
                     * 
                     */
                    bool ScopesHasBeenSet() const;

                    /**
                     * 获取<p>消费者标识</p>
                     * @return ConsumerClaim <p>消费者标识</p>
                     * 
                     */
                    std::string GetConsumerClaim() const;

                    /**
                     * 设置<p>消费者标识</p>
                     * @param _consumerClaim <p>消费者标识</p>
                     * 
                     */
                    void SetConsumerClaim(const std::string& _consumerClaim);

                    /**
                     * 判断参数 ConsumerClaim 是否已赋值
                     * @return ConsumerClaim 是否已赋值
                     * 
                     */
                    bool ConsumerClaimHasBeenSet() const;

                    /**
                     * 获取<p>认证域</p>
                     * @return Realm <p>认证域</p>
                     * 
                     */
                    std::string GetRealm() const;

                    /**
                     * 设置<p>认证域</p>
                     * @param _realm <p>认证域</p>
                     * 
                     */
                    void SetRealm(const std::string& _realm);

                    /**
                     * 判断参数 Realm 是否已赋值
                     * @return Realm 是否已赋值
                     * 
                     */
                    bool RealmHasBeenSet() const;

                    /**
                     * 获取<p>超时时间</p>
                     * @return Timeout <p>超时时间</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间</p>
                     * @param _timeout <p>超时时间</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>令牌端点认证方法</p><p>枚举值：</p><ul><li>client_secret_post： client_secret_post</li><li>client_secret_basic： client_secret_basic</li><li>private_key_jwt： private_key_jwt</li></ul>
                     * @return TokenEndpointAuthMethod <p>令牌端点认证方法</p><p>枚举值：</p><ul><li>client_secret_post： client_secret_post</li><li>client_secret_basic： client_secret_basic</li><li>private_key_jwt： private_key_jwt</li></ul>
                     * 
                     */
                    std::string GetTokenEndpointAuthMethod() const;

                    /**
                     * 设置<p>令牌端点认证方法</p><p>枚举值：</p><ul><li>client_secret_post： client_secret_post</li><li>client_secret_basic： client_secret_basic</li><li>private_key_jwt： private_key_jwt</li></ul>
                     * @param _tokenEndpointAuthMethod <p>令牌端点认证方法</p><p>枚举值：</p><ul><li>client_secret_post： client_secret_post</li><li>client_secret_basic： client_secret_basic</li><li>private_key_jwt： private_key_jwt</li></ul>
                     * 
                     */
                    void SetTokenEndpointAuthMethod(const std::string& _tokenEndpointAuthMethod);

                    /**
                     * 判断参数 TokenEndpointAuthMethod 是否已赋值
                     * @return TokenEndpointAuthMethod 是否已赋值
                     * 
                     */
                    bool TokenEndpointAuthMethodHasBeenSet() const;

                    /**
                     * 获取<p>令牌内省端点</p>
                     * @return IntrospectionEndpoint <p>令牌内省端点</p>
                     * 
                     */
                    std::string GetIntrospectionEndpoint() const;

                    /**
                     * 设置<p>令牌内省端点</p>
                     * @param _introspectionEndpoint <p>令牌内省端点</p>
                     * 
                     */
                    void SetIntrospectionEndpoint(const std::string& _introspectionEndpoint);

                    /**
                     * 判断参数 IntrospectionEndpoint 是否已赋值
                     * @return IntrospectionEndpoint 是否已赋值
                     * 
                     */
                    bool IntrospectionEndpointHasBeenSet() const;

                    /**
                     * 获取<p>令牌内省端点认证方法</p><p>枚举值：</p><ul><li>client_secret_basic： client_secret_basic</li><li>client_secret_post： client_secret_post</li></ul>
                     * @return IntrospectionEndpointAuthMethod <p>令牌内省端点认证方法</p><p>枚举值：</p><ul><li>client_secret_basic： client_secret_basic</li><li>client_secret_post： client_secret_post</li></ul>
                     * 
                     */
                    std::string GetIntrospectionEndpointAuthMethod() const;

                    /**
                     * 设置<p>令牌内省端点认证方法</p><p>枚举值：</p><ul><li>client_secret_basic： client_secret_basic</li><li>client_secret_post： client_secret_post</li></ul>
                     * @param _introspectionEndpointAuthMethod <p>令牌内省端点认证方法</p><p>枚举值：</p><ul><li>client_secret_basic： client_secret_basic</li><li>client_secret_post： client_secret_post</li></ul>
                     * 
                     */
                    void SetIntrospectionEndpointAuthMethod(const std::string& _introspectionEndpointAuthMethod);

                    /**
                     * 判断参数 IntrospectionEndpointAuthMethod 是否已赋值
                     * @return IntrospectionEndpointAuthMethod 是否已赋值
                     * 
                     */
                    bool IntrospectionEndpointAuthMethodHasBeenSet() const;

                    /**
                     * 获取<p>签发者地址</p>
                     * @return IssuerURL <p>签发者地址</p>
                     * 
                     */
                    std::string GetIssuerURL() const;

                    /**
                     * 设置<p>签发者地址</p>
                     * @param _issuerURL <p>签发者地址</p>
                     * 
                     */
                    void SetIssuerURL(const std::string& _issuerURL);

                    /**
                     * 判断参数 IssuerURL 是否已赋值
                     * @return IssuerURL 是否已赋值
                     * 
                     */
                    bool IssuerURLHasBeenSet() const;

                    /**
                     * 获取<p>客户端 ID</p>
                     * @return ClientId <p>客户端 ID</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>客户端 ID</p>
                     * @param _clientId <p>客户端 ID</p>
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取<p>客户端密钥</p>
                     * @return ClientSecret <p>客户端密钥</p>
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置<p>客户端密钥</p>
                     * @param _clientSecret <p>客户端密钥</p>
                     * 
                     */
                    void SetClientSecret(const std::string& _clientSecret);

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                private:

                    /**
                     * <p>目标受众</p>
                     */
                    std::string m_audience;
                    bool m_audienceHasBeenSet;

                    /**
                     * <p>是否BearerOnly</p><p>目前只能为true</p>
                     */
                    bool m_bearerOnly;
                    bool m_bearerOnlyHasBeenSet;

                    /**
                     * <p>授权范围</p>
                     */
                    std::vector<std::string> m_scopes;
                    bool m_scopesHasBeenSet;

                    /**
                     * <p>消费者标识</p>
                     */
                    std::string m_consumerClaim;
                    bool m_consumerClaimHasBeenSet;

                    /**
                     * <p>认证域</p>
                     */
                    std::string m_realm;
                    bool m_realmHasBeenSet;

                    /**
                     * <p>超时时间</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>令牌端点认证方法</p><p>枚举值：</p><ul><li>client_secret_post： client_secret_post</li><li>client_secret_basic： client_secret_basic</li><li>private_key_jwt： private_key_jwt</li></ul>
                     */
                    std::string m_tokenEndpointAuthMethod;
                    bool m_tokenEndpointAuthMethodHasBeenSet;

                    /**
                     * <p>令牌内省端点</p>
                     */
                    std::string m_introspectionEndpoint;
                    bool m_introspectionEndpointHasBeenSet;

                    /**
                     * <p>令牌内省端点认证方法</p><p>枚举值：</p><ul><li>client_secret_basic： client_secret_basic</li><li>client_secret_post： client_secret_post</li></ul>
                     */
                    std::string m_introspectionEndpointAuthMethod;
                    bool m_introspectionEndpointAuthMethodHasBeenSet;

                    /**
                     * <p>签发者地址</p>
                     */
                    std::string m_issuerURL;
                    bool m_issuerURLHasBeenSet;

                    /**
                     * <p>客户端 ID</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>客户端密钥</p>
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCAUTHPLUGINCONFIG_H_
