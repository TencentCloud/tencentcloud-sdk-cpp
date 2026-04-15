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
                     * 获取<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @return BackupMethod <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置<p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @param _backupMethod <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
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
                     * 获取<p>设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。</p>
                     * @return BackupTime <p>设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。</p>
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 设置<p>设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。</p>
                     * @param _backupTime <p>设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。</p>
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
                     * 获取<p>指定每日自动备份频率。</p><ul><li>12: 每日备份2次，间隔约12小时。</li><li>24: 每日备份1次（默认），间隔约24小时。</li></ul>
                     * @return BackupFrequency <p>指定每日自动备份频率。</p><ul><li>12: 每日备份2次，间隔约12小时。</li><li>24: 每日备份1次（默认），间隔约24小时。</li></ul>
                     * 
                     */
                    uint64_t GetBackupFrequency() const;

                    /**
                     * 设置<p>指定每日自动备份频率。</p><ul><li>12: 每日备份2次，间隔约12小时。</li><li>24: 每日备份1次（默认），间隔约24小时。</li></ul>
                     * @param _backupFrequency <p>指定每日自动备份频率。</p><ul><li>12: 每日备份2次，间隔约12小时。</li><li>24: 每日备份1次（默认），间隔约24小时。</li></ul>
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
                     * 获取<p>设置自动备份发生错误时，是否发送失败告警。</p><ul><li>true：发送。</li><li>false：不发送。</li></ul>
                     * @return Notify <p>设置自动备份发生错误时，是否发送失败告警。</p><ul><li>true：发送。</li><li>false：不发送。</li></ul>
                     * 
                     */
                    bool GetNotify() const;

                    /**
                     * 设置<p>设置自动备份发生错误时，是否发送失败告警。</p><ul><li>true：发送。</li><li>false：不发送。</li></ul>
                     * @param _notify <p>设置自动备份发生错误时，是否发送失败告警。</p><ul><li>true：发送。</li><li>false：不发送。</li></ul>
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
                     * 获取<p>指定备份数据保留时长。</p><ul><li>单位：天，默认为 7 天。</li><li>取值范围：[7,365]。</li></ul>
                     * @return BackupRetentionPeriod <p>指定备份数据保留时长。</p><ul><li>单位：天，默认为 7 天。</li><li>取值范围：[7,365]。</li></ul>
                     * 
                     */
                    uint64_t GetBackupRetentionPeriod() const;

                    /**
                     * 设置<p>指定备份数据保留时长。</p><ul><li>单位：天，默认为 7 天。</li><li>取值范围：[7,365]。</li></ul>
                     * @param _backupRetentionPeriod <p>指定备份数据保留时长。</p><ul><li>单位：天，默认为 7 天。</li><li>取值范围：[7,365]。</li></ul>
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
                     * 获取<p>指定每周内执行自动备份的具体日期。</p><ul><li>格式：请输入 0-6 之间的数字代表周日至周六（例如：1 代表周一），多个日期请用英文逗号 , 分隔。</li><li>示例：输入 1,3,5 表示系统将在每周的周一、周三、周五执行备份。</li><li>默认值：不设置，则默认为全周期 (0,1,2,3,4,5,6)，即每日执行备份。</li></ul>
                     * @return ActiveWeekdays <p>指定每周内执行自动备份的具体日期。</p><ul><li>格式：请输入 0-6 之间的数字代表周日至周六（例如：1 代表周一），多个日期请用英文逗号 , 分隔。</li><li>示例：输入 1,3,5 表示系统将在每周的周一、周三、周五执行备份。</li><li>默认值：不设置，则默认为全周期 (0,1,2,3,4,5,6)，即每日执行备份。</li></ul>
                     * 
                     */
                    std::string GetActiveWeekdays() const;

                    /**
                     * 设置<p>指定每周内执行自动备份的具体日期。</p><ul><li>格式：请输入 0-6 之间的数字代表周日至周六（例如：1 代表周一），多个日期请用英文逗号 , 分隔。</li><li>示例：输入 1,3,5 表示系统将在每周的周一、周三、周五执行备份。</li><li>默认值：不设置，则默认为全周期 (0,1,2,3,4,5,6)，即每日执行备份。</li></ul>
                     * @param _activeWeekdays <p>指定每周内执行自动备份的具体日期。</p><ul><li>格式：请输入 0-6 之间的数字代表周日至周六（例如：1 代表周一），多个日期请用英文逗号 , 分隔。</li><li>示例：输入 1,3,5 表示系统将在每周的周一、周三、周五执行备份。</li><li>默认值：不设置，则默认为全周期 (0,1,2,3,4,5,6)，即每日执行备份。</li></ul>
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
                     * 获取<p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。待废弃，使用LongTermInterval</p>
                     * @return LongTermUnit <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。待废弃，使用LongTermInterval</p>
                     * 
                     */
                    std::string GetLongTermUnit() const;

                    /**
                     * 设置<p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。待废弃，使用LongTermInterval</p>
                     * @param _longTermUnit <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。待废弃，使用LongTermInterval</p>
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
                     * 获取<p>指定用于长期保留的具体备份日期。此设置仅在 <strong>LongTermUnit</strong> 被设为<strong>weekly</strong> 或 <strong>monthly</strong> 时生效。</p><ul><li>按周（weekly）保留：请输入 0-6 之间的数字来代表周日至周六。多个日期请用英文逗号分隔。</li><li>按月（monthly）保留：请输入 1-31 之间的数字来代表月份中的具体日期。多个日期请用英文逗号分隔。</li></ul>
                     * @return LongTermActiveDays <p>指定用于长期保留的具体备份日期。此设置仅在 <strong>LongTermUnit</strong> 被设为<strong>weekly</strong> 或 <strong>monthly</strong> 时生效。</p><ul><li>按周（weekly）保留：请输入 0-6 之间的数字来代表周日至周六。多个日期请用英文逗号分隔。</li><li>按月（monthly）保留：请输入 1-31 之间的数字来代表月份中的具体日期。多个日期请用英文逗号分隔。</li></ul>
                     * 
                     */
                    std::string GetLongTermActiveDays() const;

                    /**
                     * 设置<p>指定用于长期保留的具体备份日期。此设置仅在 <strong>LongTermUnit</strong> 被设为<strong>weekly</strong> 或 <strong>monthly</strong> 时生效。</p><ul><li>按周（weekly）保留：请输入 0-6 之间的数字来代表周日至周六。多个日期请用英文逗号分隔。</li><li>按月（monthly）保留：请输入 1-31 之间的数字来代表月份中的具体日期。多个日期请用英文逗号分隔。</li></ul>
                     * @param _longTermActiveDays <p>指定用于长期保留的具体备份日期。此设置仅在 <strong>LongTermUnit</strong> 被设为<strong>weekly</strong> 或 <strong>monthly</strong> 时生效。</p><ul><li>按周（weekly）保留：请输入 0-6 之间的数字来代表周日至周六。多个日期请用英文逗号分隔。</li><li>按月（monthly）保留：请输入 1-31 之间的数字来代表月份中的具体日期。多个日期请用英文逗号分隔。</li></ul>
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
                     * 获取<p>长期备份保留时长。取值范围[30,1075]。</p>
                     * @return LongTermExpiredDays <p>长期备份保留时长。取值范围[30,1075]。</p>
                     * 
                     */
                    int64_t GetLongTermExpiredDays() const;

                    /**
                     * 设置<p>长期备份保留时长。取值范围[30,1075]。</p>
                     * @param _longTermExpiredDays <p>长期备份保留时长。取值范围[30,1075]。</p>
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
                     * 获取<p>增量备份保留时长。</p><ul><li>单位：天。</li><li>默认值：7天。</li><li>取值范围：[7,365]。</li></ul>
                     * @return OplogExpiredDays <p>增量备份保留时长。</p><ul><li>单位：天。</li><li>默认值：7天。</li><li>取值范围：[7,365]。</li></ul>
                     * 
                     */
                    int64_t GetOplogExpiredDays() const;

                    /**
                     * 设置<p>增量备份保留时长。</p><ul><li>单位：天。</li><li>默认值：7天。</li><li>取值范围：[7,365]。</li></ul>
                     * @param _oplogExpiredDays <p>增量备份保留时长。</p><ul><li>单位：天。</li><li>默认值：7天。</li><li>取值范围：[7,365]。</li></ul>
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
                     * 获取<p>指定备份版本。</p><ul><li>旧版本备份：0。</li><li>开启高级备份：1。</li></ul>
                     * @return BackupVersion <p>指定备份版本。</p><ul><li>旧版本备份：0。</li><li>开启高级备份：1。</li></ul>
                     * 
                     */
                    int64_t GetBackupVersion() const;

                    /**
                     * 设置<p>指定备份版本。</p><ul><li>旧版本备份：0。</li><li>开启高级备份：1。</li></ul>
                     * @param _backupVersion <p>指定备份版本。</p><ul><li>旧版本备份：0。</li><li>开启高级备份：1。</li></ul>
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
                     * 获取<p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。待废弃,使用AlertThreshold</p>
                     * @return AlarmWaterLevel <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。待废弃,使用AlertThreshold</p>
                     * 
                     */
                    int64_t GetAlarmWaterLevel() const;

                    /**
                     * 设置<p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。待废弃,使用AlertThreshold</p>
                     * @param _alarmWaterLevel <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。待废弃,使用AlertThreshold</p>
                     * 
                     */
                    void SetAlarmWaterLevel(const int64_t& _alarmWaterLevel);

                    /**
                     * 判断参数 AlarmWaterLevel 是否已赋值
                     * @return AlarmWaterLevel 是否已赋值
                     * 
                     */
                    bool AlarmWaterLevelHasBeenSet() const;

                    /**
                     * 获取<p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。</p>
                     * @return LongTermInterval <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。</p>
                     * 
                     */
                    std::string GetLongTermInterval() const;

                    /**
                     * 设置<p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。</p>
                     * @param _longTermInterval <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。</p>
                     * 
                     */
                    void SetLongTermInterval(const std::string& _longTermInterval);

                    /**
                     * 判断参数 LongTermInterval 是否已赋值
                     * @return LongTermInterval 是否已赋值
                     * 
                     */
                    bool LongTermIntervalHasBeenSet() const;

                    /**
                     * 获取<p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。</p>
                     * @return AlertThreshold <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。</p>
                     * 
                     */
                    int64_t GetAlertThreshold() const;

                    /**
                     * 设置<p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。</p>
                     * @param _alertThreshold <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。</p>
                     * 
                     */
                    void SetAlertThreshold(const int64_t& _alertThreshold);

                    /**
                     * 判断参数 AlertThreshold 是否已赋值
                     * @return AlertThreshold 是否已赋值
                     * 
                     */
                    bool AlertThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>设置自动备份开始时间。取值范围为：[0,23]，例如：该参数设置为2，表示02:00开始备份。</p>
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * <p>指定每日自动备份频率。</p><ul><li>12: 每日备份2次，间隔约12小时。</li><li>24: 每日备份1次（默认），间隔约24小时。</li></ul>
                     */
                    uint64_t m_backupFrequency;
                    bool m_backupFrequencyHasBeenSet;

                    /**
                     * <p>设置自动备份发生错误时，是否发送失败告警。</p><ul><li>true：发送。</li><li>false：不发送。</li></ul>
                     */
                    bool m_notify;
                    bool m_notifyHasBeenSet;

                    /**
                     * <p>指定备份数据保留时长。</p><ul><li>单位：天，默认为 7 天。</li><li>取值范围：[7,365]。</li></ul>
                     */
                    uint64_t m_backupRetentionPeriod;
                    bool m_backupRetentionPeriodHasBeenSet;

                    /**
                     * <p>指定每周内执行自动备份的具体日期。</p><ul><li>格式：请输入 0-6 之间的数字代表周日至周六（例如：1 代表周一），多个日期请用英文逗号 , 分隔。</li><li>示例：输入 1,3,5 表示系统将在每周的周一、周三、周五执行备份。</li><li>默认值：不设置，则默认为全周期 (0,1,2,3,4,5,6)，即每日执行备份。</li></ul>
                     */
                    std::string m_activeWeekdays;
                    bool m_activeWeekdaysHasBeenSet;

                    /**
                     * <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。待废弃，使用LongTermInterval</p>
                     */
                    std::string m_longTermUnit;
                    bool m_longTermUnitHasBeenSet;

                    /**
                     * <p>指定用于长期保留的具体备份日期。此设置仅在 <strong>LongTermUnit</strong> 被设为<strong>weekly</strong> 或 <strong>monthly</strong> 时生效。</p><ul><li>按周（weekly）保留：请输入 0-6 之间的数字来代表周日至周六。多个日期请用英文逗号分隔。</li><li>按月（monthly）保留：请输入 1-31 之间的数字来代表月份中的具体日期。多个日期请用英文逗号分隔。</li></ul>
                     */
                    std::string m_longTermActiveDays;
                    bool m_longTermActiveDaysHasBeenSet;

                    /**
                     * <p>长期备份保留时长。取值范围[30,1075]。</p>
                     */
                    int64_t m_longTermExpiredDays;
                    bool m_longTermExpiredDaysHasBeenSet;

                    /**
                     * <p>增量备份保留时长。</p><ul><li>单位：天。</li><li>默认值：7天。</li><li>取值范围：[7,365]。</li></ul>
                     */
                    int64_t m_oplogExpiredDays;
                    bool m_oplogExpiredDaysHasBeenSet;

                    /**
                     * <p>指定备份版本。</p><ul><li>旧版本备份：0。</li><li>开启高级备份：1。</li></ul>
                     */
                    int64_t m_backupVersion;
                    bool m_backupVersionHasBeenSet;

                    /**
                     * <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。待废弃,使用AlertThreshold</p>
                     */
                    int64_t m_alarmWaterLevel;
                    bool m_alarmWaterLevelHasBeenSet;

                    /**
                     * <p>长期保留周期。支持按周或按月选择特定日期的备份（例如，每月1日、15日的备份数据），将其保留更长周期。- 不开启（默认）：不启用长期保留功能。- 按周保留： 指定为 weekly。- 按月保留： 指定为 monthly。</p>
                     */
                    std::string m_longTermInterval;
                    bool m_longTermIntervalHasBeenSet;

                    /**
                     * <p>设置备份数据集存储空间使用率的告警阈值。- 单位：%。-  默认值：100。- 取值范围：[50,300]。</p>
                     */
                    int64_t m_alertThreshold;
                    bool m_alertThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETBACKUPRULESREQUEST_H_
