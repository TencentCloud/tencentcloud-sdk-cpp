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
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
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
                     * 获取<p>数据备份文件的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版数据备份文件可以保留7天 - 1830天。</li><li>MySQL 单节点（云盘）数据备份文件可以保留7天 - 30天。</li></ol>
                     * @return ExpireDays <p>数据备份文件的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版数据备份文件可以保留7天 - 1830天。</li><li>MySQL 单节点（云盘）数据备份文件可以保留7天 - 30天。</li></ol>
                     * 
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置<p>数据备份文件的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版数据备份文件可以保留7天 - 1830天。</li><li>MySQL 单节点（云盘）数据备份文件可以保留7天 - 30天。</li></ol>
                     * @param _expireDays <p>数据备份文件的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版数据备份文件可以保留7天 - 1830天。</li><li>MySQL 单节点（云盘）数据备份文件可以保留7天 - 30天。</li></ol>
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
                     * 获取<p>(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。</p>
                     * @return StartTime <p>(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。</p>
                     * @param _startTime <p>(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。</p>
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
                     * 获取<p>自动备份方式，仅支持：physical - 物理冷备</p>
                     * @return BackupMethod <p>自动备份方式，仅支持：physical - 物理冷备</p>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>自动备份方式，仅支持：physical - 物理冷备</p>
                     * @param _backupMethod <p>自动备份方式，仅支持：physical - 物理冷备</p>
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
                     * 获取<p>binlog 的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版日志备份文件可以保留7天 - 3650天。</li><li>MySQL 单节点（云盘）日志备份文件可以保留7天 - 30天。</li></ol>
                     * @return BinlogExpireDays <p>binlog 的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版日志备份文件可以保留7天 - 3650天。</li><li>MySQL 单节点（云盘）日志备份文件可以保留7天 - 30天。</li></ol>
                     * 
                     */
                    int64_t GetBinlogExpireDays() const;

                    /**
                     * 设置<p>binlog 的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版日志备份文件可以保留7天 - 3650天。</li><li>MySQL 单节点（云盘）日志备份文件可以保留7天 - 30天。</li></ol>
                     * @param _binlogExpireDays <p>binlog 的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版日志备份文件可以保留7天 - 3650天。</li><li>MySQL 单节点（云盘）日志备份文件可以保留7天 - 30天。</li></ol>
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
                     * 获取<p>备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{&quot;Monday&quot;: &quot;&quot;, &quot;Tuesday&quot;: &quot;10:00-14:00&quot;, &quot;Wednesday&quot;: &quot;&quot;, &quot;Thursday&quot;: &quot;&quot;, &quot;Friday&quot;: &quot;&quot;, &quot;Saturday&quot;: &quot;&quot;, &quot;Sunday&quot;: &quot;10:00-14:00&quot;}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）</p>
                     * @return BackupTimeWindow <p>备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{&quot;Monday&quot;: &quot;&quot;, &quot;Tuesday&quot;: &quot;10:00-14:00&quot;, &quot;Wednesday&quot;: &quot;&quot;, &quot;Thursday&quot;: &quot;&quot;, &quot;Friday&quot;: &quot;&quot;, &quot;Saturday&quot;: &quot;&quot;, &quot;Sunday&quot;: &quot;10:00-14:00&quot;}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）</p>
                     * 
                     */
                    CommonTimeWindow GetBackupTimeWindow() const;

                    /**
                     * 设置<p>备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{&quot;Monday&quot;: &quot;&quot;, &quot;Tuesday&quot;: &quot;10:00-14:00&quot;, &quot;Wednesday&quot;: &quot;&quot;, &quot;Thursday&quot;: &quot;&quot;, &quot;Friday&quot;: &quot;&quot;, &quot;Saturday&quot;: &quot;&quot;, &quot;Sunday&quot;: &quot;10:00-14:00&quot;}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）</p>
                     * @param _backupTimeWindow <p>备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{&quot;Monday&quot;: &quot;&quot;, &quot;Tuesday&quot;: &quot;10:00-14:00&quot;, &quot;Wednesday&quot;: &quot;&quot;, &quot;Thursday&quot;: &quot;&quot;, &quot;Friday&quot;: &quot;&quot;, &quot;Saturday&quot;: &quot;&quot;, &quot;Sunday&quot;: &quot;10:00-14:00&quot;}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）</p>
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
                     * 获取<p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。</p>
                     * @return EnableBackupPeriodSave <p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。</p>
                     * 
                     */
                    std::string GetEnableBackupPeriodSave() const;

                    /**
                     * 设置<p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。</p>
                     * @param _enableBackupPeriodSave <p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。</p>
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
                     * 获取<p>长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效</p>
                     * @return EnableBackupPeriodLongTermSave <p>长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效</p>
                     * 
                     */
                    std::string GetEnableBackupPeriodLongTermSave() const;

                    /**
                     * 设置<p>长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效</p>
                     * @param _enableBackupPeriodLongTermSave <p>长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效</p>
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
                     * 获取<p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
                     * @return BackupPeriodSaveDays <p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
                     * 
                     */
                    int64_t GetBackupPeriodSaveDays() const;

                    /**
                     * 设置<p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
                     * @param _backupPeriodSaveDays <p>定期保留最长天数，最小值：90，最大值：3650，默认值：1080</p>
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
                     * 获取<p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
                     * @return BackupPeriodSaveInterval <p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
                     * 
                     */
                    std::string GetBackupPeriodSaveInterval() const;

                    /**
                     * 设置<p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
                     * @param _backupPeriodSaveInterval <p>定期保留策略周期，可取值：weekly - 周，monthly - 月， quarterly - 季度，yearly - 年，默认为monthly</p>
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
                     * 获取<p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
                     * @return BackupPeriodSaveCount <p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
                     * 
                     */
                    int64_t GetBackupPeriodSaveCount() const;

                    /**
                     * 设置<p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
                     * @param _backupPeriodSaveCount <p>定期保留的备份数量，最小值为1，最大值不超过定期保留策略周期内常规备份个数，默认值为1</p>
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
                     * 获取<p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
                     * @return StartBackupPeriodSaveDate <p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetStartBackupPeriodSaveDate() const;

                    /**
                     * 设置<p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
                     * @param _startBackupPeriodSaveDate <p>定期保留策略周期起始日期，格式：YYYY-MM-dd HH:mm:ss</p>
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
                     * 获取<p>是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @return EnableBackupArchive <p>是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * 
                     */
                    std::string GetEnableBackupArchive() const;

                    /**
                     * 设置<p>是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @param _enableBackupArchive <p>是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
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
                     * 获取<p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     * @return BackupArchiveDays <p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     * 
                     */
                    int64_t GetBackupArchiveDays() const;

                    /**
                     * 设置<p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     * @param _backupArchiveDays <p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
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
                     * 获取<p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     * @return BinlogArchiveDays <p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     * 
                     */
                    int64_t GetBinlogArchiveDays() const;

                    /**
                     * 设置<p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     * @param _binlogArchiveDays <p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
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
                     * 获取<p>是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @return EnableBinlogArchive <p>是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * 
                     */
                    std::string GetEnableBinlogArchive() const;

                    /**
                     * 设置<p>是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @param _enableBinlogArchive <p>是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
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
                     * 获取<p>是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @return EnableBackupStandby <p>是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * 
                     */
                    std::string GetEnableBackupStandby() const;

                    /**
                     * 设置<p>是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @param _enableBackupStandby <p>是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
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
                     * 获取<p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @return BackupStandbyDays <p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * 
                     */
                    int64_t GetBackupStandbyDays() const;

                    /**
                     * 设置<p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @param _backupStandbyDays <p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
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
                     * 获取<p>是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @return EnableBinlogStandby <p>是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * 
                     */
                    std::string GetEnableBinlogStandby() const;

                    /**
                     * 设置<p>是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     * @param _enableBinlogStandby <p>是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
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
                     * 获取<p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @return BinlogStandbyDays <p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * 
                     */
                    int64_t GetBinlogStandbyDays() const;

                    /**
                     * 设置<p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     * @param _binlogStandbyDays <p>日志备份标准存储起始天数，日志备份达到标准存储起始天数时进行转换，最小为30天，不得大于日志备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
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
                     * <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据备份文件的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版数据备份文件可以保留7天 - 1830天。</li><li>MySQL 单节点（云盘）数据备份文件可以保留7天 - 30天。</li></ol>
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

                    /**
                     * <p>(将废弃，建议使用 BackupTimeWindow 参数) 备份时间范围，格式为：02:00-06:00，起点和终点时间目前限制为整点，目前可以选择的范围为： 00:00-12:00，02:00-06:00，06：00-10：00，10:00-14:00，14:00-18:00，18:00-22:00，22:00-02:00。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>自动备份方式，仅支持：physical - 物理冷备</p>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>binlog 的保留时间，单位为天。</p><ol><li>MySQL 双节点、三节点、云盘版日志备份文件可以保留7天 - 3650天。</li><li>MySQL 单节点（云盘）日志备份文件可以保留7天 - 30天。</li></ol>
                     */
                    int64_t m_binlogExpireDays;
                    bool m_binlogExpireDaysHasBeenSet;

                    /**
                     * <p>备份时间窗，比如要设置每周二和周日 10:00-14:00之间备份，该参数如下：{&quot;Monday&quot;: &quot;&quot;, &quot;Tuesday&quot;: &quot;10:00-14:00&quot;, &quot;Wednesday&quot;: &quot;&quot;, &quot;Thursday&quot;: &quot;&quot;, &quot;Friday&quot;: &quot;&quot;, &quot;Saturday&quot;: &quot;&quot;, &quot;Sunday&quot;: &quot;10:00-14:00&quot;}    （注：可以设置一周的某几天备份，但是每天的备份时间需要设置为相同的时间段。 如果设置了该字段，将忽略StartTime字段的设置）</p>
                     */
                    CommonTimeWindow m_backupTimeWindow;
                    bool m_backupTimeWindowHasBeenSet;

                    /**
                     * <p>定期保留开关，off - 不开启定期保留策略，on - 开启定期保留策略，默认为off。</p>
                     */
                    std::string m_enableBackupPeriodSave;
                    bool m_enableBackupPeriodSaveHasBeenSet;

                    /**
                     * <p>长期保留开关,该字段功能暂未上线，可忽略。off - 不开启长期保留策略，on - 开启长期保留策略，默认为off，如果开启，则BackupPeriodSaveDays，BackupPeriodSaveInterval，BackupPeriodSaveCount参数无效</p>
                     */
                    std::string m_enableBackupPeriodLongTermSave;
                    bool m_enableBackupPeriodLongTermSaveHasBeenSet;

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
                     * <p>是否开启数据备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     */
                    std::string m_enableBackupArchive;
                    bool m_enableBackupArchiveHasBeenSet;

                    /**
                     * <p>数据备份归档起始天数，数据备份达到归档起始天数时进行归档，最小为180天，不得大于数据备份保留天数</p>
                     */
                    int64_t m_backupArchiveDays;
                    bool m_backupArchiveDaysHasBeenSet;

                    /**
                     * <p>日志备份归档起始天数，日志备份达到归档起始天数时进行归档，最小为180天，不得大于日志备份保留天数</p>
                     */
                    int64_t m_binlogArchiveDays;
                    bool m_binlogArchiveDaysHasBeenSet;

                    /**
                     * <p>是否开启日志备份归档策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     */
                    std::string m_enableBinlogArchive;
                    bool m_enableBinlogArchiveHasBeenSet;

                    /**
                     * <p>是否开启数据备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
                     */
                    std::string m_enableBackupStandby;
                    bool m_enableBackupStandbyHasBeenSet;

                    /**
                     * <p>数据备份标准存储起始天数，数据备份达到标准存储起始天数时进行转换，最小为30天，不得大于数据备份保留天数。如果开启备份归档，不得大于等于备份归档天数</p>
                     */
                    int64_t m_backupStandbyDays;
                    bool m_backupStandbyDaysHasBeenSet;

                    /**
                     * <p>是否开启日志备份标准存储策略，off-关闭，on-打开，如果不指定该入参， 则保持不变。</p>
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

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPCONFIGREQUEST_H_
