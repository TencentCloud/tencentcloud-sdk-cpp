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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSFROMCLASSICALLBREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSFROMCLASSICALLBREQUEST_H_

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
                * DeregisterTargetsFromClassicalLB请求参数结构体
                */
                class DeregisterTargetsFromClassicalLBRequest : public AbstractModel
                {
                public:
                    DeregisterTargetsFromClassicalLBRequest();
                    ~DeregisterTargetsFromClassicalLBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID。
                     * @return LoadBalancerId 负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID。
                     * @param _loadBalancerId 负载均衡实例ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取后端服务的实例ID列表。
                     * @return InstanceIds 后端服务的实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置后端服务的实例ID列表。
                     * @param _instanceIds 后端服务的实例ID列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 后端服务的实例ID列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DEREGISTERTARGETSFROMCLASSICALLBREQUEST_H_
