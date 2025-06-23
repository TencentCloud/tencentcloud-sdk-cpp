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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRiskRuleDetail返回参数结构体
                */
                class DescribeRiskRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeRiskRuleDetailResponse();
                    ~DescribeRiskRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskRuleId 风险规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                    /**
                     * 获取云厂商
                     * @return Provider 云厂商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取风险名称
                     * @return RiskName 风险名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险危害
                     * @return RiskInfluence 风险危害
                     * 
                     */
                    std::string GetRiskInfluence() const;

                    /**
                     * 判断参数 RiskInfluence 是否已赋值
                     * @return RiskInfluence 是否已赋值
                     * 
                     */
                    bool RiskInfluenceHasBeenSet() const;

                    /**
                     * 获取修复指引
                     * @return RiskFixAdvice 修复指引
                     * 
                     */
                    std::string GetRiskFixAdvice() const;

                    /**
                     * 判断参数 RiskFixAdvice 是否已赋值
                     * @return RiskFixAdvice 是否已赋值
                     * 
                     */
                    bool RiskFixAdviceHasBeenSet() const;

                private:

                    /**
                     * 风险规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * 云厂商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险危害
                     */
                    std::string m_riskInfluence;
                    bool m_riskInfluenceHasBeenSet;

                    /**
                     * 修复指引
                     */
                    std::string m_riskFixAdvice;
                    bool m_riskFixAdviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_
