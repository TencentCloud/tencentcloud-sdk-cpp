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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateBackupDBInstance请求参数结构体
                */
                class CreateBackupDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateBackupDBInstanceRequest();
                    ~CreateBackupDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
                     * @return BackupMethod 设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
                     * @param _backupMethod 设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取备份备注信息。
                     * @return BackupRemark 备份备注信息。
                     * 
                     */
                    std::string GetBackupRemark() const;

                    /**
                     * 设置备份备注信息。
                     * @param _backupRemark 备份备注信息。
                     * 
                     */
                    void SetBackupRemark(const std::string& _backupRemark);

                    /**
                     * 判断参数 BackupRemark 是否已赋值
                     * @return BackupRemark 是否已赋值
                     * 
                     */
                    bool BackupRemarkHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份备注信息。
                     */
                    std::string m_backupRemark;
                    bool m_backupRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
