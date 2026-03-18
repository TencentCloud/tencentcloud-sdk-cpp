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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateVault请求参数结构体
                */
                class CreateVaultRequest : public AbstractModel
                {
                public:
                    CreateVaultRequest();
                    ~CreateVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保险箱名称，长度必须大于0
                     * @return VaultName 保险箱名称，长度必须大于0
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置保险箱名称，长度必须大于0
                     * @param _vaultName 保险箱名称，长度必须大于0
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
                     * 获取备份保留时长（秒），必须大于0
                     * @return BackupSaveSeconds 备份保留时长（秒），必须大于0
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置备份保留时长（秒），必须大于0
                     * @param _backupSaveSeconds 备份保留时长（秒），必须大于0
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                    /**
                     * 获取保险箱描述
                     * @return VaultDescribe 保险箱描述
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置保险箱描述
                     * @param _vaultDescribe 保险箱描述
                     * 
                     */
                    void SetVaultDescribe(const std::string& _vaultDescribe);

                    /**
                     * 判断参数 VaultDescribe 是否已赋值
                     * @return VaultDescribe 是否已赋值
                     * 
                     */
                    bool VaultDescribeHasBeenSet() const;

                    /**
                     * 获取KMS密钥ID，长度0-36字符
                     * @return KeyId KMS密钥ID，长度0-36字符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置KMS密钥ID，长度0-36字符
                     * @param _keyId KMS密钥ID，长度0-36字符
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
                     * 获取密钥类型，可选值：cloud（云托管密钥）、custom（自定义密钥）
                     * @return KeyType 密钥类型，可选值：cloud（云托管密钥）、custom（自定义密钥）
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置密钥类型，可选值：cloud（云托管密钥）、custom（自定义密钥）
                     * @param _keyType 密钥类型，可选值：cloud（云托管密钥）、custom（自定义密钥）
                     * 
                     */
                    void SetKeyType(const std::string& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取密钥所在地域，长度0-32字符
                     * @return KeyRegion 密钥所在地域，长度0-32字符
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置密钥所在地域，长度0-32字符
                     * @param _keyRegion 密钥所在地域，长度0-32字符
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取锁定时间，格式：YYYY-MM-DD HH:mm:ss
                     * @return LockedTime 锁定时间，格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置锁定时间，格式：YYYY-MM-DD HH:mm:ss
                     * @param _lockedTime 锁定时间，格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                private:

                    /**
                     * 保险箱名称，长度必须大于0
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 备份保留时长（秒），必须大于0
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * 保险箱描述
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * KMS密钥ID，长度0-36字符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥类型，可选值：cloud（云托管密钥）、custom（自定义密钥）
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 密钥所在地域，长度0-32字符
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * 锁定时间，格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEVAULTREQUEST_H_
