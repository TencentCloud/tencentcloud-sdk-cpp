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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_

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
                * EncryptByWhiteBox请求参数结构体
                */
                class EncryptByWhiteBoxRequest : public AbstractModel
                {
                public:
                    EncryptByWhiteBoxRequest();
                    ~EncryptByWhiteBoxRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白盒密钥的全局唯一标识符
                     * @return KeyId 白盒密钥的全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置白盒密钥的全局唯一标识符
                     * @param _keyId 白盒密钥的全局唯一标识符
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
                     * 获取待加密的文本， base64编码，文本的原始长度最大不超过4KB
                     * @return PlainText 待加密的文本， base64编码，文本的原始长度最大不超过4KB
                     * 
                     */
                    std::string GetPlainText() const;

                    /**
                     * 设置待加密的文本， base64编码，文本的原始长度最大不超过4KB
                     * @param _plainText 待加密的文本， base64编码，文本的原始长度最大不超过4KB
                     * 
                     */
                    void SetPlainText(const std::string& _plainText);

                    /**
                     * 判断参数 PlainText 是否已赋值
                     * @return PlainText 是否已赋值
                     * 
                     */
                    bool PlainTextHasBeenSet() const;

                    /**
                     * 获取初始化向量，大小为 16 Bytes，加密算法会使用到, base64编码；如果不传，则由后端服务随机生成。用户需要自行保存该值，作为解密的参数。
                     * @return InitializationVector 初始化向量，大小为 16 Bytes，加密算法会使用到, base64编码；如果不传，则由后端服务随机生成。用户需要自行保存该值，作为解密的参数。
                     * 
                     */
                    std::string GetInitializationVector() const;

                    /**
                     * 设置初始化向量，大小为 16 Bytes，加密算法会使用到, base64编码；如果不传，则由后端服务随机生成。用户需要自行保存该值，作为解密的参数。
                     * @param _initializationVector 初始化向量，大小为 16 Bytes，加密算法会使用到, base64编码；如果不传，则由后端服务随机生成。用户需要自行保存该值，作为解密的参数。
                     * 
                     */
                    void SetInitializationVector(const std::string& _initializationVector);

                    /**
                     * 判断参数 InitializationVector 是否已赋值
                     * @return InitializationVector 是否已赋值
                     * 
                     */
                    bool InitializationVectorHasBeenSet() const;

                private:

                    /**
                     * 白盒密钥的全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 待加密的文本， base64编码，文本的原始长度最大不超过4KB
                     */
                    std::string m_plainText;
                    bool m_plainTextHasBeenSet;

                    /**
                     * 初始化向量，大小为 16 Bytes，加密算法会使用到, base64编码；如果不传，则由后端服务随机生成。用户需要自行保存该值，作为解密的参数。
                     */
                    std::string m_initializationVector;
                    bool m_initializationVectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXREQUEST_H_
