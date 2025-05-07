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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_

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
                * DescribeListeners请求参数结构体
                */
                class DescribeListenersRequest : public AbstractModel
                {
                public:
                    DescribeListenersRequest();
                    ~DescribeListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/api/214/30685) 接口获取。
                     * @return LoadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/api/214/30685) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/api/214/30685) 接口获取。
                     * @param _loadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/api/214/30685) 接口获取。
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
                     * 获取要查询的负载均衡监听器 ID 数组，最大为100个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/api/214/30686) 接口获取。
                     * @return ListenerIds 要查询的负载均衡监听器 ID 数组，最大为100个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/api/214/30686) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置要查询的负载均衡监听器 ID 数组，最大为100个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/api/214/30686) 接口获取。
                     * @param _listenerIds 要查询的负载均衡监听器 ID 数组，最大为100个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/api/214/30686) 接口获取。
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
                     * 获取要查询的监听器协议类型，取值 TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * @return Protocol 要查询的监听器协议类型，取值 TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置要查询的监听器协议类型，取值 TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * @param _protocol 要查询的监听器协议类型，取值 TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
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
                     * 获取要查询的监听器的端口，端口范围：1-65535
                     * @return Port 要查询的监听器的端口，端口范围：1-65535
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置要查询的监听器的端口，端口范围：1-65535
                     * @param _port 要查询的监听器的端口，端口范围：1-65535
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/api/214/30685) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 要查询的负载均衡监听器 ID 数组，最大为100个，可以通过 [DescribeListeners](https://cloud.tencent.com/document/api/214/30686) 接口获取。
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * 要查询的监听器协议类型，取值 TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 要查询的监听器的端口，端口范围：1-65535
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBELISTENERSREQUEST_H_
