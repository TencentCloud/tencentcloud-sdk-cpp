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
                     * 获取<p>规则名称</p>
                     * @return Name <p>规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _name <p>规则名称</p>
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
                     * 获取<p>prometheus语句</p>
                     * @return Rule <p>prometheus语句</p>
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置<p>prometheus语句</p>
                     * @param _rule <p>prometheus语句</p>
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
                     * 获取<p>额外标签</p>
                     * @return Labels <p>额外标签</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>额外标签</p>
                     * @param _labels <p>额外标签</p>
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
                     * 获取<p>告警发送模板</p>
                     * @return Template <p>告警发送模板</p>
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置<p>告警发送模板</p>
                     * @param _template <p>告警发送模板</p>
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
                     * 获取<p>持续时间</p>
                     * @return For <p>持续时间</p>
                     * 
                     */
                    std::string GetFor() const;

                    /**
                     * 设置<p>持续时间</p>
                     * @param _for <p>持续时间</p>
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
                     * 获取<p>该条规则的描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe <p>该条规则的描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>该条规则的描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describe <p>该条规则的描述信息</p>
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
                     * 获取<p>参考prometheus rule中的annotations</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations <p>参考prometheus rule中的annotations</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetAnnotations() const;

                    /**
                     * 设置<p>参考prometheus rule中的annotations</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations <p>参考prometheus rule中的annotations</p>
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
                     * 获取<p>告警规则状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleState <p>告警规则状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置<p>告警规则状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleState <p>告警规则状态</p>
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
                     * <p>规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>prometheus语句</p>
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>额外标签</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>告警发送模板</p>
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>持续时间</p>
                     */
                    std::string m_for;
                    bool m_forHasBeenSet;

                    /**
                     * <p>该条规则的描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>参考prometheus rule中的annotations</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * <p>告警规则状态</p>
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
