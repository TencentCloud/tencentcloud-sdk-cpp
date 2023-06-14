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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_

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
                * PostQuantumCryptoSign请求参数结构体
                */
                class PostQuantumCryptoSignRequest : public AbstractModel
                {
                public:
                    PostQuantumCryptoSignRequest();
                    ~PostQuantumCryptoSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 编码的消息原文。消息原文的长度（Base64编码前的长度）不超过4096字节。
                     * @return Message Base64 编码的消息原文。消息原文的长度（Base64编码前的长度）不超过4096字节。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Base64 编码的消息原文。消息原文的长度（Base64编码前的长度）不超过4096字节。
                     * @param _message Base64 编码的消息原文。消息原文的长度（Base64编码前的长度）不超过4096字节。
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

                private:

                    /**
                     * Base64 编码的消息原文。消息原文的长度（Base64编码前的长度）不超过4096字节。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 密钥的唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOSIGNREQUEST_H_
