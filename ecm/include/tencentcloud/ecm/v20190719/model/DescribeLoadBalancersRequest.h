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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取区域。如果不传则默认查询所有区域。
                     * @return EcmRegion 区域。如果不传则默认查询所有区域。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置区域。如果不传则默认查询所有区域。
                     * @param _ecmRegion 区域。如果不传则默认查询所有区域。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerIds 负载均衡实例 ID。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerIds 负载均衡实例 ID。
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
                     * 获取负载均衡实例的名称。
                     * @return LoadBalancerName 负载均衡实例的名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
                     * @param _loadBalancerName 负载均衡实例的名称。
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
                     * 获取负载均衡绑定的后端服务的内网 IP。
                     * @return BackendPrivateIps 负载均衡绑定的后端服务的内网 IP。
                     * 
                     */
                    std::vector<std::string> GetBackendPrivateIps() const;

                    /**
                     * 设置负载均衡绑定的后端服务的内网 IP。
                     * @param _backendPrivateIps 负载均衡绑定的后端服务的内网 IP。
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
                     * 获取数据偏移量，默认为 0。
                     * @return Offset 数据偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为 0。
                     * @param _offset 数据偏移量，默认为 0。
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
                     * 获取负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。 
如果不传则默认查询全部。
                     * @return WithBackend 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。 
如果不传则默认查询全部。
                     * 
                     */
                    int64_t GetWithBackend() const;

                    /**
                     * 设置负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。 
如果不传则默认查询全部。
                     * @param _withBackend 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。 
如果不传则默认查询全部。
                     * 
                     */
                    void SetWithBackend(const int64_t& _withBackend);

                    /**
                     * 判断参数 WithBackend 是否已赋值
                     * @return WithBackend 是否已赋值
                     * 
                     */
                    bool WithBackendHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx。
                     * @return VpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx。
                     * @param _vpcId 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx。
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
                     * 获取每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
tag-key - String - 是否必填：否 - （过滤条件）按照标签的键过滤。
                     * @return Filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
tag-key - String - 是否必填：否 - （过滤条件）按照标签的键过滤。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
tag-key - String - 是否必填：否 - （过滤条件）按照标签的键过滤。
                     * @param _filters 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
tag-key - String - 是否必填：否 - （过滤条件）按照标签的键过滤。
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
                     * 获取安全组。
                     * @return SecurityGroup 安全组。
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置安全组。
                     * @param _securityGroup 安全组。
                     * 
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                private:

                    /**
                     * 区域。如果不传则默认查询所有区域。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 地址，支持多个。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

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
                     * 返回负载均衡实例的数量，默认为20，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 负载均衡是否绑定后端服务，0：没有绑定后端服务，1：绑定后端服务，-1：查询全部。 
如果不传则默认查询全部。
                     */
                    int64_t m_withBackend;
                    bool m_withBackendHasBeenSet;

                    /**
                     * 负载均衡实例所属私有网络唯一ID，如 vpc-bhqkbhdx。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 每次请求的`Filters`的上限为10，`Filter.Values`的上限为100。详细的过滤条件如下：
tag-key - String - 是否必填：否 - （过滤条件）按照标签的键过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 安全组。
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBELOADBALANCERSREQUEST_H_
