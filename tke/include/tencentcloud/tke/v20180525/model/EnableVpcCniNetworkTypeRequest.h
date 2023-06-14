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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EnableVpcCniNetworkType请求参数结构体
                */
                class EnableVpcCniNetworkTypeRequest : public AbstractModel
                {
                public:
                    EnableVpcCniNetworkTypeRequest();
                    ~EnableVpcCniNetworkTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取开启vpc-cni的模式，tke-route-eni开启的是策略路由模式，tke-direct-eni开启的是独立网卡模式
                     * @return VpcCniType 开启vpc-cni的模式，tke-route-eni开启的是策略路由模式，tke-direct-eni开启的是独立网卡模式
                     * 
                     */
                    std::string GetVpcCniType() const;

                    /**
                     * 设置开启vpc-cni的模式，tke-route-eni开启的是策略路由模式，tke-direct-eni开启的是独立网卡模式
                     * @param _vpcCniType 开启vpc-cni的模式，tke-route-eni开启的是策略路由模式，tke-direct-eni开启的是独立网卡模式
                     * 
                     */
                    void SetVpcCniType(const std::string& _vpcCniType);

                    /**
                     * 判断参数 VpcCniType 是否已赋值
                     * @return VpcCniType 是否已赋值
                     * 
                     */
                    bool VpcCniTypeHasBeenSet() const;

                    /**
                     * 获取是否开启固定IP模式
                     * @return EnableStaticIp 是否开启固定IP模式
                     * 
                     */
                    bool GetEnableStaticIp() const;

                    /**
                     * 设置是否开启固定IP模式
                     * @param _enableStaticIp 是否开启固定IP模式
                     * 
                     */
                    void SetEnableStaticIp(const bool& _enableStaticIp);

                    /**
                     * 判断参数 EnableStaticIp 是否已赋值
                     * @return EnableStaticIp 是否已赋值
                     * 
                     */
                    bool EnableStaticIpHasBeenSet() const;

                    /**
                     * 获取使用的容器子网
                     * @return Subnets 使用的容器子网
                     * 
                     */
                    std::vector<std::string> GetSubnets() const;

                    /**
                     * 设置使用的容器子网
                     * @param _subnets 使用的容器子网
                     * 
                     */
                    void SetSubnets(const std::vector<std::string>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取在固定IP模式下，Pod销毁后退还IP的时间，传参必须大于300；不传默认IP永不销毁。
                     * @return ExpiredSeconds 在固定IP模式下，Pod销毁后退还IP的时间，传参必须大于300；不传默认IP永不销毁。
                     * 
                     */
                    uint64_t GetExpiredSeconds() const;

                    /**
                     * 设置在固定IP模式下，Pod销毁后退还IP的时间，传参必须大于300；不传默认IP永不销毁。
                     * @param _expiredSeconds 在固定IP模式下，Pod销毁后退还IP的时间，传参必须大于300；不传默认IP永不销毁。
                     * 
                     */
                    void SetExpiredSeconds(const uint64_t& _expiredSeconds);

                    /**
                     * 判断参数 ExpiredSeconds 是否已赋值
                     * @return ExpiredSeconds 是否已赋值
                     * 
                     */
                    bool ExpiredSecondsHasBeenSet() const;

                    /**
                     * 获取是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * @return SkipAddingNonMasqueradeCIDRs 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * 
                     */
                    bool GetSkipAddingNonMasqueradeCIDRs() const;

                    /**
                     * 设置是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * @param _skipAddingNonMasqueradeCIDRs 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * 
                     */
                    void SetSkipAddingNonMasqueradeCIDRs(const bool& _skipAddingNonMasqueradeCIDRs);

                    /**
                     * 判断参数 SkipAddingNonMasqueradeCIDRs 是否已赋值
                     * @return SkipAddingNonMasqueradeCIDRs 是否已赋值
                     * 
                     */
                    bool SkipAddingNonMasqueradeCIDRsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 开启vpc-cni的模式，tke-route-eni开启的是策略路由模式，tke-direct-eni开启的是独立网卡模式
                     */
                    std::string m_vpcCniType;
                    bool m_vpcCniTypeHasBeenSet;

                    /**
                     * 是否开启固定IP模式
                     */
                    bool m_enableStaticIp;
                    bool m_enableStaticIpHasBeenSet;

                    /**
                     * 使用的容器子网
                     */
                    std::vector<std::string> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * 在固定IP模式下，Pod销毁后退还IP的时间，传参必须大于300；不传默认IP永不销毁。
                     */
                    uint64_t m_expiredSeconds;
                    bool m_expiredSecondsHasBeenSet;

                    /**
                     * 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     */
                    bool m_skipAddingNonMasqueradeCIDRs;
                    bool m_skipAddingNonMasqueradeCIDRsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_
