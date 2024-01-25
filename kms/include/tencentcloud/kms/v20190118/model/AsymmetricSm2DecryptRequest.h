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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * AsymmetricSm2Decrypt请求参数结构体
                */
                class AsymmetricSm2DecryptRequest : public AbstractModel
                {
                public:
                    AsymmetricSm2DecryptRequest();
                    ~AsymmetricSm2DecryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的唯一标识
                     * @return KeyId CMK的唯一标识
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK的唯一标识
                     * @param _keyId CMK的唯一标识
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取使用PublicKey加密的密文，Base64编码，原始密文格式需要为C1C3C2_ASN1。原始密文长度不能超过256字节。
                     * @return Ciphertext 使用PublicKey加密的密文，Base64编码，原始密文格式需要为C1C3C2_ASN1。原始密文长度不能超过256字节。
                     * 
                     */
                    std::string GetCiphertext() const;

                    /**
                     * 设置使用PublicKey加密的密文，Base64编码，原始密文格式需要为C1C3C2_ASN1。原始密文长度不能超过256字节。
                     * @param _ciphertext 使用PublicKey加密的密文，Base64编码，原始密文格式需要为C1C3C2_ASN1。原始密文长度不能超过256字节。
                     * 
                     */
                    void SetCiphertext(const std::string& _ciphertext);

                    /**
                     * 判断参数 Ciphertext 是否已赋值
                     * @return Ciphertext 是否已赋值
                     * 
                     */
                    bool CiphertextHasBeenSet() const;

                private:

                    /**
                     * CMK的唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 使用PublicKey加密的密文，Base64编码，原始密文格式需要为C1C3C2_ASN1。原始密文长度不能超过256字节。
                     */
                    std::string m_ciphertext;
                    bool m_ciphertextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ASYMMETRICSM2DECRYPTREQUEST_H_
