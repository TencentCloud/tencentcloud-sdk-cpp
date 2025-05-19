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
                     * @deprecated
                     */
                    int64_t GetStartTimeMin() const;

                    /**
                     * 判断参数 StartTimeMin 是否已赋值
                     * @return StartTimeMin 是否已赋值
                     * @deprecated
                     */
                    bool StartTimeMinHasBeenSet() const;

                    /**
                     * 获取自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     * @return StartTimeMax 自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）
                     * @deprecated
                     */
                    int64_t GetStartTimeMax() const;

                    /**
                     * 判断参数 StartTimeMax 是否已赋值
                     * @return StartTimeMax 是否已赋值
                     * @deprecated
                     */
                    bool StartTimeMaxHasBeenSet() const;

                    /**
                     * 获取备份文件保留时间，单位为天。
                     * @return BackupExpireDays 备份文件保留时间，单位为天。
                     * 
                     */
                    int64_t GetBackupExpireDays() const;

                    /**
                     * 判断参数 BackupExpireDays 是否已赋值
                     * @return BackupExpireDays 是否已赋值
                     * 
                     */
                    bool BackupExpireDaysHasBeenSet() const;

                    /**
                     * 获取备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。
                     * @return BackupMethod 备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Binlog 文件保留时间，单位为天。
                     * @return BinlogExpireDays Binlog 文件保留时间，单位为天。
                     * 
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     * 
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取实例自动备份的时间窗。
                     * @return BackupTimeWindow 实例自动备份的时间窗。
                     * 
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     * 
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                    /**
                     * 获取定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     * @return EnableBackupPeriodSave 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     * 
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     * 
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @return BackupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * 
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 判断参数 BackupPeriodSaveDays 是否已赋值
                     * @return BackupPeriodSaveDays 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveDaysHasBeenSet() const;

                    /**
                     * 获取定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * @return BackupPeriodSaveInterval 定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * 
                     */
                    std::string GetBackupPeriodSaveInterval() const;

                    /**
                     * 判断参数 BackupPeriodSaveInterval 是否已赋值
                     * @return BackupPeriodSaveInterval 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveIntervalHasBeenSet() const;

                    /**
                     * 获取定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * @return BackupPeriodSaveCount 定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * 
                     */
                    int64_t GetBackupPeriodSaveCount() const;

                    /**
                     * 判断参数 BackupPeriodSaveCount 是否已赋值
                     * @return BackupPeriodSaveCount 是否已赋值
                     * 
                     */
                    bool BackupPeriodSaveCountHasBeenSet() const;

                    /**
                     * 获取定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * @return StartBackupPeriodSaveDate 定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartBackupPeriodSaveDate() const;

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     * 
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

                    /**
                     * 获取是否开启数据备份归档策略，off-关闭，on-打开，默认为off
                     * @return EnableBackupArchive 是否开启数据备份归档策略，off-关闭，on-打开，默认为off
                     * 
                     */
                    std::string GetEnableBackupArchive() const;

                    /**
                     * 判断参数 EnableBackupArchive 是否已赋值
                     * @return EnableBackupArchive 是否已赋值
                     * 
                     */
                    bool EnableBackupArchiveHasBeenSet() const;

                    /**
                     * 获取数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     * @return BackupArchiveDays 数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     * 
                     */
                    int64_t GetBackupArchiveDays() const;

                    /**
                     * 判断参数 BackupArchiveDays 是否已赋值
                     * @return BackupArchiveDays 是否已赋值
                     * 
                     */
                    bool BackupArchiveDaysHasBeenSet() const;

                    /**
                     * 获取是否开启日志备份归档策略，off-关闭，on-打开，默认为off
                     * @return EnableBinlogArchive 是否开启日志备份归档策略，off-关闭，on-打开，默认为off
                     * 
                     */
                    std::string GetEnableBinlogArchive() const;

                    /**
                     * 判断参数 EnableBinlogArchive 是否已赋值
                     * @return EnableBinlogArchive 是否已赋值
                     * 
                     */
                    bool EnableBinlogArchiveHasBeenSet() const;

                    /**
                     * 获取日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * @return BinlogArchiveDays 日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * 
                     */
                    int64_t GetBinlogArchiveDays() const;

                    /**
                     * 判断参数 BinlogArchiveDays 是否已赋值
                     * @return BinlogArchiveDays 是否已赋值
                     * 
                     */
                    bool BinlogArchiveDaysHasBeenSet() const;

                    /**
                     * 获取是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off
                     * @return EnableBackupStandby 是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off
                     * 
                     */
                    std::string GetEnableBackupStandby() const;

                    /**
                     * 判断参数 EnableBackupStandby 是否已赋值
                     * @return EnableBackupStandby 是否已赋值
                     * 
                     */
                    bool EnableBackupStandbyHasBeenSet() const;

                    /**
                     * 获取数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * @return BackupStandbyDays 数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * 
                     */
                    int64_t GetBackupStandbyDays() const;

                    /**
                     * 判断参数 BackupStandbyDays 是否已赋值
                     * @return BackupStandbyDays 是否已赋值
                     * 
                     */
                    bool BackupStandbyDaysHasBeenSet() const;

                    /**
                     * 获取是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off
                     * @return EnableBinlogStandby 是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off
                     * 
                     */
                    std::string GetEnableBinlogStandby() const;

                    /**
                     * 判断参数 EnableBinlogStandby 是否已赋值
                     * @return EnableBinlogStandby 是否已赋值
                     * 
                     */
                    bool EnableBinlogStandbyHasBeenSet() const;

                    /**
                     * 获取日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * @return BinlogStandbyDays 日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * 
                     */
                    int64_t GetBinlogStandbyDays() const;

                    /**
                     * 判断参数 BinlogStandbyDays 是否已赋值
                     * @return BinlogStandbyDays 是否已赋值
                     * 
                     */
                    bool BinlogStandbyDaysHasBeenSet() const;

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

                    /**
                     * 是否开启数据备份归档策略，off-关闭，on-打开，默认为off
                     */
                    std::string m_enableBackupArchive;
                    bool m_enableBackupArchiveHasBeenSet;

                    /**
                     * 数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     */
                    int64_t m_backupArchiveDays;
                    bool m_backupArchiveDaysHasBeenSet;

                    /**
                     * 是否开启日志备份归档策略，off-关闭，on-打开，默认为off
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

                    /**
                     * 日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * 是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off
                     */
                    std::string m_enableBackupStandby;
                    bool m_enableBackupStandbyHasBeenSet;

                    /**
                     * 数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     */
                    int64_t m_backupStandbyDays;
                    bool m_backupStandbyDaysHasBeenSet;

                    /**
                     * 是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off
                     */
                    std::string m_enableBinlogStandby;
                    bool m_enableBinlogStandbyHasBeenSet;

                    /**
                     * 日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     */
                    int64_t m_binlogStandbyDays;
                    bool m_binlogStandbyDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
