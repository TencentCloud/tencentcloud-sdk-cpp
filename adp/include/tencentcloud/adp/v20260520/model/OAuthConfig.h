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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * OAuth2.0授权信息
                */
                class OAuthConfig : public AbstractModel
                {
                public:
                    OAuthConfig();
                    ~OAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OAuth服务方授权页url地址
                     * @return AuthorizationUrl OAuth服务方授权页url地址
                     * 
                     */
                    std::string GetAuthorizationUrl() const;

                    /**
                     * 设置OAuth服务方授权页url地址
                     * @param _authorizationUrl OAuth服务方授权页url地址
                     * 
                     */
                    void SetAuthorizationUrl(const std::string& _authorizationUrl);

                    /**
                     * 判断参数 AuthorizationUrl 是否已赋值
                     * @return AuthorizationUrl 是否已赋值
                     * 
                     */
                    bool AuthorizationUrlHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
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
                     * 获取客户端密钥
                     * @return ClientSecret 客户端密钥
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置客户端密钥
                     * @param _clientSecret 客户端密钥
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
                     * 获取请求授权的数据范围
                     * @return ScopeList 请求授权的数据范围
                     * 
                     */
                    std::vector<std::string> GetScopeList() const;

                    /**
                     * 设置请求授权的数据范围
                     * @param _scopeList 请求授权的数据范围
                     * 
                     */
                    void SetScopeList(const std::vector<std::string>& _scopeList);

                    /**
                     * 判断参数 ScopeList 是否已赋值
                     * @return ScopeList 是否已赋值
                     * 
                     */
                    bool ScopeListHasBeenSet() const;

                    /**
                     * 获取获取access token的url地址
                     * @return TokenUrl 获取access token的url地址
                     * 
                     */
                    std::string GetTokenUrl() const;

                    /**
                     * 设置获取access token的url地址
                     * @param _tokenUrl 获取access token的url地址
                     * 
                     */
                    void SetTokenUrl(const std::string& _tokenUrl);

                    /**
                     * 判断参数 TokenUrl 是否已赋值
                     * @return TokenUrl 是否已赋值
                     * 
                     */
                    bool TokenUrlHasBeenSet() const;

                private:

                    /**
                     * OAuth服务方授权页url地址
                     */
                    std::string m_authorizationUrl;
                    bool m_authorizationUrlHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 客户端密钥
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * 请求授权的数据范围
                     */
                    std::vector<std::string> m_scopeList;
                    bool m_scopeListHasBeenSet;

                    /**
                     * 获取access token的url地址
                     */
                    std::string m_tokenUrl;
                    bool m_tokenUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_OAUTHCONFIG_H_
