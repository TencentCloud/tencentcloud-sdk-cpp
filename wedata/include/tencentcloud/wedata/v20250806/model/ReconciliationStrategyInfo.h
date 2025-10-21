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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 离线集成对账告警规则
                */
                class ReconciliationStrategyInfo : public AbstractModel
                {
                public:
                    ReconciliationStrategyInfo();
                    ~ReconciliationStrategyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取离线告警规则类型
reconciliationFailure： 离线对账失败告警
reconciliationOvertime： 离线对账任务运行超时告警(需配置超时时间)
reconciliationMismatch： 离线对账不一致条数告警(需配置不一致条数阀值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 离线告警规则类型
reconciliationFailure： 离线对账失败告警
reconciliationOvertime： 离线对账任务运行超时告警(需配置超时时间)
reconciliationMismatch： 离线对账不一致条数告警(需配置不一致条数阀值)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置离线告警规则类型
reconciliationFailure： 离线对账失败告警
reconciliationOvertime： 离线对账任务运行超时告警(需配置超时时间)
reconciliationMismatch： 离线对账不一致条数告警(需配置不一致条数阀值)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 离线告警规则类型
reconciliationFailure： 离线对账失败告警
reconciliationOvertime： 离线对账任务运行超时告警(需配置超时时间)
reconciliationMismatch： 离线对账不一致条数告警(需配置不一致条数阀值)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取对账不一致条数阀值， RuleType=reconciliationMismatch对账不一致条数类型，需要配置该字段，无默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MismatchCount 对账不一致条数阀值， RuleType=reconciliationMismatch对账不一致条数类型，需要配置该字段，无默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMismatchCount() const;

                    /**
                     * 设置对账不一致条数阀值， RuleType=reconciliationMismatch对账不一致条数类型，需要配置该字段，无默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mismatchCount 对账不一致条数阀值， RuleType=reconciliationMismatch对账不一致条数类型，需要配置该字段，无默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMismatchCount(const uint64_t& _mismatchCount);

                    /**
                     * 判断参数 MismatchCount 是否已赋值
                     * @return MismatchCount 是否已赋值
                     * 
                     */
                    bool MismatchCountHasBeenSet() const;

                    /**
                     * 获取对账任务运行超时阀值： 小时， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hour 对账任务运行超时阀值： 小时， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHour() const;

                    /**
                     * 设置对账任务运行超时阀值： 小时， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hour 对账任务运行超时阀值： 小时， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHour(const int64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取对账任务运行超时阀值： 分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min 对账任务运行超时阀值： 分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置对账任务运行超时阀值： 分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _min 对账任务运行超时阀值： 分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                private:

                    /**
                     * 离线告警规则类型
reconciliationFailure： 离线对账失败告警
reconciliationOvertime： 离线对账任务运行超时告警(需配置超时时间)
reconciliationMismatch： 离线对账不一致条数告警(需配置不一致条数阀值)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 对账不一致条数阀值， RuleType=reconciliationMismatch对账不一致条数类型，需要配置该字段，无默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mismatchCount;
                    bool m_mismatchCountHasBeenSet;

                    /**
                     * 对账任务运行超时阀值： 小时， 默认为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 对账任务运行超时阀值： 分钟， 默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RECONCILIATIONSTRATEGYINFO_H_
