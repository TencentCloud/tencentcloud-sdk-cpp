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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_

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
                * DescribeRoutePolicyEntries请求参数结构体
                */
                class DescribeRoutePolicyEntriesRequest : public AbstractModel
                {
                public:
                    DescribeRoutePolicyEntriesRequest();
                    ~DescribeRoutePolicyEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，参数不支持同时指定RoutePolicyEntryIds和Filters。
<li>route-policy-id - String - （过滤条件）路由接收策略实例ID，形如：rrp-f49l6u0z。</li>
<li>cidr-block - String - （过滤条件）CIDR(只取掩码前的子网部分)，形如：10.0.0.0/8。</li>
<li>priority - Integer - （过滤条件）优先级，形如：20。</li>
<li>gateway-type - String - （过滤条件）下一跳类型，形如：CVM。</li>
<li>gateway-id - String - （过滤条件）下一跳实例唯一ID，形如：ccn-f49l6u0z。</li>
<li>route-type - String - （过滤条件）路由类型，取值：USER（用户路由），NETD（网络探测下发的路由），CCN（云联网路由）。</li>
<li>action - String - （过滤条件）动作，取值：DROP（丢弃），DISABLE（接收且禁用），ACCEPT（接收且启用）。</li>
<li>description - String - （过滤条件）描述，形如：TEST。</li>
<li>route-policy-item-id - String - （过滤条件）路由接收策略条目唯一ID，形如：rrpi-dq782kw7。</li>
                     * @return Filters 过滤条件，参数不支持同时指定RoutePolicyEntryIds和Filters。
<li>route-policy-id - String - （过滤条件）路由接收策略实例ID，形如：rrp-f49l6u0z。</li>
<li>cidr-block - String - （过滤条件）CIDR(只取掩码前的子网部分)，形如：10.0.0.0/8。</li>
<li>priority - Integer - （过滤条件）优先级，形如：20。</li>
<li>gateway-type - String - （过滤条件）下一跳类型，形如：CVM。</li>
<li>gateway-id - String - （过滤条件）下一跳实例唯一ID，形如：ccn-f49l6u0z。</li>
<li>route-type - String - （过滤条件）路由类型，取值：USER（用户路由），NETD（网络探测下发的路由），CCN（云联网路由）。</li>
<li>action - String - （过滤条件）动作，取值：DROP（丢弃），DISABLE（接收且禁用），ACCEPT（接收且启用）。</li>
<li>description - String - （过滤条件）描述，形如：TEST。</li>
<li>route-policy-item-id - String - （过滤条件）路由接收策略条目唯一ID，形如：rrpi-dq782kw7。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，参数不支持同时指定RoutePolicyEntryIds和Filters。
<li>route-policy-id - String - （过滤条件）路由接收策略实例ID，形如：rrp-f49l6u0z。</li>
<li>cidr-block - String - （过滤条件）CIDR(只取掩码前的子网部分)，形如：10.0.0.0/8。</li>
<li>priority - Integer - （过滤条件）优先级，形如：20。</li>
<li>gateway-type - String - （过滤条件）下一跳类型，形如：CVM。</li>
<li>gateway-id - String - （过滤条件）下一跳实例唯一ID，形如：ccn-f49l6u0z。</li>
<li>route-type - String - （过滤条件）路由类型，取值：USER（用户路由），NETD（网络探测下发的路由），CCN（云联网路由）。</li>
<li>action - String - （过滤条件）动作，取值：DROP（丢弃），DISABLE（接收且禁用），ACCEPT（接收且启用）。</li>
<li>description - String - （过滤条件）描述，形如：TEST。</li>
<li>route-policy-item-id - String - （过滤条件）路由接收策略条目唯一ID，形如：rrpi-dq782kw7。</li>
                     * @param _filters 过滤条件，参数不支持同时指定RoutePolicyEntryIds和Filters。
<li>route-policy-id - String - （过滤条件）路由接收策略实例ID，形如：rrp-f49l6u0z。</li>
<li>cidr-block - String - （过滤条件）CIDR(只取掩码前的子网部分)，形如：10.0.0.0/8。</li>
<li>priority - Integer - （过滤条件）优先级，形如：20。</li>
<li>gateway-type - String - （过滤条件）下一跳类型，形如：CVM。</li>
<li>gateway-id - String - （过滤条件）下一跳实例唯一ID，形如：ccn-f49l6u0z。</li>
<li>route-type - String - （过滤条件）路由类型，取值：USER（用户路由），NETD（网络探测下发的路由），CCN（云联网路由）。</li>
<li>action - String - （过滤条件）动作，取值：DROP（丢弃），DISABLE（接收且禁用），ACCEPT（接收且启用）。</li>
<li>description - String - （过滤条件）描述，形如：TEST。</li>
<li>route-policy-item-id - String - （过滤条件）路由接收策略条目唯一ID，形如：rrpi-dq782kw7。</li>
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

                    /**
                     * 获取排序字段。当前只支持优先级Prioriry字段。
                     * @return OrderField 排序字段。当前只支持优先级Prioriry字段。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。当前只支持优先级Prioriry字段。
                     * @param _orderField 排序字段。当前只支持优先级Prioriry字段。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方向。
ASC：升序。
DESC：降序。
                     * @return OrderDirection 排序方向。
ASC：升序。
DESC：降序。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方向。
ASC：升序。
DESC：降序。
                     * @param _orderDirection 排序方向。
ASC：升序。
DESC：降序。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                    /**
                     * 获取路由策略条目ID。
                     * @return RoutePolicyEntryIds 路由策略条目ID。
                     * 
                     */
                    std::vector<std::string> GetRoutePolicyEntryIds() const;

                    /**
                     * 设置路由策略条目ID。
                     * @param _routePolicyEntryIds 路由策略条目ID。
                     * 
                     */
                    void SetRoutePolicyEntryIds(const std::vector<std::string>& _routePolicyEntryIds);

                    /**
                     * 判断参数 RoutePolicyEntryIds 是否已赋值
                     * @return RoutePolicyEntryIds 是否已赋值
                     * 
                     */
                    bool RoutePolicyEntryIdsHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，参数不支持同时指定RoutePolicyEntryIds和Filters。
<li>route-policy-id - String - （过滤条件）路由接收策略实例ID，形如：rrp-f49l6u0z。</li>
<li>cidr-block - String - （过滤条件）CIDR(只取掩码前的子网部分)，形如：10.0.0.0/8。</li>
<li>priority - Integer - （过滤条件）优先级，形如：20。</li>
<li>gateway-type - String - （过滤条件）下一跳类型，形如：CVM。</li>
<li>gateway-id - String - （过滤条件）下一跳实例唯一ID，形如：ccn-f49l6u0z。</li>
<li>route-type - String - （过滤条件）路由类型，取值：USER（用户路由），NETD（网络探测下发的路由），CCN（云联网路由）。</li>
<li>action - String - （过滤条件）动作，取值：DROP（丢弃），DISABLE（接收且禁用），ACCEPT（接收且启用）。</li>
<li>description - String - （过滤条件）描述，形如：TEST。</li>
<li>route-policy-item-id - String - （过滤条件）路由接收策略条目唯一ID，形如：rrpi-dq782kw7。</li>
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

                    /**
                     * 排序字段。当前只支持优先级Prioriry字段。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方向。
ASC：升序。
DESC：降序。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                    /**
                     * 路由策略条目ID。
                     */
                    std::vector<std::string> m_routePolicyEntryIds;
                    bool m_routePolicyEntryIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTEPOLICYENTRIESREQUEST_H_
