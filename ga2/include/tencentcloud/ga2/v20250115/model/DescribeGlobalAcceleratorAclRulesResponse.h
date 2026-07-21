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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORACLRULESRESPONSE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORACLRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/GlobalAcceleratorAclRuleSet.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeGlobalAcceleratorAclRules返回参数结构体
                */
                class DescribeGlobalAcceleratorAclRulesResponse : public AbstractModel
                {
                public:
                    DescribeGlobalAcceleratorAclRulesResponse();
                    ~DescribeGlobalAcceleratorAclRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合条件的Acl规则实例。</p>
                     * @return GlobalAcceleratorAclRuleSet <p>符合条件的Acl规则实例。</p>
                     * 
                     */
                    std::vector<GlobalAcceleratorAclRuleSet> GetGlobalAcceleratorAclRuleSet() const;

                    /**
                     * 判断参数 GlobalAcceleratorAclRuleSet 是否已赋值
                     * @return GlobalAcceleratorAclRuleSet 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorAclRuleSetHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的实例个数。</p>
                     * @return TotalCount <p>符合条件的实例个数。</p>
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
                     * <p>符合条件的Acl规则实例。</p>
                     */
                    std::vector<GlobalAcceleratorAclRuleSet> m_globalAcceleratorAclRuleSet;
                    bool m_globalAcceleratorAclRuleSetHasBeenSet;

                    /**
                     * <p>符合条件的实例个数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORACLRULESRESPONSE_H_
