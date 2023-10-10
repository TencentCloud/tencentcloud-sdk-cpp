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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBashPolicies请求参数结构体
                */
                class DescribeBashPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeBashPoliciesRequest();
                    ~DescribeBashPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，最大值为100。
                     * @return Limit 返回数量，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，最大值为100。
                     * @param _limit 返回数量，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤条件。
<li>Name - String - 是否必填：否 - 规则名称</li>
<li>Rule - String - 是否必填：否 - 规则内容</li>
<li>Level - Int - 是否必填：否 - 威胁等级</li>
<li>White - Int - 是否必填：否 - 白名单类型</li>
<li>Category - Int - 是否必填：否 - 策略类型</li>
<li>BashAction - Int - 是否必填：否 - 操作动作</li>
<li>Enable - Int - 是否必填：否 - 生效状态</li>
<li>Id - Int - 是否必填：否 - 策略ID</li>
<li>PolicyId - Int - 是否必填：否 - 策略ID</li>
<li>RuleId - Int - 是否必填：否 - 策略ID</li>
                     * @return Filters 过滤条件。
<li>Name - String - 是否必填：否 - 规则名称</li>
<li>Rule - String - 是否必填：否 - 规则内容</li>
<li>Level - Int - 是否必填：否 - 威胁等级</li>
<li>White - Int - 是否必填：否 - 白名单类型</li>
<li>Category - Int - 是否必填：否 - 策略类型</li>
<li>BashAction - Int - 是否必填：否 - 操作动作</li>
<li>Enable - Int - 是否必填：否 - 生效状态</li>
<li>Id - Int - 是否必填：否 - 策略ID</li>
<li>PolicyId - Int - 是否必填：否 - 策略ID</li>
<li>RuleId - Int - 是否必填：否 - 策略ID</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Name - String - 是否必填：否 - 规则名称</li>
<li>Rule - String - 是否必填：否 - 规则内容</li>
<li>Level - Int - 是否必填：否 - 威胁等级</li>
<li>White - Int - 是否必填：否 - 白名单类型</li>
<li>Category - Int - 是否必填：否 - 策略类型</li>
<li>BashAction - Int - 是否必填：否 - 操作动作</li>
<li>Enable - Int - 是否必填：否 - 生效状态</li>
<li>Id - Int - 是否必填：否 - 策略ID</li>
<li>PolicyId - Int - 是否必填：否 - 策略ID</li>
<li>RuleId - Int - 是否必填：否 - 策略ID</li>
                     * @param _filters 过滤条件。
<li>Name - String - 是否必填：否 - 规则名称</li>
<li>Rule - String - 是否必填：否 - 规则内容</li>
<li>Level - Int - 是否必填：否 - 威胁等级</li>
<li>White - Int - 是否必填：否 - 白名单类型</li>
<li>Category - Int - 是否必填：否 - 策略类型</li>
<li>BashAction - Int - 是否必填：否 - 操作动作</li>
<li>Enable - Int - 是否必填：否 - 生效状态</li>
<li>Id - Int - 是否必填：否 - 策略ID</li>
<li>PolicyId - Int - 是否必填：否 - 策略ID</li>
<li>RuleId - Int - 是否必填：否 - 策略ID</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 返回数量，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>Name - String - 是否必填：否 - 规则名称</li>
<li>Rule - String - 是否必填：否 - 规则内容</li>
<li>Level - Int - 是否必填：否 - 威胁等级</li>
<li>White - Int - 是否必填：否 - 白名单类型</li>
<li>Category - Int - 是否必填：否 - 策略类型</li>
<li>BashAction - Int - 是否必填：否 - 操作动作</li>
<li>Enable - Int - 是否必填：否 - 生效状态</li>
<li>Id - Int - 是否必填：否 - 策略ID</li>
<li>PolicyId - Int - 是否必填：否 - 策略ID</li>
<li>RuleId - Int - 是否必填：否 - 策略ID</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASHPOLICIESREQUEST_H_
