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
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerIds 负载均衡实例 ID。
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param LoadBalancerIds 负载均衡实例 ID。
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @return LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     * @param LoadBalancerType 负载均衡实例的网络类型：
OPEN：公网属性， INTERNAL：内网属性。
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * @return Forward 负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     */
                    int64_t GetForward() const;

                    /**
                     * 设置负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     * @param Forward 负载均衡实例的类型。1：通用的负载均衡实例，0：传统型负载均衡实例。如果不传此参数，则查询所有类型的负载均衡实例。
                     */
                    void SetForward(const int64_t& _forward);

                    /**
                     * 判断参数 Forward 是否已赋值
                     * @return Forward 是否已赋值
                     */
                    bool ForwardHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称。
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
                     * @param LoadBalancerName 负载均衡实例的名称。
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取腾讯云为负载均衡实例分配的域名，本参数仅对传统型公网负载均衡才有意义。
                     * @return Domain 腾讯云为负载均衡实例分配的域名，本参数仅对传统型公网负载均衡才有意义。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置腾讯云为负载均衡实例分配的域名，本参数仅对传统型公网负载均衡才有意义。
                     * @param Domain 腾讯云为负载均衡实例分配的域名，本参数仅对传统型公网负载均衡才有意义。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的 VIP 地址，支持多个。
                     * @return LoadBalancerVips 负载均衡实例的 VIP 地址，支持多个。
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的 VIP 地址，支持多个。
                     * @param LoadBalancerVips 负载均衡实例的 VIP 地址，支持多个。
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的后端服务的外网 IP。
                     * @return BackendPublicIps 负载均衡绑定的后端服务的外网 IP。
                     */
                    std::vector<std::string> GetBackendPublicIps() const;

                    /**
                     * 设置负载均衡绑定的后端服务的外网 IP。
                     * @param BackendPublicIps 负载均衡绑定的后端服务的外网 IP。
                     */
                    void SetBackendPublicIps(const std::vector<std::string>& _backendPublicIps);

                    /**
                     * 判断参数 BackendPublicIps 是否已赋值
                     * @return BackendPublicIps 是否已赋值
                     */
                    bool BackendPublicIpsHasBeenSet() const;

                    /**
                     * 获取负载均衡绑定的后端服务的内网 IP。
                     * @return BackendPrivateIps 负载均衡绑定的后端服务的内网 IP。
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置负载均衡绑定的后端服务的内网 IP。
                     * @param BackendPrivateIps 负载均衡绑定的后端服务的内网 IP。
                     */
                    void SetBackendPrivateIps(const std::vector<std::string>& _backendPrivateIps);

                    /**
                     * 判断参数 BackendPrivateIps 是否已赋值
                     * @return BackendPrivateIps 是否已赋值
                     */
                    bool BackendPrivateIpsHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为 0。
                     * @return Offset 数据偏移量，默认为 0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为 0。
                     * @param Offset 数据偏移量，默认为 0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回负载均衡实例的个数，默认为 20。
                     * @return Limit 返回负载均衡实例的个数，默认为 20。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回负载均衡实例的个数，默认为 20。
                     * @param Limit 返回负载均衡实例的个数，默认为 20。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序参数，支持以下字段：LoadBalancerName，CreateTime，Domain，LoadBalancerType。
                     * @return OrderBy 排序参数，支持以下字段：LoadBalancerName，CreateTime，Domain，LoadBalancerType。
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序参数，支持以下字段：LoadBalancerName，CreateTime，Domain，LoadBalancerType。
                     * @param OrderBy 排序参数，支持以下字段：LoadBalancerName，CreateTime，Domain，LoadBalancerType。
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取1：倒序，0：顺序，默认按照创建时间倒序。
                     * @return OrderType 1：倒序，0：顺序，默认按照创建时间倒序。
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置1：倒序，0：顺序，默认按照创建时间倒序。
                     * @param OrderType 1：倒序，0：顺序，默认按照创建时间倒序。
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取搜索字段，模糊匹配名称、域名、VIP。
                     * @return SearchKey 搜索字段，模糊匹配名称、域名、VIP。
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索字段，模糊匹配名称、域名、VIP。
                     * @param SearchKey 搜索字段，模糊匹配名称、域名、VIP。
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID，可以通过 DescribeProject 接口获取。
                     * @return ProjectId 负载均衡实例所属的项目 ID，可以通过 DescribeProject 接口获取。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID，可以通过 DescribeProject 接口获取。
                     * @param ProjectId 负载均衡实例所属的项目 ID，可以通过 DescribeProject 接口获取。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * @return WithRs 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     */
                    int64_t GetWithRs() const;

                    /**
                     * 设置负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     * @param WithRs 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     */
                    void SetWithRs(const int64_t& _withRs);

                    /**
                     * 判断参数 WithRs 是否已赋值
                     * @return WithRs 是否已赋值
                     */
                    bool WithRsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，
基础网络可传入'0'。
                     * @return VpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，
基础网络可传入'0'。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，
基础网络可传入'0'。
                     * @param VpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，
基础网络可传入'0'。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取安全组ID，如 sg-m1cc9123
                     * @return SecurityGroup 安全组ID，如 sg-m1cc9123
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置安全组ID，如 sg-m1cc9123
                     * @param SecurityGroup 安全组ID，如 sg-m1cc9123
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取主可用区ID，如 ："100001" （对应的是广州一区）
                     * @return MasterZone 主可用区ID，如 ："100001" （对应的是广州一区）
                     */
                    std::string GetMasterZone() const;

                    /**
                     * 设置主可用区ID，如 ："100001" （对应的是广州一区）
                     * @param MasterZone 主可用区ID，如 ："100001" （对应的是广州一区）
                     */
                    void SetMasterZone(const std::string& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     */
                    bool MasterZoneHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
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
                     * 负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 腾讯云为负载均衡实例分配的域名，本参数仅对传统型公网负载均衡才有意义。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 地址，支持多个。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡绑定的后端服务的外网 IP。
                     */
                    std::vector<std::string> m_backendPublicIps;
                    bool m_backendPublicIpsHasBeenSet;

                    /**
                     * 负载均衡绑定的后端服务的内网 IP。
                     */
                    std::vector<std::string> m_backendPrivateIps;
                    bool m_backendPrivateIpsHasBeenSet;

                    /**
                     * 数据偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回负载均衡实例的个数，默认为 20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序参数，支持以下字段：LoadBalancerName，CreateTime，Domain，LoadBalancerType。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 1：倒序，0：顺序，默认按照创建时间倒序。
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 搜索字段，模糊匹配名称、域名、VIP。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 负载均衡实例所属的项目 ID，可以通过 DescribeProject 接口获取。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。
                     */
                    int64_t m_withRs;
                    bool m_withRsHasBeenSet;

                    /**
                     * 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx，
基础网络可传入'0'。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 安全组ID，如 sg-m1cc9123
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 主可用区ID，如 ："100001" （对应的是广州一区）
                     */
                    std::string m_masterZone;
                    bool m_masterZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
