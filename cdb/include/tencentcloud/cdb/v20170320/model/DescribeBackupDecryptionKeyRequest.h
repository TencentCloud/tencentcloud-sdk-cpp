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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupDecryptionKey请求参数结构体
                */
                class DescribeBackupDecryptionKeyRequest : public AbstractModel
                {
                public:
                    DescribeBackupDecryptionKeyRequest();
                    ~DescribeBackupDecryptionKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取实例的备份ID，可通过DescribeBackups接口查询备份的ID。
                     * @return BackupId 实例的备份ID，可通过DescribeBackups接口查询备份的ID。
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置实例的备份ID，可通过DescribeBackups接口查询备份的ID。
                     * @param _backupId 实例的备份ID，可通过DescribeBackups接口查询备份的ID。
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份类型 data: 数据备份 binlog:日志备份，默认为data
                     * @return BackupType 备份类型 data: 数据备份 binlog:日志备份，默认为data
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型 data: 数据备份 binlog:日志备份，默认为data
                     * @param _backupType 备份类型 data: 数据备份 binlog:日志备份，默认为data
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-XXXX。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例的备份ID，可通过DescribeBackups接口查询备份的ID。
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份类型 data: 数据备份 binlog:日志备份，默认为data
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYREQUEST_H_
