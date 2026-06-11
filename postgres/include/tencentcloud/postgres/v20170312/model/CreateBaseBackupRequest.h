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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBASEBACKUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBASEBACKUPREQUEST_H_

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
                * CreateBaseBackup请求参数结构体
                */
                class CreateBaseBackupRequest : public AbstractModel
                {
                public:
                    CreateBaseBackupRequest();
                    ~CreateBaseBackupRequest() = default;
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
                     * 获取<p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @return BackupMethod <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * @param _backupMethod <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>备份方式</p><p>枚举值：</p><ul><li>physical： 物理备份</li><li>logical： 逻辑备份</li><li>snapshot： 快照备份</li></ul>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBASEBACKUPREQUEST_H_
