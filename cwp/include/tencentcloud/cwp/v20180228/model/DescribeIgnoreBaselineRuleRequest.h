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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreBaselineRule请求参数结构体
                */
                class DescribeIgnoreBaselineRuleRequest : public AbstractModel
                {
                public:
                    DescribeIgnoreBaselineRuleRequest();
                    ~DescribeIgnoreBaselineRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数 最大100条
                     * @return Limit 分页参数 最大100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数 最大100条
                     * @param _limit 分页参数 最大100条
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取检测项名称
                     * @return RuleName 检测项名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置检测项名称
                     * @param _ruleName 检测项名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 分页参数 最大100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 检测项名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNOREBASELINERULEREQUEST_H_
