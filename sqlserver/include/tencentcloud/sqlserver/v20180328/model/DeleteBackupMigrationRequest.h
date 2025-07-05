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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBACKUPMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBACKUPMIGRATIONREQUEST_H_

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
                * DeleteBackupMigration请求参数结构体
                */
                class DeleteBackupMigrationRequest : public AbstractModel
                {
                public:
                    DeleteBackupMigrationRequest();
                    ~DeleteBackupMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标实例ID，由DescribeBackupMigration接口返回
                     * @return InstanceId 目标实例ID，由DescribeBackupMigration接口返回
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置目标实例ID，由DescribeBackupMigration接口返回
                     * @param _instanceId 目标实例ID，由DescribeBackupMigration接口返回
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
                     * 获取备份导入任务ID，由DescribeBackupMigration接口返回
                     * @return BackupMigrationId 备份导入任务ID，由DescribeBackupMigration接口返回
                     * 
                     */
                    std::string GetBackupMigrationId() const;

                    /**
                     * 设置备份导入任务ID，由DescribeBackupMigration接口返回
                     * @param _backupMigrationId 备份导入任务ID，由DescribeBackupMigration接口返回
                     * 
                     */
                    void SetBackupMigrationId(const std::string& _backupMigrationId);

                    /**
                     * 判断参数 BackupMigrationId 是否已赋值
                     * @return BackupMigrationId 是否已赋值
                     * 
                     */
                    bool BackupMigrationIdHasBeenSet() const;

                private:

                    /**
                     * 目标实例ID，由DescribeBackupMigration接口返回
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份导入任务ID，由DescribeBackupMigration接口返回
                     */
                    std::string m_backupMigrationId;
                    bool m_backupMigrationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEBACKUPMIGRATIONREQUEST_H_
