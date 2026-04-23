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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_OAUTHCONFIG_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_OAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Oauth2鉴权
                */
                class OauthConfig : public AbstractModel
                {
                public:
                    OauthConfig();
                    ~OauthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TokenURL 
                     * 
                     */
                    std::string GetTokenURL() const;

                    /**
                     * 设置
                     * @param _tokenURL 
                     * 
                     */
                    void SetTokenURL(const std::string& _tokenURL);

                    /**
                     * 判断参数 TokenURL 是否已赋值
                     * @return TokenURL 是否已赋值
                     * 
                     */
                    bool TokenURLHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClientId 
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置
                     * @param _clientId 
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
                     * 获取
                     * @return ClientSecret 
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 设置
                     * @param _clientSecret 
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
                     * 
                     */
                    std::string m_tokenURL;
                    bool m_tokenURLHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_OAUTHCONFIG_H_
