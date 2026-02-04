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
                     * 获取<p>负载均衡实例ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口查询。</p>
                     * @return LoadBalancerId <p>负载均衡实例ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口查询。</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>负载均衡实例ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口查询。</p>
                     * @param _loadBalancerId <p>负载均衡实例ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口查询。</p>
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
                     * 获取<p>负载均衡监听器ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30686">DescribeListeners</a> 接口查询。</p>
                     * @return ListenerId <p>负载均衡监听器ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30686">DescribeListeners</a> 接口查询。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>负载均衡监听器ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30686">DescribeListeners</a> 接口查询。</p>
                     * @param _listenerId <p>负载均衡监听器ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30686">DescribeListeners</a> 接口查询。</p>
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
                     * 获取<p>新的监听器名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @return ListenerName <p>新的监听器名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>新的监听器名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     * @param _listenerName <p>新的监听器名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
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
                     * 获取<p>会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。</p>
                     * @return SessionExpireTime <p>会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。</p>
                     * 
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置<p>会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。</p>
                     * @param _sessionExpireTime <p>会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。</p>
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
                     * 获取<p>健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。</p>
                     * @return HealthCheck <p>健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。</p>
                     * 
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置<p>健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。</p>
                     * @param _healthCheck <p>健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。</p>
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
                     * 获取<p>证书相关信息，此参数仅适用于HTTPS/TCP_SSL/QUIC监听器；此参数和MultiCertInfo不能同时传入。</p>
                     * @return Certificate <p>证书相关信息，此参数仅适用于HTTPS/TCP_SSL/QUIC监听器；此参数和MultiCertInfo不能同时传入。</p>
                     * 
                     */
                    CertificateInput GetCertificate() const;

                    /**
                     * 设置<p>证书相关信息，此参数仅适用于HTTPS/TCP_SSL/QUIC监听器；此参数和MultiCertInfo不能同时传入。</p>
                     * @param _certificate <p>证书相关信息，此参数仅适用于HTTPS/TCP_SSL/QUIC监听器；此参数和MultiCertInfo不能同时传入。</p>
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
                     * 获取<p>监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）<br>分别表示按权重轮询、最小连接数， 默认为 WRR。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。七层监听器的均衡方式应在转发规则中修改。</p>
                     * @return Scheduler <p>监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）<br>分别表示按权重轮询、最小连接数， 默认为 WRR。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。七层监听器的均衡方式应在转发规则中修改。</p>
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）<br>分别表示按权重轮询、最小连接数， 默认为 WRR。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。七层监听器的均衡方式应在转发规则中修改。</p>
                     * @param _scheduler <p>监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）<br>分别表示按权重轮询、最小连接数， 默认为 WRR。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。七层监听器的均衡方式应在转发规则中修改。</p>
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
                     * 获取<p>是否开启SNI特性，此参数仅适用于HTTPS监听器。默认0，表示不开启，1表示开启。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。</p>
                     * @return SniSwitch <p>是否开启SNI特性，此参数仅适用于HTTPS监听器。默认0，表示不开启，1表示开启。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。</p>
                     * 
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置<p>是否开启SNI特性，此参数仅适用于HTTPS监听器。默认0，表示不开启，1表示开启。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。</p>
                     * @param _sniSwitch <p>是否开启SNI特性，此参数仅适用于HTTPS监听器。默认0，表示不开启，1表示开启。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。</p>
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
                     * 获取<p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。</p>
                     * @return TargetType <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。</p>
                     * @param _targetType <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。</p>
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
                     * 获取<p>是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。<br>默认值0表示不开启，1表示开启。<br>若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 <a href="https://cloud.tencent.com/apply/p/tsodp6qm21">内测申请</a>。</p>
                     * @return KeepaliveEnable <p>是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。<br>默认值0表示不开启，1表示开启。<br>若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 <a href="https://cloud.tencent.com/apply/p/tsodp6qm21">内测申请</a>。</p>
                     * 
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置<p>是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。<br>默认值0表示不开启，1表示开启。<br>若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 <a href="https://cloud.tencent.com/apply/p/tsodp6qm21">内测申请</a>。</p>
                     * @param _keepaliveEnable <p>是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。<br>默认值0表示不开启，1表示开启。<br>若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 <a href="https://cloud.tencent.com/apply/p/tsodp6qm21">内测申请</a>。</p>
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
                     * 获取<p>重新调度功能，解绑后端服务开关，打开此开关，当解绑后端服务时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @return DeregisterTargetRst <p>重新调度功能，解绑后端服务开关，打开此开关，当解绑后端服务时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置<p>重新调度功能，解绑后端服务开关，打开此开关，当解绑后端服务时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @param _deregisterTargetRst <p>重新调度功能，解绑后端服务开关，打开此开关，当解绑后端服务时触发重新调度。仅TCP/UDP监听器支持。</p>
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
                     * 获取<p>会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。<br>默认为 NORMAL。</p>
                     * @return SessionType <p>会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。<br>默认为 NORMAL。</p>
                     * 
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置<p>会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。<br>默认为 NORMAL。</p>
                     * @param _sessionType <p>会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。<br>默认为 NORMAL。</p>
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
                     * 获取<p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。</p>
                     * @return MultiCertInfo <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。</p>
                     * 
                     */
                    MultiCertInfo GetMultiCertInfo() const;

                    /**
                     * 设置<p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。</p>
                     * @param _multiCertInfo <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。</p>
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
                     * 获取<p>监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。基础网络实例不支持该参数。<br>默认为 -1，表示不限速。</p>
                     * @return MaxConn <p>监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。基础网络实例不支持该参数。<br>默认为 -1，表示不限速。</p>
                     * 
                     */
                    int64_t GetMaxConn() const;

                    /**
                     * 设置<p>监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。基础网络实例不支持该参数。<br>默认为 -1，表示不限速。</p>
                     * @param _maxConn <p>监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。基础网络实例不支持该参数。<br>默认为 -1，表示不限速。</p>
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
                     * 获取<p>监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。基础网络实例不支持该参数。<br>默认为 -1 表示不限速。</p>
                     * @return MaxCps <p>监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。基础网络实例不支持该参数。<br>默认为 -1 表示不限速。</p>
                     * 
                     */
                    int64_t GetMaxCps() const;

                    /**
                     * 设置<p>监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。基础网络实例不支持该参数。<br>默认为 -1 表示不限速。</p>
                     * @param _maxCps <p>监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。基础网络实例不支持该参数。<br>默认为 -1 表示不限速。</p>
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
                     * 获取<p>空闲连接超时时间，此参数仅适用于TCP/UDP监听器。如需设置超过1980s，请通过 <a href="https://console.cloud.tencent.com/workorder/category">工单申请</a>,最大可设置到3600s。</p><p>取值范围：[10, 1980]</p><p>单位：秒</p><p>默认值：900</p><p>TCP监听器默认值：900，UDP监听器默认值：300s。取值范围：共享型实例和独占型实例支持：10～900，性能容量型实例支持：10~1980。</p>
                     * @return IdleConnectTimeout <p>空闲连接超时时间，此参数仅适用于TCP/UDP监听器。如需设置超过1980s，请通过 <a href="https://console.cloud.tencent.com/workorder/category">工单申请</a>,最大可设置到3600s。</p><p>取值范围：[10, 1980]</p><p>单位：秒</p><p>默认值：900</p><p>TCP监听器默认值：900，UDP监听器默认值：300s。取值范围：共享型实例和独占型实例支持：10～900，性能容量型实例支持：10~1980。</p>
                     * 
                     */
                    int64_t GetIdleConnectTimeout() const;

                    /**
                     * 设置<p>空闲连接超时时间，此参数仅适用于TCP/UDP监听器。如需设置超过1980s，请通过 <a href="https://console.cloud.tencent.com/workorder/category">工单申请</a>,最大可设置到3600s。</p><p>取值范围：[10, 1980]</p><p>单位：秒</p><p>默认值：900</p><p>TCP监听器默认值：900，UDP监听器默认值：300s。取值范围：共享型实例和独占型实例支持：10～900，性能容量型实例支持：10~1980。</p>
                     * @param _idleConnectTimeout <p>空闲连接超时时间，此参数仅适用于TCP/UDP监听器。如需设置超过1980s，请通过 <a href="https://console.cloud.tencent.com/workorder/category">工单申请</a>,最大可设置到3600s。</p><p>取值范围：[10, 1980]</p><p>单位：秒</p><p>默认值：900</p><p>TCP监听器默认值：900，UDP监听器默认值：300s。取值范围：共享型实例和独占型实例支持：10～900，性能容量型实例支持：10~1980。</p>
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
                     * 获取<p>TCP_SSL和QUIC是否支持PP</p>
                     * @return ProxyProtocol <p>TCP_SSL和QUIC是否支持PP</p>
                     * 
                     */
                    bool GetProxyProtocol() const;

                    /**
                     * 设置<p>TCP_SSL和QUIC是否支持PP</p>
                     * @param _proxyProtocol <p>TCP_SSL和QUIC是否支持PP</p>
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
                     * 获取<p>是否开启SNAT（源IP替换），True（开启）、False（关闭）。默认为关闭。注意：SnatEnable开启时会替换客户端源IP，此时<code>透传客户端源IP</code>选项关闭，反之亦然。</p>
                     * @return SnatEnable <p>是否开启SNAT（源IP替换），True（开启）、False（关闭）。默认为关闭。注意：SnatEnable开启时会替换客户端源IP，此时<code>透传客户端源IP</code>选项关闭，反之亦然。</p>
                     * 
                     */
                    bool GetSnatEnable() const;

                    /**
                     * 设置<p>是否开启SNAT（源IP替换），True（开启）、False（关闭）。默认为关闭。注意：SnatEnable开启时会替换客户端源IP，此时<code>透传客户端源IP</code>选项关闭，反之亦然。</p>
                     * @param _snatEnable <p>是否开启SNAT（源IP替换），True（开启）、False（关闭）。默认为关闭。注意：SnatEnable开启时会替换客户端源IP，此时<code>透传客户端源IP</code>选项关闭，反之亦然。</p>
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
                     * 获取<p>数据压缩模式</p>
                     * @return DataCompressMode <p>数据压缩模式</p>
                     * 
                     */
                    std::string GetDataCompressMode() const;

                    /**
                     * 设置<p>数据压缩模式</p>
                     * @param _dataCompressMode <p>数据压缩模式</p>
                     * 
                     */
                    void SetDataCompressMode(const std::string& _dataCompressMode);

                    /**
                     * 判断参数 DataCompressMode 是否已赋值
                     * @return DataCompressMode 是否已赋值
                     * 
                     */
                    bool DataCompressModeHasBeenSet() const;

                    /**
                     * 获取<p>重新调度功能，权重调为0开关，打开此开关，后端服务器权重调为0时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @return RescheduleTargetZeroWeight <p>重新调度功能，权重调为0开关，打开此开关，后端服务器权重调为0时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    bool GetRescheduleTargetZeroWeight() const;

                    /**
                     * 设置<p>重新调度功能，权重调为0开关，打开此开关，后端服务器权重调为0时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @param _rescheduleTargetZeroWeight <p>重新调度功能，权重调为0开关，打开此开关，后端服务器权重调为0时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    void SetRescheduleTargetZeroWeight(const bool& _rescheduleTargetZeroWeight);

                    /**
                     * 判断参数 RescheduleTargetZeroWeight 是否已赋值
                     * @return RescheduleTargetZeroWeight 是否已赋值
                     * 
                     */
                    bool RescheduleTargetZeroWeightHasBeenSet() const;

                    /**
                     * 获取<p>重新调度功能，健康检查异常开关，打开此开关，后端服务器健康检查异常时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @return RescheduleUnhealthy <p>重新调度功能，健康检查异常开关，打开此开关，后端服务器健康检查异常时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    bool GetRescheduleUnhealthy() const;

                    /**
                     * 设置<p>重新调度功能，健康检查异常开关，打开此开关，后端服务器健康检查异常时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @param _rescheduleUnhealthy <p>重新调度功能，健康检查异常开关，打开此开关，后端服务器健康检查异常时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    void SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy);

                    /**
                     * 判断参数 RescheduleUnhealthy 是否已赋值
                     * @return RescheduleUnhealthy 是否已赋值
                     * 
                     */
                    bool RescheduleUnhealthyHasBeenSet() const;

                    /**
                     * 获取<p>重新调度功能，扩容后端服务开关，打开此开关，后端服务器增加或者减少时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @return RescheduleExpandTarget <p>重新调度功能，扩容后端服务开关，打开此开关，后端服务器增加或者减少时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    bool GetRescheduleExpandTarget() const;

                    /**
                     * 设置<p>重新调度功能，扩容后端服务开关，打开此开关，后端服务器增加或者减少时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * @param _rescheduleExpandTarget <p>重新调度功能，扩容后端服务开关，打开此开关，后端服务器增加或者减少时触发重新调度。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    void SetRescheduleExpandTarget(const bool& _rescheduleExpandTarget);

                    /**
                     * 判断参数 RescheduleExpandTarget 是否已赋值
                     * @return RescheduleExpandTarget 是否已赋值
                     * 
                     */
                    bool RescheduleExpandTargetHasBeenSet() const;

                    /**
                     * 获取<p>重新调度触发开始时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * @return RescheduleStartTime <p>重新调度触发开始时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    int64_t GetRescheduleStartTime() const;

                    /**
                     * 设置<p>重新调度触发开始时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * @param _rescheduleStartTime <p>重新调度触发开始时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    void SetRescheduleStartTime(const int64_t& _rescheduleStartTime);

                    /**
                     * 判断参数 RescheduleStartTime 是否已赋值
                     * @return RescheduleStartTime 是否已赋值
                     * 
                     */
                    bool RescheduleStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>重新调度触发持续时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * @return RescheduleInterval <p>重新调度触发持续时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    int64_t GetRescheduleInterval() const;

                    /**
                     * 设置<p>重新调度触发持续时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * @param _rescheduleInterval <p>重新调度触发持续时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     * 
                     */
                    void SetRescheduleInterval(const int64_t& _rescheduleInterval);

                    /**
                     * 判断参数 RescheduleInterval 是否已赋值
                     * @return RescheduleInterval 是否已赋值
                     * 
                     */
                    bool RescheduleIntervalHasBeenSet() const;

                private:

                    /**
                     * <p>负载均衡实例ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30685">DescribeLoadBalancers</a> 接口查询。</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>负载均衡监听器ID，可以通过 <a href="https://cloud.tencent.com/document/product/214/30686">DescribeListeners</a> 接口查询。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>新的监听器名称。命名规则：1-80 个英文字母、汉字等国际通用语言字符，数字，连接线“-”、下划线“_”等常见字符（禁止Unicode补充字符，如emoji表情、生僻汉字等）。</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。此参数仅适用于TCP/UDP监听器。</p>
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * <p>健康检查相关参数，此参数仅适用于TCP/UDP/TCP_SSL/QUIC监听器。</p>
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * <p>证书相关信息，此参数仅适用于HTTPS/TCP_SSL/QUIC监听器；此参数和MultiCertInfo不能同时传入。</p>
                     */
                    CertificateInput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>监听器转发的方式。可选值：WRR（按权重轮询）、LEAST_CONN（按最小连接数）、IP_HASH（按 IP 地址哈希）<br>分别表示按权重轮询、最小连接数， 默认为 WRR。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。七层监听器的均衡方式应在转发规则中修改。</p>
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>是否开启SNI特性，此参数仅适用于HTTPS监听器。默认0，表示不开启，1表示开启。注意：未开启SNI的监听器可以开启SNI；已开启SNI的监听器不能关闭SNI。</p>
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * <p>后端目标类型，NODE表示绑定普通节点，TARGETGROUP表示绑定目标组。</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>是否开启长连接，此参数仅适用于HTTP/HTTPS监听器。<br>默认值0表示不开启，1表示开启。<br>若后端服务对连接数上限有限制，则建议谨慎开启。此功能目前处于内测中，如需使用，请提交 <a href="https://cloud.tencent.com/apply/p/tsodp6qm21">内测申请</a>。</p>
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * <p>重新调度功能，解绑后端服务开关，打开此开关，当解绑后端服务时触发重新调度。仅TCP/UDP监听器支持。</p>
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                    /**
                     * <p>会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID表示根据Quic Connection ID做会话保持。QUIC_CID只支持UDP协议。<br>使用场景：适用于TCP/UDP/TCP_SSL/QUIC监听器。<br>默认为 NORMAL。</p>
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * <p>证书信息，支持同时传入不同算法类型的多本服务端证书；此参数仅适用于未开启SNI特性的HTTPS监听器。此参数和Certificate不能同时传入。</p>
                     */
                    MultiCertInfo m_multiCertInfo;
                    bool m_multiCertInfoHasBeenSet;

                    /**
                     * <p>监听器粒度并发连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格并发连接上限，其中-1表示关闭监听器粒度并发连接数限速。基础网络实例不支持该参数。<br>默认为 -1，表示不限速。</p>
                     */
                    int64_t m_maxConn;
                    bool m_maxConnHasBeenSet;

                    /**
                     * <p>监听器粒度新建连接数上限，当前仅性能容量型实例且仅TCP/UDP/TCP_SSL/QUIC监听器支持。取值范围：1-实例规格新建连接上限，其中-1表示关闭监听器粒度新建连接数限速。基础网络实例不支持该参数。<br>默认为 -1 表示不限速。</p>
                     */
                    int64_t m_maxCps;
                    bool m_maxCpsHasBeenSet;

                    /**
                     * <p>空闲连接超时时间，此参数仅适用于TCP/UDP监听器。如需设置超过1980s，请通过 <a href="https://console.cloud.tencent.com/workorder/category">工单申请</a>,最大可设置到3600s。</p><p>取值范围：[10, 1980]</p><p>单位：秒</p><p>默认值：900</p><p>TCP监听器默认值：900，UDP监听器默认值：300s。取值范围：共享型实例和独占型实例支持：10～900，性能容量型实例支持：10~1980。</p>
                     */
                    int64_t m_idleConnectTimeout;
                    bool m_idleConnectTimeoutHasBeenSet;

                    /**
                     * <p>TCP_SSL和QUIC是否支持PP</p>
                     */
                    bool m_proxyProtocol;
                    bool m_proxyProtocolHasBeenSet;

                    /**
                     * <p>是否开启SNAT（源IP替换），True（开启）、False（关闭）。默认为关闭。注意：SnatEnable开启时会替换客户端源IP，此时<code>透传客户端源IP</code>选项关闭，反之亦然。</p>
                     */
                    bool m_snatEnable;
                    bool m_snatEnableHasBeenSet;

                    /**
                     * <p>数据压缩模式</p>
                     */
                    std::string m_dataCompressMode;
                    bool m_dataCompressModeHasBeenSet;

                    /**
                     * <p>重新调度功能，权重调为0开关，打开此开关，后端服务器权重调为0时触发重新调度。仅TCP/UDP监听器支持。</p>
                     */
                    bool m_rescheduleTargetZeroWeight;
                    bool m_rescheduleTargetZeroWeightHasBeenSet;

                    /**
                     * <p>重新调度功能，健康检查异常开关，打开此开关，后端服务器健康检查异常时触发重新调度。仅TCP/UDP监听器支持。</p>
                     */
                    bool m_rescheduleUnhealthy;
                    bool m_rescheduleUnhealthyHasBeenSet;

                    /**
                     * <p>重新调度功能，扩容后端服务开关，打开此开关，后端服务器增加或者减少时触发重新调度。仅TCP/UDP监听器支持。</p>
                     */
                    bool m_rescheduleExpandTarget;
                    bool m_rescheduleExpandTargetHasBeenSet;

                    /**
                     * <p>重新调度触发开始时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     */
                    int64_t m_rescheduleStartTime;
                    bool m_rescheduleStartTimeHasBeenSet;

                    /**
                     * <p>重新调度触发持续时间，取值0~3600s。仅TCP/UDP监听器支持。</p>
                     */
                    int64_t m_rescheduleInterval;
                    bool m_rescheduleIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLISTENERREQUEST_H_
