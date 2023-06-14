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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_

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
                * ModifyListener请求参数结构体
                */
                class ModifyListenerRequest : public AbstractModel
                {
                public:
                    ModifyListenerRequest();
                    ~ModifyListenerRequest() = default;
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
                     * 获取新的监听器名称。
                     * @return ListenerName 新的监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置新的监听器名称。
                     * @param _listenerName 新的监听器名称。
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
                     * 获取健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @return HealthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     * @param _healthCheck 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
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
                     * 获取证书相关信息，此参数仅适用于HTTPS/TCP_SSL监听器；此参数和MultiCertInfo不能同时传入。
                     * @return Certificate 证书相关信息，此参数仅适用于HTTPS/TCP_SSL监听器；此参数和MultiCertInfo不能同时传入。
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置证书相关信息，此参数仅适用于HTTPS/TCP_SSL监听器；此参数和MultiCertInfo不能同时传入。
                     * @param _certificate 证书相关信息，此参数仅适用于HTTPS/TCP_SSL监听器；此参数和MultiCertInfo不能同时传入。
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
                     * 获取是否开启SNI特性，此参数仅适用于HTTPS监听器。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。
                     * @return SniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI特性，此参数仅适用于HTTPS监听器。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。
                     * @param _sniSwitch 是否开启SNI特性，此参数仅适用于HTTPS监听器。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。
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
                     * 获取后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     * @return TargetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     * @param _targetType 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
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
                     * 获取是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。
                     * @return KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。
                     * @param _keepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。
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
                     * 获取会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @return SessionType 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     * @param _sessionType 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
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
                     * 获取证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     * @return MultiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     * @param _multiCertInfo 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
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
                     * 获取监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。
                     * @return MaxConn 监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。
                     * @param _maxConn 监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。
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
                     * 获取监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。
                     * @return MaxCps 监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。
                     * @param _maxCps 监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。
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
                     * 获取空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。默认值：900，取值范围：共享型实例和独占型实例支持：300～900，性能容量型实例支持：300~2000。如需设置超过2000s，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category),最大可设置到3600s。
                     * @return IdleConnectTimeout 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。默认值：900，取值范围：共享型实例和独占型实例支持：300～900，性能容量型实例支持：300~2000。如需设置超过2000s，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category),最大可设置到3600s。
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。默认值：900，取值范围：共享型实例和独占型实例支持：300～900，性能容量型实例支持：300~2000。如需设置超过2000s，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category),最大可设置到3600s。
                     * @param _idleConnectTimeout 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。默认值：900，取值范围：共享型实例和独占型实例支持：300～900，性能容量型实例支持：300~2000。如需设置超过2000s，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category),最大可设置到3600s。
                     * 
                     */
                    void SetIdleConnectTimeout(const int64_t& _idleConnectTimeout);

                    /**
                     * 判断参数 IdleConnectTimeout 是否已赋值
                     * @return IdleConnectTimeout 是否已赋值
                     * 
                     */
                    bool IdleConnectTimeoutHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 新的监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL监听器。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 证书相关信息，此参数仅适用于HTTPS/TCP_SSL监听器；此参数和MultiCertInfo不能同时传入。
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 监听器转发的方式。可选值：WRR、LEAST_CONN
分别表示按权重轮询、最小连接数， 默认为 WRR。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 是否开启SNI特性，此参数仅适用于HTTPS监听器。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * 后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * 解绑后端目标时，是否发RST给客户端，此参数仅适用于TCP监听器。
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * 监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * 监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * 空闲连接超时时间，此参数仅适用于TCP监听器，单位：秒。默认值：900，取值范围：共享型实例和独占型实例支持：300～900，性能容量型实例支持：300~2000。如需设置超过2000s，请通过 [工单申请](https://console.cloud.tencent.com/workorder/category),最大可设置到3600s。
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
