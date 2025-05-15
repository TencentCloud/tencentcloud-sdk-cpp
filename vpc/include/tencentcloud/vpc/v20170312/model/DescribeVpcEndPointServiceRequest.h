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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_

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
                * DescribeVpcEndPointService请求参数结构体
                */
                class DescribeVpcEndPointServiceRequest : public AbstractModel
                {
                public:
                    DescribeVpcEndPointServiceRequest();
                    ~DescribeVpcEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。不支持同时传入参数 EndPointServiceIds and Filters。
<li> service-id - String - （过滤条件）终端节点服务唯一ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
</li>
<li>service-name - String - （过滤条件）终端节点实例名称。</li>
<li>service-instance-id - String - （过滤条件）后端服务的唯一ID，比如lb-dehd3e33。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取。
</li>
<li>service-type - String - （过滤条件）后端PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡），不填默认查询类型为CLB。</li>
                     * @return Filters 过滤条件。不支持同时传入参数 EndPointServiceIds and Filters。
<li> service-id - String - （过滤条件）终端节点服务唯一ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
</li>
<li>service-name - String - （过滤条件）终端节点实例名称。</li>
<li>service-instance-id - String - （过滤条件）后端服务的唯一ID，比如lb-dehd3e33。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取。
</li>
<li>service-type - String - （过滤条件）后端PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡），不填默认查询类型为CLB。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。不支持同时传入参数 EndPointServiceIds and Filters。
<li> service-id - String - （过滤条件）终端节点服务唯一ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
</li>
<li>service-name - String - （过滤条件）终端节点实例名称。</li>
<li>service-instance-id - String - （过滤条件）后端服务的唯一ID，比如lb-dehd3e33。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取。
</li>
<li>service-type - String - （过滤条件）后端PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡），不填默认查询类型为CLB。</li>
                     * @param _filters 过滤条件。不支持同时传入参数 EndPointServiceIds and Filters。
<li> service-id - String - （过滤条件）终端节点服务唯一ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
</li>
<li>service-name - String - （过滤条件）终端节点实例名称。</li>
<li>service-instance-id - String - （过滤条件）后端服务的唯一ID，比如lb-dehd3e33。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取。
</li>
<li>service-type - String - （过滤条件）后端PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡），不填默认查询类型为CLB。</li>
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
                     * 获取单页返回数量，默认为20，最大值为100。
                     * @return Limit 单页返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单页返回数量，默认为20，最大值为100。
                     * @param _limit 单页返回数量，默认为20，最大值为100。
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
                     * 获取终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。不支持同时传入参数 EndPointServiceIds and Filters。
                     * @return EndPointServiceIds 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。不支持同时传入参数 EndPointServiceIds and Filters。
                     * 
                     */
                    std::vector<std::string> GetEndPointServiceIds() const;

                    /**
                     * 设置终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。不支持同时传入参数 EndPointServiceIds and Filters。
                     * @param _endPointServiceIds 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。不支持同时传入参数 EndPointServiceIds and Filters。
                     * 
                     */
                    void SetEndPointServiceIds(const std::vector<std::string>& _endPointServiceIds);

                    /**
                     * 判断参数 EndPointServiceIds 是否已赋值
                     * @return EndPointServiceIds 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdsHasBeenSet() const;

                    /**
                     * 获取<li>不支持同时传入参数 Filters 。</li> <li>列出授权给当前账号的终端节点服务信息。可以配合EndPointServiceIds参数进行过滤，哪些终端节点服务授权了该账户。</li>
                     * @return IsListAuthorizedEndPointService <li>不支持同时传入参数 Filters 。</li> <li>列出授权给当前账号的终端节点服务信息。可以配合EndPointServiceIds参数进行过滤，哪些终端节点服务授权了该账户。</li>
                     * 
                     */
                    bool GetIsListAuthorizedEndPointService() const;

                    /**
                     * 设置<li>不支持同时传入参数 Filters 。</li> <li>列出授权给当前账号的终端节点服务信息。可以配合EndPointServiceIds参数进行过滤，哪些终端节点服务授权了该账户。</li>
                     * @param _isListAuthorizedEndPointService <li>不支持同时传入参数 Filters 。</li> <li>列出授权给当前账号的终端节点服务信息。可以配合EndPointServiceIds参数进行过滤，哪些终端节点服务授权了该账户。</li>
                     * 
                     */
                    void SetIsListAuthorizedEndPointService(const bool& _isListAuthorizedEndPointService);

                    /**
                     * 判断参数 IsListAuthorizedEndPointService 是否已赋值
                     * @return IsListAuthorizedEndPointService 是否已赋值
                     * 
                     */
                    bool IsListAuthorizedEndPointServiceHasBeenSet() const;

                    /**
                     * 获取协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * @return IpAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * 
                     */
                    std::string GetIpAddressType() const;

                    /**
                     * 设置协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * @param _ipAddressType 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     * 
                     */
                    void SetIpAddressType(const std::string& _ipAddressType);

                    /**
                     * 判断参数 IpAddressType 是否已赋值
                     * @return IpAddressType 是否已赋值
                     * 
                     */
                    bool IpAddressTypeHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。不支持同时传入参数 EndPointServiceIds and Filters。
<li> service-id - String - （过滤条件）终端节点服务唯一ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。
</li>
<li>service-name - String - （过滤条件）终端节点实例名称。</li>
<li>service-instance-id - String - （过滤条件）后端服务的唯一ID，比如lb-dehd3e33。CLB可通过[DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459)接口获取；
MYSQL可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/240/38568)接口获取；
CRS可通过[DescribeInstances](https://cloud.tencent.com/document/product/239/20018)接口获取；
GWLB可通过[DescribeGatewayLoadBalancers](https://cloud.tencent.com/document/product/1782/111683)接口获取。
</li>
<li>service-type - String - （过滤条件）后端PAAS服务类型，CLB（负载均衡），CDB（云数据库 MySQL），CRS（云数据库 Redis），GWLB（网关负载均衡），不填默认查询类型为CLB。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 终端节点服务ID。可通过[DescribeVpcEndPointService](https://cloud.tencent.com/document/product/215/54678)接口获取。不支持同时传入参数 EndPointServiceIds and Filters。
                     */
                    std::vector<std::string> m_endPointServiceIds;
                    bool m_endPointServiceIdsHasBeenSet;

                    /**
                     * <li>不支持同时传入参数 Filters 。</li> <li>列出授权给当前账号的终端节点服务信息。可以配合EndPointServiceIds参数进行过滤，哪些终端节点服务授权了该账户。</li>
                     */
                    bool m_isListAuthorizedEndPointService;
                    bool m_isListAuthorizedEndPointServiceHasBeenSet;

                    /**
                     * 协议类型，支持 Ipv4，Ipv6，默认 Ipv4。
                     */
                    std::string m_ipAddressType;
                    bool m_ipAddressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCENDPOINTSERVICEREQUEST_H_
