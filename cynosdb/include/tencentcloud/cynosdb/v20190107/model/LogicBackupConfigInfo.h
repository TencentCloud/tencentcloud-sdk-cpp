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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取是否开启自动逻辑备份
                     * @return LogicBackupEnable 是否开启自动逻辑备份
                     * 
                     */
                    std::string GetLogicBackupEnable() const;

                    /**
                     * 设置是否开启自动逻辑备份
                     * @param _logicBackupEnable 是否开启自动逻辑备份
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
                     * 获取自动逻辑备份开始时间
                     * @return LogicBackupTimeBeg 自动逻辑备份开始时间
                     * 
                     */
                    uint64_t GetLogicBackupTimeBeg() const;

                    /**
                     * 设置自动逻辑备份开始时间
                     * @param _logicBackupTimeBeg 自动逻辑备份开始时间
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
                     * 获取自动逻辑备份结束时间
                     * @return LogicBackupTimeEnd 自动逻辑备份结束时间
                     * 
                     */
                    uint64_t GetLogicBackupTimeEnd() const;

                    /**
                     * 设置自动逻辑备份结束时间
                     * @param _logicBackupTimeEnd 自动逻辑备份结束时间
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
                     * 获取自动逻辑备份保留时间
                     * @return LogicReserveDuration 自动逻辑备份保留时间
                     * 
                     */
                    uint64_t GetLogicReserveDuration() const;

                    /**
                     * 设置自动逻辑备份保留时间
                     * @param _logicReserveDuration 自动逻辑备份保留时间
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
                     * 获取是否开启跨地域逻辑备份
                     * @return LogicCrossRegionsEnable 是否开启跨地域逻辑备份
                     * 
                     */
                    std::string GetLogicCrossRegionsEnable() const;

                    /**
                     * 设置是否开启跨地域逻辑备份
                     * @param _logicCrossRegionsEnable 是否开启跨地域逻辑备份
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
                     * 获取逻辑备份所跨地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogicCrossRegions 逻辑备份所跨地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogicCrossRegions() const;

                    /**
                     * 设置逻辑备份所跨地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logicCrossRegions 逻辑备份所跨地域
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

                private:

                    /**
                     * 是否开启自动逻辑备份
                     */
                    std::string m_logicBackupEnable;
                    bool m_logicBackupEnableHasBeenSet;

                    /**
                     * 自动逻辑备份开始时间
                     */
                    uint64_t m_logicBackupTimeBeg;
                    bool m_logicBackupTimeBegHasBeenSet;

                    /**
                     * 自动逻辑备份结束时间
                     */
                    uint64_t m_logicBackupTimeEnd;
                    bool m_logicBackupTimeEndHasBeenSet;

                    /**
                     * 自动逻辑备份保留时间
                     */
                    uint64_t m_logicReserveDuration;
                    bool m_logicReserveDurationHasBeenSet;

                    /**
                     * 是否开启跨地域逻辑备份
                     */
                    std::string m_logicCrossRegionsEnable;
                    bool m_logicCrossRegionsEnableHasBeenSet;

                    /**
                     * 逻辑备份所跨地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logicCrossRegions;
                    bool m_logicCrossRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
