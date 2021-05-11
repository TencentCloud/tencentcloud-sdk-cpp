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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdateAlertRule请求参数结构体
                */
                class UpdateAlertRuleRequest : public AbstractModel
                {
                public:
                    UpdateAlertRuleRequest();
                    ~UpdateAlertRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 报警规则 ID
                     * @return RuleId Prometheus 报警规则 ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Prometheus 报警规则 ID
                     * @param RuleId Prometheus 报警规则 ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param InstanceId Prometheus 实例 ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * @return RuleState 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     * @param RuleState 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     */
                    bool RuleStateHasBeenSet() const;

                    /**
                     * 获取报警规则名称
                     * @return RuleName 报警规则名称
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置报警规则名称
                     * @param RuleName 报警规则名称
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取报警规则表达式
                     * @return Expr 报警规则表达式
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置报警规则表达式
                     * @param Expr 报警规则表达式
                     */
                    void SetExpr(const std::string& _expr);

                    /**
                     * 判断参数 Expr 是否已赋值
                     * @return Expr 是否已赋值
                     */
                    bool ExprHasBeenSet() const;

                    /**
                     * 获取报警规则持续时间
                     * @return Duration 报警规则持续时间
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置报警规则持续时间
                     * @param Duration 报警规则持续时间
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取报警规则接收组列表
                     * @return Receivers 报警规则接收组列表
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置报警规则接收组列表
                     * @param Receivers 报警规则接收组列表
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取报警规则标签列表
                     * @return Labels 报警规则标签列表
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置报警规则标签列表
                     * @param Labels 报警规则标签列表
                     */
                    void SetLabels(const std::vector<PrometheusRuleKV>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取报警规则注释列表
                     * @return Annotations 报警规则注释列表
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置报警规则注释列表
                     * @param Annotations 报警规则注释列表
                     */
                    void SetAnnotations(const std::vector<PrometheusRuleKV>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取报警策略模板分类
                     * @return Type 报警策略模板分类
                     */
                    std::string GetType() const;

                    /**
                     * 设置报警策略模板分类
                     * @param Type 报警策略模板分类
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Prometheus 报警规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 规则状态码，取值如下：
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
默认状态码为 2 启用。
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * 报警规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 报警规则表达式
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * 报警规则持续时间
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 报警规则接收组列表
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 报警规则标签列表
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 报警规则注释列表
                     */
                    std::vector<PrometheusRuleKV> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * 报警策略模板分类
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULEREQUEST_H_
