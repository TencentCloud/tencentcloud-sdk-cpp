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
                     * 获取数量
                     * @return Limit 数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量
                     * @param _limit 数量
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取合规包名称
                     * @return CompliancePackName 合规包名称
                     * 
                     */
                    std::string GetCompliancePackName() const;

                    /**
                     * 设置合规包名称
                     * @param _compliancePackName 合规包名称
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
                     * 获取合规包状态 ACTIVE、NO_ACTIVE
                     * @return Status 合规包状态 ACTIVE、NO_ACTIVE
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置合规包状态 ACTIVE、NO_ACTIVE
                     * @param _status 合规包状态 ACTIVE、NO_ACTIVE
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
                     * 获取评估状态合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
                     * @return ComplianceResult 评估状态合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
                     * 
                     */
                    std::vector<std::string> GetComplianceResult() const;

                    /**
                     * 设置评估状态合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
                     * @param _complianceResult 评估状态合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
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

                private:

                    /**
                     * 数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 账号组ID
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * 合规包名称
                     */
                    std::string m_compliancePackName;
                    bool m_compliancePackNameHasBeenSet;

                    /**
                     * 风险等级
1：高风险。
2：中风险。
3：低风险。
                     */
                    std::vector<uint64_t> m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 合规包状态 ACTIVE、NO_ACTIVE
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 评估状态合规： 'COMPLIANT'
不合规： 'NON_COMPLIANT'
                     */
                    std::vector<std::string> m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                    /**
                     * 排序类型, 倒序：desc，顺序：asc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATECOMPLIANCEPACKSREQUEST_H_
