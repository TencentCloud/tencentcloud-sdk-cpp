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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_

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
                * ModifyBackupConfig请求参数结构体
                */
                class ModifyBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyBackupConfigRequest();
                    ~ModifyBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
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
                     * 获取备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * @return ExpireDays 备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * 
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * @param _expireDays 备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * 
                     */
                    void SetExpireDays(const int64_t& _expireDays);

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     * 
                     */
                    bool ExpireDaysHasBeenSet() const;

                    /**
                     * 获取(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * @return StartTime (将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * @param _startTime (将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取自动备份方式，仅支持：physical - 物理冷备
                     * @return BackupMethod 自动备份方式，仅支持：physical - 物理冷备
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置自动备份方式，仅支持：physical - 物理冷备
                     * @param _backupMethod 自动备份方式，仅支持：physical - 物理冷备
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * @return BinlogExpireDays binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * 
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 设置binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * @param _binlogExpireDays binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * 
                     */
                    void SetBinlogExpireDays(const int64_t& _binlogExpireDays);

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     * 
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * @return BackupTimeWindow 备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * 
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 设置备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * @param _backupTimeWindow 备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * 
                     */
                    void SetBackupTimeWindow(const CommonTimeWindow& _backupTimeWindow);

                    /**
                     * 判断参数 BackupTimeWindow 是否已赋值
                     * @return BackupTimeWindow 是否已赋值
                     * 
                     */
                    bool BackupTimeWindowHasBeenSet() const;

                    /**
                     * 获取定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。首次开启定期保留策略时，BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount，StartBackupPeriodSaveDate参数为必填项，否则定期保留策略不会生效
                     * @return EnableBackupPeriodSave 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。首次开启定期保留策略时，BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount，StartBackupPeriodSaveDate参数为必填项，否则定期保留策略不会生效
                     * 
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 设置定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。首次开启定期保留策略时，BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount，StartBackupPeriodSaveDate参数为必填项，否则定期保留策略不会生效
                     * @param _enableBackupPeriodSave 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。首次开启定期保留策略时，BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount，StartBackupPeriodSaveDate参数为必填项，否则定期保留策略不会生效
                     * 
                     */
                    void SetEnableBackupPeriodSave(const std::string& _enableBackupPeriodSave);

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     * 
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * @return EnableBackupPeriodLongTermSave 长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * 
                     */
                    std::string GetEnableBackupPeriodLongTermSave() const;

                    /**
                     * 设置长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * @param _enableBackupPeriodLongTermSave 长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * 
                     */
                    void SetEnableBackupPeriodLongTermSave(const std::string& _enableBackupPeriodLongTermSave);

                    /**
                     * 判断参数 EnableBackupPeriodLongTermSave 是否已赋值
                     * @return EnableBackupPeriodLongTermSave 是否已赋值
                     * 
                     */
                    bool EnableBackupPeriodLongTermSaveHasBeenSet() const;

                    /**
                     * 获取定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @return BackupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * 
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 设置定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @param _backupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * 
                     */
                    void SetBackupPeriodSaveDays(const int64_t& _backupPeriodSaveDays);

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
                     * 设置定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * @param _backupPeriodSaveInterval 定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * 
                     */
                    void SetBackupPeriodSaveInterval(const std::string& _backupPeriodSaveInterval);

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
                     * 设置定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * @param _backupPeriodSaveCount 定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * 
                     */
                    void SetBackupPeriodSaveCount(const int64_t& _backupPeriodSaveCount);

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
                     * 设置定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * @param _startBackupPeriodSaveDate 定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartBackupPeriodSaveDate(const std::string& _startBackupPeriodSaveDate);

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     * 
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

                    /**
                     * 获取是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @return EnableBackupArchive 是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    std::string GetEnableBackupArchive() const;

                    /**
                     * 设置是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @param _enableBackupArchive 是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    void SetEnableBackupArchive(const std::string& _enableBackupArchive);

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
                     * 设置数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     * @param _backupArchiveDays 数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     * 
                     */
                    void SetBackupArchiveDays(const int64_t& _backupArchiveDays);

                    /**
                     * 判断参数 BackupArchiveDays 是否已赋值
                     * @return BackupArchiveDays 是否已赋值
                     * 
                     */
                    bool BackupArchiveDaysHasBeenSet() const;

                    /**
                     * 获取日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * @return BinlogArchiveDays 日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * 
                     */
                    int64_t GetBinlogArchiveDays() const;

                    /**
                     * 设置日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * @param _binlogArchiveDays 日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     * 
                     */
                    void SetBinlogArchiveDays(const int64_t& _binlogArchiveDays);

                    /**
                     * 判断参数 BinlogArchiveDays 是否已赋值
                     * @return BinlogArchiveDays 是否已赋值
                     * 
                     */
                    bool BinlogArchiveDaysHasBeenSet() const;

                    /**
                     * 获取是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @return EnableBinlogArchive 是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    std::string GetEnableBinlogArchive() const;

                    /**
                     * 设置是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @param _enableBinlogArchive 是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    void SetEnableBinlogArchive(const std::string& _enableBinlogArchive);

                    /**
                     * 判断参数 EnableBinlogArchive 是否已赋值
                     * @return EnableBinlogArchive 是否已赋值
                     * 
                     */
                    bool EnableBinlogArchiveHasBeenSet() const;

                    /**
                     * 获取是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @return EnableBackupStandby 是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    std::string GetEnableBackupStandby() const;

                    /**
                     * 设置是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @param _enableBackupStandby 是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    void SetEnableBackupStandby(const std::string& _enableBackupStandby);

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
                     * 设置数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * @param _backupStandbyDays 数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * 
                     */
                    void SetBackupStandbyDays(const int64_t& _backupStandbyDays);

                    /**
                     * 判断参数 BackupStandbyDays 是否已赋值
                     * @return BackupStandbyDays 是否已赋值
                     * 
                     */
                    bool BackupStandbyDaysHasBeenSet() const;

                    /**
                     * 获取是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @return EnableBinlogStandby 是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    std::string GetEnableBinlogStandby() const;

                    /**
                     * 设置是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * @param _enableBinlogStandby 是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     * 
                     */
                    void SetEnableBinlogStandby(const std::string& _enableBinlogStandby);

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
                     * 设置日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * @param _binlogStandbyDays 日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     * 
                     */
                    void SetBinlogStandbyDays(const int64_t& _binlogStandbyDays);

                    /**
                     * 判断参数 BinlogStandbyDays 是否已赋值
                     * @return BinlogStandbyDays 是否已赋值
                     * 
                     */
                    bool BinlogStandbyDaysHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

                    /**
                     * (将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 自动备份方式，仅支持：physical - 物理冷备
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * 备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。首次开启定期保留策略时，BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount，StartBackupPeriodSaveDate参数为必填项，否则定期保留策略不会生效
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * 长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     */
                    std::string m_enableBackupPeriodLongTermSave;
                    bool m_enableBackupPeriodLongTermSaveHasBeenSet;

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
                     * 是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     */
                    std::string m_enableBackupArchive;
                    bool m_enableBackupArchiveHasBeenSet;

                    /**
                     * 数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数
                     */
                    int64_t m_backupArchiveDays;
                    bool m_backupArchiveDaysHasBeenSet;

                    /**
                     * 日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * 是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

                    /**
                     * 是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
                     */
                    std::string m_enableBackupStandby;
                    bool m_enableBackupStandbyHasBeenSet;

                    /**
                     * 数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数
                     */
                    int64_t m_backupStandbyDays;
                    bool m_backupStandbyDaysHasBeenSet;

                    /**
                     * 是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。
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

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
