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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RiskRuleItem.h>
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
                * DescribeRiskRules返回参数结构体
                */
                class DescribeRiskRulesResponse : public AbstractModel
                {
                public:
                    DescribeRiskRulesResponse();
                    ~DescribeRiskRulesResponse() = default;
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
                     * @return RiskRuleList 风险规则列表
                     * 
                     */
                    std::vector<RiskRuleItem> GetRiskRuleList() const;

                    /**
                     * 判断参数 RiskRuleList 是否已赋值
                     * @return RiskRuleList 是否已赋值
                     * 
                     */
                    bool RiskRuleListHasBeenSet() const;

                    /**
                     * 获取实例类型选项
                     * @return InstanceTypeList 实例类型选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetInstanceTypeList() const;

                    /**
                     * 判断参数 InstanceTypeList 是否已赋值
                     * @return InstanceTypeList 是否已赋值
                     * 
                     */
                    bool InstanceTypeListHasBeenSet() const;

                private:

                    /**
                     * 风险规则数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 风险规则列表
                     */
                    std::vector<RiskRuleItem> m_riskRuleList;
                    bool m_riskRuleListHasBeenSet;

                    /**
                     * 实例类型选项
                     */
                    std::vector<AttributeOptionSet> m_instanceTypeList;
                    bool m_instanceTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULESRESPONSE_H_
