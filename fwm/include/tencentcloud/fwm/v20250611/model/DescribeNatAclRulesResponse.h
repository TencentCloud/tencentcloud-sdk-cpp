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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBENATACLRULESRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBENATACLRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/NatAclRuleResp.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeNatAclRules返回参数结构体
                */
                class DescribeNatAclRulesResponse : public AbstractModel
                {
                public:
                    DescribeNatAclRulesResponse();
                    ~DescribeNatAclRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<NatAclRuleResp> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
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
                     * 获取不过滤的总数
                     * @return AllTotalCount 不过滤的总数
                     * 
                     */
                    int64_t GetAllTotalCount() const;

                    /**
                     * 判断参数 AllTotalCount 是否已赋值
                     * @return AllTotalCount 是否已赋值
                     * 
                     */
                    bool AllTotalCountHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<NatAclRuleResp> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 不过滤的总数
                     */
                    int64_t m_allTotalCount;
                    bool m_allTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBENATACLRULESRESPONSE_H_
