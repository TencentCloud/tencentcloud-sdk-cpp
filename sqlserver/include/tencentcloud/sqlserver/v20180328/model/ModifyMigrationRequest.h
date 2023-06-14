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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateSource.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTarget.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyMigration请求参数结构体
                */
                class ModifyMigrationRequest : public AbstractModel
                {
                public:
                    ModifyMigrationRequest();
                    ~ModifyMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务ID
                     * @return MigrateId 迁移任务ID
                     * 
                     */
                    uint64_t GetMigrateId() const;

                    /**
                     * 设置迁移任务ID
                     * @param _migrateId 迁移任务ID
                     * 
                     */
                    void SetMigrateId(const uint64_t& _migrateId);

                    /**
                     * 判断参数 MigrateId 是否已赋值
                     * @return MigrateId 是否已赋值
                     * 
                     */
                    bool MigrateIdHasBeenSet() const;

                    /**
                     * 获取新的迁移任务的名称，若不填则不修改
                     * @return MigrateName 新的迁移任务的名称，若不填则不修改
                     * 
                     */
                    std::string GetMigrateName() const;

                    /**
                     * 设置新的迁移任务的名称，若不填则不修改
                     * @param _migrateName 新的迁移任务的名称，若不填则不修改
                     * 
                     */
                    void SetMigrateName(const std::string& _migrateName);

                    /**
                     * 判断参数 MigrateName 是否已赋值
                     * @return MigrateName 是否已赋值
                     * 
                     */
                    bool MigrateNameHasBeenSet() const;

                    /**
                     * 获取新的迁移类型（1:结构迁移 2:数据迁移 3:增量同步），若不填则不修改
                     * @return MigrateType 新的迁移类型（1:结构迁移 2:数据迁移 3:增量同步），若不填则不修改
                     * 
                     */
                    uint64_t GetMigrateType() const;

                    /**
                     * 设置新的迁移类型（1:结构迁移 2:数据迁移 3:增量同步），若不填则不修改
                     * @param _migrateType 新的迁移类型（1:结构迁移 2:数据迁移 3:增量同步），若不填则不修改
                     * 
                     */
                    void SetMigrateType(const uint64_t& _migrateType);

                    /**
                     * 判断参数 MigrateType 是否已赋值
                     * @return MigrateType 是否已赋值
                     * 
                     */
                    bool MigrateTypeHasBeenSet() const;

                    /**
                     * 获取迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式），若不填则不修改
                     * @return SourceType 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式），若不填则不修改
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式），若不填则不修改
                     * @param _sourceType 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式），若不填则不修改
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取迁移源，若不填则不修改
                     * @return Source 迁移源，若不填则不修改
                     * 
                     */
                    MigrateSource GetSource() const;

                    /**
                     * 设置迁移源，若不填则不修改
                     * @param _source 迁移源，若不填则不修改
                     * 
                     */
                    void SetSource(const MigrateSource& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取迁移目标，若不填则不修改
                     * @return Target 迁移目标，若不填则不修改
                     * 
                     */
                    MigrateTarget GetTarget() const;

                    /**
                     * 设置迁移目标，若不填则不修改
                     * @param _target 迁移目标，若不填则不修改
                     * 
                     */
                    void SetTarget(const MigrateTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用，若不填则不修改
                     * @return MigrateDBSet 迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用，若不填则不修改
                     * 
                     */
                    std::vector<MigrateDB> GetMigrateDBSet() const;

                    /**
                     * 设置迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用，若不填则不修改
                     * @param _migrateDBSet 迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用，若不填则不修改
                     * 
                     */
                    void SetMigrateDBSet(const std::vector<MigrateDB>& _migrateDBSet);

                    /**
                     * 判断参数 MigrateDBSet 是否已赋值
                     * @return MigrateDBSet 是否已赋值
                     * 
                     */
                    bool MigrateDBSetHasBeenSet() const;

                private:

                    /**
                     * 迁移任务ID
                     */
                    uint64_t m_migrateId;
                    bool m_migrateIdHasBeenSet;

                    /**
                     * 新的迁移任务的名称，若不填则不修改
                     */
                    std::string m_migrateName;
                    bool m_migrateNameHasBeenSet;

                    /**
                     * 新的迁移类型（1:结构迁移 2:数据迁移 3:增量同步），若不填则不修改
                     */
                    uint64_t m_migrateType;
                    bool m_migrateTypeHasBeenSet;

                    /**
                     * 迁移源的类型 1:TencentDB for SQLServer 2:云服务器自建SQLServer数据库 4:SQLServer备份还原 5:SQLServer备份还原（COS方式），若不填则不修改
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 迁移源，若不填则不修改
                     */
                    MigrateSource m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 迁移目标，若不填则不修改
                     */
                    MigrateTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 迁移DB对象 ，离线迁移（SourceType=4或SourceType=5）不使用，若不填则不修改
                     */
                    std::vector<MigrateDB> m_migrateDBSet;
                    bool m_migrateDBSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYMIGRATIONREQUEST_H_
