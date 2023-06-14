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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALERTRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALERTRULEREQUEST_H_

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
                * CreateAlertRule请求参数结构体
                */
                class CreateAlertRuleRequest : public AbstractModel
                {
                public:
                    CreateAlertRuleRequest();
                    ~CreateAlertRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID，例如：prom-abcd1234
                     * @return InstanceId Prometheus 实例 ID，例如：prom-abcd1234
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID，例如：prom-abcd1234
                     * @param _instanceId Prometheus 实例 ID，例如：prom-abcd1234
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取规则表达式，可参考<a href="https://cloud.tencent.com/document/product/1416/56008">告警规则说明</a>
                     * @return Expr 规则表达式，可参考<a href="https://cloud.tencent.com/document/product/1416/56008">告警规则说明</a>
                     * 
                     */
                    std::string GetExpr() const;

                    /**
                     * 设置规则表达式，可参考<a href="https://cloud.tencent.com/document/product/1416/56008">告警规则说明</a>
                     * @param _expr 规则表达式，可参考<a href="https://cloud.tencent.com/document/product/1416/56008">告警规则说明</a>
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
                     * 获取告警通知模板 ID 列表
                     * @return Receivers 告警通知模板 ID 列表
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置告警通知模板 ID 列表
                     * @param _receivers 告警通知模板 ID 列表
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
                     * 获取规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
                     * @return RuleState 规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
                     * @param _ruleState 规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
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
                     * 获取规则报警持续时间
                     * @return Duration 规则报警持续时间
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置规则报警持续时间
                     * @param _duration 规则报警持续时间
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
                     * 获取标签列表
                     * @return Labels 标签列表
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetLabels() const;

                    /**
                     * 设置标签列表
                     * @param _labels 标签列表
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
                     * 获取注释列表。

告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description。
                     * @return Annotations 注释列表。

告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description。
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetAnnotations() const;

                    /**
                     * 设置注释列表。

告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description。
                     * @param _annotations 注释列表。

告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description。
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
                     * 获取报警策略模板分类
                     * @return Type 报警策略模板分类
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置报警策略模板分类
                     * @param _type 报警策略模板分类
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID，例如：prom-abcd1234
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则表达式，可参考<a href="https://cloud.tencent.com/document/product/1416/56008">告警规则说明</a>
                     */
                    std::string m_expr;
                    bool m_exprHasBeenSet;

                    /**
                     * 告警通知模板 ID 列表
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * 规则报警持续时间
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<PrometheusRuleKV> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 注释列表。

告警对象和告警消息是 Prometheus Rule Annotations 的特殊字段，需要通过 annotations 来传递，对应的 Key 分别为summary/description。
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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEALERTRULEREQUEST_H_
