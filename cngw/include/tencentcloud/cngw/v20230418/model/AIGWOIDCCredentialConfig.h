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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCCREDENTIALCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCCREDENTIALCONFIG_H_

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
                * OIDC 凭证物料配置
                */
                class AIGWOIDCCredentialConfig : public AbstractModel
                {
                public:
                    AIGWOIDCCredentialConfig();
                    ~AIGWOIDCCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IdP 注册的 client_id</p>
                     * @return ClientId <p>IdP 注册的 client_id</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>IdP 注册的 client_id</p>
                     * @param _clientId <p>IdP 注册的 client_id</p>
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
                     * 获取<p>客户端密钥</p><p>参数格式：IdP 注册的 client_secret</p>
                     * @return ClientSecret <p>客户端密钥</p><p>参数格式：IdP 注册的 client_secret</p>
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置<p>客户端密钥</p><p>参数格式：IdP 注册的 client_secret</p>
                     * @param _clientSecret <p>客户端密钥</p><p>参数格式：IdP 注册的 client_secret</p>
                     * 
                     */
                    void SetClientSecret(const std::string& _clientSecret);

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                    /**
                     * 获取<p>IdP Issuer URL</p>
                     * @return IssuerURL <p>IdP Issuer URL</p>
                     * 
                     */
                    std::string GetIssuerURL() const;

                    /**
                     * 设置<p>IdP Issuer URL</p>
                     * @param _issuerURL <p>IdP Issuer URL</p>
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
                     * 获取<p>IdP 中该用户的 claim 值</p>
                     * @return ConsumerClaimValue <p>IdP 中该用户的 claim 值</p>
                     * 
                     */
                    std::string GetConsumerClaimValue() const;

                    /**
                     * 设置<p>IdP 中该用户的 claim 值</p>
                     * @param _consumerClaimValue <p>IdP 中该用户的 claim 值</p>
                     * 
                     */
                    void SetConsumerClaimValue(const std::string& _consumerClaimValue);

                    /**
                     * 判断参数 ConsumerClaimValue 是否已赋值
                     * @return ConsumerClaimValue 是否已赋值
                     * 
                     */
                    bool ConsumerClaimValueHasBeenSet() const;

                private:

                    /**
                     * <p>IdP 注册的 client_id</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>客户端密钥</p><p>参数格式：IdP 注册的 client_secret</p>
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * <p>IdP Issuer URL</p>
                     */
                    std::string m_issuerURL;
                    bool m_issuerURLHasBeenSet;

                    /**
                     * <p>IdP 中该用户的 claim 值</p>
                     */
                    std::string m_consumerClaimValue;
                    bool m_consumerClaimValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWOIDCCREDENTIALCONFIG_H_
