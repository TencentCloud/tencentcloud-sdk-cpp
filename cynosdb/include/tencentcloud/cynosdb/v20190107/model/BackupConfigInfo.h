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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupVaultItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 备份设置
                */
                class BackupConfigInfo : public AbstractModel
                {
                public:
                    BackupConfigInfo();
                    ~BackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>系统自动时间</p>
                     * @return BackupCustomAutoTime <p>系统自动时间</p>
                     * 
                     */
                    bool GetBackupCustomAutoTime() const;

                    /**
                     * 设置<p>系统自动时间</p>
                     * @param _backupCustomAutoTime <p>系统自动时间</p>
                     * 
                     */
                    void SetBackupCustomAutoTime(const bool& _backupCustomAutoTime);

                    /**
                     * 判断参数 BackupCustomAutoTime 是否已赋值
                     * @return BackupCustomAutoTime 是否已赋值
                     * 
                     */
                    bool BackupCustomAutoTimeHasBeenSet() const;

                    /**
                     * 获取<p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @return BackupTimeBeg <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    uint64_t GetBackupTimeBeg() const;

                    /**
                     * 设置<p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @param _backupTimeBeg <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    void SetBackupTimeBeg(const uint64_t& _backupTimeBeg);

                    /**
                     * 判断参数 BackupTimeBeg 是否已赋值
                     * @return BackupTimeBeg 是否已赋值
                     * 
                     */
                    bool BackupTimeBegHasBeenSet() const;

                    /**
                     * 获取<p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @return BackupTimeEnd <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    uint64_t GetBackupTimeEnd() const;

                    /**
                     * 设置<p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * @param _backupTimeEnd <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     * 
                     */
                    void SetBackupTimeEnd(const uint64_t& _backupTimeEnd);

                    /**
                     * 判断参数 BackupTimeEnd 是否已赋值
                     * @return BackupTimeEnd 是否已赋值
                     * 
                     */
                    bool BackupTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周日到周六的备份方式，full-全量备份，increment-增量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupWeekDays <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周日到周六的备份方式，full-全量备份，increment-增量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBackupWeekDays() const;

                    /**
                     * 设置<p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周日到周六的备份方式，full-全量备份，increment-增量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupWeekDays <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周日到周六的备份方式，full-全量备份，increment-增量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupWeekDays(const std::vector<std::string>& _backupWeekDays);

                    /**
                     * 判断参数 BackupWeekDays 是否已赋值
                     * @return BackupWeekDays 是否已赋值
                     * 
                     */
                    bool BackupWeekDaysHasBeenSet() const;

                    /**
                     * 获取<p>间隔时间</p>
                     * @return BackupIntervalTime <p>间隔时间</p>
                     * 
                     */
                    int64_t GetBackupIntervalTime() const;

                    /**
                     * 设置<p>间隔时间</p>
                     * @param _backupIntervalTime <p>间隔时间</p>
                     * 
                     */
                    void SetBackupIntervalTime(const int64_t& _backupIntervalTime);

                    /**
                     * 判断参数 BackupIntervalTime 是否已赋值
                     * @return BackupIntervalTime 是否已赋值
                     * 
                     */
                    bool BackupIntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600247=604800，最大为158112000</p>
                     * @return ReserveDuration <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600247=604800，最大为158112000</p>
                     * 
                     */
                    uint64_t GetReserveDuration() const;

                    /**
                     * 设置<p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600247=604800，最大为158112000</p>
                     * @param _reserveDuration <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600247=604800，最大为158112000</p>
                     * 
                     */
                    void SetReserveDuration(const uint64_t& _reserveDuration);

                    /**
                     * 判断参数 ReserveDuration 是否已赋值
                     * @return ReserveDuration 是否已赋值
                     * 
                     */
                    bool ReserveDurationHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份开启<br>yes-开启<br>no-关闭</p>
                     * @return CrossRegionsEnable <p>跨地域备份开启<br>yes-开启<br>no-关闭</p>
                     * 
                     */
                    std::string GetCrossRegionsEnable() const;

                    /**
                     * 设置<p>跨地域备份开启<br>yes-开启<br>no-关闭</p>
                     * @param _crossRegionsEnable <p>跨地域备份开启<br>yes-开启<br>no-关闭</p>
                     * 
                     */
                    void SetCrossRegionsEnable(const std::string& _crossRegionsEnable);

                    /**
                     * 判断参数 CrossRegionsEnable 是否已赋值
                     * @return CrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool CrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrossRegions <p>跨地域备份地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>跨地域备份地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _crossRegions <p>跨地域备份地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @return CrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetCrossRegionSaveDays() const;

                    /**
                     * 设置<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @param _crossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    void SetCrossRegionSaveDays(const int64_t& _crossRegionSaveDays);

                    /**
                     * 判断参数 CrossRegionSaveDays 是否已赋值
                     * @return CrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool CrossRegionSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>自动数据备份触发策略，periodically:自动周期备份,frequent:高频备份</p>
                     * @return BackupTriggerStrategy <p>自动数据备份触发策略，periodically:自动周期备份,frequent:高频备份</p>
                     * 
                     */
                    std::string GetBackupTriggerStrategy() const;

                    /**
                     * 设置<p>自动数据备份触发策略，periodically:自动周期备份,frequent:高频备份</p>
                     * @param _backupTriggerStrategy <p>自动数据备份触发策略，periodically:自动周期备份,frequent:高频备份</p>
                     * 
                     */
                    void SetBackupTriggerStrategy(const std::string& _backupTriggerStrategy);

                    /**
                     * 判断参数 BackupTriggerStrategy 是否已赋值
                     * @return BackupTriggerStrategy 是否已赋值
                     * 
                     */
                    bool BackupTriggerStrategyHasBeenSet() const;

                    /**
                     * 获取<p>备份投递关系</p>
                     * @return AutoCopyVaults <p>备份投递关系</p>
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置<p>备份投递关系</p>
                     * @param _autoCopyVaults <p>备份投递关系</p>
                     * 
                     */
                    void SetAutoCopyVaults(const std::vector<CreateBackupVaultItem>& _autoCopyVaults);

                    /**
                     * 判断参数 AutoCopyVaults 是否已赋值
                     * @return AutoCopyVaults 是否已赋值
                     * 
                     */
                    bool AutoCopyVaultsHasBeenSet() const;

                private:

                    /**
                     * <p>系统自动时间</p>
                     */
                    bool m_backupCustomAutoTime;
                    bool m_backupCustomAutoTimeHasBeenSet;

                    /**
                     * <p>表示全备开始时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     */
                    uint64_t m_backupTimeBeg;
                    bool m_backupTimeBegHasBeenSet;

                    /**
                     * <p>表示全备结束时间，[0-24*3600]， 如0:00, 1:00, 2:00 分别为 0，3600， 7200</p>
                     */
                    uint64_t m_backupTimeEnd;
                    bool m_backupTimeEndHasBeenSet;

                    /**
                     * <p>该参数目前不支持修改，无需填写。备份频率，长度为7的数组，分别对应周日到周六的备份方式，full-全量备份，increment-增量备份</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupWeekDays;
                    bool m_backupWeekDaysHasBeenSet;

                    /**
                     * <p>间隔时间</p>
                     */
                    int64_t m_backupIntervalTime;
                    bool m_backupIntervalTimeHasBeenSet;

                    /**
                     * <p>表示保留备份时长, 单位秒，超过该时间将被清理, 七天表示为3600247=604800，最大为158112000</p>
                     */
                    uint64_t m_reserveDuration;
                    bool m_reserveDurationHasBeenSet;

                    /**
                     * <p>跨地域备份开启<br>yes-开启<br>no-关闭</p>
                     */
                    std::string m_crossRegionsEnable;
                    bool m_crossRegionsEnableHasBeenSet;

                    /**
                     * <p>跨地域备份地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>跨地域备份保留时间</p><p>单位：天</p>
                     */
                    int64_t m_crossRegionSaveDays;
                    bool m_crossRegionSaveDaysHasBeenSet;

                    /**
                     * <p>自动数据备份触发策略，periodically:自动周期备份,frequent:高频备份</p>
                     */
                    std::string m_backupTriggerStrategy;
                    bool m_backupTriggerStrategyHasBeenSet;

                    /**
                     * <p>备份投递关系</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPCONFIGINFO_H_
