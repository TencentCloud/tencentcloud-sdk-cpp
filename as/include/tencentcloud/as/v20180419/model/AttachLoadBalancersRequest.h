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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ATTACHLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ATTACHLOADBALANCERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * AttachLoadBalancers请求参数结构体
                */
                class AttachLoadBalancersRequest : public AbstractModel
                {
                public:
                    AttachLoadBalancersRequest();
                    ~AttachLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>伸缩组ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</p>
                     * @return AutoScalingGroupId <p>伸缩组ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</p>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>伸缩组ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</p>
                     * @param _autoScalingGroupId <p>伸缩组ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</p>
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>传统型负载均衡器ID列表，每个伸缩组绑定传统型负载均衡器数量上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @return LoadBalancerIds <p>传统型负载均衡器ID列表，每个伸缩组绑定传统型负载均衡器数量上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置<p>传统型负载均衡器ID列表，每个伸缩组绑定传统型负载均衡器数量上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @param _loadBalancerIds <p>传统型负载均衡器ID列表，每个伸缩组绑定传统型负载均衡器数量上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
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
                     * 获取<p>负载均衡器列表，每个伸缩组绑定应用型负载均衡器数量上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @return ForwardLoadBalancers <p>负载均衡器列表，每个伸缩组绑定应用型负载均衡器数量上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancers() const;

                    /**
                     * 设置<p>负载均衡器列表，每个伸缩组绑定应用型负载均衡器数量上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * @param _forwardLoadBalancers <p>负载均衡器列表，每个伸缩组绑定应用型负载均衡器数量上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     * 
                     */
                    void SetForwardLoadBalancers(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancers);

                    /**
                     * 判断参数 ForwardLoadBalancers 是否已赋值
                     * @return ForwardLoadBalancers 是否已赋值
                     * 
                     */
                    bool ForwardLoadBalancersHasBeenSet() const;

                private:

                    /**
                     * <p>伸缩组ID。可通过登录 <a href="https://console.cloud.tencent.com/autoscaling/group">控制台</a> 或调用接口 <a href="https://cloud.tencent.com/document/api/377/20438">DescribeAutoScalingGroups</a> ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</p>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>传统型负载均衡器ID列表，每个伸缩组绑定传统型负载均衡器数量上限为20，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * <p>负载均衡器列表，每个伸缩组绑定应用型负载均衡器数量上限为100，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个。可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口获取。</p>
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancers;
                    bool m_forwardLoadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ATTACHLOADBALANCERSREQUEST_H_
