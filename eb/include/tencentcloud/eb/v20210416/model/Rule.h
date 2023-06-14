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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/TargetBrief.h>
#include <tencentcloud/eb/v20210416/model/DeadLetterConfig.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 规则信息
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModTime 修改时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置修改时间
                     * @param _modTime 修改时间
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取使能开关
                     * @return Enable 使能开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置使能开关
                     * @param _enable 使能开关
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取创建时间
                     * @return AddTime 创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置创建时间
                     * @param _addTime 创建时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取事件集ID
                     * @return EventBusId 事件集ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置事件集ID
                     * @param _eventBusId 事件集ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取Target 简要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Targets Target 简要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetBrief> GetTargets() const;

                    /**
                     * 设置Target 简要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targets Target 简要信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargets(const std::vector<TargetBrief>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取rule设置的dlq规则. 可能为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadLetterConfig rule设置的dlq规则. 可能为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeadLetterConfig GetDeadLetterConfig() const;

                    /**
                     * 设置rule设置的dlq规则. 可能为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadLetterConfig rule设置的dlq规则. 可能为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadLetterConfig(const DeadLetterConfig& _deadLetterConfig);

                    /**
                     * 判断参数 DeadLetterConfig 是否已赋值
                     * @return DeadLetterConfig 是否已赋值
                     * 
                     */
                    bool DeadLetterConfigHasBeenSet() const;

                private:

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 使能开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 事件集ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Target 简要信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetBrief> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * rule设置的dlq规则. 可能为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeadLetterConfig m_deadLetterConfig;
                    bool m_deadLetterConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_RULE_H_
