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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOENCRYPTREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOENCRYPTREQUEST_H_

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
                * PostQuantumCryptoEncrypt请求参数结构体
                */
                class PostQuantumCryptoEncryptRequest : public AbstractModel
                {
                public:
                    PostQuantumCryptoEncryptRequest();
                    ~PostQuantumCryptoEncryptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用CreateKey生成的CMK全局唯一标识符
                     * @return KeyId 调用CreateKey生成的CMK全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置调用CreateKey生成的CMK全局唯一标识符
                     * @param _keyId 调用CreateKey生成的CMK全局唯一标识符
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
                     * 获取被加密的明文数据，该字段必须使用base64编码，原文最大长度支持4K
                     * @return PlainText 被加密的明文数据，该字段必须使用base64编码，原文最大长度支持4K
                     * 
                     */
                    std::string GetPlainText() const;

                    /**
                     * 设置被加密的明文数据，该字段必须使用base64编码，原文最大长度支持4K
                     * @param _plainText 被加密的明文数据，该字段必须使用base64编码，原文最大长度支持4K
                     * 
                     */
                    void SetPlainText(const std::string& _plainText);

                    /**
                     * 判断参数 PlainText 是否已赋值
                     * @return PlainText 是否已赋值
                     * 
                     */
                    bool PlainTextHasBeenSet() const;

                private:

                    /**
                     * 调用CreateKey生成的CMK全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 被加密的明文数据，该字段必须使用base64编码，原文最大长度支持4K
                     */
                    std::string m_plainText;
                    bool m_plainTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_POSTQUANTUMCRYPTOENCRYPTREQUEST_H_
