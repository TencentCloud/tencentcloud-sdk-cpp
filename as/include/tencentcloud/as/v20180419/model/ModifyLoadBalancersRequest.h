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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_

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
                * ModifyLoadBalancers请求参数结构体
                */
                class ModifyLoadBalancersRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancersRequest();
                    ~ModifyLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID
                     * @return AutoScalingGroupId 伸缩组ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param AutoScalingGroupId 伸缩组ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取传统负载均衡器ID列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @return LoadBalancerIds 传统负载均衡器ID列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置传统负载均衡器ID列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @param LoadBalancerIds 传统负载均衡器ID列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取应用型负载均衡器列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @return ForwardLoadBalancers 应用型负载均衡器列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancers() const;

                    /**
                     * 设置应用型负载均衡器列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     * @param ForwardLoadBalancers 应用型负载均衡器列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    void SetForwardLoadBalancers(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancers);

                    /**
                     * 判断参数 ForwardLoadBalancers 是否已赋值
                     * @return ForwardLoadBalancers 是否已赋值
                     */
                    bool ForwardLoadBalancersHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 传统负载均衡器ID列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * 应用型负载均衡器列表，目前长度上限为1，LoadBalancerIds 和 ForwardLoadBalancers 二者同时最多只能指定一个
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancers;
                    bool m_forwardLoadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERSREQUEST_H_
