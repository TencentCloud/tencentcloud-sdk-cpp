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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrivateNatGatewayTranslationNatRules返回参数结构体
                */
                class DescribePrivateNatGatewayTranslationNatRulesResponse : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewayTranslationNatRulesResponse();
                    ~DescribePrivateNatGatewayTranslationNatRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对象数目。
                     * @return TotalCount 对象数目。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取转换规则详情数组。
                     * @return TranslationNatRuleSet 转换规则详情数组。
                     * 
                     */
                    std::vector<TranslationNatRule> GetTranslationNatRuleSet() const;

                    /**
                     * 判断参数 TranslationNatRuleSet 是否已赋值
                     * @return TranslationNatRuleSet 是否已赋值
                     * 
                     */
                    bool TranslationNatRuleSetHasBeenSet() const;

                private:

                    /**
                     * 对象数目。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 转换规则详情数组。
                     */
                    std::vector<TranslationNatRule> m_translationNatRuleSet;
                    bool m_translationNatRuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONNATRULESRESPONSE_H_
