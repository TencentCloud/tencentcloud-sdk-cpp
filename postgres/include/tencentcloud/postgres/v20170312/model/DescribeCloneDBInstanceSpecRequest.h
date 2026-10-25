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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCloneDBInstanceSpec请求参数结构体
                */
                class DescribeCloneDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    DescribeCloneDBInstanceSpecRequest();
                    ~DescribeCloneDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @return DBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * @param _dBInstanceId <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>基础备份集ID，可通过<a href="https://cloud.tencent.com/document/api/409/89022">DescribeBaseBackups</a>接口获取。此入参和RecoveryTargetTime必须选择一个传入。如与RecoveryTargetTime参数同时设置，则以此参数为准。</p>
                     * @return BackupSetId <p>基础备份集ID，可通过<a href="https://cloud.tencent.com/document/api/409/89022">DescribeBaseBackups</a>接口获取。此入参和RecoveryTargetTime必须选择一个传入。如与RecoveryTargetTime参数同时设置，则以此参数为准。</p>
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置<p>基础备份集ID，可通过<a href="https://cloud.tencent.com/document/api/409/89022">DescribeBaseBackups</a>接口获取。此入参和RecoveryTargetTime必须选择一个传入。如与RecoveryTargetTime参数同时设置，则以此参数为准。</p>
                     * @param _backupSetId <p>基础备份集ID，可通过<a href="https://cloud.tencent.com/document/api/409/89022">DescribeBaseBackups</a>接口获取。此入参和RecoveryTargetTime必须选择一个传入。如与RecoveryTargetTime参数同时设置，则以此参数为准。</p>
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取<p>恢复目标时间，此入参和BackupSetId必须选择一个传入。时区以东八区（UTC+8）为准。</p>
                     * @return RecoveryTargetTime <p>恢复目标时间，此入参和BackupSetId必须选择一个传入。时区以东八区（UTC+8）为准。</p>
                     * 
                     */
                    std::string GetRecoveryTargetTime() const;

                    /**
                     * 设置<p>恢复目标时间，此入参和BackupSetId必须选择一个传入。时区以东八区（UTC+8）为准。</p>
                     * @param _recoveryTargetTime <p>恢复目标时间，此入参和BackupSetId必须选择一个传入。时区以东八区（UTC+8）为准。</p>
                     * 
                     */
                    void SetRecoveryTargetTime(const std::string& _recoveryTargetTime);

                    /**
                     * 判断参数 RecoveryTargetTime 是否已赋值
                     * @return RecoveryTargetTime 是否已赋值
                     * 
                     */
                    bool RecoveryTargetTimeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>基础备份集ID，可通过<a href="https://cloud.tencent.com/document/api/409/89022">DescribeBaseBackups</a>接口获取。此入参和RecoveryTargetTime必须选择一个传入。如与RecoveryTargetTime参数同时设置，则以此参数为准。</p>
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <p>恢复目标时间，此入参和BackupSetId必须选择一个传入。时区以东八区（UTC+8）为准。</p>
                     */
                    std::string m_recoveryTargetTime;
                    bool m_recoveryTargetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECREQUEST_H_
