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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATETCPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATETCPLISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateTCPListeners请求参数结构体
                */
                class CreateTCPListenersRequest : public AbstractModel
                {
                public:
                    CreateTCPListenersRequest();
                    ~CreateTCPListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监听器名称。
                     * @return ListenerName 监听器名称。
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称。
                     * @param ListenerName 监听器名称。
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器端口列表。
                     * @return Ports 监听器端口列表。
                     */
                    std::vector<uint64_t> GetPorts() const;

                    /**
                     * 设置监听器端口列表。
                     * @param Ports 监听器端口列表。
                     */
                    void SetPorts(const std::vector<uint64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     * @return Scheduler 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     * @param Scheduler 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取源站是否开启健康检查：1开启，0关闭，UDP监听器不支持健康检查
                     * @return HealthCheck 源站是否开启健康检查：1开启，0关闭，UDP监听器不支持健康检查
                     */
                    uint64_t GetHealthCheck() const;

                    /**
                     * 设置源站是否开启健康检查：1开启，0关闭，UDP监听器不支持健康检查
                     * @param HealthCheck 源站是否开启健康检查：1开启，0关闭，UDP监听器不支持健康检查
                     */
                    void SetHealthCheck(const uint64_t& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取监听器对应源站类型，支持IP或者DOMAIN类型。DOMAIN源站类型不支持wrr的源站调度策略。
                     * @return RealServerType 监听器对应源站类型，支持IP或者DOMAIN类型。DOMAIN源站类型不支持wrr的源站调度策略。
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置监听器对应源站类型，支持IP或者DOMAIN类型。DOMAIN源站类型不支持wrr的源站调度策略。
                     * @param RealServerType 监听器对应源站类型，支持IP或者DOMAIN类型。DOMAIN源站类型不支持wrr的源站调度策略。
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @return ProxyId 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @param ProxyId 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @return GroupId 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     * @param GroupId 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @return DelayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     * @param DelayLoop 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @return ConnectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     * @param ConnectTimeout 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取源站端口列表，该参数仅支持v1版本监听器和通道组监听器。
                     * @return RealServerPorts 源站端口列表，该参数仅支持v1版本监听器和通道组监听器。
                     */
                    std::vector<uint64_t> GetRealServerPorts() const;

                    /**
                     * 设置源站端口列表，该参数仅支持v1版本监听器和通道组监听器。
                     * @param RealServerPorts 源站端口列表，该参数仅支持v1版本监听器和通道组监听器。
                     */
                    void SetRealServerPorts(const std::vector<uint64_t>& _realServerPorts);

                    /**
                     * 判断参数 RealServerPorts 是否已赋值
                     * @return RealServerPorts 是否已赋值
                     */
                    bool RealServerPortsHasBeenSet() const;

                    /**
                     * 获取监听器获取客户端 IP 的方式，0表示 TOA, 1表示Proxy Protocol
                     * @return ClientIPMethod 监听器获取客户端 IP 的方式，0表示 TOA, 1表示Proxy Protocol
                     */
                    int64_t GetClientIPMethod() const;

                    /**
                     * 设置监听器获取客户端 IP 的方式，0表示 TOA, 1表示Proxy Protocol
                     * @param ClientIPMethod 监听器获取客户端 IP 的方式，0表示 TOA, 1表示Proxy Protocol
                     */
                    void SetClientIPMethod(const int64_t& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     */
                    bool ClientIPMethodHasBeenSet() const;

                private:

                    /**
                     * 监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器端口列表。
                     */
                    std::vector<uint64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 监听器源站调度策略，支持轮询（rr），加权轮询（wrr），最小连接数（lc）。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 源站是否开启健康检查：1开启，0关闭，UDP监听器不支持健康检查
                     */
                    uint64_t m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 监听器对应源站类型，支持IP或者DOMAIN类型。DOMAIN源站类型不支持wrr的源站调度策略。
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * 通道ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 通道组ID，ProxyId和GroupId必须设置一个，但不能同时设置。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 源站健康检查时间间隔，单位：秒。时间间隔取值在[5，300]之间。
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * 源站健康检查响应超时时间，单位：秒。超时时间取值在[2，60]之间。超时时间应小于健康检查时间间隔DelayLoop。
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 源站端口列表，该参数仅支持v1版本监听器和通道组监听器。
                     */
                    std::vector<uint64_t> m_realServerPorts;
                    bool m_realServerPortsHasBeenSet;

                    /**
                     * 监听器获取客户端 IP 的方式，0表示 TOA, 1表示Proxy Protocol
                     */
                    int64_t m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATETCPLISTENERSREQUEST_H_
