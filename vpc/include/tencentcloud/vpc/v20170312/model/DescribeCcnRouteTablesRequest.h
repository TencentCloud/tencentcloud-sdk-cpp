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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCcnRouteTables请求参数结构体
                */
                class DescribeCcnRouteTablesRequest : public AbstractModel
                {
                public:
                    DescribeCcnRouteTablesRequest();
                    ~DescribeCcnRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID。</li>
<li>route-table-name - String -（过滤条件）路由表名称。</li>
<li>route-table-description- String -（过滤条件）路由表备注。</li>
                     * @return Filters 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID。</li>
<li>route-table-name - String -（过滤条件）路由表名称。</li>
<li>route-table-description- String -（过滤条件）路由表备注。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID。</li>
<li>route-table-name - String -（过滤条件）路由表名称。</li>
<li>route-table-description- String -（过滤条件）路由表备注。</li>
                     * @param _filters 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID。</li>
<li>route-table-name - String -（过滤条件）路由表名称。</li>
<li>route-table-description- String -（过滤条件）路由表备注。</li>
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
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
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
                     * 获取一次查询最大返回的数量。
                     * @return Limit 一次查询最大返回的数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一次查询最大返回的数量。
                     * @param _limit 一次查询最大返回的数量。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 过滤条件：
<li>ccn-id - String -（过滤条件）CCN实例ID。</li>
<li>route-table-id - String -（过滤条件）路由表ID。</li>
<li>route-table-name - String -（过滤条件）路由表名称。</li>
<li>route-table-description- String -（过滤条件）路由表备注。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一次查询最大返回的数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECCNROUTETABLESREQUEST_H_
