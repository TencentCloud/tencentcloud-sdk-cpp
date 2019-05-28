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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_

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
                * DeleteBackup请求参数结构体
                */
                class DeleteBackupRequest : public AbstractModel
                {
                public:
                    DeleteBackupRequest();
                    ~DeleteBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @param InstanceId 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份任务ID。该任务ID为[创建云数据库备份](https://cloud.tencent.com/document/api/236/15844)接口返回的任务ID。
                     * @return BackupId 备份任务ID。该任务ID为[创建云数据库备份](https://cloud.tencent.com/document/api/236/15844)接口返回的任务ID。
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份任务ID。该任务ID为[创建云数据库备份](https://cloud.tencent.com/document/api/236/15844)接口返回的任务ID。
                     * @param BackupId 备份任务ID。该任务ID为[创建云数据库备份](https://cloud.tencent.com/document/api/236/15844)接口返回的任务ID。
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份任务ID。该任务ID为[创建云数据库备份](https://cloud.tencent.com/document/api/236/15844)接口返回的任务ID。
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DELETEBACKUPREQUEST_H_
