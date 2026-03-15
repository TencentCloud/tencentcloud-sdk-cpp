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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 保险箱信息
                */
                class VaultInfo : public AbstractModel
                {
                public:
                    VaultInfo();
                    ~VaultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保险箱id
                     * @return VaultId 保险箱id
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置保险箱id
                     * @param _vaultId 保险箱id
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
                     * 获取保险箱name
                     * @return VaultName 保险箱name
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置保险箱name
                     * @param _vaultName 保险箱name
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
                     * 获取保险箱地域
                     * @return VaultRegion 保险箱地域
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置保险箱地域
                     * @param _vaultRegion 保险箱地域
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                    /**
                     * 获取保险箱状态
                     * @return VaultStatus 保险箱状态
                     * 
                     */
                    std::string GetVaultStatus() const;

                    /**
                     * 设置保险箱状态
                     * @param _vaultStatus 保险箱状态
                     * 
                     */
                    void SetVaultStatus(const std::string& _vaultStatus);

                    /**
                     * 判断参数 VaultStatus 是否已赋值
                     * @return VaultStatus 是否已赋值
                     * 
                     */
                    bool VaultStatusHasBeenSet() const;

                    /**
                     * 获取备份保留时间
                     * @return BackupSaveSeconds 备份保留时间
                     * 
                     */
                    int64_t GetBackupSaveSeconds() const;

                    /**
                     * 设置备份保留时间
                     * @param _backupSaveSeconds 备份保留时间
                     * 
                     */
                    void SetBackupSaveSeconds(const int64_t& _backupSaveSeconds);

                    /**
                     * 判断参数 BackupSaveSeconds 是否已赋值
                     * @return BackupSaveSeconds 是否已赋值
                     * 
                     */
                    bool BackupSaveSecondsHasBeenSet() const;

                private:

                    /**
                     * 保险箱id
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 保险箱name
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 保险箱地域
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                    /**
                     * 保险箱状态
                     */
                    std::string m_vaultStatus;
                    bool m_vaultStatusHasBeenSet;

                    /**
                     * 备份保留时间
                     */
                    int64_t m_backupSaveSeconds;
                    bool m_backupSaveSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_VAULTINFO_H_
