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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

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
                * DescribeLoadBalancers请求参数结构体
                */
                class DescribeLoadBalancersRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancersRequest();
                    ~DescribeLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。实例ID数量上限为20个。
                     * @return LoadBalancerIds 负载均衡实例ID。实例ID数量上限为20个。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例ID。实例ID数量上限为20个。
                     * @param _loadBalancerIds 负载均衡实例ID。实例ID数量上限为20个。
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @param _loadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * @return Forward 负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * 
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * @param _forward 负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * 
                     */
                    void SetForward(const int64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     * 
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称，支持模糊查询。
                     * @return LoadBalancerName 负载均衡实例的名称，支持模糊查询。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称，支持模糊查询。
                     * @param _loadBalancerName 负载均衡实例的名称，支持模糊查询。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取腾讯云为负载均衡实例分配的域名，支持模糊查询。
                     * @return Domain 腾讯云为负载均衡实例分配的域名，支持模糊查询。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置腾讯云为负载均衡实例分配的域名，支持模糊查询。
                     * @param _domain 腾讯云为负载均衡实例分配的域名，支持模糊查询。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的 VIP 地址，支持多个。
                     * @return LoadBalancerVips 负载均衡实例的 VIP 地址，支持多个。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的 VIP 地址，支持多个。
                     * @param _loadBalancerVips 负载均衡实例的 VIP 地址，支持多个。
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的后端服务的外网 IP，只支持查询云服务器的公网 IP。
                     * @return BackendPublicIps 负载均衡绑定的后端服务的外网 IP，只支持查询云服务器的公网 IP。
                     * 
                     */
                    std::vector<std::string> GetBackendPublicIps() const;

                    /**
                     * 设置负载均衡绑定的后端服务的外网 IP，只支持查询云服务器的公网 IP。
                     * @param _backendPublicIps 负载均衡绑定的后端服务的外网 IP，只支持查询云服务器的公网 IP。
                     * 
                     */
                    void SetBackendPublicIps(const std::vector<std::string>& _backendPublicIps);

                    /**
                     * 判断参数 BackendPublicIps 是否已赋值
                     * @return BackendPublicIps 是否已赋值
                     * 
                     */
                    bool BackendPublicIpsHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的后端服务的内网 IP，只支持查询云服务器的内网 IP。
                     * @return BackendPrivateIps 负载均衡绑定的后端服务的内网 IP，只支持查询云服务器的内网 IP。
                     * 
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置负载均衡绑定的后端服务的内网 IP，只支持查询云服务器的内网 IP。
                     * @param _backendPrivateIps 负载均衡绑定的后端服务的内网 IP，只支持查询云服务器的内网 IP。
                     * 
                     */
                    void SetBackendPrivateIps(const std::vector<std::string>& _backendPrivateIps);

                    /**
                     * 判断参数 BackendPrivateIps 是否已赋值
                     * @return BackendPrivateIps 是否已赋值
                     * 
                     */
                    bool BackendPrivateIpsHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为0。
                     * @return Offset 数据偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为0。
                     * @param _offset 数据偏移量，默认为0。
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
                     * 获取返回负载均衡实例的数量，默认为20，最大值为100。
                     * @return Limit 返回负载均衡实例的数量，默认为20，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回负载均衡实例的数量，默认为20，最大值为100。
                     * @param _limit 返回负载均衡实例的数量，默认为20，最大值为100。
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
                     * 获取排序参数，支持以下字段：
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

默认为 CreateTime。

                     * @return OrderBy 排序参数，支持以下字段：
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

默认为 CreateTime。

                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序参数，支持以下字段：
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

默认为 CreateTime。

                     * @param _orderBy 排序参数，支持以下字段：
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

默认为 CreateTime。

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
                     * 获取1：倒序，0：顺序，默认为1，按照创建时间倒序。
                     * @return OrderType 1：倒序，0：顺序，默认为1，按照创建时间倒序。
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1：倒序，0：顺序，默认为1，按照创建时间倒序。
                     * @param _orderType 1：倒序，0：顺序，默认为1，按照创建时间倒序。
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取模糊搜索字段，模糊匹配负载均衡实例的名称、域名、负载均衡实例的 VIP 地址，负载均衡实例ID。
                     * @return SearchKey 模糊搜索字段，模糊匹配负载均衡实例的名称、域名、负载均衡实例的 VIP 地址，负载均衡实例ID。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊搜索字段，模糊匹配负载均衡实例的名称、域名、负载均衡实例的 VIP 地址，负载均衡实例ID。
                     * @param _searchKey 模糊搜索字段，模糊匹配负载均衡实例的名称、域名、负载均衡实例的 VIP 地址，负载均衡实例ID。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID，可以通过[DescribeProject](https://cloud.tencent.com/document/api/651/78725)接口获取，不传默认所有项目。
                     * @return ProjectId 负载均衡实例所属的项目 ID，可以通过[DescribeProject](https://cloud.tencent.com/document/api/651/78725)接口获取，不传默认所有项目。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID，可以通过[DescribeProject](https://cloud.tencent.com/document/api/651/78725)接口获取，不传默认所有项目。
                     * @param _projectId 负载均衡实例所属的项目 ID，可以通过[DescribeProject](https://cloud.tencent.com/document/api/651/78725)接口获取，不传默认所有项目。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * @return WithRs 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * 
                     */
                    int64_t GetWithRs() const;

                    /**
                     * 设置负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * @param _withRs 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * 
                     */
                    void SetWithRs(const int64_t& _withRs);

                    /**
                     * 判断参数 WithRs 是否已赋值
                     * @return WithRs 是否已赋值
                     * 
                     */
                    bool WithRsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，可以通过[DescribeVpcs](https://cloud.tencent.com/document/api/215/15778)接口获取。
查找基础网络类型的负载均衡可传入'0'。
                     * @return VpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，可以通过[DescribeVpcs](https://cloud.tencent.com/document/api/215/15778)接口获取。
查找基础网络类型的负载均衡可传入'0'。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，可以通过[DescribeVpcs](https://cloud.tencent.com/document/api/215/15778)接口获取。
查找基础网络类型的负载均衡可传入'0'。
                     * @param _vpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，可以通过[DescribeVpcs](https://cloud.tencent.com/document/api/215/15778)接口获取。
查找基础网络类型的负载均衡可传入'0'。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取安全组ID，如 sg-m1cc****，可以通过接口[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)获取。
                     * @return SecurityGroup 安全组ID，如 sg-m1cc****，可以通过接口[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)获取。
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置安全组ID，如 sg-m1cc****，可以通过接口[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)获取。
                     * @param _securityGroup 安全组ID，如 sg-m1cc****，可以通过接口[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)获取。
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取主可用区ID，如 ："100001" （对应的是广州一区）。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)获取可用区列表。
                     * @return MasterZone 主可用区ID，如 ："100001" （对应的是广州一区）。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)获取可用区列表。
                     * 
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区ID，如 ："100001" （对应的是广州一区）。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)获取可用区列表。
                     * @param _masterZone 主可用区ID，如 ："100001" （对应的是广州一区）。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)获取可用区列表。
                     * 
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。<br/>`Filter.Name`和`Filter.Values`皆为必填项。详细的过滤条件如下：
- charge-type
按照【实例计费模式】进行过滤。实例计费模式例如：PREPAID。
类型：String
必选：否
可选项：PREPAID(预付费)、POSTPAID_BY_HOUR(后付费)
- internet-charge-type
按照【网络计费模式】进行过滤。网络计费模式例如：BANDWIDTH_PREPAID。
类型：String
必选：否
可选项：BANDWIDTH_PREPAID(预付费按带宽结算)、 TRAFFIC_POSTPAID_BY_HOUR(流量按小时后付费)、BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时后付费)、BANDWIDTH_PACKAGE(带宽包用户)
- master-zone-id
按照【CLB主可用区ID】进行过滤。例如：100001（对应的是广州一区）。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【CLB 标签的键】进行过滤，例如：tag-key。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:tag-key
按照【CLB标签键值】进行过滤，例如：tag-test。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- function-name
按照【后端绑定SCF云函数的函数名称】进行过滤，例如：helloworld-1744958255。
类型：String
必选：否
获取方式：[ListFunctions](https://cloud.tencent.com/document/api/583/18582)
- vip-isp
按照【CLB VIP的运营商类型】进行过滤，例如：BGP。
类型：String
必选：否
公网类型可选项：BGP(多线)、CMCC(中国移动)、CTCC(中国电信)、CUCC(中国联通)
内网类型可选项：INTERNAL(内网)
- sla-type
按照【CLB 的性能容量型规格】进行过滤，例如：clb.c4.xlarge。
类型：String
必选：否
可选项：clb.c2.medium(标准型)、clb.c3.small(高阶型1)、clb.c3.medium(高阶型2)、clb.c4.small(超强型1)、clb.c4.medium(超强型2)、clb.c4.large(超强型3)、clb.c4.xlarge(超强型4)
具体规格参数参考：
- exclusive
按照【独占实例】进行过滤。例如：1，代表筛选独占型实例。
类型：String
必选：否
可选项：0、1
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。<br/>`Filter.Name`和`Filter.Values`皆为必填项。详细的过滤条件如下：
- charge-type
按照【实例计费模式】进行过滤。实例计费模式例如：PREPAID。
类型：String
必选：否
可选项：PREPAID(预付费)、POSTPAID_BY_HOUR(后付费)
- internet-charge-type
按照【网络计费模式】进行过滤。网络计费模式例如：BANDWIDTH_PREPAID。
类型：String
必选：否
可选项：BANDWIDTH_PREPAID(预付费按带宽结算)、 TRAFFIC_POSTPAID_BY_HOUR(流量按小时后付费)、BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时后付费)、BANDWIDTH_PACKAGE(带宽包用户)
- master-zone-id
按照【CLB主可用区ID】进行过滤。例如：100001（对应的是广州一区）。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【CLB 标签的键】进行过滤，例如：tag-key。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:tag-key
按照【CLB标签键值】进行过滤，例如：tag-test。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- function-name
按照【后端绑定SCF云函数的函数名称】进行过滤，例如：helloworld-1744958255。
类型：String
必选：否
获取方式：[ListFunctions](https://cloud.tencent.com/document/api/583/18582)
- vip-isp
按照【CLB VIP的运营商类型】进行过滤，例如：BGP。
类型：String
必选：否
公网类型可选项：BGP(多线)、CMCC(中国移动)、CTCC(中国电信)、CUCC(中国联通)
内网类型可选项：INTERNAL(内网)
- sla-type
按照【CLB 的性能容量型规格】进行过滤，例如：clb.c4.xlarge。
类型：String
必选：否
可选项：clb.c2.medium(标准型)、clb.c3.small(高阶型1)、clb.c3.medium(高阶型2)、clb.c4.small(超强型1)、clb.c4.medium(超强型2)、clb.c4.large(超强型3)、clb.c4.xlarge(超强型4)
具体规格参数参考：
- exclusive
按照【独占实例】进行过滤。例如：1，代表筛选独占型实例。
类型：String
必选：否
可选项：0、1
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。<br/>`Filter.Name`和`Filter.Values`皆为必填项。详细的过滤条件如下：
- charge-type
按照【实例计费模式】进行过滤。实例计费模式例如：PREPAID。
类型：String
必选：否
可选项：PREPAID(预付费)、POSTPAID_BY_HOUR(后付费)
- internet-charge-type
按照【网络计费模式】进行过滤。网络计费模式例如：BANDWIDTH_PREPAID。
类型：String
必选：否
可选项：BANDWIDTH_PREPAID(预付费按带宽结算)、 TRAFFIC_POSTPAID_BY_HOUR(流量按小时后付费)、BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时后付费)、BANDWIDTH_PACKAGE(带宽包用户)
- master-zone-id
按照【CLB主可用区ID】进行过滤。例如：100001（对应的是广州一区）。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【CLB 标签的键】进行过滤，例如：tag-key。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:tag-key
按照【CLB标签键值】进行过滤，例如：tag-test。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- function-name
按照【后端绑定SCF云函数的函数名称】进行过滤，例如：helloworld-1744958255。
类型：String
必选：否
获取方式：[ListFunctions](https://cloud.tencent.com/document/api/583/18582)
- vip-isp
按照【CLB VIP的运营商类型】进行过滤，例如：BGP。
类型：String
必选：否
公网类型可选项：BGP(多线)、CMCC(中国移动)、CTCC(中国电信)、CUCC(中国联通)
内网类型可选项：INTERNAL(内网)
- sla-type
按照【CLB 的性能容量型规格】进行过滤，例如：clb.c4.xlarge。
类型：String
必选：否
可选项：clb.c2.medium(标准型)、clb.c3.small(高阶型1)、clb.c3.medium(高阶型2)、clb.c4.small(超强型1)、clb.c4.medium(超强型2)、clb.c4.large(超强型3)、clb.c4.xlarge(超强型4)
具体规格参数参考：
- exclusive
按照【独占实例】进行过滤。例如：1，代表筛选独占型实例。
类型：String
必选：否
可选项：0、1
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。<br/>`Filter.Name`和`Filter.Values`皆为必填项。详细的过滤条件如下：
- charge-type
按照【实例计费模式】进行过滤。实例计费模式例如：PREPAID。
类型：String
必选：否
可选项：PREPAID(预付费)、POSTPAID_BY_HOUR(后付费)
- internet-charge-type
按照【网络计费模式】进行过滤。网络计费模式例如：BANDWIDTH_PREPAID。
类型：String
必选：否
可选项：BANDWIDTH_PREPAID(预付费按带宽结算)、 TRAFFIC_POSTPAID_BY_HOUR(流量按小时后付费)、BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时后付费)、BANDWIDTH_PACKAGE(带宽包用户)
- master-zone-id
按照【CLB主可用区ID】进行过滤。例如：100001（对应的是广州一区）。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【CLB 标签的键】进行过滤，例如：tag-key。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:tag-key
按照【CLB标签键值】进行过滤，例如：tag-test。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- function-name
按照【后端绑定SCF云函数的函数名称】进行过滤，例如：helloworld-1744958255。
类型：String
必选：否
获取方式：[ListFunctions](https://cloud.tencent.com/document/api/583/18582)
- vip-isp
按照【CLB VIP的运营商类型】进行过滤，例如：BGP。
类型：String
必选：否
公网类型可选项：BGP(多线)、CMCC(中国移动)、CTCC(中国电信)、CUCC(中国联通)
内网类型可选项：INTERNAL(内网)
- sla-type
按照【CLB 的性能容量型规格】进行过滤，例如：clb.c4.xlarge。
类型：String
必选：否
可选项：clb.c2.medium(标准型)、clb.c3.small(高阶型1)、clb.c3.medium(高阶型2)、clb.c4.small(超强型1)、clb.c4.medium(超强型2)、clb.c4.large(超强型3)、clb.c4.xlarge(超强型4)
具体规格参数参考：
- exclusive
按照【独占实例】进行过滤。例如：1，代表筛选独占型实例。
类型：String
必选：否
可选项：0、1
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
                     * 获取选择返回的扩充字段，不指定时，扩充字段默认不返回。详细支持的扩充字段如下：
<li> TargetCount：绑定的后端服务数量</li>
                     * @return AdditionalFields 选择返回的扩充字段，不指定时，扩充字段默认不返回。详细支持的扩充字段如下：
<li> TargetCount：绑定的后端服务数量</li>
                     * 
                     */
                    std::vector<std::string> GetAdditionalFields() const;

                    /**
                     * 设置选择返回的扩充字段，不指定时，扩充字段默认不返回。详细支持的扩充字段如下：
<li> TargetCount：绑定的后端服务数量</li>
                     * @param _additionalFields 选择返回的扩充字段，不指定时，扩充字段默认不返回。详细支持的扩充字段如下：
<li> TargetCount：绑定的后端服务数量</li>
                     * 
                     */
                    void SetAdditionalFields(const std::vector<std::string>& _additionalFields);

                    /**
                     * 判断参数 AdditionalFields 是否已赋值
                     * @return AdditionalFields 是否已赋值
                     * 
                     */
                    bool AdditionalFieldsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。实例ID数量上限为20个。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     */
                    int64_t m_forward;
                    bool m_forwardHasBeenSet;

                    /**
                     * 负载均衡实例的名称，支持模糊查询。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 腾讯云为负载均衡实例分配的域名，支持模糊查询。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 地址，支持多个。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡绑定的后端服务的外网 IP，只支持查询云服务器的公网 IP。
                     */
                    std::vector<std::string> m_backendPublicIps;
                    bool m_backendPublicIpsHasBeenSet;

                    /**
                     * 负载均衡绑定的后端服务的内网 IP，只支持查询云服务器的内网 IP。
                     */
                    std::vector<std::string> m_backendPrivateIps;
                    bool m_backendPrivateIpsHasBeenSet;

                    /**
                     * 数据偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回负载均衡实例的数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序参数，支持以下字段：
- LoadBalancerName
- CreateTime
- Domain
- LoadBalancerType

默认为 CreateTime。

                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1：倒序，0：顺序，默认为1，按照创建时间倒序。
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 模糊搜索字段，模糊匹配负载均衡实例的名称、域名、负载均衡实例的 VIP 地址，负载均衡实例ID。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 负载均衡实例所属的项目 ID，可以通过[DescribeProject](https://cloud.tencent.com/document/api/651/78725)接口获取，不传默认所有项目。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     */
                    int64_t m_withRs;
                    bool m_withRsHasBeenSet;

                    /**
                     * 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，可以通过[DescribeVpcs](https://cloud.tencent.com/document/api/215/15778)接口获取。
查找基础网络类型的负载均衡可传入'0'。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 安全组ID，如 sg-m1cc****，可以通过接口[DescribeSecurityGroups](https://cloud.tencent.com/document/product/215/15808)获取。
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 主可用区ID，如 ："100001" （对应的是广州一区）。可通过[DescribeZones](https://cloud.tencent.com/document/product/213/15707)获取可用区列表。
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。<br/>`Filter.Name`和`Filter.Values`皆为必填项。详细的过滤条件如下：
- charge-type
按照【实例计费模式】进行过滤。实例计费模式例如：PREPAID。
类型：String
必选：否
可选项：PREPAID(预付费)、POSTPAID_BY_HOUR(后付费)
- internet-charge-type
按照【网络计费模式】进行过滤。网络计费模式例如：BANDWIDTH_PREPAID。
类型：String
必选：否
可选项：BANDWIDTH_PREPAID(预付费按带宽结算)、 TRAFFIC_POSTPAID_BY_HOUR(流量按小时后付费)、BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时后付费)、BANDWIDTH_PACKAGE(带宽包用户)
- master-zone-id
按照【CLB主可用区ID】进行过滤。例如：100001（对应的是广州一区）。
类型：String
必选：否
获取方式：[DescribeZones](https://cloud.tencent.com/document/product/213/15707)
- tag-key
按照【CLB 标签的键】进行过滤，例如：tag-key。
类型：String
必选：否
获取方式：[DescribeTags](https://cloud.tencent.com/document/api/651/35316)
- tag:tag-key
按照【CLB标签键值】进行过滤，例如：tag-test。
类型：String
必选：否
获取方式：[DescribeTagKeys](https://cloud.tencent.com/document/api/651/35318)
- function-name
按照【后端绑定SCF云函数的函数名称】进行过滤，例如：helloworld-1744958255。
类型：String
必选：否
获取方式：[ListFunctions](https://cloud.tencent.com/document/api/583/18582)
- vip-isp
按照【CLB VIP的运营商类型】进行过滤，例如：BGP。
类型：String
必选：否
公网类型可选项：BGP(多线)、CMCC(中国移动)、CTCC(中国电信)、CUCC(中国联通)
内网类型可选项：INTERNAL(内网)
- sla-type
按照【CLB 的性能容量型规格】进行过滤，例如：clb.c4.xlarge。
类型：String
必选：否
可选项：clb.c2.medium(标准型)、clb.c3.small(高阶型1)、clb.c3.medium(高阶型2)、clb.c4.small(超强型1)、clb.c4.medium(超强型2)、clb.c4.large(超强型3)、clb.c4.xlarge(超强型4)
具体规格参数参考：
- exclusive
按照【独占实例】进行过滤。例如：1，代表筛选独占型实例。
类型：String
必选：否
可选项：0、1
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 选择返回的扩充字段，不指定时，扩充字段默认不返回。详细支持的扩充字段如下：
<li> TargetCount：绑定的后端服务数量</li>
                     */
                    std::vector<std::string> m_additionalFields;
                    bool m_additionalFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
