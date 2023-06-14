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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * RestoreInstance请求参数结构体
                */
                class RestoreInstanceRequest : public AbstractModel
                {
                public:
                    RestoreInstanceRequest();
                    ~RestoreInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待操作的实例ID，可通过 DescribeInstances 接口返回值中的 InstanceId 获取。
                     * @return InstanceId 待操作的实例ID，可通过 DescribeInstances 接口返回值中的 InstanceId 获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待操作的实例ID，可通过 DescribeInstances 接口返回值中的 InstanceId 获取。
                     * @param _instanceId 待操作的实例ID，可通过 DescribeInstances 接口返回值中的 InstanceId 获取。
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
                     * 获取备份ID，可通过 GetRedisBackupList 接口返回值中的 backupId 获取
                     * @return BackupId 备份ID，可通过 GetRedisBackupList 接口返回值中的 backupId 获取
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份ID，可通过 GetRedisBackupList 接口返回值中的 backupId 获取
                     * @param _backupId 备份ID，可通过 GetRedisBackupList 接口返回值中的 backupId 获取
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取实例密码，恢复实例时，需要校验实例密码（免密实例不需要传密码）
                     * @return Password 实例密码，恢复实例时，需要校验实例密码（免密实例不需要传密码）
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码，恢复实例时，需要校验实例密码（免密实例不需要传密码）
                     * @param _password 实例密码，恢复实例时，需要校验实例密码（免密实例不需要传密码）
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 待操作的实例ID，可通过 DescribeInstances 接口返回值中的 InstanceId 获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份ID，可通过 GetRedisBackupList 接口返回值中的 backupId 获取
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 实例密码，恢复实例时，需要校验实例密码（免密实例不需要传密码）
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_RESTOREINSTANCEREQUEST_H_
