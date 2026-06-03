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
                     * 获取<p>风险规则ID</p>
                     * @return RiskRuleId <p>风险规则ID</p>
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
                     * 获取<p>云厂商</p>
                     * @return Provider <p>云厂商</p>
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
                     * 获取<p>风险名称</p>
                     * @return RiskName <p>风险名称</p>
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
                     * 获取<p>风险危害</p>
                     * @return RiskInfluence <p>风险危害</p>
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
                     * 获取<p>修复指引</p>
                     * @return RiskFixAdvice <p>修复指引</p>
                     * 
                     */
                    std::string GetRiskFixAdvice() const;

                    /**
                     * 判断参数 RiskFixAdvice 是否已赋值
                     * @return RiskFixAdvice 是否已赋值
                     * 
                     */
                    bool RiskFixAdviceHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p>
                     * @return AssetType <p>资产类型</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>风险规则ID</p>
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                    /**
                     * <p>云厂商</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>风险名称</p>
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * <p>风险危害</p>
                     */
                    std::string m_riskInfluence;
                    bool m_riskInfluenceHasBeenSet;

                    /**
                     * <p>修复指引</p>
                     */
                    std::string m_riskFixAdvice;
                    bool m_riskFixAdviceHasBeenSet;

                    /**
                     * <p>资产类型</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILRESPONSE_H_
