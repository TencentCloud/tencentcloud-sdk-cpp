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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 规则模板内容
                */
                class RuleTemplateInfo : public AbstractModel
                {
                public:
                    RuleTemplateInfo();
                    ~RuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateId 规则模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置规则模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateId 规则模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateName 规则模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置规则模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateName 规则模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     * 
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取规则内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleFilters 规则内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置规则内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleFilters 规则内容。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取告警等级。1-低风险，2-中风险，3-高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置告警等级。1-低风险，2-中风险，3-高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmLevel 告警等级。1-低风险，2-中风险，3-高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警策略。0-不告警，1-告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmPolicy 告警策略。0-不告警，1-告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlarmPolicy() const;

                    /**
                     * 设置告警策略。0-不告警，1-告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmPolicy 告警策略。0-不告警，1-告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmPolicy(const int64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                    /**
                     * 获取规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 规则模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则模板名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * 规则内容。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 告警等级。1-低风险，2-中风险，3-高风险。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警策略。0-不告警，1-告警。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * 规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_
