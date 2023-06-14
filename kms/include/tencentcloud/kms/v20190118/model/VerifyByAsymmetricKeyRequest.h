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
                     * 获取密钥的唯一标识
                     * @return KeyId 密钥的唯一标识
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置密钥的唯一标识
                     * @param _keyId 密钥的唯一标识
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
                     * 获取签名值，通过调用KMS签名接口生成
                     * @return SignatureValue 签名值，通过调用KMS签名接口生成
                     * 
                     */
                    std::string GetSignatureValue() const;

                    /**
                     * 设置签名值，通过调用KMS签名接口生成
                     * @param _signatureValue 签名值，通过调用KMS签名接口生成
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
                     * 获取消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节
                     * @return Message 消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节
                     * @param _message 消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节
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
                     * 获取签名算法，支持的算法：SM2DSA，ECC_P256_R1，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256 等。更多支持的算法可通过 ListAlgorithms 接口进行查询。
                     * @return Algorithm 签名算法，支持的算法：SM2DSA，ECC_P256_R1，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256 等。更多支持的算法可通过 ListAlgorithms 接口进行查询。
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置签名算法，支持的算法：SM2DSA，ECC_P256_R1，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256 等。更多支持的算法可通过 ListAlgorithms 接口进行查询。
                     * @param _algorithm 签名算法，支持的算法：SM2DSA，ECC_P256_R1，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256 等。更多支持的算法可通过 ListAlgorithms 接口进行查询。
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
                     * 获取消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。
                     * @return MessageType 消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。
                     * @param _messageType 消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。
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
                     * 密钥的唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 签名值，通过调用KMS签名接口生成
                     */
                    std::string m_signatureValue;
                    bool m_signatureValueHasBeenSet;

                    /**
                     * 消息原文或消息摘要。如果提供的是消息原文，则消息原文的长度（Base64编码前的长度）不超过4096字节。如果提供的是消息摘要，则消息摘要长度（Base64编码前的长度）必须等于32字节
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 签名算法，支持的算法：SM2DSA，ECC_P256_R1，RSA_PSS_SHA_256，RSA_PKCS1_SHA_256 等。更多支持的算法可通过 ListAlgorithms 接口进行查询。
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * 消息类型：RAW，DIGEST，如果不传，默认为RAW，表示消息原文。
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_VERIFYBYASYMMETRICKEYREQUEST_H_
