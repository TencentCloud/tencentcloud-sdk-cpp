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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBLISTENERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBLISTENERSREQUEST_H_

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
                * DescribeClassicalLBListeners请求参数结构体
                */
                class DescribeClassicalLBListenersRequest : public AbstractModel
                {
                public:
                    DescribeClassicalLBListenersRequest();
                    ~DescribeClassicalLBListenersRequest() = default;
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
                     * 获取负载均衡监听器ID列表。
                     * @return ListenerIds 负载均衡监听器ID列表。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置负载均衡监听器ID列表。
                     * @param _listenerIds 负载均衡监听器ID列表。
                     * 
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     * 
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取负载均衡监听的协议：'TCP', 'UDP', 'HTTP', 'HTTPS'。
                     * @return Protocol 负载均衡监听的协议：'TCP', 'UDP', 'HTTP', 'HTTPS'。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置负载均衡监听的协议：'TCP', 'UDP', 'HTTP', 'HTTPS'。
                     * @param _protocol 负载均衡监听的协议：'TCP', 'UDP', 'HTTP', 'HTTPS'。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取负载均衡监听端口，范围为[1-65535]。
                     * @return ListenerPort 负载均衡监听端口，范围为[1-65535]。
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置负载均衡监听端口，范围为[1-65535]。
                     * @param _listenerPort 负载均衡监听端口，范围为[1-65535]。
                     * 
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取监听器的状态，0：创建中，1：运行中。
                     * @return Status 监听器的状态，0：创建中，1：运行中。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置监听器的状态，0：创建中，1：运行中。
                     * @param _status 监听器的状态，0：创建中，1：运行中。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID列表。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * 负载均衡监听的协议：'TCP', 'UDP', 'HTTP', 'HTTPS'。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 负载均衡监听端口，范围为[1-65535]。
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 监听器的状态，0：创建中，1：运行中。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBLISTENERSREQUEST_H_
