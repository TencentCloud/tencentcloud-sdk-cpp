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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregateConfigRules请求参数结构体
                */
                class ListAggregateConfigRulesRequest : public AbstractModel
                {
                public:
                    ListAggregateConfigRulesRequest();
                    ~ListAggregateConfigRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页限制</p>
                     * @return Limit <p>每页限制</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页限制</p>
                     * @param _limit <p>每页限制</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>账号组ID</p>
                     * @return AccountGroupId <p>账号组ID</p>
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组ID</p>
                     * @param _accountGroupId <p>账号组ID</p>
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>排序类型, 倒序：desc，顺序：asc</p>
                     * @return OrderType <p>排序类型, 倒序：desc，顺序：asc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>排序类型, 倒序：desc，顺序：asc</p>
                     * @param _orderType <p>排序类型, 倒序：desc，顺序：asc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @return RiskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @param _riskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * 
                     */
                    void SetRiskLevel(const std::vector<uint64_t>& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>规则状态</p>
                     * @return State <p>规则状态</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>规则状态</p>
                     * @param _state <p>规则状态</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>评估结果</p>
                     * @return ComplianceResult <p>评估结果</p>
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置<p>评估结果</p>
                     * @param _complianceResult <p>评估结果</p>
                     * 
                     */
                    void SetComplianceResult(const std::vector<std::string>& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                    /**
                     * 获取<p>规则名</p>
                     * @return RuleName <p>规则名</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名</p>
                     * @param _ruleName <p>规则名</p>
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
                     * 获取<p>规则所属账号ID</p>
                     * @return RuleOwnerId <p>规则所属账号ID</p>
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置<p>规则所属账号ID</p>
                     * @param _ruleOwnerId <p>规则所属账号ID</p>
                     * 
                     */
                    void SetRuleOwnerId(const uint64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                private:

                    /**
                     * <p>每页限制</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>账号组ID</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>排序类型, 倒序：desc，顺序：asc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>规则状态</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>评估结果</p>
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>规则名</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则所属账号ID</p>
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
