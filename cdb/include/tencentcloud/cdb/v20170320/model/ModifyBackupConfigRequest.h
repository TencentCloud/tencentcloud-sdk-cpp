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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     * @param InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例ID相同。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * @return ExpireDays 备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     * @param ExpireDays 备份文件的保留时间，单位为天。最小值为7天，最大值为1830天。
                     */
                    void SetExpireDays(const int64_t& _expireDays);

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     */
                    bool ExpireDaysHasBeenSet() const;

                    /**
                     * 获取(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * @return StartTime (将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     * @param StartTime (将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取自动备份方式，仅支持：physical - 物理冷备
                     * @return BackupMethod 自动备份方式，仅支持：physical - 物理冷备
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置自动备份方式，仅支持：physical - 物理冷备
                     * @param BackupMethod 自动备份方式，仅支持：physical - 物理冷备
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * @return BinlogExpireDays binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 设置binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     * @param BinlogExpireDays binlog的保留时间，单位为天。最小值为7天，最大值为1830天。该值的设置不能大于备份文件的保留时间。
                     */
                    void SetBinlogExpireDays(const int64_t& _binlogExpireDays);

                    /**
                     * 判断参数 BinlogExpireDays 是否已赋值
                     * @return BinlogExpireDays 是否已赋值
                     */
                    bool BinlogExpireDaysHasBeenSet() const;

                    /**
                     * 获取备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * @return BackupTimeWindow 备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 设置备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     * @param BackupTimeWindow 备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{"Monday": "", "Tuesday": "10:00-14:00", "Wednesday": "", "Thursday": "", "Friday": "", "Saturday": "", "Sunday": "10:00-14:00"}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）
                     */
                    void SetBackupTimeWindow(const CommonTimeWindow& _backupTimeWindow);

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
                     * 设置定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     * @param EnableBackupPeriodSave 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
                     */
                    void SetEnableBackupPeriodSave(const std::string& _enableBackupPeriodSave);

                    /**
                     * 判断参数 EnableBackupPeriodSave 是否已赋值
                     * @return EnableBackupPeriodSave 是否已赋值
                     */
                    bool EnableBackupPeriodSaveHasBeenSet() const;

                    /**
                     * 获取长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * @return EnableBackupPeriodLongTermSave 长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     */
                    std::string GetEnableBackupPeriodLongTermSave() const;

                    /**
                     * 设置长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     * @param EnableBackupPeriodLongTermSave 长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效
                     */
                    void SetEnableBackupPeriodLongTermSave(const std::string& _enableBackupPeriodLongTermSave);

                    /**
                     * 判断参数 EnableBackupPeriodLongTermSave 是否已赋值
                     * @return EnableBackupPeriodLongTermSave 是否已赋值
                     */
                    bool EnableBackupPeriodLongTermSaveHasBeenSet() const;

                    /**
                     * 获取定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @return BackupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 设置定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     * @param BackupPeriodSaveDays 定期保留最长天数，最小值：90，最大值：3650，默认值：1080
                     */
                    void SetBackupPeriodSaveDays(const int64_t& _backupPeriodSaveDays);

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
                     * 设置定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     * @param BackupPeriodSaveInterval 定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly
                     */
                    void SetBackupPeriodSaveInterval(const std::string& _backupPeriodSaveInterval);

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
                     * 设置定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     * @param BackupPeriodSaveCount 定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1
                     */
                    void SetBackupPeriodSaveCount(const int64_t& _backupPeriodSaveCount);

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
                     * 设置定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     * @param StartBackupPeriodSaveDate 定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss
                     */
                    void SetStartBackupPeriodSaveDate(const std::string& _startBackupPeriodSaveDate);

                    /**
                     * 判断参数 StartBackupPeriodSaveDate 是否已赋值
                     * @return StartBackupPeriodSaveDate 是否已赋值
                     */
                    bool StartBackupPeriodSaveDateHasBeenSet() const;

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
                     * 定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
