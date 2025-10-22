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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskRuleInfo.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeConfigCheckRules返回参数结构体
                */
                class DescribeConfigCheckRulesResponse : public AbstractModel
                {
                public:
                    DescribeConfigCheckRulesResponse();
                    ~DescribeConfigCheckRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险规则数量
                     * @return TotalCount 风险规则数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取风险规则列表
                     * @return RuleList 风险规则列表
                     * 
                     */
                    std::vector<RiskRuleInfo> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                    /**
                     * 获取云厂商类型选项
                     * @return ProviderList 云厂商类型选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetProviderList() const;

                    /**
                     * 判断参数 ProviderList 是否已赋值
                     * @return ProviderList 是否已赋值
                     * 
                     */
                    bool ProviderListHasBeenSet() const;

                    /**
                     * 获取风险等级类型选项
                     * @return RiskLevelList 风险等级类型选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetRiskLevelList() const;

                    /**
                     * 判断参数 RiskLevelList 是否已赋值
                     * @return RiskLevelList 是否已赋值
                     * 
                     */
                    bool RiskLevelListHasBeenSet() const;

                    /**
                     * 获取处置分类选项
                     * @return DispositionTypeList 处置分类选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetDispositionTypeList() const;

                    /**
                     * 判断参数 DispositionTypeList 是否已赋值
                     * @return DispositionTypeList 是否已赋值
                     * 
                     */
                    bool DispositionTypeListHasBeenSet() const;

                    /**
                     * 获取检查类型选项
                     * @return CheckTypeList 检查类型选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetCheckTypeList() const;

                    /**
                     * 判断参数 CheckTypeList 是否已赋值
                     * @return CheckTypeList 是否已赋值
                     * 
                     */
                    bool CheckTypeListHasBeenSet() const;

                private:

                    /**
                     * 风险规则数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 风险规则列表
                     */
                    std::vector<RiskRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                    /**
                     * 云厂商类型选项
                     */
                    std::vector<AttributeOptionSet> m_providerList;
                    bool m_providerListHasBeenSet;

                    /**
                     * 风险等级类型选项
                     */
                    std::vector<AttributeOptionSet> m_riskLevelList;
                    bool m_riskLevelListHasBeenSet;

                    /**
                     * 处置分类选项
                     */
                    std::vector<AttributeOptionSet> m_dispositionTypeList;
                    bool m_dispositionTypeListHasBeenSet;

                    /**
                     * 检查类型选项
                     */
                    std::vector<AttributeOptionSet> m_checkTypeList;
                    bool m_checkTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECONFIGCHECKRULESRESPONSE_H_
