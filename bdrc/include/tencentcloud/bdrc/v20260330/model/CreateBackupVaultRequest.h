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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPVAULTREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPVAULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateBackupVault请求参数结构体
                */
                class CreateBackupVaultRequest : public AbstractModel
                {
                public:
                    CreateBackupVaultRequest();
                    ~CreateBackupVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份库名称
                     * @return VaultName 备份库名称
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置备份库名称
                     * @param _vaultName 备份库名称
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取备份库描述
                     * @return Description 备份库描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备份库描述
                     * @param _description 备份库描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取加密方式: NONE/SSE-COS/SSE-KMS
                     * @return EncryptType 加密方式: NONE/SSE-COS/SSE-KMS
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置加密方式: NONE/SSE-COS/SSE-KMS
                     * @param _encryptType 加密方式: NONE/SSE-COS/SSE-KMS
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取KMS密钥ID（SSE-KMS时使用）
                     * @return KmsKeyId KMS密钥ID（SSE-KMS时使用）
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置KMS密钥ID（SSE-KMS时使用）
                     * @param _kmsKeyId KMS密钥ID（SSE-KMS时使用）
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * 备份库名称
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 备份库描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 加密方式: NONE/SSE-COS/SSE-KMS
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * KMS密钥ID（SSE-KMS时使用）
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATEBACKUPVAULTREQUEST_H_
