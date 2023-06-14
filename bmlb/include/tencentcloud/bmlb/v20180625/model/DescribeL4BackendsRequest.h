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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4BACKENDSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4BACKENDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/DescribeL4Backend.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeL4Backends请求参数结构体
                */
                class DescribeL4BackendsRequest : public AbstractModel
                {
                public:
                    DescribeL4BackendsRequest();
                    ~DescribeL4BackendsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @return LoadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     * @param _loadBalancerId 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
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
                     * 获取负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * @return ListenerId 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * @param _listenerId 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取待查询的主机信息。
                     * @return BackendSet 待查询的主机信息。
                     * 
                     */
                    std::vector<DescribeL4Backend> GetBackendSet() const;

                    /**
                     * 设置待查询的主机信息。
                     * @param _backendSet 待查询的主机信息。
                     * 
                     */
                    void SetBackendSet(const std::vector<DescribeL4Backend>& _backendSet);

                    /**
                     * 判断参数 BackendSet 是否已赋值
                     * @return BackendSet 是否已赋值
                     * 
                     */
                    bool BackendSetHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID，可通过接口DescribeLoadBalancers查询。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡四层监听器ID，可通过接口DescribeL4Listeners查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 待查询的主机信息。
                     */
                    std::vector<DescribeL4Backend> m_backendSet;
                    bool m_backendSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4BACKENDSREQUEST_H_
