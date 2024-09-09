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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 动态生成的变更详情条目
                */
                class DiffDetailItem : public AbstractModel
                {
                public:
                    DiffDetailItem();
                    ~DiffDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attribute 属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttribute() const;

                    /**
                     * 设置属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attribute 属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttribute(const std::string& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取当前生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InEffect 当前生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInEffect() const;

                    /**
                     * 设置当前生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inEffect 当前生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInEffect(const std::string& _inEffect);

                    /**
                     * 判断参数 InEffect 是否已赋值
                     * @return InEffect 是否已赋值
                     * 
                     */
                    bool InEffectHasBeenSet() const;

                    /**
                     * 获取待生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingEffectiveness 待生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingEffectiveness() const;

                    /**
                     * 设置待生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingEffectiveness 待生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPendingEffectiveness(const std::string& _pendingEffectiveness);

                    /**
                     * 判断参数 PendingEffectiveness 是否已赋值
                     * @return PendingEffectiveness 是否已赋值
                     * 
                     */
                    bool PendingEffectivenessHasBeenSet() const;

                    /**
                     * 获取操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operation 操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operation 操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Queue 队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queue 队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取配置集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigSet 配置集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigSet() const;

                    /**
                     * 设置配置集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configSet 配置集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigSet(const std::string& _configSet);

                    /**
                     * 判断参数 ConfigSet 是否已赋值
                     * @return ConfigSet 是否已赋值
                     * 
                     */
                    bool ConfigSetHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelName 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelName 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取当前所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InEffectIndex 当前所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInEffectIndex() const;

                    /**
                     * 设置当前所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inEffectIndex 当前所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInEffectIndex(const std::string& _inEffectIndex);

                    /**
                     * 判断参数 InEffectIndex 是否已赋值
                     * @return InEffectIndex 是否已赋值
                     * 
                     */
                    bool InEffectIndexHasBeenSet() const;

                    /**
                     * 获取待生效的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PendingEffectIndex 待生效的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPendingEffectIndex() const;

                    /**
                     * 设置待生效的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pendingEffectIndex 待生效的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPendingEffectIndex(const std::string& _pendingEffectIndex);

                    /**
                     * 判断参数 PendingEffectIndex 是否已赋值
                     * @return PendingEffectIndex 是否已赋值
                     * 
                     */
                    bool PendingEffectIndexHasBeenSet() const;

                    /**
                     * 获取计划模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanName 计划模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置计划模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planName 计划模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取放置规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 放置规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置放置规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 放置规则
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
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * 当前生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inEffect;
                    bool m_inEffectHasBeenSet;

                    /**
                     * 待生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingEffectiveness;
                    bool m_pendingEffectivenessHasBeenSet;

                    /**
                     * 操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * 配置集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configSet;
                    bool m_configSetHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 当前所在位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inEffectIndex;
                    bool m_inEffectIndexHasBeenSet;

                    /**
                     * 待生效的位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pendingEffectIndex;
                    bool m_pendingEffectIndexHasBeenSet;

                    /**
                     * 计划模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 放置规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_
