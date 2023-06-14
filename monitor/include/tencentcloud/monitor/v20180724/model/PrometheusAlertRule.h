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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus告警规则
                */
                class PrometheusAlertRule : public AbstractModel
                {
                public:
                    PrometheusAlertRule();
                    ~PrometheusAlertRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取prometheus语句
                     * @return Rule prometheus语句
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置prometheus语句
                     * @param _rule prometheus语句
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取额外标签
                     * @return Labels 额外标签
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置额外标签
                     * @param _labels 额外标签
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取告警发送模板
                     * @return Template 告警发送模板
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置告警发送模板
                     * @param _template 告警发送模板
                     * 
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取持续时间
                     * @return For 持续时间
                     * 
                     */
                    std::string GetFor() const;

                    /**
                     * 设置持续时间
                     * @param _for 持续时间
                     * 
                     */
                    void SetFor(const std::string& _for);

                    /**
                     * 判断参数 For 是否已赋值
                     * @return For 是否已赋值
                     * 
                     */
                    bool ForHasBeenSet() const;

                    /**
                     * 获取该条规则的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 该条规则的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置该条规则的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describe 该条规则的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取参考prometheus rule中的annotations
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations 参考prometheus rule中的annotations
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetAnnotations() const;

                    /**
                     * 设置参考prometheus rule中的annotations
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations 参考prometheus rule中的annotations
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotations(const std::vector<Label>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取告警规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleState 告警规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置告警规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleState 告警规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * prometheus语句
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 额外标签
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 告警发送模板
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 持续时间
                     */
                    std::string m_for;
                    bool m_forHasBeenSet;

                    /**
                     * 该条规则的描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 参考prometheus rule中的annotations
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 告警规则状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTRULE_H_
