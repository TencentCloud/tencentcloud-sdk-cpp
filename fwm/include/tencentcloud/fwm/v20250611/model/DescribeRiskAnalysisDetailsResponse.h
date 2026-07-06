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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/AnalysisSgRuleInfoResp.h>
#include <tencentcloud/fwm/v20250611/model/SecurityGroupRiskPolicy.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeRiskAnalysisDetails返回参数结构体
                */
                class DescribeRiskAnalysisDetailsResponse : public AbstractModel
                {
                public:
                    DescribeRiskAnalysisDetailsResponse();
                    ~DescribeRiskAnalysisDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险企业安全组规则列表
                     * @return EnterpriseSecurityGroupRule 风险企业安全组规则列表
                     * 
                     */
                    std::vector<AnalysisSgRuleInfoResp> GetEnterpriseSecurityGroupRule() const;

                    /**
                     * 判断参数 EnterpriseSecurityGroupRule 是否已赋值
                     * @return EnterpriseSecurityGroupRule 是否已赋值
                     * 
                     */
                    bool EnterpriseSecurityGroupRuleHasBeenSet() const;

                    /**
                     * 获取风险安全组规则列表
                     * @return SecurityGroupPolicy 风险安全组规则列表
                     * 
                     */
                    std::vector<SecurityGroupRiskPolicy> GetSecurityGroupPolicy() const;

                    /**
                     * 判断参数 SecurityGroupPolicy 是否已赋值
                     * @return SecurityGroupPolicy 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicyHasBeenSet() const;

                    /**
                     * 获取实时分析状态，1分析执行中请轮询，0分析已结束
                     * @return Status 实时分析状态，1分析执行中请轮询，0分析已结束
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取风险企业安全组IPV6规则列表
                     * @return EnterpriseSecurityGroupRuleIPV6 风险企业安全组IPV6规则列表
                     * 
                     */
                    std::vector<AnalysisSgRuleInfoResp> GetEnterpriseSecurityGroupRuleIPV6() const;

                    /**
                     * 判断参数 EnterpriseSecurityGroupRuleIPV6 是否已赋值
                     * @return EnterpriseSecurityGroupRuleIPV6 是否已赋值
                     * 
                     */
                    bool EnterpriseSecurityGroupRuleIPV6HasBeenSet() const;

                private:

                    /**
                     * 风险企业安全组规则列表
                     */
                    std::vector<AnalysisSgRuleInfoResp> m_enterpriseSecurityGroupRule;
                    bool m_enterpriseSecurityGroupRuleHasBeenSet;

                    /**
                     * 风险安全组规则列表
                     */
                    std::vector<SecurityGroupRiskPolicy> m_securityGroupPolicy;
                    bool m_securityGroupPolicyHasBeenSet;

                    /**
                     * 实时分析状态，1分析执行中请轮询，0分析已结束
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险企业安全组IPV6规则列表
                     */
                    std::vector<AnalysisSgRuleInfoResp> m_enterpriseSecurityGroupRuleIPV6;
                    bool m_enterpriseSecurityGroupRuleIPV6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBERISKANALYSISDETAILSRESPONSE_H_
