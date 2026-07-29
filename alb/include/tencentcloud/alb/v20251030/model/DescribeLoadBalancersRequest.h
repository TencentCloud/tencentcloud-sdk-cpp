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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancers请求参数结构体
                */
                class DescribeLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersRequest();
                    ~DescribeLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询过滤条件，支持以下几个字段</p><ul><li><strong>LoadBalancerId</strong>: 负载均衡实例 ID</li><li><strong>LoadBalancerName</strong>: 负载均衡名称</li><li><strong>LoadBalancerStatus</strong>: 负载均衡状态</li><li><strong>VpcId</strong>: 私有网络 ID</li><li><strong>tag:tag-key</strong>：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 <code>tag:env</code> 表示按标签键 <code>env</code> 筛选。</li><li><strong>AddressType</strong>: 网络类型<ul><li><strong>Intranet</strong>: 内网</li><li><strong>Internet</strong>: 公网 </li></ul></li><li><strong>AddressIpVersion</strong>:<ul><li><strong>IPv4</strong>: IPv4 地址</li><li><strong>IPv6</strong> IPv6 地址</li></ul></li><li><strong>SecurityGroupId</strong>: 安全组ID</li></ul>
                     * @return Filters <p>查询过滤条件，支持以下几个字段</p><ul><li><strong>LoadBalancerId</strong>: 负载均衡实例 ID</li><li><strong>LoadBalancerName</strong>: 负载均衡名称</li><li><strong>LoadBalancerStatus</strong>: 负载均衡状态</li><li><strong>VpcId</strong>: 私有网络 ID</li><li><strong>tag:tag-key</strong>：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 <code>tag:env</code> 表示按标签键 <code>env</code> 筛选。</li><li><strong>AddressType</strong>: 网络类型<ul><li><strong>Intranet</strong>: 内网</li><li><strong>Internet</strong>: 公网 </li></ul></li><li><strong>AddressIpVersion</strong>:<ul><li><strong>IPv4</strong>: IPv4 地址</li><li><strong>IPv6</strong> IPv6 地址</li></ul></li><li><strong>SecurityGroupId</strong>: 安全组ID</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询过滤条件，支持以下几个字段</p><ul><li><strong>LoadBalancerId</strong>: 负载均衡实例 ID</li><li><strong>LoadBalancerName</strong>: 负载均衡名称</li><li><strong>LoadBalancerStatus</strong>: 负载均衡状态</li><li><strong>VpcId</strong>: 私有网络 ID</li><li><strong>tag:tag-key</strong>：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 <code>tag:env</code> 表示按标签键 <code>env</code> 筛选。</li><li><strong>AddressType</strong>: 网络类型<ul><li><strong>Intranet</strong>: 内网</li><li><strong>Internet</strong>: 公网 </li></ul></li><li><strong>AddressIpVersion</strong>:<ul><li><strong>IPv4</strong>: IPv4 地址</li><li><strong>IPv6</strong> IPv6 地址</li></ul></li><li><strong>SecurityGroupId</strong>: 安全组ID</li></ul>
                     * @param _filters <p>查询过滤条件，支持以下几个字段</p><ul><li><strong>LoadBalancerId</strong>: 负载均衡实例 ID</li><li><strong>LoadBalancerName</strong>: 负载均衡名称</li><li><strong>LoadBalancerStatus</strong>: 负载均衡状态</li><li><strong>VpcId</strong>: 私有网络 ID</li><li><strong>tag:tag-key</strong>：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 <code>tag:env</code> 表示按标签键 <code>env</code> 筛选。</li><li><strong>AddressType</strong>: 网络类型<ul><li><strong>Intranet</strong>: 内网</li><li><strong>Internet</strong>: 公网 </li></ul></li><li><strong>AddressIpVersion</strong>:<ul><li><strong>IPv4</strong>: IPv4 地址</li><li><strong>IPv6</strong> IPv6 地址</li></ul></li><li><strong>SecurityGroupId</strong>: 安全组ID</li></ul>
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
                     * 获取<p>分批次查询时每次显示的条目数。取值范围：<strong>1</strong>~<strong>100</strong>，默认值：<strong>20</strong>。</p>
                     * @return MaxResults <p>分批次查询时每次显示的条目数。取值范围：<strong>1</strong>~<strong>100</strong>，默认值：<strong>20</strong>。</p>
                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置<p>分批次查询时每次显示的条目数。取值范围：<strong>1</strong>~<strong>100</strong>，默认值：<strong>20</strong>。</p>
                     * @param _maxResults <p>分批次查询时每次显示的条目数。取值范围：<strong>1</strong>~<strong>100</strong>，默认值：<strong>20</strong>。</p>
                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>第一次查询和没有下一次查询时，均无需填写。</li><li>如果有下一次查询，取值为上一次API调用返回的<strong>NextToken</strong>值。</li></ul>
                     * @return NextToken <p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>第一次查询和没有下一次查询时，均无需填写。</li><li>如果有下一次查询，取值为上一次API调用返回的<strong>NextToken</strong>值。</li></ul>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>第一次查询和没有下一次查询时，均无需填写。</li><li>如果有下一次查询，取值为上一次API调用返回的<strong>NextToken</strong>值。</li></ul>
                     * @param _nextToken <p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>第一次查询和没有下一次查询时，均无需填写。</li><li>如果有下一次查询，取值为上一次API调用返回的<strong>NextToken</strong>值。</li></ul>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>查询过滤条件，支持以下几个字段</p><ul><li><strong>LoadBalancerId</strong>: 负载均衡实例 ID</li><li><strong>LoadBalancerName</strong>: 负载均衡名称</li><li><strong>LoadBalancerStatus</strong>: 负载均衡状态</li><li><strong>VpcId</strong>: 私有网络 ID</li><li><strong>tag:tag-key</strong>：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 <code>tag:env</code> 表示按标签键 <code>env</code> 筛选。</li><li><strong>AddressType</strong>: 网络类型<ul><li><strong>Intranet</strong>: 内网</li><li><strong>Internet</strong>: 公网 </li></ul></li><li><strong>AddressIpVersion</strong>:<ul><li><strong>IPv4</strong>: IPv4 地址</li><li><strong>IPv6</strong> IPv6 地址</li></ul></li><li><strong>SecurityGroupId</strong>: 安全组ID</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分批次查询时每次显示的条目数。取值范围：<strong>1</strong>~<strong>100</strong>，默认值：<strong>20</strong>。</p>
                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>是否拥有下一次查询的令牌（Token）。取值：</p><ul><li>第一次查询和没有下一次查询时，均无需填写。</li><li>如果有下一次查询，取值为上一次API调用返回的<strong>NextToken</strong>值。</li></ul>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
