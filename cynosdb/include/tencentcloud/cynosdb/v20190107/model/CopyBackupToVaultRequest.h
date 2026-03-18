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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYBACKUPTOVAULTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYBACKUPTOVAULTREQUEST_H_

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
                * CopyBackupToVault请求参数结构体
                */
                class CopyBackupToVaultRequest : public AbstractModel
                {
                public:
                    CopyBackupToVaultRequest();
                    ~CopyBackupToVaultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标保险箱ID，备份文件将复制到此保险箱
                     * @return VaultId 目标保险箱ID，备份文件将复制到此保险箱
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置目标保险箱ID，备份文件将复制到此保险箱
                     * @param _vaultId 目标保险箱ID，备份文件将复制到此保险箱
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
                     * 获取备份文件ID列表，支持批量复制多个备份文件
                     * @return BackupIds 备份文件ID列表，支持批量复制多个备份文件
                     * 
                     */
                    std::vector<int64_t> GetBackupIds() const;

                    /**
                     * 设置备份文件ID列表，支持批量复制多个备份文件
                     * @param _backupIds 备份文件ID列表，支持批量复制多个备份文件
                     * 
                     */
                    void SetBackupIds(const std::vector<int64_t>& _backupIds);

                    /**
                     * 判断参数 BackupIds 是否已赋值
                     * @return BackupIds 是否已赋值
                     * 
                     */
                    bool BackupIdsHasBeenSet() const;

                private:

                    /**
                     * 目标保险箱ID，备份文件将复制到此保险箱
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 备份文件ID列表，支持批量复制多个备份文件
                     */
                    std::vector<int64_t> m_backupIds;
                    bool m_backupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_COPYBACKUPTOVAULTREQUEST_H_
