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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMMUTABLETAGRULESRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMMUTABLETAGRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ImmutableTagRule.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeImmutableTagRules返回参数结构体
                */
                class DescribeImmutableTagRulesResponse : public AbstractModel
                {
                public:
                    DescribeImmutableTagRulesResponse();
                    ~DescribeImmutableTagRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<ImmutableTagRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取未创建规则的命名空间
                     * @return EmptyNs 未创建规则的命名空间
                     * 
                     */
                    std::vector<std::string> GetEmptyNs() const;

                    /**
                     * 判断参数 EmptyNs 是否已赋值
                     * @return EmptyNs 是否已赋值
                     * 
                     */
                    bool EmptyNsHasBeenSet() const;

                    /**
                     * 获取规则总量
                     * @return Total 规则总量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<ImmutableTagRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 未创建规则的命名空间
                     */
                    std::vector<std::string> m_emptyNs;
                    bool m_emptyNsHasBeenSet;

                    /**
                     * 规则总量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEIMMUTABLETAGRULESRESPONSE_H_
