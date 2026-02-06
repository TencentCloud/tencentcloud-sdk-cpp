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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateDBSBackup请求参数结构体
                */
                class CreateDBSBackupRequest : public AbstractModel
                {
                public:
                    CreateDBSBackupRequest();
                    ~CreateDBSBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份方式：physical、snapshot 这个值和DescribeDBSBackupPolicy接口返回的backupMethod保持一致</p>枚举值：<ul><li> physical： 物理备份</li><li> snapshot： 快照备份</li></ul>
                     * @return BackupMethod <p>备份方式：physical、snapshot 这个值和DescribeDBSBackupPolicy接口返回的backupMethod保持一致</p>枚举值：<ul><li> physical： 物理备份</li><li> snapshot： 快照备份</li></ul>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式：physical、snapshot 这个值和DescribeDBSBackupPolicy接口返回的backupMethod保持一致</p>枚举值：<ul><li> physical： 物理备份</li><li> snapshot： 快照备份</li></ul>
                     * @param _backupMethod <p>备份方式：physical、snapshot 这个值和DescribeDBSBackupPolicy接口返回的backupMethod保持一致</p>枚举值：<ul><li> physical： 物理备份</li><li> snapshot： 快照备份</li></ul>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>备份类型：暂时只支持full</p>
                     * @return BackupType <p>备份类型：暂时只支持full</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<p>备份类型：暂时只支持full</p>
                     * @param _backupType <p>备份类型：暂时只支持full</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>备份备注</p>
                     * @return BackupName <p>备份备注</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<p>备份备注</p>
                     * @param _backupName <p>备份备注</p>
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
                     * <p>备份方式：physical、snapshot 这个值和DescribeDBSBackupPolicy接口返回的backupMethod保持一致</p>枚举值：<ul><li> physical： 物理备份</li><li> snapshot： 快照备份</li></ul>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份类型：暂时只支持full</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份备注</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_
