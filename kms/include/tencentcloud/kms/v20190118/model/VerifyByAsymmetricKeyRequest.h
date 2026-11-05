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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_VERIFYBYASYMMETRICKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_VERIFYBYASYMMETRICKEYREQUEST_H_

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
                * VerifyByAsymmetricKey请求参数结构体
                */
                class VerifyByAsymmetricKeyRequest : public AbstractModel
                {
                public:
                    VerifyByAsymmetricKeyRequest();
                    ~VerifyByAsymmetricKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>密钥的唯一标识</p>
                     * @return KeyId <p>密钥的唯一标识</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>密钥的唯一标识</p>
                     * @param _keyId <p>密钥的唯一标识</p>
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
                     * 获取<p>签名值，通过调用KMS签名接口生成</p>
                     * @return SignatureValue <p>签名值，通过调用KMS签名接口生成</p>
                     * 
                     */
                    std::string GetSignatureValue() const;

                    /**
                     * 设置<p>签名值，通过调用KMS签名接口生成</p>
                     * @param _signatureValue <p>签名值，通过调用KMS签名接口生成</p>
                     * 
                     */
                    void SetSignatureValue(const std::string& _signatureValue);

                    /**
                     * 判断参数 SignatureValue 是否已赋值
                     * @return SignatureValue 是否已赋值
                     * 
                     */
                    bool SignatureValueHasBeenSet() const;

                    /**
                     * 获取<p>消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节</p>
                     * @return Message <p>消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节</p>
                     * @param _message <p>消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>签名算法，支持的算法：SM2DSA，ECC_P256_R1，ECDSA384_SHA384，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256，RSA_PSS_SHA_384，RSA_PKCS1_SHA_384，RSA_PSS_SHA_512，RSA_PKCS1_SHA_512 等。更多支持的算法可通过 ListAlgorithms 接口进行查询</p>
                     * @return Algorithm <p>签名算法，支持的算法：SM2DSA，ECC_P256_R1，ECDSA384_SHA384，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256，RSA_PSS_SHA_384，RSA_PKCS1_SHA_384，RSA_PSS_SHA_512，RSA_PKCS1_SHA_512 等。更多支持的算法可通过 ListAlgorithms 接口进行查询</p>
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置<p>签名算法，支持的算法：SM2DSA，ECC_P256_R1，ECDSA384_SHA384，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256，RSA_PSS_SHA_384，RSA_PKCS1_SHA_384，RSA_PSS_SHA_512，RSA_PKCS1_SHA_512 等。更多支持的算法可通过 ListAlgorithms 接口进行查询</p>
                     * @param _algorithm <p>签名算法，支持的算法：SM2DSA，ECC_P256_R1，ECDSA384_SHA384，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256，RSA_PSS_SHA_384，RSA_PKCS1_SHA_384，RSA_PSS_SHA_512，RSA_PKCS1_SHA_512 等。更多支持的算法可通过 ListAlgorithms 接口进行查询</p>
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
                     * 获取<p>消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。</p>
                     * @return MessageType <p>消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。</p>
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置<p>消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。</p>
                     * @param _messageType <p>消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。</p>
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                private:

                    /**
                     * <p>密钥的唯一标识</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>签名值，通过调用KMS签名接口生成</p>
                     */
                    std::string m_signatureValue;
                    bool m_signatureValueHasBeenSet;

                    /**
                     * <p>消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>签名算法，支持的算法：SM2DSA，ECC_P256_R1，ECDSA384_SHA384，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256，RSA_PSS_SHA_384，RSA_PKCS1_SHA_384，RSA_PSS_SHA_512，RSA_PKCS1_SHA_512 等。更多支持的算法可通过 ListAlgorithms 接口进行查询</p>
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * <p>消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。</p>
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_VERIFYBYASYMMETRICKEYREQUEST_H_
