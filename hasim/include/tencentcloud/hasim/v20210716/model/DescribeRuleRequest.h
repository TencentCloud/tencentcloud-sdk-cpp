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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULEREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * DescribeRule请求参数结构体
                */
                class DescribeRuleRequest : public AbstractModel
                {
                public:
                    DescribeRuleRequest();
                    ~DescribeRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动化规则ID
                     * @return RuleID 自动化规则ID
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置自动化规则ID
                     * @param _ruleID 自动化规则ID
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * 自动化规则ID
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_DESCRIBERULEREQUEST_H_
