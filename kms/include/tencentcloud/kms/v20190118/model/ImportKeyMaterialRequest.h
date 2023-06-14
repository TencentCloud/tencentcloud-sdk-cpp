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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_

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
                * ImportKeyMaterial请求参数结构体
                */
                class ImportKeyMaterialRequest : public AbstractModel
                {
                public:
                    ImportKeyMaterialRequest();
                    ~ImportKeyMaterialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用GetParametersForImport 返回的PublicKey加密后的密钥材料base64编码。对于国密版本region的KMS，导入的密钥材料长度要求为 128 bit，FIPS版本region的KMS， 导入的密钥材料长度要求为 256 bit。
                     * @return EncryptedKeyMaterial 使用GetParametersForImport 返回的PublicKey加密后的密钥材料base64编码。对于国密版本region的KMS，导入的密钥材料长度要求为 128 bit，FIPS版本region的KMS， 导入的密钥材料长度要求为 256 bit。
                     * 
                     */
                    std::string GetEncryptedKeyMaterial() const;

                    /**
                     * 设置使用GetParametersForImport 返回的PublicKey加密后的密钥材料base64编码。对于国密版本region的KMS，导入的密钥材料长度要求为 128 bit，FIPS版本region的KMS， 导入的密钥材料长度要求为 256 bit。
                     * @param _encryptedKeyMaterial 使用GetParametersForImport 返回的PublicKey加密后的密钥材料base64编码。对于国密版本region的KMS，导入的密钥材料长度要求为 128 bit，FIPS版本region的KMS， 导入的密钥材料长度要求为 256 bit。
                     * 
                     */
                    void SetEncryptedKeyMaterial(const std::string& _encryptedKeyMaterial);

                    /**
                     * 判断参数 EncryptedKeyMaterial 是否已赋值
                     * @return EncryptedKeyMaterial 是否已赋值
                     * 
                     */
                    bool EncryptedKeyMaterialHasBeenSet() const;

                    /**
                     * 获取通过调用GetParametersForImport获得的导入令牌。
                     * @return ImportToken 通过调用GetParametersForImport获得的导入令牌。
                     * 
                     */
                    std::string GetImportToken() const;

                    /**
                     * 设置通过调用GetParametersForImport获得的导入令牌。
                     * @param _importToken 通过调用GetParametersForImport获得的导入令牌。
                     * 
                     */
                    void SetImportToken(const std::string& _importToken);

                    /**
                     * 判断参数 ImportToken 是否已赋值
                     * @return ImportToken 是否已赋值
                     * 
                     */
                    bool ImportTokenHasBeenSet() const;

                    /**
                     * 获取指定导入密钥材料的CMK，需要和GetParametersForImport 指定的CMK相同。
                     * @return KeyId 指定导入密钥材料的CMK，需要和GetParametersForImport 指定的CMK相同。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置指定导入密钥材料的CMK，需要和GetParametersForImport 指定的CMK相同。
                     * @param _keyId 指定导入密钥材料的CMK，需要和GetParametersForImport 指定的CMK相同。
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
                     * 获取密钥材料过期时间 unix 时间戳，不指定或者 0 表示密钥材料不会过期，若指定过期时间，需要大于当前时间点，最大支持 2147443200。
                     * @return ValidTo 密钥材料过期时间 unix 时间戳，不指定或者 0 表示密钥材料不会过期，若指定过期时间，需要大于当前时间点，最大支持 2147443200。
                     * 
                     */
                    uint64_t GetValidTo() const;

                    /**
                     * 设置密钥材料过期时间 unix 时间戳，不指定或者 0 表示密钥材料不会过期，若指定过期时间，需要大于当前时间点，最大支持 2147443200。
                     * @param _validTo 密钥材料过期时间 unix 时间戳，不指定或者 0 表示密钥材料不会过期，若指定过期时间，需要大于当前时间点，最大支持 2147443200。
                     * 
                     */
                    void SetValidTo(const uint64_t& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                private:

                    /**
                     * 使用GetParametersForImport 返回的PublicKey加密后的密钥材料base64编码。对于国密版本region的KMS，导入的密钥材料长度要求为 128 bit，FIPS版本region的KMS， 导入的密钥材料长度要求为 256 bit。
                     */
                    std::string m_encryptedKeyMaterial;
                    bool m_encryptedKeyMaterialHasBeenSet;

                    /**
                     * 通过调用GetParametersForImport获得的导入令牌。
                     */
                    std::string m_importToken;
                    bool m_importTokenHasBeenSet;

                    /**
                     * 指定导入密钥材料的CMK，需要和GetParametersForImport 指定的CMK相同。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥材料过期时间 unix 时间戳，不指定或者 0 表示密钥材料不会过期，若指定过期时间，需要大于当前时间点，最大支持 2147443200。
                     */
                    uint64_t m_validTo;
                    bool m_validToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_IMPORTKEYMATERIALREQUEST_H_
