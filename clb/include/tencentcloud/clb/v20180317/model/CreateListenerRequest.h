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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/CertificateInput.h>
#include <tencentcloud/clb/v20180317/model/MultiCertInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
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
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param LoadBalancerId 负载均衡实例 ID。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取要将监听器创建到哪些端口，每个端口对应一个新的监听器。
                     * @return Ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置要将监听器创建到哪些端口，每个端口对应一个新的监听器。
                     * @param Ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
                     */
                    void SetPorts(const std::vector<int64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL（TCP_SSL 正在内测中，如需使用请通过工单申请）。
                     * @return Protocol 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL（TCP_SSL 正在内测中，如需使用请通过工单申请）。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL（TCP_SSL 正在内测中，如需使用请通过工单申请）。
                     * @param Protocol 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL（TCP_SSL 正在内测中，如需使用请通过工单申请）。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     * @return ListenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     * @param ListenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     */
                    void SetListenerNames(const std::vector<std::string>& _listenerNames);

                    /**
                     * 判断参数 ListenerNames 是否已赋值
                     * @return ListenerNames 是否已赋值
                     */
                    bool ListenerNamesHasBeenSet() const;

                    /**
                     * 获取健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @return HealthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @param HealthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取证书相关信息，此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。此参数和MultiCertInfo不能同时传入。
                     * @return Certificate 证书相关信息，此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。此参数和MultiCertInfo不能同时传入。
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书相关信息，此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。此参数和MultiCertInfo不能同时传入。
                     * @param Certificate 证书相关信息，此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。此参数和MultiCertInfo不能同时传入。
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * @return SessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     * @param SessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @return Scheduler 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @param Scheduler 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取是否开启SNI特性，此参数仅适用于HTTPS监听器。
                     * @return SniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI特性，此参数仅适用于HTTPS监听器。
                     * @param SniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     * @return TargetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     * @param TargetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @return SessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @param SessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
                     * @return KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
                     * @param KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
                     */
                    void SetKeepaliveEnable(const int64_t& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * @return EndPort 创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * @param EndPort 创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     */
                    void SetEndPort(const uint64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * @return DeregisterTargetRst 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * @param DeregisterTargetRst 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     */
                    void SetDeregisterTargetRst(const bool& _deregisterTargetRst);

                    /**
                     * 判断参数 DeregisterTargetRst 是否已赋值
                     * @return DeregisterTargetRst 是否已赋值
                     */
                    bool DeregisterTargetRstHasBeenSet() const;

                    /**
                     * 获取证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     * @return MultiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     * @param MultiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     */
                    bool MultiCertInfoHasBeenSet() const;

                    /**
                     * 获取监听器最大连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     * @return MaxConn 监听器最大连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置监听器最大连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     * @param MaxConn 监听器最大连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    void SetMaxConn(const int64_t& _maxConn);

                    /**
                     * 判断参数 MaxConn 是否已赋值
                     * @return MaxConn 是否已赋值
                     */
                    bool MaxConnHasBeenSet() const;

                    /**
                     * 获取监听器最大新增连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     * @return MaxCps 监听器最大新增连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置监听器最大新增连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     * @param MaxCps 监听器最大新增连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    void SetMaxCps(const int64_t& _maxCps);

                    /**
                     * 判断参数 MaxCps 是否已赋值
                     * @return MaxCps 是否已赋值
                     */
                    bool MaxCpsHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL（TCP_SSL 正在内测中，如需使用请通过工单申请）。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书相关信息，此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。此参数和MultiCertInfo不能同时传入。
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 是否开启SNI特性，此参数仅适用于HTTPS监听器。
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * 创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     */
                    uint64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * 监听器最大连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * 监听器最大新增连接数，只有TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
