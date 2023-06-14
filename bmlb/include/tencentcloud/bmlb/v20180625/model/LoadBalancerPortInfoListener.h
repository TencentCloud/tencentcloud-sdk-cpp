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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCERPORTINFOLISTENER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCERPORTINFOLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取黑石负载均衡端口相关信息时返回的监听器信息（四层和七层）。
                */
                class LoadBalancerPortInfoListener : public AbstractModel
                {
                public:
                    LoadBalancerPortInfoListener();
                    ~LoadBalancerPortInfoListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡监听器ID。
                     * @return ListenerId 负载均衡监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器ID。
                     * @param _listenerId 负载均衡监听器ID。
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
                     * 获取监听器名称。
                     * @return ListenerName 监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称。
                     * @param _listenerName 监听器名称。
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器协议类型，可选值：http，https，tcp，udp。
                     * @return Protocol 监听器协议类型，可选值：http，https，tcp，udp。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议类型，可选值：http，https，tcp，udp。
                     * @param _protocol 监听器协议类型，可选值：http，https，tcp，udp。
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
                     * 获取监听器的监听端口。
                     * @return LoadBalancerPort 监听器的监听端口。
                     * 
                     */
                    int64_t GetLoadBalancerPort() const;

                    /**
                     * 设置监听器的监听端口。
                     * @param _loadBalancerPort 监听器的监听端口。
                     * 
                     */
                    void SetLoadBalancerPort(const int64_t& _loadBalancerPort);

                    /**
                     * 判断参数 LoadBalancerPort 是否已赋值
                     * @return LoadBalancerPort 是否已赋值
                     * 
                     */
                    bool LoadBalancerPortHasBeenSet() const;

                    /**
                     * 获取计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     * @return Bandwidth 计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     * @param _bandwidth 计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @return Status 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * @param _status 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取与监听器绑定的主机端口。
                     * @return Port 与监听器绑定的主机端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置与监听器绑定的主机端口。
                     * @param _port 与监听器绑定的主机端口。
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
                     * 负载均衡监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器协议类型，可选值：http，https，tcp，udp。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器的监听端口。
                     */
                    int64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 监听器当前状态（0代表创建中，1代表正常运行，2代表创建失败，3代表删除中，4代表删除失败）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 与监听器绑定的主机端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_LOADBALANCERPORTINFOLISTENER_H_
