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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DatabaseTables.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateBackup请求参数结构体
                */
                class CreateBackupRequest : public AbstractModel
                {
                public:
                    CreateBackupRequest();
                    ~CreateBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取备份类型, 可选值：logic，逻辑备份；snapshot，物理备份
                     * @return BackupType 备份类型, 可选值：logic，逻辑备份；snapshot，物理备份
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型, 可选值：logic，逻辑备份；snapshot，物理备份
                     * @param _backupType 备份类型, 可选值：logic，逻辑备份；snapshot，物理备份
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份的库, 只在 BackupType 为 logic 时有效
                     * @return BackupDatabases 备份的库, 只在 BackupType 为 logic 时有效
                     * 
                     */
                    std::vector<std::string> GetBackupDatabases() const;

                    /**
                     * 设置备份的库, 只在 BackupType 为 logic 时有效
                     * @param _backupDatabases 备份的库, 只在 BackupType 为 logic 时有效
                     * 
                     */
                    void SetBackupDatabases(const std::vector<std::string>& _backupDatabases);

                    /**
                     * 判断参数 BackupDatabases 是否已赋值
                     * @return BackupDatabases 是否已赋值
                     * 
                     */
                    bool BackupDatabasesHasBeenSet() const;

                    /**
                     * 获取备份的表, 只在 BackupType 为 logic 时有效
                     * @return BackupTables 备份的表, 只在 BackupType 为 logic 时有效
                     * 
                     */
                    std::vector<DatabaseTables> GetBackupTables() const;

                    /**
                     * 设置备份的表, 只在 BackupType 为 logic 时有效
                     * @param _backupTables 备份的表, 只在 BackupType 为 logic 时有效
                     * 
                     */
                    void SetBackupTables(const std::vector<DatabaseTables>& _backupTables);

                    /**
                     * 判断参数 BackupTables 是否已赋值
                     * @return BackupTables 是否已赋值
                     * 
                     */
                    bool BackupTablesHasBeenSet() const;

                    /**
                     * 获取备注名
                     * @return BackupName 备注名
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备注名
                     * @param _backupName 备注名
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 备份类型, 可选值：logic，逻辑备份；snapshot，物理备份
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份的库, 只在 BackupType 为 logic 时有效
                     */
                    std::vector<std::string> m_backupDatabases;
                    bool m_backupDatabasesHasBeenSet;

                    /**
                     * 备份的表, 只在 BackupType 为 logic 时有效
                     */
                    std::vector<DatabaseTables> m_backupTables;
                    bool m_backupTablesHasBeenSet;

                    /**
                     * 备注名
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPREQUEST_H_
