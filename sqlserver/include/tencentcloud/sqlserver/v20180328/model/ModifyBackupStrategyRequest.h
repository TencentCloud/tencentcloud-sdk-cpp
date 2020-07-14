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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_

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
                * ModifyBackupStrategy请求参数结构体
                */
                class ModifyBackupStrategyRequest : public AbstractModel
                {
                public:
                    ModifyBackupStrategyRequest();
                    ~ModifyBackupStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份类型，当前只支持按天备份，取值为daily
                     * @return BackupType 备份类型，当前只支持按天备份，取值为daily
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型，当前只支持按天备份，取值为daily
                     * @param BackupType 备份类型，当前只支持按天备份，取值为daily
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份时间点，取值为0-23的整数
                     * @return BackupTime 备份时间点，取值为0-23的整数
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 设置备份时间点，取值为0-23的整数
                     * @param BackupTime 备份时间点，取值为0-23的整数
                     */
                    void SetBackupTime(const uint64_t& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取BackupType取值为daily时，表示备份间隔天数。当前取值只能为1
                     * @return BackupDay BackupType取值为daily时，表示备份间隔天数。当前取值只能为1
                     */
                    uint64_t GetBackupDay() const;

                    /**
                     * 设置BackupType取值为daily时，表示备份间隔天数。当前取值只能为1
                     * @param BackupDay BackupType取值为daily时，表示备份间隔天数。当前取值只能为1
                     */
                    void SetBackupDay(const uint64_t& _backupDay);

                    /**
                     * 判断参数 BackupDay 是否已赋值
                     * @return BackupDay 是否已赋值
                     */
                    bool BackupDayHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份类型，当前只支持按天备份，取值为daily
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份时间点，取值为0-23的整数
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * BackupType取值为daily时，表示备份间隔天数。当前取值只能为1
                     */
                    uint64_t m_backupDay;
                    bool m_backupDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYREQUEST_H_
