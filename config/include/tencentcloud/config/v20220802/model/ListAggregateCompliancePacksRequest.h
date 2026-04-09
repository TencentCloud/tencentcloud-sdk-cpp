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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_

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
                * ListAggregateCompliancePacks请求参数结构体
                */
                class ListAggregateCompliancePacksRequest : public AbstractModel
                {
                public:
                    ListAggregateCompliancePacksRequest();
                    ~ListAggregateCompliancePacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数量</p>
                     * @return Limit <p>数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>数量</p>
                     * @param _limit <p>数量</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

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
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

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
                     * 获取<p>合规包名称</p>
                     * @return CompliancePackName <p>合规包名称</p>
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置<p>合规包名称</p>
                     * @param _compliancePackName <p>合规包名称</p>
                     * 
                     */
                    void SetCompliancePackName(const std::string& _compliancePackName);

                    /**
                     * 判断参数 CompliancePackName 是否已赋值
                     * @return CompliancePackName 是否已赋值
                     * 
                     */
                    bool CompliancePackNameHasBeenSet() const;

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
                     * 获取<p>合规包状态 ACTIVE、NO_ACTIVE</p>
                     * @return Status <p>合规包状态 ACTIVE、NO_ACTIVE</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>合规包状态 ACTIVE、NO_ACTIVE</p>
                     * @param _status <p>合规包状态 ACTIVE、NO_ACTIVE</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>评估状态合规： &#39;COMPLIANT&#39;<br>不合规： &#39;NON_COMPLIANT&#39;</p>
                     * @return ComplianceResult <p>评估状态合规： &#39;COMPLIANT&#39;<br>不合规： &#39;NON_COMPLIANT&#39;</p>
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置<p>评估状态合规： &#39;COMPLIANT&#39;<br>不合规： &#39;NON_COMPLIANT&#39;</p>
                     * @param _complianceResult <p>评估状态合规： &#39;COMPLIANT&#39;<br>不合规： &#39;NON_COMPLIANT&#39;</p>
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
                     * 获取<p>包含合规包结果定义</p><p>枚举值：</p><ul><li>NO： 不包含</li></ul><p>默认值：空</p><p>此字段为新增，因此不传或者传了YES都会默认返回包含合规结果数据，其他枚举值后面视情况丰富</p>
                     * @return IncludeCompliancePackRuleResult <p>包含合规包结果定义</p><p>枚举值：</p><ul><li>NO： 不包含</li></ul><p>默认值：空</p><p>此字段为新增，因此不传或者传了YES都会默认返回包含合规结果数据，其他枚举值后面视情况丰富</p>
                     * 
                     */
                    std::string GetIncludeCompliancePackRuleResult() const;

                    /**
                     * 设置<p>包含合规包结果定义</p><p>枚举值：</p><ul><li>NO： 不包含</li></ul><p>默认值：空</p><p>此字段为新增，因此不传或者传了YES都会默认返回包含合规结果数据，其他枚举值后面视情况丰富</p>
                     * @param _includeCompliancePackRuleResult <p>包含合规包结果定义</p><p>枚举值：</p><ul><li>NO： 不包含</li></ul><p>默认值：空</p><p>此字段为新增，因此不传或者传了YES都会默认返回包含合规结果数据，其他枚举值后面视情况丰富</p>
                     * 
                     */
                    void SetIncludeCompliancePackRuleResult(const std::string& _includeCompliancePackRuleResult);

                    /**
                     * 判断参数 IncludeCompliancePackRuleResult 是否已赋值
                     * @return IncludeCompliancePackRuleResult 是否已赋值
                     * 
                     */
                    bool IncludeCompliancePackRuleResultHasBeenSet() const;

                private:

                    /**
                     * <p>数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>账号组ID</p>
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>合规包名称</p>
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>合规包状态 ACTIVE、NO_ACTIVE</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>评估状态合规： &#39;COMPLIANT&#39;<br>不合规： &#39;NON_COMPLIANT&#39;</p>
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * <p>排序类型, 倒序：desc，顺序：asc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>包含合规包结果定义</p><p>枚举值：</p><ul><li>NO： 不包含</li></ul><p>默认值：空</p><p>此字段为新增，因此不传或者传了YES都会默认返回包含合规结果数据，其他枚举值后面视情况丰富</p>
                     */
                    std::string m_includeCompliancePackRuleResult;
                    bool m_includeCompliancePackRuleResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_
