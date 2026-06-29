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
                     * 获取<p>Prometheus 实例 ID</p>
                     * @return InstanceId <p>Prometheus 实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Prometheus 实例 ID</p>
                     * @param _instanceId <p>Prometheus 实例 ID</p>
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
                     * 获取<p>返回数量，默认为 20，最大值为 100</p>
                     * @return Limit <p>返回数量，默认为 20，最大值为 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为 20，最大值为 100</p>
                     * @param _limit <p>返回数量，默认为 20，最大值为 100</p>
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
                     * 获取<p>偏移量，默认为 0</p>
                     * @return Offset <p>偏移量，默认为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为 0</p>
                     * @param _offset <p>偏移量，默认为 0</p>
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
                     * 获取<p>规则状态码，取值如下：</p><li>2=RuleEnabled</li><li>3=RuleDisabled</li>
                     * @return RuleState <p>规则状态码，取值如下：</p><li>2=RuleEnabled</li><li>3=RuleDisabled</li>
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置<p>规则状态码，取值如下：</p><li>2=RuleEnabled</li><li>3=RuleDisabled</li>
                     * @param _ruleState <p>规则状态码，取值如下：</p><li>2=RuleEnabled</li><li>3=RuleDisabled</li>
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
                     * 获取<p>报警策略模板分类</p>
                     * @return Type <p>报警策略模板分类</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>报警策略模板分类</p>
                     * @param _type <p>报警策略模板分类</p>
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
                     * <p>Prometheus 实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>返回数量，默认为 20，最大值为 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>规则 ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则状态码，取值如下：</p><li>2=RuleEnabled</li><li>3=RuleDisabled</li>
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>报警策略模板分类</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALERTRULESREQUEST_H_
