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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERMIXIPTARGETREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERMIXIPTARGETREQUEST_H_

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
                * ModifyLoadBalancerMixIpTarget请求参数结构体
                */
                class ModifyLoadBalancerMixIpTargetRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerMixIpTargetRequest();
                    ~ModifyLoadBalancerMixIpTargetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID数组，默认支持20个负载均衡实例ID。
可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @return LoadBalancerIds 负载均衡实例ID数组，默认支持20个负载均衡实例ID。
可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例ID数组，默认支持20个负载均衡实例ID。
可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     * @param _loadBalancerIds 负载均衡实例ID数组，默认支持20个负载均衡实例ID。
可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
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
                     * 获取开启/关闭IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                     * @return MixIpTarget 开启/关闭IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                     * 
                     */
                    bool GetMixIpTarget() const;

                    /**
                     * 设置开启/关闭IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                     * @param _mixIpTarget 开启/关闭IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                     * 
                     */
                    void SetMixIpTarget(const bool& _mixIpTarget);

                    /**
                     * 判断参数 MixIpTarget 是否已赋值
                     * @return MixIpTarget 是否已赋值
                     * 
                     */
                    bool MixIpTargetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID数组，默认支持20个负载均衡实例ID。
可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/1108/48459) 接口查询。
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 开启/关闭IPv6FullChain负载均衡7层监听器支持混绑IPv4/IPv6目标特性。
                     */
                    bool m_mixIpTarget;
                    bool m_mixIpTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERMIXIPTARGETREQUEST_H_
