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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/HealthCheck.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateListener请求参数结构体
                */
                class CreateListenerRequest : public AbstractModel
                {
                public:
                    CreateListenerRequest();
                    ~CreateListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡实例 ID
                     * @return LoadBalancerId 负载均衡实例 ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID
                     * @param _loadBalancerId 负载均衡实例 ID
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
                     * 获取要将监听器创建到哪些端口，每个端口对应一个新的监听器
                     * @return Ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置要将监听器创建到哪些端口，每个端口对应一个新的监听器
                     * @param _ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器
                     * 
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取监听器协议： TCP | UDP
                     * @return Protocol 监听器协议： TCP | UDP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议： TCP | UDP
                     * @param _protocol 监听器协议： TCP | UDP
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
                     * 获取要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数
                     * @return ListenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数
                     * 
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数
                     * @param _listenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数
                     * 
                     */
                    void SetListenerNames(const std::vector<std::string>& _listenerNames);

                    /**
                     * 判断参数 ListenerNames 是否已赋值
                     * @return ListenerNames 是否已赋值
                     * 
                     */
                    bool ListenerNamesHasBeenSet() const;

                    /**
                     * 获取健康检查相关参数
                     * @return HealthCheck 健康检查相关参数
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查相关参数
                     * @param _healthCheck 健康检查相关参数
                     * 
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * @return SessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * @param _sessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * 
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     * @return Scheduler 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     * @param _scheduler 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @return SessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @param _sessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * 
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     * 
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取批量端口段的结束端口，必须和Ports长度一样。
                     * @return EndPorts 批量端口段的结束端口，必须和Ports长度一样。
                     * 
                     */
                    std::vector<int64_t> GetEndPorts() const;

                    /**
                     * 设置批量端口段的结束端口，必须和Ports长度一样。
                     * @param _endPorts 批量端口段的结束端口，必须和Ports长度一样。
                     * 
                     */
                    void SetEndPorts(const std::vector<int64_t>& _endPorts);

                    /**
                     * 判断参数 EndPorts 是否已赋值
                     * @return EndPorts 是否已赋值
                     * 
                     */
                    bool EndPortsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 要将监听器创建到哪些端口，每个端口对应一个新的监听器
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 监听器协议： TCP | UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * 健康检查相关参数
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 批量端口段的结束端口，必须和Ports长度一样。
                     */
                    std::vector<int64_t> m_endPorts;
                    bool m_endPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATELISTENERREQUEST_H_
