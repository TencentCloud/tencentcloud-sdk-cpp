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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyBackupMigration请求参数结构体
                */
                class ModifyBackupMigrationRequest : public AbstractModel
                {
                public:
                    ModifyBackupMigrationRequest();
                    ~ModifyBackupMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入目标实例ID
                     * @return InstanceId 导入目标实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置导入目标实例ID
                     * @param _instanceId 导入目标实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份导入任务ID，由CreateBackupMigration接口返回
                     * @return BackupMigrationId 备份导入任务ID，由CreateBackupMigration接口返回
                     * 
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置备份导入任务ID，由CreateBackupMigration接口返回
                     * @param _backupMigrationId 备份导入任务ID，由CreateBackupMigration接口返回
                     * 
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     * 
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return MigrationName 任务名称
                     * 
                     */
                    std::string GetMigrationName() const;

                    /**
                     * 设置任务名称
                     * @param _migrationName 任务名称
                     * 
                     */
                    void SetMigrationName(const std::string& _migrationName);

                    /**
                     * 判断参数 MigrationName 是否已赋值
                     * @return MigrationName 是否已赋值
                     * 
                     */
                    bool MigrationNameHasBeenSet() const;

                    /**
                     * 获取迁移任务恢复类型，FULL,FULL_LOG,FULL_DIFF
                     * @return RecoveryType 迁移任务恢复类型，FULL,FULL_LOG,FULL_DIFF
                     * 
                     */
                    std::string GetRecoveryType() const;

                    /**
                     * 设置迁移任务恢复类型，FULL,FULL_LOG,FULL_DIFF
                     * @param _recoveryType 迁移任务恢复类型，FULL,FULL_LOG,FULL_DIFF
                     * 
                     */
                    void SetRecoveryType(const std::string& _recoveryType);

                    /**
                     * 判断参数 RecoveryType 是否已赋值
                     * @return RecoveryType 是否已赋值
                     * 
                     */
                    bool RecoveryTypeHasBeenSet() const;

                    /**
                     * 获取COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * @return UploadType COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * @param _uploadType COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     * 
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     * @return BackupFiles UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     * 
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     * @param _backupFiles UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     * 
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     * 
                     */
                    bool BackupFilesHasBeenSet() const;

                    /**
                     * 获取需要重命名的数据库名称集合
                     * @return DBRename 需要重命名的数据库名称集合
                     * 
                     */
                    std::vector<RenameRestoreDatabase> GetDBRename() const;

                    /**
                     * 设置需要重命名的数据库名称集合
                     * @param _dBRename 需要重命名的数据库名称集合
                     * 
                     */
                    void SetDBRename(const std::vector<RenameRestoreDatabase>& _dBRename);

                    /**
                     * 判断参数 DBRename 是否已赋值
                     * @return DBRename 是否已赋值
                     * 
                     */
                    bool DBRenameHasBeenSet() const;

                private:

                    /**
                     * 导入目标实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份导入任务ID，由CreateBackupMigration接口返回
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_migrationName;
                    bool m_migrationNameHasBeenSet;

                    /**
                     * 迁移任务恢复类型，FULL,FULL_LOG,FULL_DIFF
                     */
                    std::string m_recoveryType;
                    bool m_recoveryTypeHasBeenSet;

                    /**
                     * COS_URL-备份放在用户的对象存储上，提供URL。COS_UPLOAD-备份放在业务的对象存储上，用户上传
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                    /**
                     * 需要重命名的数据库名称集合
                     */
                    std::vector<RenameRestoreDatabase> m_dBRename;
                    bool m_dBRenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPMIGRATIONREQUEST_H_
