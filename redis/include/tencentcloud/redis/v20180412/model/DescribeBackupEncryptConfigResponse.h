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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupEncryptConfig返回参数结构体
                */
                class DescribeBackupEncryptConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupEncryptConfigResponse();
                    ~DescribeBackupEncryptConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份是否加密</p><p>枚举值：</p><ul><li>true： 加密</li><li>false： 不加密</li></ul>
                     * @return BackupEncrypt <p>备份是否加密</p><p>枚举值：</p><ul><li>true： 加密</li><li>false： 不加密</li></ul>
                     * 
                     */
                    bool GetBackupEncrypt() const;

                    /**
                     * 判断参数 BackupEncrypt 是否已赋值
                     * @return BackupEncrypt 是否已赋值
                     * 
                     */
                    bool BackupEncryptHasBeenSet() const;

                    /**
                     * 获取<p>加密密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云托管（默认）</li><li>1： 用户自定义 KMS 密钥</li></ul>
                     * @return EncryptKeyType <p>加密密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云托管（默认）</li><li>1： 用户自定义 KMS 密钥</li></ul>
                     * 
                     */
                    int64_t GetEncryptKeyType() const;

                    /**
                     * 判断参数 EncryptKeyType 是否已赋值
                     * @return EncryptKeyType 是否已赋值
                     * 
                     */
                    bool EncryptKeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>KMS的密钥ID。</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * @return KmsKeyId <p>KMS的密钥ID。</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>KMS地域信息。</p><p>参数格式：ap-xxxx</p>
                     * @return KmsRegion <p>KMS地域信息。</p><p>参数格式：ap-xxxx</p>
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                private:

                    /**
                     * <p>备份是否加密</p><p>枚举值：</p><ul><li>true： 加密</li><li>false： 不加密</li></ul>
                     */
                    bool m_backupEncrypt;
                    bool m_backupEncryptHasBeenSet;

                    /**
                     * <p>加密密钥类型。</p><p>枚举值：</p><ul><li>0： 腾讯云托管（默认）</li><li>1： 用户自定义 KMS 密钥</li></ul>
                     */
                    int64_t m_encryptKeyType;
                    bool m_encryptKeyTypeHasBeenSet;

                    /**
                     * <p>KMS的密钥ID。</p><p>参数格式：xxxxxxx-xxxx-xxxx-xxxx-xxxxxxx</p>
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                    /**
                     * <p>KMS地域信息。</p><p>参数格式：ap-xxxx</p>
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPENCRYPTCONFIGRESPONSE_H_
