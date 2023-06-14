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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * prometheus 报警规则集
                */
                class PrometheusRuleSet : public AbstractModel
                {
                public:
                    PrometheusRuleSet();
                    ~PrometheusRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则 ID
                     * @return RuleId 规则 ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则 ID
                     * @param _ruleId 规则 ID
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
                     * 获取规则状态码
                     * @return RuleState 规则状态码
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置规则状态码
                     * @param _ruleState 规则状态码
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                    /**
                     * 获取规则类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 规则类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置规则类别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 规则类别
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<PrometheusRuleKV>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取规则注释列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations 规则注释列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置规则注释列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations 规则注释列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnnotations(const std::vector<PrometheusRuleKV>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取规则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expr 规则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置规则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expr 规则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpr(const std::string& _expr);

                    /**
                     * 判断参数 Expr 是否已赋值
                     * @return Expr 是否已赋值
                     * 
                     */
                    bool ExprHasBeenSet() const;

                    /**
                     * 获取规则报警持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 规则报警持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置规则报警持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 规则报警持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取报警接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers 报警接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置报警接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers 报警接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取规则运行健康状态，取值如下：
<li>unknown 未知状态</li>
<li>pending 加载中</li>
<li>ok 运行正常</li>
<li>err 运行错误</li>
                     * @return Health 规则运行健康状态，取值如下：
<li>unknown 未知状态</li>
<li>pending 加载中</li>
<li>ok 运行正常</li>
<li>err 运行错误</li>
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置规则运行健康状态，取值如下：
<li>unknown 未知状态</li>
<li>pending 加载中</li>
<li>ok 运行正常</li>
<li>err 运行错误</li>
                     * @param _health 规则运行健康状态，取值如下：
<li>unknown 未知状态</li>
<li>pending 加载中</li>
<li>ok 运行正常</li>
<li>err 运行错误</li>
                     * 
                     */
                    void SetHealth(const std::string& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取规则创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 规则创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置规则创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 规则创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取规则更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 规则更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置规则更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 规则更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则状态码
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * 规则类别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 规则注释列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleKV> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 规则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * 规则报警持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 报警接收组列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 规则运行健康状态，取值如下：
<li>unknown 未知状态</li>
<li>pending 加载中</li>
<li>ok 运行正常</li>
<li>err 运行错误</li>
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * 规则创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 规则更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSRULESET_H_
