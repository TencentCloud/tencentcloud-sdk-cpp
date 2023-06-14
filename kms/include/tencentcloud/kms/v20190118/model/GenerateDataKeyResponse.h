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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYRESPONSE_H_

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
                * GenerateDataKey返回参数结构体
                */
                class GenerateDataKeyResponse : public AbstractModel
                {
                public:
                    GenerateDataKeyResponse();
                    ~GenerateDataKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的全局唯一标识
                     * @return KeyId CMK的全局唯一标识
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
                     * 获取若调用时未提供 EncryptionPublicKey，该字段值为生成的数据密钥 DataKey 的 Base64 编码的明文，需进行 Base64 解码以获取 DataKey 明文。
若调用时提供了 EncryptionPublicKey，则该字段值为使用 EncryptionPublicKey 公钥进行非对称加密后的 Base64 编码的密文。需在 Base64 解码后，使用用户上传的公钥对应的私钥进行进一步解密，以获取 DataKey 明文。
                     * @return Plaintext 若调用时未提供 EncryptionPublicKey，该字段值为生成的数据密钥 DataKey 的 Base64 编码的明文，需进行 Base64 解码以获取 DataKey 明文。
若调用时提供了 EncryptionPublicKey，则该字段值为使用 EncryptionPublicKey 公钥进行非对称加密后的 Base64 编码的密文。需在 Base64 解码后，使用用户上传的公钥对应的私钥进行进一步解密，以获取 DataKey 明文。
                     * 
                     */
                    std::string GetPlaintext() const;

                    /**
                     * 判断参数 Plaintext 是否已赋值
                     * @return Plaintext 是否已赋值
                     * 
                     */
                    bool PlaintextHasBeenSet() const;

                    /**
                     * 获取数据密钥DataKey加密后的密文，用户需要自行保存该密文，KMS不托管用户的数据密钥。可以通过Decrypt接口从CiphertextBlob中获取数据密钥DataKey明文
                     * @return CiphertextBlob 数据密钥DataKey加密后的密文，用户需要自行保存该密文，KMS不托管用户的数据密钥。可以通过Decrypt接口从CiphertextBlob中获取数据密钥DataKey明文
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                private:

                    /**
                     * CMK的全局唯一标识
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 若调用时未提供 EncryptionPublicKey，该字段值为生成的数据密钥 DataKey 的 Base64 编码的明文，需进行 Base64 解码以获取 DataKey 明文。
若调用时提供了 EncryptionPublicKey，则该字段值为使用 EncryptionPublicKey 公钥进行非对称加密后的 Base64 编码的密文。需在 Base64 解码后，使用用户上传的公钥对应的私钥进行进一步解密，以获取 DataKey 明文。
                     */
                    std::string m_plaintext;
                    bool m_plaintextHasBeenSet;

                    /**
                     * 数据密钥DataKey加密后的密文，用户需要自行保存该密文，KMS不托管用户的数据密钥。可以通过Decrypt接口从CiphertextBlob中获取数据密钥DataKey明文
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GENERATEDATAKEYRESPONSE_H_
