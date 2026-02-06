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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/BackupTotalSize.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeBackupRules返回参数结构体
                */
                class DescribeBackupRulesResponse : public AbstractModel
                {
                public:
                    DescribeBackupRulesResponse();
                    ~DescribeBackupRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份数据保留期限。单位为：天。
                     * @return BackupSaveTime 备份数据保留期限。单位为：天。
                     * 
                     */
                    uint64_t GetBackupSaveTime() const;

                    /**
                     * 判断参数 BackupSaveTime 是否已赋值
                     * @return BackupSaveTime 是否已赋值
                     * 
                     */
                    bool BackupSaveTimeHasBeenSet() const;

                    /**
                     * 获取备份频率。备份时间间隔，单位小时。取值12，24
                     * @return BackupFrequency 备份频率。备份时间间隔，单位小时。取值12，24
                     * 
                     */
                    int64_t GetBackupFrequency() const;

                    /**
                     * 判断参数 BackupFrequency 是否已赋值
                     * @return BackupFrequency 是否已赋值
                     * 
                     */
                    bool BackupFrequencyHasBeenSet() const;

                    /**
                     * 获取自动备份开始时间。
                     * @return BackupTime 自动备份开始时间。
                     * 
                     */
                    uint64_t GetBackupTime() const;

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

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
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取周几备份，0-6，逗号分割
                     * @return ActiveWeekdays 周几备份，0-6，逗号分割
                     * 
                     */
                    std::string GetActiveWeekdays() const;

                    /**
                     * 判断参数 ActiveWeekdays 是否已赋值
                     * @return ActiveWeekdays 是否已赋值
                     * 
                     */
                    bool ActiveWeekdaysHasBeenSet() const;

                    /**
                     * 获取长期备份周期。weekly-按周，monthly-按月，空不开启。
                     * @return LongTermInterval 长期备份周期。weekly-按周，monthly-按月，空不开启。
                     * 
                     */
                    std::string GetLongTermInterval() const;

                    /**
                     * 判断参数 LongTermInterval 是否已赋值
                     * @return LongTermInterval 是否已赋值
                     * 
                     */
                    bool LongTermIntervalHasBeenSet() const;

                    /**
                     * 获取长期备份的日期，周0-6，月1-31
                     * @return LongTermActiveDays 长期备份的日期，周0-6，月1-31
                     * 
                     */
                    std::string GetLongTermActiveDays() const;

                    /**
                     * 判断参数 LongTermActiveDays 是否已赋值
                     * @return LongTermActiveDays 是否已赋值
                     * 
                     */
                    bool LongTermActiveDaysHasBeenSet() const;

                    /**
                     * 获取长期备份保留时间
                     * @return LongTermExpiredDays 长期备份保留时间
                     * 
                     */
                    int64_t GetLongTermExpiredDays() const;

                    /**
                     * 判断参数 LongTermExpiredDays 是否已赋值
                     * @return LongTermExpiredDays 是否已赋值
                     * 
                     */
                    bool LongTermExpiredDaysHasBeenSet() const;

                    /**
                     * 获取增量备份保留时间
                     * @return OplogExpiredDays 增量备份保留时间
                     * 
                     */
                    int64_t GetOplogExpiredDays() const;

                    /**
                     * 判断参数 OplogExpiredDays 是否已赋值
                     * @return OplogExpiredDays 是否已赋值
                     * 
                     */
                    bool OplogExpiredDaysHasBeenSet() const;

                    /**
                     * 获取备份版本号。0-旧备份方式，1-高级备份
                     * @return BackupVersion 备份版本号。0-旧备份方式，1-高级备份
                     * 
                     */
                    int64_t GetBackupVersion() const;

                    /**
                     * 判断参数 BackupVersion 是否已赋值
                     * @return BackupVersion 是否已赋值
                     * 
                     */
                    bool BackupVersionHasBeenSet() const;

                    /**
                     * 获取备份大小
                     * @return BackupTotalSize 备份大小
                     * 
                     */
                    BackupTotalSize GetBackupTotalSize() const;

                    /**
                     * 判断参数 BackupTotalSize 是否已赋值
                     * @return BackupTotalSize 是否已赋值
                     * 
                     */
                    bool BackupTotalSizeHasBeenSet() const;

                    /**
                     * 获取告警额度
                     * @return AlertThreshold 告警额度
                     * 
                     */
                    int64_t GetAlertThreshold() const;

                    /**
                     * 判断参数 AlertThreshold 是否已赋值
                     * @return AlertThreshold 是否已赋值
                     * 
                     */
                    bool AlertThresholdHasBeenSet() const;

                private:

                    /**
                     * 备份数据保留期限。单位为：天。
                     */
                    uint64_t m_backupSaveTime;
                    bool m_backupSaveTimeHasBeenSet;

                    /**
                     * 备份频率。备份时间间隔，单位小时。取值12，24
                     */
                    int64_t m_backupFrequency;
                    bool m_backupFrequencyHasBeenSet;

                    /**
                     * 自动备份开始时间。
                     */
                    uint64_t m_backupTime;
                    bool m_backupTimeHasBeenSet;

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
                     * 周几备份，0-6，逗号分割
                     */
                    std::string m_activeWeekdays;
                    bool m_activeWeekdaysHasBeenSet;

                    /**
                     * 长期备份周期。weekly-按周，monthly-按月，空不开启。
                     */
                    std::string m_longTermInterval;
                    bool m_longTermIntervalHasBeenSet;

                    /**
                     * 长期备份的日期，周0-6，月1-31
                     */
                    std::string m_longTermActiveDays;
                    bool m_longTermActiveDaysHasBeenSet;

                    /**
                     * 长期备份保留时间
                     */
                    int64_t m_longTermExpiredDays;
                    bool m_longTermExpiredDaysHasBeenSet;

                    /**
                     * 增量备份保留时间
                     */
                    int64_t m_oplogExpiredDays;
                    bool m_oplogExpiredDaysHasBeenSet;

                    /**
                     * 备份版本号。0-旧备份方式，1-高级备份
                     */
                    int64_t m_backupVersion;
                    bool m_backupVersionHasBeenSet;

                    /**
                     * 备份大小
                     */
                    BackupTotalSize m_backupTotalSize;
                    bool m_backupTotalSizeHasBeenSet;

                    /**
                     * 告警额度
                     */
                    int64_t m_alertThreshold;
                    bool m_alertThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEBACKUPRULESRESPONSE_H_
