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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警条件模板
                */
                class ConditionsTemp : public AbstractModel
                {
                public:
                    ConditionsTemp();
                    ~ConditionsTemp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Condition 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _condition 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventCondition 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventCondition 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     * 
                     */
                    bool EventConditionHasBeenSet() const;

                private:

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 事件触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_
