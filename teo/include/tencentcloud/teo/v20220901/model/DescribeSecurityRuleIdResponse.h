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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupRule.h>
#include <tencentcloud/teo/v20220901/model/SecurityRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityRuleId返回参数结构体
                */
                class DescribeSecurityRuleIdResponse : public AbstractModel
                {
                public:
                    DescribeSecurityRuleIdResponse();
                    ~DescribeSecurityRuleIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取托管规则类型的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WafGroupRules 托管规则类型的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WafGroupRule> GetWafGroupRules() const;

                    /**
                     * 判断参数 WafGroupRules 是否已赋值
                     * @return WafGroupRules 是否已赋值
                     */
                    bool WafGroupRulesHasBeenSet() const;

                    /**
                     * 获取自定义规则、速率限制、Bot规则的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityRules 自定义规则、速率限制、Bot规则的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityRule> GetSecurityRules() const;

                    /**
                     * 判断参数 SecurityRules 是否已赋值
                     * @return SecurityRules 是否已赋值
                     */
                    bool SecurityRulesHasBeenSet() const;

                private:

                    /**
                     * 托管规则类型的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WafGroupRule> m_wafGroupRules;
                    bool m_wafGroupRulesHasBeenSet;

                    /**
                     * 自定义规则、速率限制、Bot规则的规则列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecurityRule> m_securityRules;
                    bool m_securityRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYRULEIDRESPONSE_H_
