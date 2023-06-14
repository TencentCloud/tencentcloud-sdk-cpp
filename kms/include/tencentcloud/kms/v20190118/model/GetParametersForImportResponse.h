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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_

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
                * GetParametersForImport返回参数结构体
                */
                class GetParametersForImportResponse : public AbstractModel
                {
                public:
                    GetParametersForImportResponse();
                    ~GetParametersForImportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CMK的唯一标识，用于指定目标导入密钥材料的CMK。
                     * @return KeyId CMK的唯一标识，用于指定目标导入密钥材料的CMK。
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
                     * 获取导入密钥材料需要的token，用于作为 ImportKeyMaterial 的参数。
                     * @return ImportToken 导入密钥材料需要的token，用于作为 ImportKeyMaterial 的参数。
                     * 
                     */
                    std::string GetImportToken() const;

                    /**
                     * 判断参数 ImportToken 是否已赋值
                     * @return ImportToken 是否已赋值
                     * 
                     */
                    bool ImportTokenHasBeenSet() const;

                    /**
                     * 获取用于加密密钥材料的RSA公钥，base64编码。使用PublicKey base64解码后的公钥将导入密钥进行加密后作为 ImportKeyMaterial 的参数。
                     * @return PublicKey 用于加密密钥材料的RSA公钥，base64编码。使用PublicKey base64解码后的公钥将导入密钥进行加密后作为 ImportKeyMaterial 的参数。
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
                     * 获取该导出token和公钥的有效期，超过该时间后无法导入，需要重新调用GetParametersForImport获取。
                     * @return ParametersValidTo 该导出token和公钥的有效期，超过该时间后无法导入，需要重新调用GetParametersForImport获取。
                     * 
                     */
                    uint64_t GetParametersValidTo() const;

                    /**
                     * 判断参数 ParametersValidTo 是否已赋值
                     * @return ParametersValidTo 是否已赋值
                     * 
                     */
                    bool ParametersValidToHasBeenSet() const;

                private:

                    /**
                     * CMK的唯一标识，用于指定目标导入密钥材料的CMK。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 导入密钥材料需要的token，用于作为 ImportKeyMaterial 的参数。
                     */
                    std::string m_importToken;
                    bool m_importTokenHasBeenSet;

                    /**
                     * 用于加密密钥材料的RSA公钥，base64编码。使用PublicKey base64解码后的公钥将导入密钥进行加密后作为 ImportKeyMaterial 的参数。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 该导出token和公钥的有效期，超过该时间后无法导入，需要重新调用GetParametersForImport获取。
                     */
                    uint64_t m_parametersValidTo;
                    bool m_parametersValidToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETPARAMETERSFORIMPORTRESPONSE_H_
