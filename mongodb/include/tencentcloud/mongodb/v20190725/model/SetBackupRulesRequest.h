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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETBACKUPRULESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETBACKUPRULESREQUEST_H_

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
                * SetBackupRules请求参数结构体
                */
                class SetBackupRulesRequest : public AbstractModel
                {
                public:
                    SetBackupRulesRequest();
                    ~SetBackupRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取设置自动备份方式。- 0：逻辑备份。- 1：物理备份。-3：快照备份(仅云盘版支持)。
                     * @return BackupMethod 设置自动备份方式。- 0：逻辑备份。- 1：物理备份。-3：快照备份(仅云盘版支持)。
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置设置自动备份方式。- 0：逻辑备份。- 1：物理备份。-3：快照备份(仅云盘版支持)。
                     * @param _backupMethod 设置自动备份方式。- 0：逻辑备份。- 1：物理备份。-3：快照备份(仅云盘版支持)。
                     * 
                     */
                    void SetBackupMethod(const uint64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     * @return BackupTime 设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 设置设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     * @param _backupTime 设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     * 
                     */
                    void SetBackupTime(const uint64_t& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取设置自动备份发生错误时，是否发送失败告警。
- true：发送。
- false：不发送。
                     * @return Notify 设置自动备份发生错误时，是否发送失败告警。
- true：发送。
- false：不发送。
                     * 
                     */
                    bool GetNotify() const;

                    /**
                     * 设置设置自动备份发生错误时，是否发送失败告警。
- true：发送。
- false：不发送。
                     * @param _notify 设置自动备份发生错误时，是否发送失败告警。
- true：发送。
- false：不发送。
                     * 
                     */
                    void SetNotify(const bool& _notify);

                    /**
                     * 判断参数 Notify 是否已赋值
                     * @return Notify 是否已赋值
                     * 
                     */
                    bool NotifyHasBeenSet() const;

                    /**
                     * 获取指定备份数据保存天数。默认为 7 天，支持设置为7、30、90、180、365。
                     * @return BackupRetentionPeriod 指定备份数据保存天数。默认为 7 天，支持设置为7、30、90、180、365。
                     * 
                     */
                    uint64_t GetBackupRetentionPeriod() const;

                    /**
                     * 设置指定备份数据保存天数。默认为 7 天，支持设置为7、30、90、180、365。
                     * @param _backupRetentionPeriod 指定备份数据保存天数。默认为 7 天，支持设置为7、30、90、180、365。
                     * 
                     */
                    void SetBackupRetentionPeriod(const uint64_t& _backupRetentionPeriod);

                    /**
                     * 判断参数 BackupRetentionPeriod 是否已赋值
                     * @return BackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BackupRetentionPeriodHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置自动备份方式。- 0：逻辑备份。- 1：物理备份。-3：快照备份(仅云盘版支持)。
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 设置自动备份发生错误时，是否发送失败告警。
- true：发送。
- false：不发送。
                     */
                    bool m_notify;
                    bool m_notifyHasBeenSet;

                    /**
                     * 指定备份数据保存天数。默认为 7 天，支持设置为7、30、90、180、365。
                     */
                    uint64_t m_backupRetentionPeriod;
                    bool m_backupRetentionPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETBACKUPRULESREQUEST_H_
