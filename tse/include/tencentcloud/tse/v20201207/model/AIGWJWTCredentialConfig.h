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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWJWTCREDENTIALCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWJWTCREDENTIALCONFIG_H_

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
                * AI网关 JWT 凭证物料配置
                */
                class AIGWJWTCredentialConfig : public AbstractModel
                {
                public:
                    AIGWJWTCredentialConfig();
                    ~AIGWJWTCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>JWT 消费者标识，iss claim</p>
                     * @return Key <p>JWT 消费者标识，iss claim</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>JWT 消费者标识，iss claim</p>
                     * @param _key <p>JWT 消费者标识，iss claim</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>签名算法，取值：HS256 HS384 HS512 RS256 RS384 RS512 ES256 ES384 ES512</p>
                     * @return Algorithm <p>签名算法，取值：HS256 HS384 HS512 RS256 RS384 RS512 ES256 ES384 ES512</p>
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置<p>签名算法，取值：HS256 HS384 HS512 RS256 RS384 RS512 ES256 ES384 ES512</p>
                     * @param _algorithm <p>签名算法，取值：HS256 HS384 HS512 RS256 RS384 RS512 ES256 ES384 ES512</p>
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>HS 对称密钥，仅 Algorithm 为 HS256/HS384/HS512 时必填；RS/ES* 时留空</p>
                     * @return Secret <p>HS 对称密钥，仅 Algorithm 为 HS256/HS384/HS512 时必填；RS/ES* 时留空</p>
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置<p>HS 对称密钥，仅 Algorithm 为 HS256/HS384/HS512 时必填；RS/ES* 时留空</p>
                     * @param _secret <p>HS 对称密钥，仅 Algorithm 为 HS256/HS384/HS512 时必填；RS/ES* 时留空</p>
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取<p>RS/ES PEM 格式公钥，仅 Algorithm 为 RS256/RS384/RS512/ES256/ES384/ES512 时必填；HS* 时留空</p>
                     * @return RSAPublicKey <p>RS/ES PEM 格式公钥，仅 Algorithm 为 RS256/RS384/RS512/ES256/ES384/ES512 时必填；HS* 时留空</p>
                     * 
                     */
                    std::string GetRSAPublicKey() const;

                    /**
                     * 设置<p>RS/ES PEM 格式公钥，仅 Algorithm 为 RS256/RS384/RS512/ES256/ES384/ES512 时必填；HS* 时留空</p>
                     * @param _rSAPublicKey <p>RS/ES PEM 格式公钥，仅 Algorithm 为 RS256/RS384/RS512/ES256/ES384/ES512 时必填；HS* 时留空</p>
                     * 
                     */
                    void SetRSAPublicKey(const std::string& _rSAPublicKey);

                    /**
                     * 判断参数 RSAPublicKey 是否已赋值
                     * @return RSAPublicKey 是否已赋值
                     * 
                     */
                    bool RSAPublicKeyHasBeenSet() const;

                private:

                    /**
                     * <p>JWT 消费者标识，iss claim</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>签名算法，取值：HS256 HS384 HS512 RS256 RS384 RS512 ES256 ES384 ES512</p>
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * <p>HS 对称密钥，仅 Algorithm 为 HS256/HS384/HS512 时必填；RS/ES* 时留空</p>
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * <p>RS/ES PEM 格式公钥，仅 Algorithm 为 RS256/RS384/RS512/ES256/ES384/ES512 时必填；HS* 时留空</p>
                     */
                    std::string m_rSAPublicKey;
                    bool m_rSAPublicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWJWTCREDENTIALCONFIG_H_
