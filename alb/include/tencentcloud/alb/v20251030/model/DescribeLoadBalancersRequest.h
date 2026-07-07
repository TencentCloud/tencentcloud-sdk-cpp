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
                     * 获取查询过滤条件，支持以下几个字段
- **LoadBalancerId**: 负载均衡实例 ID
- **LoadBalancerName**: 负载均衡名称
- **LoadBalancerStatus**: 负载均衡状态
- **VpcId**: 私有网络 ID
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。
- **AddressType**: 网络类型
    - **Intranet**: 内网
    - **Internet**: 公网 
- **AddressIpVersion**:
    - **IPv4**: IPv4 地址
    - **IPv6** IPv6 地址
                     * @return Filters 查询过滤条件，支持以下几个字段
- **LoadBalancerId**: 负载均衡实例 ID
- **LoadBalancerName**: 负载均衡名称
- **LoadBalancerStatus**: 负载均衡状态
- **VpcId**: 私有网络 ID
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。
- **AddressType**: 网络类型
    - **Intranet**: 内网
    - **Internet**: 公网 
- **AddressIpVersion**:
    - **IPv4**: IPv4 地址
    - **IPv6** IPv6 地址
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询过滤条件，支持以下几个字段
- **LoadBalancerId**: 负载均衡实例 ID
- **LoadBalancerName**: 负载均衡名称
- **LoadBalancerStatus**: 负载均衡状态
- **VpcId**: 私有网络 ID
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。
- **AddressType**: 网络类型
    - **Intranet**: 内网
    - **Internet**: 公网 
- **AddressIpVersion**:
    - **IPv4**: IPv4 地址
    - **IPv6** IPv6 地址
                     * @param _filters 查询过滤条件，支持以下几个字段
- **LoadBalancerId**: 负载均衡实例 ID
- **LoadBalancerName**: 负载均衡名称
- **LoadBalancerStatus**: 负载均衡状态
- **VpcId**: 私有网络 ID
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。
- **AddressType**: 网络类型
    - **Intranet**: 内网
    - **Internet**: 公网 
- **AddressIpVersion**:
    - **IPv4**: IPv4 地址
    - **IPv6** IPv6 地址
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
                     * 获取分批次查询时每次显示的条目数。取值范围：**1**~**100**，默认值：**20**。


                     * @return MaxResults 分批次查询时每次显示的条目数。取值范围：**1**~**100**，默认值：**20**。


                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置分批次查询时每次显示的条目数。取值范围：**1**~**100**，默认值：**20**。


                     * @param _maxResults 分批次查询时每次显示的条目数。取值范围：**1**~**100**，默认值：**20**。


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
                     * 获取是否拥有下一次查询的令牌（Token）。取值：
- 第一次查询和没有下一次查询时，均无需填写。
- 如果有下一次查询，取值为上一次API调用返回的**NextToken**值。
                     * @return NextToken 是否拥有下一次查询的令牌（Token）。取值：
- 第一次查询和没有下一次查询时，均无需填写。
- 如果有下一次查询，取值为上一次API调用返回的**NextToken**值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置是否拥有下一次查询的令牌（Token）。取值：
- 第一次查询和没有下一次查询时，均无需填写。
- 如果有下一次查询，取值为上一次API调用返回的**NextToken**值。
                     * @param _nextToken 是否拥有下一次查询的令牌（Token）。取值：
- 第一次查询和没有下一次查询时，均无需填写。
- 如果有下一次查询，取值为上一次API调用返回的**NextToken**值。
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
                     * 查询过滤条件，支持以下几个字段
- **LoadBalancerId**: 负载均衡实例 ID
- **LoadBalancerName**: 负载均衡名称
- **LoadBalancerStatus**: 负载均衡状态
- **VpcId**: 私有网络 ID
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。
- **AddressType**: 网络类型
    - **Intranet**: 内网
    - **Internet**: 公网 
- **AddressIpVersion**:
    - **IPv4**: IPv4 地址
    - **IPv6** IPv6 地址
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分批次查询时每次显示的条目数。取值范围：**1**~**100**，默认值：**20**。


                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 是否拥有下一次查询的令牌（Token）。取值：
- 第一次查询和没有下一次查询时，均无需填写。
- 如果有下一次查询，取值为上一次API调用返回的**NextToken**值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
