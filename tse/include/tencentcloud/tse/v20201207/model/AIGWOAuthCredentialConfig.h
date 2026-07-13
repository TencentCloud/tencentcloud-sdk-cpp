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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWOAUTHCREDENTIALCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWOAUTHCREDENTIALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * OAuth2 凭证物料配置
                */
                class AIGWOAuthCredentialConfig : public AbstractModel
                {
                public:
                    AIGWOAuthCredentialConfig();
                    ~AIGWOAuthCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>OAuth2 client_id</p>
                     * @return ClientId <p>OAuth2 client_id</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>OAuth2 client_id</p>
                     * @param _clientId <p>OAuth2 client_id</p>
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
                     * 获取<p>OAuth2 client_secret</p>
                     * @return ClientSecret <p>OAuth2 client_secret</p>
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置<p>OAuth2 client_secret</p>
                     * @param _clientSecret <p>OAuth2 client_secret</p>
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
                     * <p>OAuth2 client_id</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>OAuth2 client_secret</p>
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWOAUTHCREDENTIALCONFIG_H_
