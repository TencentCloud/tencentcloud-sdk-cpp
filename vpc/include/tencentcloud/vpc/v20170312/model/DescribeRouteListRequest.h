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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTELISTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTELISTREQUEST_H_

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
                * DescribeRouteList请求参数结构体
                */
                class DescribeRouteListRequest : public AbstractModel
                {
                public:
                    DescribeRouteListRequest();
                    ~DescribeRouteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>gateway-id - String - （过滤条件）网关ID。</li>
<li>description - String - （过滤条件）路由描述。</li>
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>dest-cidr - String - （过滤条件）目的端地址，支持模糊左匹配。</li>
                     * @return Filters <li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>gateway-id - String - （过滤条件）网关ID。</li>
<li>description - String - （过滤条件）路由描述。</li>
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>dest-cidr - String - （过滤条件）目的端地址，支持模糊左匹配。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>gateway-id - String - （过滤条件）网关ID。</li>
<li>description - String - （过滤条件）路由描述。</li>
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>dest-cidr - String - （过滤条件）目的端地址，支持模糊左匹配。</li>
                     * @param _filters <li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>gateway-id - String - （过滤条件）网关ID。</li>
<li>description - String - （过滤条件）路由描述。</li>
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>dest-cidr - String - （过滤条件）目的端地址，支持模糊左匹配。</li>
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
                     * 获取请求对象个数。
                     * @return Limit 请求对象个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置请求对象个数。
                     * @param _limit 请求对象个数。
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
                     * <li>vpc-id - String - （过滤条件）VPC实例ID，形如：vpc-f49l6u0z。</li>
<li>gateway-id - String - （过滤条件）网关ID。</li>
<li>description - String - （过滤条件）路由描述。</li>
<li>route-table-id - String - （过滤条件）路由表实例ID。</li>
<li>dest-cidr - String - （过滤条件）目的端地址，支持模糊左匹配。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 请求对象个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTELISTREQUEST_H_
