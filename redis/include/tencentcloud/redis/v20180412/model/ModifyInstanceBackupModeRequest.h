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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_

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
                * ModifyInstanceBackupMode请求参数结构体
                */
                class ModifyInstanceBackupModeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceBackupModeRequest();
                    ~ModifyInstanceBackupModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的ID，长度在12-36之间。
                     * @return InstanceId 实例的ID，长度在12-36之间。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例的ID，长度在12-36之间。
                     * @param _instanceId 实例的ID，长度在12-36之间。
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
                     * 获取备份模式：
- SecondLevelBackup   秒级备份
- NormalLevelBackup    普通备份
                     * @return BackupMode 备份模式：
- SecondLevelBackup   秒级备份
- NormalLevelBackup    普通备份
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置备份模式：
- SecondLevelBackup   秒级备份
- NormalLevelBackup    普通备份
                     * @param _backupMode 备份模式：
- SecondLevelBackup   秒级备份
- NormalLevelBackup    普通备份
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                private:

                    /**
                     * 实例的ID，长度在12-36之间。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份模式：
- SecondLevelBackup   秒级备份
- NormalLevelBackup    普通备份
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEBACKUPMODEREQUEST_H_
