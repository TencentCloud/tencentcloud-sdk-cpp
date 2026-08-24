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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_APPLYBACKUPGROUPREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_APPLYBACKUPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ApplyDisk.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ApplyBackupGroup请求参数结构体
                */
                class ApplyBackupGroupRequest : public AbstractModel
                {
                public:
                    ApplyBackupGroupRequest();
                    ~ApplyBackupGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回滚的备份组ID。
                     * @return BackupGroupId 回滚的备份组ID。
                     * 
                     */
                    std::string GetBackupGroupId() const;

                    /**
                     * 设置回滚的备份组ID。
                     * @param _backupGroupId 回滚的备份组ID。
                     * 
                     */
                    void SetBackupGroupId(const std::string& _backupGroupId);

                    /**
                     * 判断参数 BackupGroupId 是否已赋值
                     * @return BackupGroupId 是否已赋值
                     * 
                     */
                    bool BackupGroupIdHasBeenSet() const;

                    /**
                     * 获取回滚的备份ID、云硬盘ID列表。
                     * @return ApplyDisks 回滚的备份ID、云硬盘ID列表。
                     * 
                     */
                    std::vector<ApplyDisk> GetApplyDisks() const;

                    /**
                     * 设置回滚的备份ID、云硬盘ID列表。
                     * @param _applyDisks 回滚的备份ID、云硬盘ID列表。
                     * 
                     */
                    void SetApplyDisks(const std::vector<ApplyDisk>& _applyDisks);

                    /**
                     * 判断参数 ApplyDisks 是否已赋值
                     * @return ApplyDisks 是否已赋值
                     * 
                     */
                    bool ApplyDisksHasBeenSet() const;

                    /**
                     * 获取回滚备份前是否执行自动关机，如果回滚的盘挂载在实例上且实例处于运行状态，可传入该参数。
                     * @return AutoStopInstance 回滚备份前是否执行自动关机，如果回滚的盘挂载在实例上且实例处于运行状态，可传入该参数。
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置回滚备份前是否执行自动关机，如果回滚的盘挂载在实例上且实例处于运行状态，可传入该参数。
                     * @param _autoStopInstance 回滚备份前是否执行自动关机，如果回滚的盘挂载在实例上且实例处于运行状态，可传入该参数。
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取回滚备份完成后是否执行自动开机。
                     * @return AutoStartInstance 回滚备份完成后是否执行自动开机。
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置回滚备份完成后是否执行自动开机。
                     * @param _autoStartInstance 回滚备份完成后是否执行自动开机。
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * 回滚的备份组ID。
                     */
                    std::string m_backupGroupId;
                    bool m_backupGroupIdHasBeenSet;

                    /**
                     * 回滚的备份ID、云硬盘ID列表。
                     */
                    std::vector<ApplyDisk> m_applyDisks;
                    bool m_applyDisksHasBeenSet;

                    /**
                     * 回滚备份前是否执行自动关机，如果回滚的盘挂载在实例上且实例处于运行状态，可传入该参数。
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * 回滚备份完成后是否执行自动开机。
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_APPLYBACKUPGROUPREQUEST_H_
