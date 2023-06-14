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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_

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
                * GetPublicKey返回参数结构体
                */
                class GetPublicKeyResponse : public AbstractModel
                {
                public:
                    GetPublicKeyResponse();
                    ~GetPublicKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的唯一标识。
                     * @return KeyId CMK的唯一标识。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取经过base64编码的公钥内容。
                     * @return PublicKey 经过base64编码的公钥内容。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取PEM格式的公钥内容。
                     * @return PublicKeyPem PEM格式的公钥内容。
                     * 
                     */
                    std::string GetPublicKeyPem() const;

                    /**
                     * 判断参数 PublicKeyPem 是否已赋值
                     * @return PublicKeyPem 是否已赋值
                     * 
                     */
                    bool PublicKeyPemHasBeenSet() const;

                private:

                    /**
                     * CMK的唯一标识。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 经过base64编码的公钥内容。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * PEM格式的公钥内容。
                     */
                    std::string m_publicKeyPem;
                    bool m_publicKeyPemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPUBLICKEYRESPONSE_H_
