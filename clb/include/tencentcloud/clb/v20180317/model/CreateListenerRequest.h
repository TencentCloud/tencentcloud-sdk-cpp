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
                     * 获取负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @return LoadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @param _loadBalancerId 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
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
                     * 获取要将监听器创建到哪些端口，每个端口对应一个新的监听器。
端口范围：1~65535
                     * @return Ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
端口范围：1~65535
                     * 
                     */
                    std::vector<int64_t> GetPorts() const;

                    /**
                     * 设置要将监听器创建到哪些端口，每个端口对应一个新的监听器。
端口范围：1~65535
                     * @param _ports 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
端口范围：1~65535
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
                     * 获取监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * @return Protocol 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     * @param _protocol 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
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
                     * 获取要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     * @return ListenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     * 
                     */
                    std::vector<std::string> GetListenerNames() const;

                    /**
                     * 设置要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     * @param _listenerNames 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
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
                     * 获取健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * @return HealthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * @param _healthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
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
                     * 获取证书相关信息。参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数MultiCertInfo至少需要传一个， 但不能同时传入。</li>
                     * @return Certificate 证书相关信息。参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数MultiCertInfo至少需要传一个， 但不能同时传入。</li>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书相关信息。参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数MultiCertInfo至少需要传一个， 但不能同时传入。</li>
                     * @param _certificate 证书相关信息。参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数MultiCertInfo至少需要传一个， 但不能同时传入。</li>
                     * 
                     */
                    void SetCertificate(const CertificateInput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：30~3600，默认为0，默认不开启。此参数仅适用于TCP/UDP监听器。
                     * @return SessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认为0，默认不开启。此参数仅适用于TCP/UDP监听器。
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：30~3600，默认为0，默认不开启。此参数仅适用于TCP/UDP监听器。
                     * @param _sessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认为0，默认不开启。此参数仅适用于TCP/UDP监听器。
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
                     * 获取监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）
默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * @return Scheduler 监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）
默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）
默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     * @param _scheduler 监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）
默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
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
                     * 获取是否开启SNI特性，此参数仅适用于HTTPS监听器。0表示未开启，1表示开启。
                     * @return SniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。0表示未开启，1表示开启。
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI特性，此参数仅适用于HTTPS监听器。0表示未开启，1表示开启。
                     * @param _sniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。0表示未开启，1表示开启。
                     * 
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     * 
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。
                     * @return TargetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。
                     * @param _targetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。（若选择QUIC_CID，则Protocol必须为UDP，Scheduler必须为WRR，同时只支持ipv4）
                     * @return SessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。（若选择QUIC_CID，则Protocol必须为UDP，Scheduler必须为WRR，同时只支持ipv4）
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。（若选择QUIC_CID，则Protocol必须为UDP，Scheduler必须为WRR，同时只支持ipv4）
                     * @param _sessionType 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。（若选择QUIC_CID，则Protocol必须为UDP，Scheduler必须为WRR，同时只支持ipv4）
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
                     * 获取是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 [内测申请](https://cloud.tencent.com/apply/p/tsodp6qm21)。
                     * @return KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 [内测申请](https://cloud.tencent.com/apply/p/tsodp6qm21)。
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 [内测申请](https://cloud.tencent.com/apply/p/tsodp6qm21)。
                     * @param _keepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 [内测申请](https://cloud.tencent.com/apply/p/tsodp6qm21)。
                     * 
                     */
                    void SetKeepaliveEnable(const int64_t& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * @return EndPort 创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * 
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * @param _endPort 创建端口段监听器时必须传入此参数，用以标识结束端口。同时，入参Ports只允许传入一个成员，用以标识开始端口。【如果您需要体验端口段功能，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)】。
                     * 
                     */
                    void SetEndPort(const uint64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * @return DeregisterTargetRst 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * @param _deregisterTargetRst 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     * 
                     */
                    void SetDeregisterTargetRst(const bool& _deregisterTargetRst);

                    /**
                     * 判断参数 DeregisterTargetRst 是否已赋值
                     * @return DeregisterTargetRst 是否已赋值
                     * 
                     */
                    bool DeregisterTargetRstHasBeenSet() const;

                    /**
                     * 获取证书信息，支持同时传入不同算法类型的多本服务端证书，参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数Certificate至少需要传一个， 但不能同时传入。</li>
                     * @return MultiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书，参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数Certificate至少需要传一个， 但不能同时传入。</li>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置证书信息，支持同时传入不同算法类型的多本服务端证书，参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数Certificate至少需要传一个， 但不能同时传入。</li>
                     * @param _multiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书，参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数Certificate至少需要传一个， 但不能同时传入。</li>
                     * 
                     */
                    void SetMultiCertInfo(const MultiCertInfo& _multiCertInfo);

                    /**
                     * 判断参数 MultiCertInfo 是否已赋值
                     * @return MultiCertInfo 是否已赋值
                     * 
                     */
                    bool MultiCertInfoHasBeenSet() const;

                    /**
                     * 获取监听器最大连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * @return MaxConn 监听器最大连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置监听器最大连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * @param _maxConn 监听器最大连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * 
                     */
                    void SetMaxConn(const int64_t& _maxConn);

                    /**
                     * 判断参数 MaxConn 是否已赋值
                     * @return MaxConn 是否已赋值
                     * 
                     */
                    bool MaxConnHasBeenSet() const;

                    /**
                     * 获取监听器最大新增连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * @return MaxCps 监听器最大新增连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置监听器最大新增连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * @param _maxCps 监听器最大新增连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     * 
                     */
                    void SetMaxCps(const int64_t& _maxCps);

                    /**
                     * 判断参数 MaxCps 是否已赋值
                     * @return MaxCps 是否已赋值
                     * 
                     */
                    bool MaxCpsHasBeenSet() const;

                    /**
                     * 获取空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。取值范围：共享型实例和独占型实例支持：300-900，性能容量型实例支持：300-1980。如需设置请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)。
                     * @return IdleConnectTimeout 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。取值范围：共享型实例和独占型实例支持：300-900，性能容量型实例支持：300-1980。如需设置请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)。
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。取值范围：共享型实例和独占型实例支持：300-900，性能容量型实例支持：300-1980。如需设置请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)。
                     * @param _idleConnectTimeout 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。取值范围：共享型实例和独占型实例支持：300-900，性能容量型实例支持：300-1980。如需设置请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)。
                     * 
                     */
                    void SetIdleConnectTimeout(const int64_t& _idleConnectTimeout);

                    /**
                     * 判断参数 IdleConnectTimeout 是否已赋值
                     * @return IdleConnectTimeout 是否已赋值
                     * 
                     */
                    bool IdleConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取TCP_SSL和QUIC是否支持PP
                     * @return ProxyProtocol TCP_SSL和QUIC是否支持PP
                     * 
                     */
                    bool GetProxyProtocol() const;

                    /**
                     * 设置TCP_SSL和QUIC是否支持PP
                     * @param _proxyProtocol TCP_SSL和QUIC是否支持PP
                     * 
                     */
                    void SetProxyProtocol(const bool& _proxyProtocol);

                    /**
                     * 判断参数 ProxyProtocol 是否已赋值
                     * @return ProxyProtocol 是否已赋值
                     * 
                     */
                    bool ProxyProtocolHasBeenSet() const;

                    /**
                     * 获取是否开启SNAT，True（开启）、False（关闭）。
默认为关闭。
                     * @return SnatEnable 是否开启SNAT，True（开启）、False（关闭）。
默认为关闭。
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置是否开启SNAT，True（开启）、False（关闭）。
默认为关闭。
                     * @param _snatEnable 是否开启SNAT，True（开启）、False（关闭）。
默认为关闭。
                     * 
                     */
                    void SetSnatEnable(const bool& _snatEnable);

                    /**
                     * 判断参数 SnatEnable 是否已赋值
                     * @return SnatEnable 是否已赋值
                     * 
                     */
                    bool SnatEnableHasBeenSet() const;

                    /**
                     * 获取全端口段监听器的结束端口，端口范围：2 - 65535
                     * @return FullEndPorts 全端口段监听器的结束端口，端口范围：2 - 65535
                     * 
                     */
                    std::vector<int64_t> GetFullEndPorts() const;

                    /**
                     * 设置全端口段监听器的结束端口，端口范围：2 - 65535
                     * @param _fullEndPorts 全端口段监听器的结束端口，端口范围：2 - 65535
                     * 
                     */
                    void SetFullEndPorts(const std::vector<int64_t>& _fullEndPorts);

                    /**
                     * 判断参数 FullEndPorts 是否已赋值
                     * @return FullEndPorts 是否已赋值
                     * 
                     */
                    bool FullEndPortsHasBeenSet() const;

                    /**
                     * 获取内网http监听器开启h2c开关，True（开启）、False（关闭）。
默认为关闭。
                     * @return H2cSwitch 内网http监听器开启h2c开关，True（开启）、False（关闭）。
默认为关闭。
                     * 
                     */
                    bool GetH2cSwitch() const;

                    /**
                     * 设置内网http监听器开启h2c开关，True（开启）、False（关闭）。
默认为关闭。
                     * @param _h2cSwitch 内网http监听器开启h2c开关，True（开启）、False（关闭）。
默认为关闭。
                     * 
                     */
                    void SetH2cSwitch(const bool& _h2cSwitch);

                    /**
                     * 判断参数 H2cSwitch 是否已赋值
                     * @return H2cSwitch 是否已赋值
                     * 
                     */
                    bool H2cSwitchHasBeenSet() const;

                    /**
                     * 获取TCP_SSL监听器支持关闭SSL后仍然支持混绑，此参数为关闭开关。True（关闭）、False（开启）.
默认为关闭。
                     * @return SslCloseSwitch TCP_SSL监听器支持关闭SSL后仍然支持混绑，此参数为关闭开关。True（关闭）、False（开启）.
默认为关闭。
                     * 
                     */
                    bool GetSslCloseSwitch() const;

                    /**
                     * 设置TCP_SSL监听器支持关闭SSL后仍然支持混绑，此参数为关闭开关。True（关闭）、False（开启）.
默认为关闭。
                     * @param _sslCloseSwitch TCP_SSL监听器支持关闭SSL后仍然支持混绑，此参数为关闭开关。True（关闭）、False（开启）.
默认为关闭。
                     * 
                     */
                    void SetSslCloseSwitch(const bool& _sslCloseSwitch);

                    /**
                     * 判断参数 SslCloseSwitch 是否已赋值
                     * @return SslCloseSwitch 是否已赋值
                     * 
                     */
                    bool SslCloseSwitchHasBeenSet() const;

                    /**
                     * 获取数据压缩模式。可选值：transparent（透传模式）、compatibility（兼容模式）
                     * @return DataCompressMode 数据压缩模式。可选值：transparent（透传模式）、compatibility（兼容模式）
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置数据压缩模式。可选值：transparent（透传模式）、compatibility（兼容模式）
                     * @param _dataCompressMode 数据压缩模式。可选值：transparent（透传模式）、compatibility（兼容模式）
                     * 
                     */
                    void SetDataCompressMode(const std::string& _dataCompressMode);

                    /**
                     * 判断参数 DataCompressMode 是否已赋值
                     * @return DataCompressMode 是否已赋值
                     * 
                     */
                    bool DataCompressModeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 要将监听器创建到哪些端口，每个端口对应一个新的监听器。
端口范围：1~65535
                     */
                    std::vector<int64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 监听器协议： TCP | UDP | HTTP | HTTPS | TCP_SSL | QUIC。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 要创建的监听器名称列表，名称与Ports数组按序一一对应，如不需立即命名，则无需提供此参数。
                     */
                    std::vector<std::string> m_listenerNames;
                    bool m_listenerNamesHasBeenSet;

                    /**
                     * 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书相关信息。参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数MultiCertInfo至少需要传一个， 但不能同时传入。</li>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600，默认为0，默认不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）
默认为 WRR。此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 是否开启SNI特性，此参数仅适用于HTTPS监听器。0表示未开启，1表示开启。
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 会话保持类型。不传或传NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。此参数仅适用于TCP/UDP监听器。七层监听器应在转发规则中设置。（若选择QUIC_CID，则Protocol必须为UDP，Scheduler必须为WRR，同时只支持ipv4）
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器，0:关闭；1:开启， 默认关闭。
若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 [内测申请](https://cloud.tencent.com/apply/p/tsodp6qm21)。
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
                     * 证书信息，支持同时传入不同算法类型的多本服务端证书，参数限制如下：
<li>此参数仅适用于TCP_SSL监听器和未开启SNI特性的HTTPS监听器。</li>
<li>创建TCP_SSL监听器和未开启SNI特性的HTTPS监听器时，此参数和参数Certificate至少需要传一个， 但不能同时传入。</li>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * 监听器最大连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * 监听器最大新增连接数，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持，不传或者传-1表示监听器维度不限速。基础网络实例不支持该参数。
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。取值范围：共享型实例和独占型实例支持：300-900，性能容量型实例支持：300-1980。如需设置请通过 [工单申请](https://console.cloud.tencent.com/workorder/category)。
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * TCP_SSL和QUIC是否支持PP
                     */
                    bool m_proxyProtocol;
                    bool m_proxyProtocolHasBeenSet;

                    /**
                     * 是否开启SNAT，True（开启）、False（关闭）。
默认为关闭。
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                    /**
                     * 全端口段监听器的结束端口，端口范围：2 - 65535
                     */
                    std::vector<int64_t> m_fullEndPorts;
                    bool m_fullEndPortsHasBeenSet;

                    /**
                     * 内网http监听器开启h2c开关，True（开启）、False（关闭）。
默认为关闭。
                     */
                    bool m_h2cSwitch;
                    bool m_h2cSwitchHasBeenSet;

                    /**
                     * TCP_SSL监听器支持关闭SSL后仍然支持混绑，此参数为关闭开关。True（关闭）、False（开启）.
默认为关闭。
                     */
                    bool m_sslCloseSwitch;
                    bool m_sslCloseSwitchHasBeenSet;

                    /**
                     * 数据压缩模式。可选值：transparent（透传模式）、compatibility（兼容模式）
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATELISTENERREQUEST_H_
