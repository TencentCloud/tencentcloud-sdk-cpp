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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_

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
                * ListConfigRules请求参数结构体
                */
                class ListConfigRulesRequest : public AbstractModel
                {
                public:
                    ListConfigRulesRequest();
                    ~ListConfigRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页数量。
取值范围：1~200
                     * @return Limit 每页数量。
取值范围：1~200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量。
取值范围：1~200
                     * @param _limit 每页数量。
取值范围：1~200
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
                     * 获取偏移量。
取值范围：最小值为0
                     * @return Offset 偏移量。
取值范围：最小值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。
取值范围：最小值为0
                     * @param _offset 偏移量。
取值范围：最小值为0
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
                     * 获取排序类型(规则名称)。
倒序：desc，
顺序：asc
                     * @return OrderType 排序类型(规则名称)。
倒序：desc，
顺序：asc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序类型(规则名称)。
倒序：desc，
顺序：asc
                     * @param _orderType 排序类型(规则名称)。
倒序：desc，
顺序：asc
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
                     * 获取风险等级。
1：高风险，
2：中风险，
3：低风险。
                     * @return RiskLevel 风险等级。
1：高风险，
2：中风险，
3：低风险。
                     * 
                     */
                    std::vector<uint64_t> GetRiskLevel() const;

                    /**
                     * 设置风险等级。
1：高风险，
2：中风险，
3：低风险。
                     * @param _riskLevel 风险等级。
1：高风险，
2：中风险，
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
                     * 获取规则状态。
ACTIVE：启用
UN_ACTIVE：停用

                     * @return State 规则状态。
ACTIVE：启用
UN_ACTIVE：停用

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置规则状态。
ACTIVE：启用
UN_ACTIVE：停用

                     * @param _state 规则状态。
ACTIVE：启用
UN_ACTIVE：停用

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
                     * 获取评估结果。
COMPLIANT：合规
NON_COMPLIANT：不合规
                     * @return ComplianceResult 评估结果。
COMPLIANT：合规
NON_COMPLIANT：不合规
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置评估结果。
COMPLIANT：合规
NON_COMPLIANT：不合规
                     * @param _complianceResult 评估结果。
COMPLIANT：合规
NON_COMPLIANT：不合规
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

                private:

                    /**
                     * 每页数量。
取值范围：1~200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。
取值范围：最小值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序类型(规则名称)。
倒序：desc，
顺序：asc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 风险等级。
1：高风险，
2：中风险，
3：低风险。
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则状态。
ACTIVE：启用
UN_ACTIVE：停用

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 评估结果。
COMPLIANT：合规
NON_COMPLIANT：不合规
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTCONFIGRULESREQUEST_H_
