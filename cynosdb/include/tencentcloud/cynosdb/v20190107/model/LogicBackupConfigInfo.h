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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_

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
                * 逻辑备份配置信息
                */
                class LogicBackupConfigInfo : public AbstractModel
                {
                public:
                    LogicBackupConfigInfo();
                    ~LogicBackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启自动逻辑备份</p>
                     * @return LogicBackupEnable <p>是否开启自动逻辑备份</p>
                     * 
                     */
                    std::string GetLogicBackupEnable() const;

                    /**
                     * 设置<p>是否开启自动逻辑备份</p>
                     * @param _logicBackupEnable <p>是否开启自动逻辑备份</p>
                     * 
                     */
                    void SetLogicBackupEnable(const std::string& _logicBackupEnable);

                    /**
                     * 判断参数 LogicBackupEnable 是否已赋值
                     * @return LogicBackupEnable 是否已赋值
                     * 
                     */
                    bool LogicBackupEnableHasBeenSet() const;

                    /**
                     * 获取<p>自动逻辑备份开始时间</p>
                     * @return LogicBackupTimeBeg <p>自动逻辑备份开始时间</p>
                     * 
                     */
                    uint64_t GetLogicBackupTimeBeg() const;

                    /**
                     * 设置<p>自动逻辑备份开始时间</p>
                     * @param _logicBackupTimeBeg <p>自动逻辑备份开始时间</p>
                     * 
                     */
                    void SetLogicBackupTimeBeg(const uint64_t& _logicBackupTimeBeg);

                    /**
                     * 判断参数 LogicBackupTimeBeg 是否已赋值
                     * @return LogicBackupTimeBeg 是否已赋值
                     * 
                     */
                    bool LogicBackupTimeBegHasBeenSet() const;

                    /**
                     * 获取<p>自动逻辑备份结束时间</p>
                     * @return LogicBackupTimeEnd <p>自动逻辑备份结束时间</p>
                     * 
                     */
                    uint64_t GetLogicBackupTimeEnd() const;

                    /**
                     * 设置<p>自动逻辑备份结束时间</p>
                     * @param _logicBackupTimeEnd <p>自动逻辑备份结束时间</p>
                     * 
                     */
                    void SetLogicBackupTimeEnd(const uint64_t& _logicBackupTimeEnd);

                    /**
                     * 判断参数 LogicBackupTimeEnd 是否已赋值
                     * @return LogicBackupTimeEnd 是否已赋值
                     * 
                     */
                    bool LogicBackupTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>自动逻辑备份保留时间<br>单位：秒</p>
                     * @return LogicReserveDuration <p>自动逻辑备份保留时间<br>单位：秒</p>
                     * 
                     */
                    uint64_t GetLogicReserveDuration() const;

                    /**
                     * 设置<p>自动逻辑备份保留时间<br>单位：秒</p>
                     * @param _logicReserveDuration <p>自动逻辑备份保留时间<br>单位：秒</p>
                     * 
                     */
                    void SetLogicReserveDuration(const uint64_t& _logicReserveDuration);

                    /**
                     * 判断参数 LogicReserveDuration 是否已赋值
                     * @return LogicReserveDuration 是否已赋值
                     * 
                     */
                    bool LogicReserveDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启跨地域逻辑备份<br>可选值：ON/OFF</p>
                     * @return LogicCrossRegionsEnable <p>是否开启跨地域逻辑备份<br>可选值：ON/OFF</p>
                     * 
                     */
                    std::string GetLogicCrossRegionsEnable() const;

                    /**
                     * 设置<p>是否开启跨地域逻辑备份<br>可选值：ON/OFF</p>
                     * @param _logicCrossRegionsEnable <p>是否开启跨地域逻辑备份<br>可选值：ON/OFF</p>
                     * 
                     */
                    void SetLogicCrossRegionsEnable(const std::string& _logicCrossRegionsEnable);

                    /**
                     * 判断参数 LogicCrossRegionsEnable 是否已赋值
                     * @return LogicCrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>逻辑备份所跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicCrossRegions <p>逻辑备份所跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogicCrossRegions() const;

                    /**
                     * 设置<p>逻辑备份所跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicCrossRegions <p>逻辑备份所跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogicCrossRegions(const std::vector<std::string>& _logicCrossRegions);

                    /**
                     * 判断参数 LogicCrossRegions 是否已赋值
                     * @return LogicCrossRegions 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsHasBeenSet() const;

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

                    /**
                     * 获取<p>天</p><p>单位：跨地域逻辑备份保留时间</p>
                     * @return LogicCrossRegionSaveDays <p>天</p><p>单位：跨地域逻辑备份保留时间</p>
                     * 
                     */
                    int64_t GetLogicCrossRegionSaveDays() const;

                    /**
                     * 设置<p>天</p><p>单位：跨地域逻辑备份保留时间</p>
                     * @param _logicCrossRegionSaveDays <p>天</p><p>单位：跨地域逻辑备份保留时间</p>
                     * 
                     */
                    void SetLogicCrossRegionSaveDays(const int64_t& _logicCrossRegionSaveDays);

                    /**
                     * 判断参数 LogicCrossRegionSaveDays 是否已赋值
                     * @return LogicCrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启自动逻辑备份</p>
                     */
                    std::string m_logicBackupEnable;
                    bool m_logicBackupEnableHasBeenSet;

                    /**
                     * <p>自动逻辑备份开始时间</p>
                     */
                    uint64_t m_logicBackupTimeBeg;
                    bool m_logicBackupTimeBegHasBeenSet;

                    /**
                     * <p>自动逻辑备份结束时间</p>
                     */
                    uint64_t m_logicBackupTimeEnd;
                    bool m_logicBackupTimeEndHasBeenSet;

                    /**
                     * <p>自动逻辑备份保留时间<br>单位：秒</p>
                     */
                    uint64_t m_logicReserveDuration;
                    bool m_logicReserveDurationHasBeenSet;

                    /**
                     * <p>是否开启跨地域逻辑备份<br>可选值：ON/OFF</p>
                     */
                    std::string m_logicCrossRegionsEnable;
                    bool m_logicCrossRegionsEnableHasBeenSet;

                    /**
                     * <p>逻辑备份所跨地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logicCrossRegions;
                    bool m_logicCrossRegionsHasBeenSet;

                    /**
                     * <p>备份投递关系</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                    /**
                     * <p>天</p><p>单位：跨地域逻辑备份保留时间</p>
                     */
                    int64_t m_logicCrossRegionSaveDays;
                    bool m_logicCrossRegionSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
