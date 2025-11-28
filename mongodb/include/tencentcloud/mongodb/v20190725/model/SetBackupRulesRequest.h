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
                     * 获取实例id，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @return InstanceId 实例id，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     * @param _instanceId 实例id，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
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
                     * 获取备份方式。
- 0：逻辑备份。
- 1：物理备份。
- 3：快照备份。
**说明**:
1. 通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。
2. 实例开通存储加密，则备份方式不能为物理备份。
                     * @return BackupMethod 备份方式。
- 0：逻辑备份。
- 1：物理备份。
- 3：快照备份。
**说明**:
1. 通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。
2. 实例开通存储加密，则备份方式不能为物理备份。
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置备份方式。
- 0：逻辑备份。
- 1：物理备份。
- 3：快照备份。
**说明**:
1. 通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。
2. 实例开通存储加密，则备份方式不能为物理备份。
                     * @param _backupMethod 备份方式。
- 0：逻辑备份。
- 1：物理备份。
- 3：快照备份。
**说明**:
1. 通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。
2. 实例开通存储加密，则备份方式不能为物理备份。
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
                     * 获取自动备份频率，内部展示，默认取值为24h。
                     * @return BackupFrequency 自动备份频率，内部展示，默认取值为24h。
                     * 
                     */
                    uint64_t GetBackupFrequency() const;

                    /**
                     * 设置自动备份频率，内部展示，默认取值为24h。
                     * @param _backupFrequency 自动备份频率，内部展示，默认取值为24h。
                     * 
                     */
                    void SetBackupFrequency(const uint64_t& _backupFrequency);

                    /**
                     * 判断参数 BackupFrequency 是否已赋值
                     * @return BackupFrequency 是否已赋值
                     * 
                     */
                    bool BackupFrequencyHasBeenSet() const;

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

                    /**
                     * 获取周几备份，0-6，逗号分割。仅对高级备份生效
                     * @return ActiveWeekdays 周几备份，0-6，逗号分割。仅对高级备份生效
                     * 
                     */
                    std::string GetActiveWeekdays() const;

                    /**
                     * 设置周几备份，0-6，逗号分割。仅对高级备份生效
                     * @param _activeWeekdays 周几备份，0-6，逗号分割。仅对高级备份生效
                     * 
                     */
                    void SetActiveWeekdays(const std::string& _activeWeekdays);

                    /**
                     * 判断参数 ActiveWeekdays 是否已赋值
                     * @return ActiveWeekdays 是否已赋值
                     * 
                     */
                    bool ActiveWeekdaysHasBeenSet() const;

                    /**
                     * 获取长期保留周期，周weekly，月monthly，空不开启
                     * @return LongTermUnit 长期保留周期，周weekly，月monthly，空不开启
                     * 
                     */
                    std::string GetLongTermUnit() const;

                    /**
                     * 设置长期保留周期，周weekly，月monthly，空不开启
                     * @param _longTermUnit 长期保留周期，周weekly，月monthly，空不开启
                     * 
                     */
                    void SetLongTermUnit(const std::string& _longTermUnit);

                    /**
                     * 判断参数 LongTermUnit 是否已赋值
                     * @return LongTermUnit 是否已赋值
                     * 
                     */
                    bool LongTermUnitHasBeenSet() const;

                    /**
                     * 获取长期保留哪些天的，周0-6，月1-31，逗号分割
                     * @return LongTermActiveDays 长期保留哪些天的，周0-6，月1-31，逗号分割
                     * 
                     */
                    std::string GetLongTermActiveDays() const;

                    /**
                     * 设置长期保留哪些天的，周0-6，月1-31，逗号分割
                     * @param _longTermActiveDays 长期保留哪些天的，周0-6，月1-31，逗号分割
                     * 
                     */
                    void SetLongTermActiveDays(const std::string& _longTermActiveDays);

                    /**
                     * 判断参数 LongTermActiveDays 是否已赋值
                     * @return LongTermActiveDays 是否已赋值
                     * 
                     */
                    bool LongTermActiveDaysHasBeenSet() const;

                    /**
                     * 获取长期备份保留多少天
                     * @return LongTermExpiredDays 长期备份保留多少天
                     * 
                     */
                    int64_t GetLongTermExpiredDays() const;

                    /**
                     * 设置长期备份保留多少天
                     * @param _longTermExpiredDays 长期备份保留多少天
                     * 
                     */
                    void SetLongTermExpiredDays(const int64_t& _longTermExpiredDays);

                    /**
                     * 判断参数 LongTermExpiredDays 是否已赋值
                     * @return LongTermExpiredDays 是否已赋值
                     * 
                     */
                    bool LongTermExpiredDaysHasBeenSet() const;

                    /**
                     * 获取增量保留多少天
                     * @return OplogExpiredDays 增量保留多少天
                     * 
                     */
                    int64_t GetOplogExpiredDays() const;

                    /**
                     * 设置增量保留多少天
                     * @param _oplogExpiredDays 增量保留多少天
                     * 
                     */
                    void SetOplogExpiredDays(const int64_t& _oplogExpiredDays);

                    /**
                     * 判断参数 OplogExpiredDays 是否已赋值
                     * @return OplogExpiredDays 是否已赋值
                     * 
                     */
                    bool OplogExpiredDaysHasBeenSet() const;

                    /**
                     * 获取备份版本。旧版本备份为0，高级备份为1。开启高级备份此值传1
                     * @return BackupVersion 备份版本。旧版本备份为0，高级备份为1。开启高级备份此值传1
                     * 
                     */
                    int64_t GetBackupVersion() const;

                    /**
                     * 设置备份版本。旧版本备份为0，高级备份为1。开启高级备份此值传1
                     * @param _backupVersion 备份版本。旧版本备份为0，高级备份为1。开启高级备份此值传1
                     * 
                     */
                    void SetBackupVersion(const int64_t& _backupVersion);

                    /**
                     * 判断参数 BackupVersion 是否已赋值
                     * @return BackupVersion 是否已赋值
                     * 
                     */
                    bool BackupVersionHasBeenSet() const;

                    /**
                     * 获取告警额度。50-300
                     * @return AlarmWaterLevel 告警额度。50-300
                     * 
                     */
                    int64_t GetAlarmWaterLevel() const;

                    /**
                     * 设置告警额度。50-300
                     * @param _alarmWaterLevel 告警额度。50-300
                     * 
                     */
                    void SetAlarmWaterLevel(const int64_t& _alarmWaterLevel);

                    /**
                     * 判断参数 AlarmWaterLevel 是否已赋值
                     * @return AlarmWaterLevel 是否已赋值
                     * 
                     */
                    bool AlarmWaterLevelHasBeenSet() const;

                private:

                    /**
                     * 实例id，例如：cmgo-p8vn****。请登录 [MongoDB 控制台](https://console.cloud.tencent.com/mongodb)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份方式。
- 0：逻辑备份。
- 1：物理备份。
- 3：快照备份。
**说明**:
1. 通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。
2. 实例开通存储加密，则备份方式不能为物理备份。
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * 自动备份频率，内部展示，默认取值为24h。
                     */
                    uint64_t m_backupFrequency;
                    bool m_backupFrequencyHasBeenSet;

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

                    /**
                     * 周几备份，0-6，逗号分割。仅对高级备份生效
                     */
                    std::string m_activeWeekdays;
                    bool m_activeWeekdaysHasBeenSet;

                    /**
                     * 长期保留周期，周weekly，月monthly，空不开启
                     */
                    std::string m_longTermUnit;
                    bool m_longTermUnitHasBeenSet;

                    /**
                     * 长期保留哪些天的，周0-6，月1-31，逗号分割
                     */
                    std::string m_longTermActiveDays;
                    bool m_longTermActiveDaysHasBeenSet;

                    /**
                     * 长期备份保留多少天
                     */
                    int64_t m_longTermExpiredDays;
                    bool m_longTermExpiredDaysHasBeenSet;

                    /**
                     * 增量保留多少天
                     */
                    int64_t m_oplogExpiredDays;
                    bool m_oplogExpiredDaysHasBeenSet;

                    /**
                     * 备份版本。旧版本备份为0，高级备份为1。开启高级备份此值传1
                     */
                    int64_t m_backupVersion;
                    bool m_backupVersionHasBeenSet;

                    /**
                     * 告警额度。50-300
                     */
                    int64_t m_alarmWaterLevel;
                    bool m_alarmWaterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETBACKUPRULESREQUEST_H_
