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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlertRules请求参数结构体
                */
                class DescribeAlertRulesRequest : public AbstractModel
                {
                public:
                    DescribeAlertRulesRequest();
                    ~DescribeAlertRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param _instanceId Prometheus 实例 ID
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
                     * 获取返回数量，默认为 20，最大值为 100
                     * @return Limit 返回数量，默认为 20，最大值为 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100
                     * @param _limit 返回数量，默认为 20，最大值为 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 规则 ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则状态码，取值如下：
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESREQUEST_H_
