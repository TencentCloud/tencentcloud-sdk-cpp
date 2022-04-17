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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CommonTimeWindow.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupConfig返回参数结构体
                */
                class DescribeBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeBackupConfigResponse();
                    ~DescribeBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     * @return StartTimeMin 自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     */
                    int64_t GetStartTimeMin() const;

                    /**
                     * 判断参数 StartTimeMin 是否已赋值
                     * @return StartTimeMin 是否已赋值
                     */
                    bool StartTimeMinHasBeenSet() const;

                    /**
                     * 获取自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     * @return StartTimeMax 自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     */
                    int64_t GetStartTimeMax() const;

                    /**
                     * 判断参数 StartTimeMax 是否已赋值
                     * @return StartTimeMax 是否已赋值
                     */
                    bool StartTimeMaxHasBeenSet() const;

                    /**
                     * 获取备份文件保留时间，单位为天。
                     * @return BackupExpireDays 备份文件保留时间，单位为天。
                     */
                    int64_t GetBackupExpireDays() const;

                    /**
                     * 判断参数 BackupExpireDays 是否已赋值
                     * @return BackupExpireDays 是否已赋值
                     */
                    bool BackupExpireDaysHasBeenSet() const;

                    /**
                     * 获取备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。
                     * @return BackupMethod 备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog 文件保留时间，单位为天。
                     * @return BinlogExpireDays Binlog 文件保留时间，单位为天。
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取实例自动备份的时间窗。
                     * @return BackupTimeWindow 实例自动备份的时间窗。
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                    /**
                     * 获取定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     * @return EnableBackupPeriodSave 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @return BackupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 判断参数 BackupPeriodSaveDays 是否已赋值
                     * @return BackupPeriodSaveDays 是否已赋值
                     */
                    bool BackupPeriodSaveDaysHasBeenSet() const;

                    /**
                     * 获取定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * @return BackupPeriodSaveInterval 定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     */
                    std::string GetBackupPeriodSaveInterval() const;

                    /**
                     * 判断参数 BackupPeriodSaveInterval 是否已赋值
                     * @return BackupPeriodSaveInterval 是否已赋值
                     */
                    bool BackupPeriodSaveIntervalHasBeenSet() const;

                    /**
                     * 获取定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * @return BackupPeriodSaveCount 定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     */
                    int64_t GetBackupPeriodSaveCount() const;

                    /**
                     * 判断参数 BackupPeriodSaveCount 是否已赋值
                     * @return BackupPeriodSaveCount 是否已赋值
                     */
                    bool BackupPeriodSaveCountHasBeenSet() const;

                    /**
                     * 获取定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * @return StartBackupPeriodSaveDate 定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     */
                    std::string GetStartBackupPeriodSaveDate() const;

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

                private:

                    /**
                     * 自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     */
                    int64_t m_startTimeMin;
                    bool m_startTimeMinHasBeenSet;

                    /**
                     * 自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     */
                    int64_t m_startTimeMax;
                    bool m_startTimeMaxHasBeenSet;

                    /**
                     * 备份文件保留时间，单位为天。
                     */
                    int64_t m_backupExpireDays;
                    bool m_backupExpireDaysHasBeenSet;

                    /**
                     * 备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Binlog 文件保留时间，单位为天。
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * 实例自动备份的时间窗。
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     */
                    int64_t m_backupPeriodSaveDays;
                    bool m_backupPeriodSaveDaysHasBeenSet;

                    /**
                     * 定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     */
                    std::string m_backupPeriodSaveInterval;
                    bool m_backupPeriodSaveIntervalHasBeenSet;

                    /**
                     * 定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     */
                    int64_t m_backupPeriodSaveCount;
                    bool m_backupPeriodSaveCountHasBeenSet;

                    /**
                     * 定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     */
                    std::string m_startBackupPeriodSaveDate;
                    bool m_startBackupPeriodSaveDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
