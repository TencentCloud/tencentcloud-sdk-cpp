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
                     * 获取<p>规则 ID</p>
                     * @return RuleId <p>规则 ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _ruleId <p>规则 ID</p>
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
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>规则状态码</p>
                     * @return RuleState <p>规则状态码</p>
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置<p>规则状态码</p>
                     * @param _ruleState <p>规则状态码</p>
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
                     * 获取<p>规则类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>规则类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>规则类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>规则类别</p>
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
                     * 获取<p>规则标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>规则标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置<p>规则标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>规则标签列表</p>
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
                     * 获取<p>规则注释列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Annotations <p>规则注释列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置<p>规则注释列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _annotations <p>规则注释列表</p>
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
                     * 获取<p>规则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expr <p>规则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置<p>规则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expr <p>规则表达式</p>
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
                     * 获取<p>规则报警持续时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>规则报警持续时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>规则报警持续时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>规则报警持续时间</p>
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
                     * 获取<p>报警接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers <p>报警接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置<p>报警接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receivers <p>报警接收组列表</p>
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
                     * 获取<p>规则运行健康状态，取值如下：</p><li>unknown 未知状态</li><li>pending 加载中</li><li>ok 运行正常</li><li>err 运行错误</li>
                     * @return Health <p>规则运行健康状态，取值如下：</p><li>unknown 未知状态</li><li>pending 加载中</li><li>ok 运行正常</li><li>err 运行错误</li>
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 设置<p>规则运行健康状态，取值如下：</p><li>unknown 未知状态</li><li>pending 加载中</li><li>ok 运行正常</li><li>err 运行错误</li>
                     * @param _health <p>规则运行健康状态，取值如下：</p><li>unknown 未知状态</li><li>pending 加载中</li><li>ok 运行正常</li><li>err 运行错误</li>
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
                     * 获取<p>规则创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>规则创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>规则创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>规则创建时间</p>
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
                     * 获取<p>规则更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt <p>规则更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>规则更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt <p>规则更新时间</p>
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
                     * <p>规则 ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则状态码</p>
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * <p>规则类别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>规则标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>规则注释列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusRuleKV> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * <p>规则表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * <p>规则报警持续时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>报警接收组列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>规则运行健康状态，取值如下：</p><li>unknown 未知状态</li><li>pending 加载中</li><li>ok 运行正常</li><li>err 运行错误</li>
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * <p>规则创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>规则更新时间</p>
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
