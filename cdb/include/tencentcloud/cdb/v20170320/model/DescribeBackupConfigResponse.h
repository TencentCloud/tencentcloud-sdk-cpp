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
                     * 获取<p>自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
                     * @return StartTimeMin <p>自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
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
                     * 获取<p>自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
                     * @return StartTimeMax <p>自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
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
                     * 获取<p>备份文件保留时间，单位为天。</p>
                     * @return BackupExpireDays <p>备份文件保留时间，单位为天。</p>
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
                     * 获取<p>备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。</p>
                     * @return BackupMethod <p>备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。</p>
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
                     * 获取<p>Binlog 文件保留时间，单位为天。</p>
                     * @return BinlogExpireDays <p>Binlog 文件保留时间，单位为天。</p>
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
                     * 获取<p>实例自动备份的时间窗。</p>
                     * @return BackupTimeWindow <p>实例自动备份的时间窗。</p>
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
                     * 获取<p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off</p>
                     * @return EnableBackupPeriodSave <p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off</p>
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
                     * 获取<p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
                     * @return BackupPeriodSaveDays <p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
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
                     * 获取<p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
                     * @return BackupPeriodSaveInterval <p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
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
                     * 获取<p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
                     * @return BackupPeriodSaveCount <p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
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
                     * 获取<p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
                     * @return StartBackupPeriodSaveDate <p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
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
                     * 获取<p>是否开启数据备份归档策略，off-关闭，on-打开，默认为off</p>
                     * @return EnableBackupArchive <p>是否开启数据备份归档策略，off-关闭，on-打开，默认为off</p>
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
                     * 获取<p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     * @return BackupArchiveDays <p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
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
                     * 获取<p>是否开启日志备份归档策略，off-关闭，on-打开，默认为off</p>
                     * @return EnableBinlogArchive <p>是否开启日志备份归档策略，off-关闭，on-打开，默认为off</p>
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
                     * 获取<p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     * @return BinlogArchiveDays <p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
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
                     * 获取<p>是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off</p>
                     * @return EnableBackupStandby <p>是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off</p>
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
                     * 获取<p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @return BackupStandbyDays <p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
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
                     * 获取<p>是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off</p>
                     * @return EnableBinlogStandby <p>是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off</p>
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
                     * 获取<p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @return BinlogStandbyDays <p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
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
                     * <p>自动备份开始的最早时间点，单位为时刻。例如，2 - 凌晨 2:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
                     */
                    int64_t m_startTimeMin;
                    bool m_startTimeMinHasBeenSet;

                    /**
                     * <p>自动备份开始的最晚时间点，单位为时刻。例如，6 - 凌晨 6:00。（该字段已废弃，建议使用 BackupTimeWindow 字段）</p>
                     */
                    int64_t m_startTimeMax;
                    bool m_startTimeMaxHasBeenSet;

                    /**
                     * <p>备份文件保留时间，单位为天。</p>
                     */
                    int64_t m_backupExpireDays;
                    bool m_backupExpireDaysHasBeenSet;

                    /**
                     * <p>备份方式，可能的值为：physical - 物理备份，logical - 逻辑备份。</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>Binlog 文件保留时间，单位为天。</p>
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * <p>实例自动备份的时间窗。</p>
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * <p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off</p>
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * <p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
                     */
                    int64_t m_backupPeriodSaveDays;
                    bool m_backupPeriodSaveDaysHasBeenSet;

                    /**
                     * <p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
                     */
                    std::string m_backupPeriodSaveInterval;
                    bool m_backupPeriodSaveIntervalHasBeenSet;

                    /**
                     * <p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
                     */
                    int64_t m_backupPeriodSaveCount;
                    bool m_backupPeriodSaveCountHasBeenSet;

                    /**
                     * <p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
                     */
                    std::string m_startBackupPeriodSaveDate;
                    bool m_startBackupPeriodSaveDateHasBeenSet;

                    /**
                     * <p>是否开启数据备份归档策略，off-关闭，on-打开，默认为off</p>
                     */
                    std::string m_enableBackupArchive;
                    bool m_enableBackupArchiveHasBeenSet;

                    /**
                     * <p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     */
                    int64_t m_backupArchiveDays;
                    bool m_backupArchiveDaysHasBeenSet;

                    /**
                     * <p>是否开启日志备份归档策略，off-关闭，on-打开，默认为off</p>
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

                    /**
                     * <p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * <p>是否开启数据备份标准存储策略，off-关闭，on-打开，默认为off</p>
                     */
                    std::string m_enableBackupStandby;
                    bool m_enableBackupStandbyHasBeenSet;

                    /**
                     * <p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     */
                    int64_t m_backupStandbyDays;
                    bool m_backupStandbyDaysHasBeenSet;

                    /**
                     * <p>是否开启日志备份标准存储策略，off-关闭，on-打开，默认为off</p>
                     */
                    std::string m_enableBinlogStandby;
                    bool m_enableBinlogStandbyHasBeenSet;

                    /**
                     * <p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     */
                    int64_t m_binlogStandbyDays;
                    bool m_binlogStandbyDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPCONFIGRESPONSE_H_
