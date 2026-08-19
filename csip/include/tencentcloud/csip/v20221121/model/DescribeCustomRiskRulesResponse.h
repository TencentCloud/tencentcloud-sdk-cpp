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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomRiskRuleItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>
#include <tencentcloud/csip/v20221121/model/StandardItem.h>
#include <tencentcloud/csip/v20221121/model/RuleStatisticsItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCustomRiskRules返回参数结构体
                */
                class DescribeCustomRiskRulesResponse : public AbstractModel
                {
                public:
                    DescribeCustomRiskRulesResponse();
                    ~DescribeCustomRiskRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>风险规则数量</p>
                     * @return TotalCount <p>风险规则数量</p>
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
                     * 获取<p>风险规则列表</p>
                     * @return RiskRuleList <p>风险规则列表</p>
                     * 
                     */
                    std::vector<CustomRiskRuleItem> GetRiskRuleList() const;

                    /**
                     * 判断参数 RiskRuleList 是否已赋值
                     * @return RiskRuleList 是否已赋值
                     * 
                     */
                    bool RiskRuleListHasBeenSet() const;

                    /**
                     * 获取<p>云厂商选项</p>
                     * @return ProviderList <p>云厂商选项</p>
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
                     * 获取<p>资产类型选项</p>
                     * @return AssetTypeList <p>资产类型选项</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>安全条款规范</p>
                     * @return StandardNameList <p>安全条款规范</p>
                     * 
                     */
                    std::vector<StandardItem> GetStandardNameList() const;

                    /**
                     * 判断参数 StandardNameList 是否已赋值
                     * @return StandardNameList 是否已赋值
                     * 
                     */
                    bool StandardNameListHasBeenSet() const;

                    /**
                     * 获取<p>风险等级</p>
                     * @return RuleSeverityList <p>风险等级</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetRuleSeverityList() const;

                    /**
                     * 判断参数 RuleSeverityList 是否已赋值
                     * @return RuleSeverityList 是否已赋值
                     * 
                     */
                    bool RuleSeverityListHasBeenSet() const;

                    /**
                     * 获取<p>检查类型</p>
                     * @return CheckTypeList <p>检查类型</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetCheckTypeList() const;

                    /**
                     * 判断参数 CheckTypeList 是否已赋值
                     * @return CheckTypeList 是否已赋值
                     * 
                     */
                    bool CheckTypeListHasBeenSet() const;

                    /**
                     * 获取<p>安全分类</p>
                     * @return ClassifyList <p>安全分类</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetClassifyList() const;

                    /**
                     * 判断参数 ClassifyList 是否已赋值
                     * @return ClassifyList 是否已赋值
                     * 
                     */
                    bool ClassifyListHasBeenSet() const;

                    /**
                     * 获取<p>安全规范</p>
                     * @return StandardList <p>安全规范</p>
                     * 
                     */
                    std::vector<RuleStatisticsItem> GetStandardList() const;

                    /**
                     * 判断参数 StandardList 是否已赋值
                     * @return StandardList 是否已赋值
                     * 
                     */
                    bool StandardListHasBeenSet() const;

                private:

                    /**
                     * <p>风险规则数量</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>风险规则列表</p>
                     */
                    std::vector<CustomRiskRuleItem> m_riskRuleList;
                    bool m_riskRuleListHasBeenSet;

                    /**
                     * <p>云厂商选项</p>
                     */
                    std::vector<AttributeOptionSet> m_providerList;
                    bool m_providerListHasBeenSet;

                    /**
                     * <p>资产类型选项</p>
                     */
                    std::vector<AttributeOptionSet> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>安全条款规范</p>
                     */
                    std::vector<StandardItem> m_standardNameList;
                    bool m_standardNameListHasBeenSet;

                    /**
                     * <p>风险等级</p>
                     */
                    std::vector<RuleStatisticsItem> m_ruleSeverityList;
                    bool m_ruleSeverityListHasBeenSet;

                    /**
                     * <p>检查类型</p>
                     */
                    std::vector<RuleStatisticsItem> m_checkTypeList;
                    bool m_checkTypeListHasBeenSet;

                    /**
                     * <p>安全分类</p>
                     */
                    std::vector<RuleStatisticsItem> m_classifyList;
                    bool m_classifyListHasBeenSet;

                    /**
                     * <p>安全规范</p>
                     */
                    std::vector<RuleStatisticsItem> m_standardList;
                    bool m_standardListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULESRESPONSE_H_
