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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_

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
                * GenerateDataKey请求参数结构体
                */
                class GenerateDataKeyRequest : public AbstractModel
                {
                public:
                    GenerateDataKeyRequest();
                    ~GenerateDataKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK全局唯一标识符
                     * @return KeyId CMK全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK全局唯一标识符
                     * @param _keyId CMK全局唯一标识符
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
                     * 获取指定生成Datakey的加密算法以及Datakey大小，AES_128或者AES_256。KeySpec 和 NumberOfBytes 必须指定一个
                     * @return KeySpec 指定生成Datakey的加密算法以及Datakey大小，AES_128或者AES_256。KeySpec 和 NumberOfBytes 必须指定一个
                     * 
                     */
                    std::string GetKeySpec() const;

                    /**
                     * 设置指定生成Datakey的加密算法以及Datakey大小，AES_128或者AES_256。KeySpec 和 NumberOfBytes 必须指定一个
                     * @param _keySpec 指定生成Datakey的加密算法以及Datakey大小，AES_128或者AES_256。KeySpec 和 NumberOfBytes 必须指定一个
                     * 
                     */
                    void SetKeySpec(const std::string& _keySpec);

                    /**
                     * 判断参数 KeySpec 是否已赋值
                     * @return KeySpec 是否已赋值
                     * 
                     */
                    bool KeySpecHasBeenSet() const;

                    /**
                     * 获取生成的DataKey的长度，同时指定NumberOfBytes和KeySpec时，以NumberOfBytes为准。最小值为1， 最大值为1024。KeySpec 和 NumberOfBytes 必须指定一个
                     * @return NumberOfBytes 生成的DataKey的长度，同时指定NumberOfBytes和KeySpec时，以NumberOfBytes为准。最小值为1， 最大值为1024。KeySpec 和 NumberOfBytes 必须指定一个
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置生成的DataKey的长度，同时指定NumberOfBytes和KeySpec时，以NumberOfBytes为准。最小值为1， 最大值为1024。KeySpec 和 NumberOfBytes 必须指定一个
                     * @param _numberOfBytes 生成的DataKey的长度，同时指定NumberOfBytes和KeySpec时，以NumberOfBytes为准。最小值为1， 最大值为1024。KeySpec 和 NumberOfBytes 必须指定一个
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

                    /**
                     * 获取key/value对的json字符串，如果使用该字段，则返回的DataKey在解密时需要填入相同的字符串
                     * @return EncryptionContext key/value对的json字符串，如果使用该字段，则返回的DataKey在解密时需要填入相同的字符串
                     * 
                     */
                    std::string GetEncryptionContext() const;

                    /**
                     * 设置key/value对的json字符串，如果使用该字段，则返回的DataKey在解密时需要填入相同的字符串
                     * @param _encryptionContext key/value对的json字符串，如果使用该字段，则返回的DataKey在解密时需要填入相同的字符串
                     * 
                     */
                    void SetEncryptionContext(const std::string& _encryptionContext);

                    /**
                     * 判断参数 EncryptionContext 是否已赋值
                     * @return EncryptionContext 是否已赋值
                     * 
                     */
                    bool EncryptionContextHasBeenSet() const;

                    /**
                     * 获取PEM 格式公钥字符串，支持 RSA2048 和 SM2 公钥，用于对返回数据中的 Plaintext 值进行加密。若为空，则不对 Plaintext 值加密。
                     * @return EncryptionPublicKey PEM 格式公钥字符串，支持 RSA2048 和 SM2 公钥，用于对返回数据中的 Plaintext 值进行加密。若为空，则不对 Plaintext 值加密。
                     * 
                     */
                    std::string GetEncryptionPublicKey() const;

                    /**
                     * 设置PEM 格式公钥字符串，支持 RSA2048 和 SM2 公钥，用于对返回数据中的 Plaintext 值进行加密。若为空，则不对 Plaintext 值加密。
                     * @param _encryptionPublicKey PEM 格式公钥字符串，支持 RSA2048 和 SM2 公钥，用于对返回数据中的 Plaintext 值进行加密。若为空，则不对 Plaintext 值加密。
                     * 
                     */
                    void SetEncryptionPublicKey(const std::string& _encryptionPublicKey);

                    /**
                     * 判断参数 EncryptionPublicKey 是否已赋值
                     * @return EncryptionPublicKey 是否已赋值
                     * 
                     */
                    bool EncryptionPublicKeyHasBeenSet() const;

                    /**
                     * 获取非对称加密算法，配合 EncryptionPublicKey 对返回数据进行加密。目前支持：SM2（以 C1C3C2 格式返回密文），SM2_C1C3C2_ASN1 （以 C1C3C2 ASN1 格式返回密文），RSAES_PKCS1_V1_5，RSAES_OAEP_SHA_1，RSAES_OAEP_SHA_256。若为空，则默认为 SM2。
                     * @return EncryptionAlgorithm 非对称加密算法，配合 EncryptionPublicKey 对返回数据进行加密。目前支持：SM2（以 C1C3C2 格式返回密文），SM2_C1C3C2_ASN1 （以 C1C3C2 ASN1 格式返回密文），RSAES_PKCS1_V1_5，RSAES_OAEP_SHA_1，RSAES_OAEP_SHA_256。若为空，则默认为 SM2。
                     * 
                     */
                    std::string GetEncryptionAlgorithm() const;

                    /**
                     * 设置非对称加密算法，配合 EncryptionPublicKey 对返回数据进行加密。目前支持：SM2（以 C1C3C2 格式返回密文），SM2_C1C3C2_ASN1 （以 C1C3C2 ASN1 格式返回密文），RSAES_PKCS1_V1_5，RSAES_OAEP_SHA_1，RSAES_OAEP_SHA_256。若为空，则默认为 SM2。
                     * @param _encryptionAlgorithm 非对称加密算法，配合 EncryptionPublicKey 对返回数据进行加密。目前支持：SM2（以 C1C3C2 格式返回密文），SM2_C1C3C2_ASN1 （以 C1C3C2 ASN1 格式返回密文），RSAES_PKCS1_V1_5，RSAES_OAEP_SHA_1，RSAES_OAEP_SHA_256。若为空，则默认为 SM2。
                     * 
                     */
                    void SetEncryptionAlgorithm(const std::string& _encryptionAlgorithm);

                    /**
                     * 判断参数 EncryptionAlgorithm 是否已赋值
                     * @return EncryptionAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptionAlgorithmHasBeenSet() const;

                private:

                    /**
                     * CMK全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 指定生成Datakey的加密算法以及Datakey大小，AES_128或者AES_256。KeySpec 和 NumberOfBytes 必须指定一个
                     */
                    std::string m_keySpec;
                    bool m_keySpecHasBeenSet;

                    /**
                     * 生成的DataKey的长度，同时指定NumberOfBytes和KeySpec时，以NumberOfBytes为准。最小值为1， 最大值为1024。KeySpec 和 NumberOfBytes 必须指定一个
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                    /**
                     * key/value对的json字符串，如果使用该字段，则返回的DataKey在解密时需要填入相同的字符串
                     */
                    std::string m_encryptionContext;
                    bool m_encryptionContextHasBeenSet;

                    /**
                     * PEM 格式公钥字符串，支持 RSA2048 和 SM2 公钥，用于对返回数据中的 Plaintext 值进行加密。若为空，则不对 Plaintext 值加密。
                     */
                    std::string m_encryptionPublicKey;
                    bool m_encryptionPublicKeyHasBeenSet;

                    /**
                     * 非对称加密算法，配合 EncryptionPublicKey 对返回数据进行加密。目前支持：SM2（以 C1C3C2 格式返回密文），SM2_C1C3C2_ASN1 （以 C1C3C2 ASN1 格式返回密文），RSAES_PKCS1_V1_5，RSAES_OAEP_SHA_1，RSAES_OAEP_SHA_256。若为空，则默认为 SM2。
                     */
                    std::string m_encryptionAlgorithm;
                    bool m_encryptionAlgorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYREQUEST_H_
