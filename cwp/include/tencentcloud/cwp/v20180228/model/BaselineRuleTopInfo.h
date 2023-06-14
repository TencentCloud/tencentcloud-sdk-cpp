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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线检测项TOP信息
                */
                class BaselineRuleTopInfo : public AbstractModel
                {
                public:
                    BaselineRuleTopInfo();
                    ~BaselineRuleTopInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线检测项名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 基线检测项名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置基线检测项名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 基线检测项名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取检测项危害等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 检测项危害等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置检测项危害等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 检测项危害等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCount 事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCount 事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取检测项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 检测项id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置检测项id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 检测项id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 基线检测项名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 检测项危害等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 事件总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 检测项id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINERULETOPINFO_H_
