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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_

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
                * EncryptByWhiteBox返回参数结构体
                */
                class EncryptByWhiteBoxResponse : public AbstractModel
                {
                public:
                    EncryptByWhiteBoxResponse();
                    ~EncryptByWhiteBoxResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取初始化向量，加密算法会使用到, base64编码。如果由调用方在入参中传入，则原样返回。如果调用方没有传入，则后端服务随机生成，并返回
                     * @return InitializationVector 初始化向量，加密算法会使用到, base64编码。如果由调用方在入参中传入，则原样返回。如果调用方没有传入，则后端服务随机生成，并返回
                     * 
                     */
                    std::string GetInitializationVector() const;

                    /**
                     * 判断参数 InitializationVector 是否已赋值
                     * @return InitializationVector 是否已赋值
                     * 
                     */
                    bool InitializationVectorHasBeenSet() const;

                    /**
                     * 获取加密后的密文，base64编码
                     * @return CipherText 加密后的密文，base64编码
                     * 
                     */
                    std::string GetCipherText() const;

                    /**
                     * 判断参数 CipherText 是否已赋值
                     * @return CipherText 是否已赋值
                     * 
                     */
                    bool CipherTextHasBeenSet() const;

                private:

                    /**
                     * 初始化向量，加密算法会使用到, base64编码。如果由调用方在入参中传入，则原样返回。如果调用方没有传入，则后端服务随机生成，并返回
                     */
                    std::string m_initializationVector;
                    bool m_initializationVectorHasBeenSet;

                    /**
                     * 加密后的密文，base64编码
                     */
                    std::string m_cipherText;
                    bool m_cipherTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ENCRYPTBYWHITEBOXRESPONSE_H_
