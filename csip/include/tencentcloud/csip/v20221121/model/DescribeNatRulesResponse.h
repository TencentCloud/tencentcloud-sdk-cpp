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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENATRULESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENATRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NatDnatRuleItem.h>
#include <tencentcloud/csip/v20221121/model/NatSnatRuleItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeNatRules返回参数结构体
                */
                class DescribeNatRulesResponse : public AbstractModel
                {
                public:
                    DescribeNatRulesResponse();
                    ~DescribeNatRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Dnat规则列表</p>
                     * @return DnatRules <p>Dnat规则列表</p>
                     * 
                     */
                    std::vector<NatDnatRuleItem> GetDnatRules() const;

                    /**
                     * 判断参数 DnatRules 是否已赋值
                     * @return DnatRules 是否已赋值
                     * 
                     */
                    bool DnatRulesHasBeenSet() const;

                    /**
                     * 获取<p>Snat规则列表</p>
                     * @return SnatRules <p>Snat规则列表</p>
                     * 
                     */
                    std::vector<NatSnatRuleItem> GetSnatRules() const;

                    /**
                     * 判断参数 SnatRules 是否已赋值
                     * @return SnatRules 是否已赋值
                     * 
                     */
                    bool SnatRulesHasBeenSet() const;

                private:

                    /**
                     * <p>Dnat规则列表</p>
                     */
                    std::vector<NatDnatRuleItem> m_dnatRules;
                    bool m_dnatRulesHasBeenSet;

                    /**
                     * <p>Snat规则列表</p>
                     */
                    std::vector<NatSnatRuleItem> m_snatRules;
                    bool m_snatRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENATRULESRESPONSE_H_
