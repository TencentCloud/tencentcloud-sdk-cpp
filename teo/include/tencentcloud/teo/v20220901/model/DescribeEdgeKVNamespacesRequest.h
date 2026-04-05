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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeEdgeKVNamespaces请求参数结构体
                */
                class DescribeEdgeKVNamespacesRequest : public AbstractModel
                {
                public:
                    DescribeEdgeKVNamespacesRequest();
                    ~DescribeEdgeKVNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量。默认值：0。
                     * @return Offset 分页查询偏移量。默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认值：0。
                     * @param _offset 分页查询偏移量。默认值：0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目。默认值：20，最大值：1000。
                     * @return Limit 分页查询限制数目。默认值：20，最大值：1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：20，最大值：1000。
                     * @param _limit 分页查询限制数目。默认值：20，最大值：1000。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序依据，取值有：
<li>created-on：创建时间；</li>
<li>updated-on：更新时间。</li>
默认值为 created-on。
                     * @return SortBy 排序依据，取值有：
<li>created-on：创建时间；</li>
<li>updated-on：更新时间。</li>
默认值为 created-on。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序依据，取值有：
<li>created-on：创建时间；</li>
<li>updated-on：更新时间。</li>
默认值为 created-on。
                     * @param _sortBy 排序依据，取值有：
<li>created-on：创建时间；</li>
<li>updated-on：更新时间。</li>
默认值为 created-on。
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
                     * 获取列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>
默认值为 desc。

                     * @return SortOrder 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>
默认值为 desc。

                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>
默认值为 desc。

                     * @param _sortOrder 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>
默认值为 desc。

                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回站点 ID 下全部 KV 命名空间。详细的过滤条件如下：
<li>namespace：按照 KV 命名空间名称进行过滤，支持模糊查询；</li>
<li>remark：按照命名空间描述进行过滤，支持模糊查询。</li>

                     * @return Filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回站点 ID 下全部 KV 命名空间。详细的过滤条件如下：
<li>namespace：按照 KV 命名空间名称进行过滤，支持模糊查询；</li>
<li>remark：按照命名空间描述进行过滤，支持模糊查询。</li>

                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回站点 ID 下全部 KV 命名空间。详细的过滤条件如下：
<li>namespace：按照 KV 命名空间名称进行过滤，支持模糊查询；</li>
<li>remark：按照命名空间描述进行过滤，支持模糊查询。</li>

                     * @param _filters 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回站点 ID 下全部 KV 命名空间。详细的过滤条件如下：
<li>namespace：按照 KV 命名空间名称进行过滤，支持模糊查询；</li>
<li>remark：按照命名空间描述进行过滤，支持模糊查询。</li>

                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 分页查询偏移量。默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序依据，取值有：
<li>created-on：创建时间；</li>
<li>updated-on：更新时间。</li>
默认值为 created-on。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 列表排序方式，取值有：
<li>asc：升序排列；</li>
<li>desc：降序排列。</li>
默认值为 desc。

                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values 的上限为 20。该参数不填写时，返回站点 ID 下全部 KV 命名空间。详细的过滤条件如下：
<li>namespace：按照 KV 命名空间名称进行过滤，支持模糊查询；</li>
<li>remark：按照命名空间描述进行过滤，支持模糊查询。</li>

                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEEDGEKVNAMESPACESREQUEST_H_
