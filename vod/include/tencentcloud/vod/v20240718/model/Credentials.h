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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 临时访问凭证。
                */
                class Credentials : public AbstractModel
                {
                public:
                    Credentials();
                    ~Credentials() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问凭证 ID。
                     * @return AccessKeyId 访问凭证 ID。
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置访问凭证 ID。
                     * @param _accessKeyId 访问凭证 ID。
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取访问凭证 Key。
                     * @return SecretAccessKey 访问凭证 Key。
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置访问凭证 Key。
                     * @param _secretAccessKey 访问凭证 Key。
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取访问凭证 Token，长度和绑定的策略有关，最长不超过 4096 字节。
                     * @return SessionToken 访问凭证 Token，长度和绑定的策略有关，最长不超过 4096 字节。
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置访问凭证 Token，长度和绑定的策略有关，最长不超过 4096 字节。
                     * @param _sessionToken 访问凭证 Token，长度和绑定的策略有关，最长不超过 4096 字节。
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取访问凭证的过期时间。
                     * @return Expiration 访问凭证的过期时间。
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 设置访问凭证的过期时间。
                     * @param _expiration 访问凭证的过期时间。
                     * 
                     */
                    void SetExpiration(const std::string& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 访问凭证 ID。
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 访问凭证 Key。
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * 访问凭证 Token，长度和绑定的策略有关，最长不超过 4096 字节。
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 访问凭证的过期时间。
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREDENTIALS_H_
