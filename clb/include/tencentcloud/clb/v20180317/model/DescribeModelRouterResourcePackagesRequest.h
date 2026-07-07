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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterResourcePackages请求参数结构体
                */
                class DescribeModelRouterResourcePackagesRequest : public AbstractModel
                {
                public:
                    DescribeModelRouterResourcePackagesRequest();
                    ~DescribeModelRouterResourcePackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由资源包Id。</p>
                     * @return ModelRouterResourcePackageIds <p>模型路由资源包Id。</p>
                     * 
                     */
                    std::vector<std::string> GetModelRouterResourcePackageIds() const;

                    /**
                     * 设置<p>模型路由资源包Id。</p>
                     * @param _modelRouterResourcePackageIds <p>模型路由资源包Id。</p>
                     * 
                     */
                    void SetModelRouterResourcePackageIds(const std::vector<std::string>& _modelRouterResourcePackageIds);

                    /**
                     * 判断参数 ModelRouterResourcePackageIds 是否已赋值
                     * @return ModelRouterResourcePackageIds 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageIdsHasBeenSet() const;

                    /**
                     * 获取<p>数据偏移量。</p><p>默认值：0</p>
                     * @return Offset <p>数据偏移量。</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量。</p><p>默认值：0</p>
                     * @param _offset <p>数据偏移量。</p><p>默认值：0</p>
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
                     * 获取<p>返回的数量，最大值为100。</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>返回的数量，最大值为100。</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回的数量，最大值为100。</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>返回的数量，最大值为100。</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * 获取<p>排序参数，支持以下字段：&quot;buyTime&quot;, &quot;startTime&quot;, &quot;endTime&quot;</p>
                     * @return OrderBy <p>排序参数，支持以下字段：&quot;buyTime&quot;, &quot;startTime&quot;, &quot;endTime&quot;</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序参数，支持以下字段：&quot;buyTime&quot;, &quot;startTime&quot;, &quot;endTime&quot;</p>
                     * @param _orderBy <p>排序参数，支持以下字段：&quot;buyTime&quot;, &quot;startTime&quot;, &quot;endTime&quot;</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>排序方式：asc，desc，默认asc</p>
                     * @return SortBy <p>排序方式：asc，desc，默认asc</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>排序方式：asc，desc，默认asc</p>
                     * @param _sortBy <p>排序方式：asc，desc，默认asc</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>查询的过滤条件。</p><p>每次请求的Filters的上限为10，Filter.Values的上限为100。 Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下： status - Integer - 是否必填：否 - 状态：0-有效 1-已退款 2-已过期 3-已用完。 effect_time_start - String - 是否必填：否 - 生效起始时间,YYYY-MM-DD HH:MM:SS格式。 effect_time_end - String - 是否必填：否 - 生效截止时间。 expire_time_start - String - 是否必填：否 - 失效起始时间。 expire_time_end - String - 是否必填：否 - 失效截止时间。</p>
                     * @return Filters <p>查询的过滤条件。</p><p>每次请求的Filters的上限为10，Filter.Values的上限为100。 Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下： status - Integer - 是否必填：否 - 状态：0-有效 1-已退款 2-已过期 3-已用完。 effect_time_start - String - 是否必填：否 - 生效起始时间,YYYY-MM-DD HH:MM:SS格式。 effect_time_end - String - 是否必填：否 - 生效截止时间。 expire_time_start - String - 是否必填：否 - 失效起始时间。 expire_time_end - String - 是否必填：否 - 失效截止时间。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询的过滤条件。</p><p>每次请求的Filters的上限为10，Filter.Values的上限为100。 Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下： status - Integer - 是否必填：否 - 状态：0-有效 1-已退款 2-已过期 3-已用完。 effect_time_start - String - 是否必填：否 - 生效起始时间,YYYY-MM-DD HH:MM:SS格式。 effect_time_end - String - 是否必填：否 - 生效截止时间。 expire_time_start - String - 是否必填：否 - 失效起始时间。 expire_time_end - String - 是否必填：否 - 失效截止时间。</p>
                     * @param _filters <p>查询的过滤条件。</p><p>每次请求的Filters的上限为10，Filter.Values的上限为100。 Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下： status - Integer - 是否必填：否 - 状态：0-有效 1-已退款 2-已过期 3-已用完。 effect_time_start - String - 是否必填：否 - 生效起始时间,YYYY-MM-DD HH:MM:SS格式。 effect_time_end - String - 是否必填：否 - 生效截止时间。 expire_time_start - String - 是否必填：否 - 失效起始时间。 expire_time_end - String - 是否必填：否 - 失效截止时间。</p>
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
                     * <p>模型路由资源包Id。</p>
                     */
                    std::vector<std::string> m_modelRouterResourcePackageIds;
                    bool m_modelRouterResourcePackageIdsHasBeenSet;

                    /**
                     * <p>数据偏移量。</p><p>默认值：0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回的数量，最大值为100。</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序参数，支持以下字段：&quot;buyTime&quot;, &quot;startTime&quot;, &quot;endTime&quot;</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>排序方式：asc，desc，默认asc</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>查询的过滤条件。</p><p>每次请求的Filters的上限为10，Filter.Values的上限为100。 Filter.Name和Filter.Values皆为必填项。详细的过滤条件如下： status - Integer - 是否必填：否 - 状态：0-有效 1-已退款 2-已过期 3-已用完。 effect_time_start - String - 是否必填：否 - 生效起始时间,YYYY-MM-DD HH:MM:SS格式。 effect_time_end - String - 是否必填：否 - 生效截止时间。 expire_time_start - String - 是否必填：否 - 失效起始时间。 expire_time_end - String - 是否必填：否 - 失效截止时间。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESREQUEST_H_
