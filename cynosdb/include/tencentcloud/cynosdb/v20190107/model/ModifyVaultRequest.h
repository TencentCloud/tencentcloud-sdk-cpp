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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_

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
                * ModifyVault请求参数结构体
                */
                class ModifyVaultRequest : public AbstractModel
                {
                public:
                    ModifyVaultRequest();
                    ~ModifyVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保险箱ID
                     * @return VaultId 保险箱ID
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置保险箱ID
                     * @param _vaultId 保险箱ID
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取保险箱名称，最大255字符
                     * @return VaultName 保险箱名称，最大255字符
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置保险箱名称，最大255字符
                     * @param _vaultName 保险箱名称，最大255字符
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
                     * 获取保险箱描述，最大1024字符
                     * @return VaultDescribe 保险箱描述，最大1024字符
                     * 
                     */
                    std::string GetVaultDescribe() const;

                    /**
                     * 设置保险箱描述，最大1024字符
                     * @param _vaultDescribe 保险箱描述，最大1024字符
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
                     * 获取备份保留时长（秒），范围: (0, 632448000]
                     * @return BackupSaveSeconds 备份保留时长（秒），范围: (0, 632448000]
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置备份保留时长（秒），范围: (0, 632448000]
                     * @param _backupSaveSeconds 备份保留时长（秒），范围: (0, 632448000]
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
                     * 获取加密密钥ID，最大36字符
                     * @return KeyId 加密密钥ID，最大36字符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置加密密钥ID，最大36字符
                     * @param _keyId 加密密钥ID，最大36字符
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
                     * 获取密钥类型，可选值: cloud、custom
                     * @return KeyType 密钥类型，可选值: cloud、custom
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 设置密钥类型，可选值: cloud、custom
                     * @param _keyType 密钥类型，可选值: cloud、custom
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
                     * 获取密钥所在地域，最大32字符
                     * @return KeyRegion 密钥所在地域，最大32字符
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置密钥所在地域，最大32字符
                     * @param _keyRegion 密钥所在地域，最大32字符
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
                     * 获取是否锁定保险箱
                     * @return IsLock 是否锁定保险箱
                     * 
                     */
                    bool GetIsLock() const;

                    /**
                     * 设置是否锁定保险箱
                     * @param _isLock 是否锁定保险箱
                     * 
                     */
                    void SetIsLock(const bool& _isLock);

                    /**
                     * 判断参数 IsLock 是否已赋值
                     * @return IsLock 是否已赋值
                     * 
                     */
                    bool IsLockHasBeenSet() const;

                    /**
                     * 获取锁定到期时间，格式: 2006-01-02 15:04:05，锁定时间距当前最多15天
                     * @return LockedTime 锁定到期时间，格式: 2006-01-02 15:04:05，锁定时间距当前最多15天
                     * 
                     */
                    std::string GetLockedTime() const;

                    /**
                     * 设置锁定到期时间，格式: 2006-01-02 15:04:05，锁定时间距当前最多15天
                     * @param _lockedTime 锁定到期时间，格式: 2006-01-02 15:04:05，锁定时间距当前最多15天
                     * 
                     */
                    void SetLockedTime(const std::string& _lockedTime);

                    /**
                     * 判断参数 LockedTime 是否已赋值
                     * @return LockedTime 是否已赋值
                     * 
                     */
                    bool LockedTimeHasBeenSet() const;

                    /**
                     * 获取是否加密
                     * @return IsEncryption 是否加密
                     * 
                     */
                    bool GetIsEncryption() const;

                    /**
                     * 设置是否加密
                     * @param _isEncryption 是否加密
                     * 
                     */
                    void SetIsEncryption(const bool& _isEncryption);

                    /**
                     * 判断参数 IsEncryption 是否已赋值
                     * @return IsEncryption 是否已赋值
                     * 
                     */
                    bool IsEncryptionHasBeenSet() const;

                private:

                    /**
                     * 保险箱ID
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 保险箱名称，最大255字符
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 保险箱描述，最大1024字符
                     */
                    std::string m_vaultDescribe;
                    bool m_vaultDescribeHasBeenSet;

                    /**
                     * 备份保留时长（秒），范围: (0, 632448000]
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                    /**
                     * 加密密钥ID，最大36字符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 密钥类型，可选值: cloud、custom
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 密钥所在地域，最大32字符
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * 是否锁定保险箱
                     */
                    bool m_isLock;
                    bool m_isLockHasBeenSet;

                    /**
                     * 锁定到期时间，格式: 2006-01-02 15:04:05，锁定时间距当前最多15天
                     */
                    std::string m_lockedTime;
                    bool m_lockedTimeHasBeenSet;

                    /**
                     * 是否加密
                     */
                    bool m_isEncryption;
                    bool m_isEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVAULTREQUEST_H_
