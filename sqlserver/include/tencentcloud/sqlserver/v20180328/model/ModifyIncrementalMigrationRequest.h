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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyIncrementalMigration请求参数结构体
                */
                class ModifyIncrementalMigrationRequest : public AbstractModel
                {
                public:
                    ModifyIncrementalMigrationRequest();
                    ~ModifyIncrementalMigrationRequest() = default;
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
                     * 获取增量导入任务ID，由CreateIncrementalMigration接口返回
                     * @return IncrementalMigrationId 增量导入任务ID，由CreateIncrementalMigration接口返回
                     * 
                     */
                    std::string GetIncrementalMigrationId() const;

                    /**
                     * 设置增量导入任务ID，由CreateIncrementalMigration接口返回
                     * @param _incrementalMigrationId 增量导入任务ID，由CreateIncrementalMigration接口返回
                     * 
                     */
                    void SetIncrementalMigrationId(const std::string& _incrementalMigrationId);

                    /**
                     * 判断参数 IncrementalMigrationId 是否已赋值
                     * @return IncrementalMigrationId 是否已赋值
                     * 
                     */
                    bool IncrementalMigrationIdHasBeenSet() const;

                    /**
                     * 获取是否需要恢复，NO-不需要，YES-需要，默认不修改增量备份导入任务是否需要恢复的属性。
                     * @return IsRecovery 是否需要恢复，NO-不需要，YES-需要，默认不修改增量备份导入任务是否需要恢复的属性。
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置是否需要恢复，NO-不需要，YES-需要，默认不修改增量备份导入任务是否需要恢复的属性。
                     * @param _isRecovery 是否需要恢复，NO-不需要，YES-需要，默认不修改增量备份导入任务是否需要恢复的属性。
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

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
                     * 增量导入任务ID，由CreateIncrementalMigration接口返回
                     */
                    std::string m_incrementalMigrationId;
                    bool m_incrementalMigrationIdHasBeenSet;

                    /**
                     * 是否需要恢复，NO-不需要，YES-需要，默认不修改增量备份导入任务是否需要恢复的属性。
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * UploadType是COS_URL时这里时URL，COS_UPLOAD这里填备份文件的名字；只支持1个备份文件，但1个备份文件内可包含多个库
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYINCREMENTALMIGRATIONREQUEST_H_
