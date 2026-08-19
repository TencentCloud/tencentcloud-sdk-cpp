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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLRULESAGGREGATIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLRULESAGGREGATIONREQUEST_H_

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
                * DescribeReverseShellRulesAggregation请求参数结构体
                */
                class DescribeReverseShellRulesAggregationRequest : public AbstractModel
                {
                public:
                    DescribeReverseShellRulesAggregationRequest();
                    ~DescribeReverseShellRulesAggregationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回数量，默认为10，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为10，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为10，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为10，最大值为100。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>过滤条件。</p><li>Keywords - String - 是否必填：否 - 关键字(进程名称)</li>
                     * @return Filters <p>过滤条件。</p><li>Keywords - String - 是否必填：否 - 关键字(进程名称)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。</p><li>Keywords - String - 是否必填：否 - 关键字(进程名称)</li>
                     * @param _filters <p>过滤条件。</p><li>Keywords - String - 是否必填：否 - 关键字(进程名称)</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序字段，目前有：CreateTime、ModifyTime，默认按照ModifyTime排序</p>
                     * @return By <p>排序字段，目前有：CreateTime、ModifyTime，默认按照ModifyTime排序</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段，目前有：CreateTime、ModifyTime，默认按照ModifyTime排序</p>
                     * @param _by <p>排序字段，目前有：CreateTime、ModifyTime，默认按照ModifyTime排序</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取<p>排序升序还是倒序，DESC有ASC、</p>
                     * @return Order <p>排序升序还是倒序，DESC有ASC、</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序升序还是倒序，DESC有ASC、</p>
                     * @param _order <p>排序升序还是倒序，DESC有ASC、</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * <p>返回数量，默认为10，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件。</p><li>Keywords - String - 是否必填：否 - 关键字(进程名称)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段，目前有：CreateTime、ModifyTime，默认按照ModifyTime排序</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>排序升序还是倒序，DESC有ASC、</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEREVERSESHELLRULESAGGREGATIONREQUEST_H_
