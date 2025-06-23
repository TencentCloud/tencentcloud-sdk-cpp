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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILREQUEST_H_

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
                * DescribeRiskRuleDetail请求参数结构体
                */
                class DescribeRiskRuleDetailRequest : public AbstractModel
                {
                public:
                    DescribeRiskRuleDetailRequest();
                    ~DescribeRiskRuleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取风险规则ID
                     * @return RiskRuleId 风险规则ID
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置风险规则ID
                     * @param _riskRuleId 风险规则ID
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

                private:

                    /**
                     * 风险规则ID
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBERISKRULEDETAILREQUEST_H_
