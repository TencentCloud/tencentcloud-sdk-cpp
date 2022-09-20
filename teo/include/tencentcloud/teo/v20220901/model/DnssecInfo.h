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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DNSSECINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DNSSECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DNSSEC 相关信息
                */
                class DnssecInfo : public AbstractModel
                {
                public:
                    DnssecInfo();
                    ~DnssecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标志。
                     * @return Flags 标志。
                     */
                    int64_t GetFlags() const;

                    /**
                     * 设置标志。
                     * @param Flags 标志。
                     */
                    void SetFlags(const int64_t& _flags);

                    /**
                     * 判断参数 Flags 是否已赋值
                     * @return Flags 是否已赋值
                     */
                    bool FlagsHasBeenSet() const;

                    /**
                     * 获取加密算法。
                     * @return Algorithm 加密算法。
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置加密算法。
                     * @param Algorithm 加密算法。
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取加密类型。
                     * @return KeyType 加密类型。
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置加密类型。
                     * @param KeyType 加密类型。
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取摘要类型。
                     * @return DigestType 摘要类型。
                     */
                    std::string GetDigestType() const;

                    /**
                     * 设置摘要类型。
                     * @param DigestType 摘要类型。
                     */
                    void SetDigestType(const std::string& _digestType);

                    /**
                     * 判断参数 DigestType 是否已赋值
                     * @return DigestType 是否已赋值
                     */
                    bool DigestTypeHasBeenSet() const;

                    /**
                     * 获取摘要算法。
                     * @return DigestAlgorithm 摘要算法。
                     */
                    std::string GetDigestAlgorithm() const;

                    /**
                     * 设置摘要算法。
                     * @param DigestAlgorithm 摘要算法。
                     */
                    void SetDigestAlgorithm(const std::string& _digestAlgorithm);

                    /**
                     * 判断参数 DigestAlgorithm 是否已赋值
                     * @return DigestAlgorithm 是否已赋值
                     */
                    bool DigestAlgorithmHasBeenSet() const;

                    /**
                     * 获取摘要信息。
                     * @return Digest 摘要信息。
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置摘要信息。
                     * @param Digest 摘要信息。
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取DS 记录值。
                     * @return DS DS 记录值。
                     */
                    std::string GetDS() const;

                    /**
                     * 设置DS 记录值。
                     * @param DS DS 记录值。
                     */
                    void SetDS(const std::string& _dS);

                    /**
                     * 判断参数 DS 是否已赋值
                     * @return DS 是否已赋值
                     */
                    bool DSHasBeenSet() const;

                    /**
                     * 获取密钥标签。
                     * @return KeyTag 密钥标签。
                     */
                    int64_t GetKeyTag() const;

                    /**
                     * 设置密钥标签。
                     * @param KeyTag 密钥标签。
                     */
                    void SetKeyTag(const int64_t& _keyTag);

                    /**
                     * 判断参数 KeyTag 是否已赋值
                     * @return KeyTag 是否已赋值
                     */
                    bool KeyTagHasBeenSet() const;

                    /**
                     * 获取公钥。
                     * @return PublicKey 公钥。
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置公钥。
                     * @param PublicKey 公钥。
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * 标志。
                     */
                    int64_t m_flags;
                    bool m_flagsHasBeenSet;

                    /**
                     * 加密算法。
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 加密类型。
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 摘要类型。
                     */
                    std::string m_digestType;
                    bool m_digestTypeHasBeenSet;

                    /**
                     * 摘要算法。
                     */
                    std::string m_digestAlgorithm;
                    bool m_digestAlgorithmHasBeenSet;

                    /**
                     * 摘要信息。
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * DS 记录值。
                     */
                    std::string m_dS;
                    bool m_dSHasBeenSet;

                    /**
                     * 密钥标签。
                     */
                    int64_t m_keyTag;
                    bool m_keyTagHasBeenSet;

                    /**
                     * 公钥。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSSECINFO_H_
