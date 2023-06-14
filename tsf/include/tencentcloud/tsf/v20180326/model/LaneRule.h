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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_LANERULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_LANERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/LaneRuleTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 泳道规则
                */
                class LaneRule : public AbstractModel
                {
                public:
                    LaneRule();
                    ~LaneRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取泳道规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 泳道规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置泳道规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 泳道规则名称
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
                     * 获取优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取泳道规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTagList 泳道规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LaneRuleTag> GetRuleTagList() const;

                    /**
                     * 设置泳道规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTagList 泳道规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTagList(const std::vector<LaneRuleTag>& _ruleTagList);

                    /**
                     * 判断参数 RuleTagList 是否已赋值
                     * @return RuleTagList 是否已赋值
                     * 
                     */
                    bool RuleTagListHasBeenSet() const;

                    /**
                     * 获取泳道规则标签关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTagRelationship 泳道规则标签关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleTagRelationship() const;

                    /**
                     * 设置泳道规则标签关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTagRelationship 泳道规则标签关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTagRelationship(const std::string& _ruleTagRelationship);

                    /**
                     * 判断参数 RuleTagRelationship 是否已赋值
                     * @return RuleTagRelationship 是否已赋值
                     * 
                     */
                    bool RuleTagRelationshipHasBeenSet() const;

                    /**
                     * 获取泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneId 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneId 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 泳道规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 泳道规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LaneRuleTag> m_ruleTagList;
                    bool m_ruleTagListHasBeenSet;

                    /**
                     * 泳道规则标签关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleTagRelationship;
                    bool m_ruleTagRelationshipHasBeenSet;

                    /**
                     * 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_LANERULE_H_
