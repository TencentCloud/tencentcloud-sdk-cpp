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
                     * 获取每页限制
                     * @return Limit 每页限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页限制
                     * @param _limit 每页限制
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取账号组ID
                     * @return AccountGroupId 账号组ID
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组ID
                     * @param _accountGroupId 账号组ID
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
                     * 获取排序类型, 倒序：desc，顺序：asc
                     * @return OrderType 排序类型, 倒序：desc，顺序：asc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序类型, 倒序：desc，顺序：asc
                     * @param _orderType 排序类型, 倒序：desc，顺序：asc
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
                     * 获取风险等级
1：高风险。
2：中风险。
3：低风险。
                     * @return RiskLevel 风险等级
1：高风险。
2：中风险。
3：低风险。
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置风险等级
1：高风险。
2：中风险。
3：低风险。
                     * @param _riskLevel 风险等级
1：高风险。
2：中风险。
3：低风险。
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
                     * 获取规则状态
                     * @return State 规则状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置规则状态
                     * @param _state 规则状态
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
                     * 获取评估结果
                     * @return ComplianceResult 评估结果
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置评估结果
                     * @param _complianceResult 评估结果
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
                     * 获取规则名
                     * @return RuleName 规则名
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名
                     * @param _ruleName 规则名
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
                     * 获取规则所属账号ID
                     * @return RuleOwnerId 规则所属账号ID
                     * 
                     */
                    uint64_t GetRuleOwnerId() const;

                    /**
                     * 设置规则所属账号ID
                     * @param _ruleOwnerId 规则所属账号ID
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
                     * 每页限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 排序类型, 倒序：desc，顺序：asc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 风险等级
1：高风险。
2：中风险。
3：低风险。
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 评估结果
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则所属账号ID
                     */
                    uint64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECONFIGRULESREQUEST_H_
