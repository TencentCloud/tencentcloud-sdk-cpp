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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Oauth授权配置信息
                */
                class OauthConfig : public AbstractModel
                {
                public:
                    OauthConfig();
                    ~OauthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公钥，用于验证用户token。
                     * @return PublicKey 公钥，用于验证用户token。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥，用于验证用户token。
                     * @param _publicKey 公钥，用于验证用户token。
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取token传递位置。
                     * @return TokenLocation token传递位置。
                     * 
                     */
                    std::string GetTokenLocation() const;

                    /**
                     * 设置token传递位置。
                     * @param _tokenLocation token传递位置。
                     * 
                     */
                    void SetTokenLocation(const std::string& _tokenLocation);

                    /**
                     * 判断参数 TokenLocation 是否已赋值
                     * @return TokenLocation 是否已赋值
                     * 
                     */
                    bool TokenLocationHasBeenSet() const;

                    /**
                     * 获取重定向地址，用于引导用户登录操作。
                     * @return LoginRedirectUrl 重定向地址，用于引导用户登录操作。
                     * 
                     */
                    std::string GetLoginRedirectUrl() const;

                    /**
                     * 设置重定向地址，用于引导用户登录操作。
                     * @param _loginRedirectUrl 重定向地址，用于引导用户登录操作。
                     * 
                     */
                    void SetLoginRedirectUrl(const std::string& _loginRedirectUrl);

                    /**
                     * 判断参数 LoginRedirectUrl 是否已赋值
                     * @return LoginRedirectUrl 是否已赋值
                     * 
                     */
                    bool LoginRedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 公钥，用于验证用户token。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * token传递位置。
                     */
                    std::string m_tokenLocation;
                    bool m_tokenLocationHasBeenSet;

                    /**
                     * 重定向地址，用于引导用户登录操作。
                     */
                    std::string m_loginRedirectUrl;
                    bool m_loginRedirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_OAUTHCONFIG_H_
