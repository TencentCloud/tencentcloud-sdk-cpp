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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/DomainRuleSet.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRules返回参数结构体
                */
                class DescribeRulesResponse : public AbstractModel
                {
                public:
                    DescribeRulesResponse();
                    ~DescribeRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按照域名分类的规则信息列表
                     * @return DomainRuleSet 按照域名分类的规则信息列表
                     * 
                     */
                    std::vector<DomainRuleSet> GetDomainRuleSet() const;

                    /**
                     * 判断参数 DomainRuleSet 是否已赋值
                     * @return DomainRuleSet 是否已赋值
                     * 
                     */
                    bool DomainRuleSetHasBeenSet() const;

                    /**
                     * 获取该监听器下的域名总数
                     * @return TotalCount 该监听器下的域名总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 按照域名分类的规则信息列表
                     */
                    std::vector<DomainRuleSet> m_domainRuleSet;
                    bool m_domainRuleSetHasBeenSet;

                    /**
                     * 该监听器下的域名总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERULESRESPONSE_H_
