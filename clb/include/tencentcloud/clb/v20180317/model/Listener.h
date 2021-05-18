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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/CertificateOutput.h>
#include <tencentcloud/clb/v20180317/model/HealthCheck.h>
#include <tencentcloud/clb/v20180317/model/RuleOutput.h>
#include <tencentcloud/clb/v20180317/model/BasicTargetGroupInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 监听器的信息
                */
                class Listener : public AbstractModel
                {
                public:
                    Listener();
                    ~Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡监听器 ID
                     * @return ListenerId 负载均衡监听器 ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置负载均衡监听器 ID
                     * @param ListenerId 负载均衡监听器 ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听器协议
                     * @return Protocol 监听器协议
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议
                     * @param Protocol 监听器协议
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取监听器端口
                     * @return Port 监听器端口
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置监听器端口
                     * @param Port 监听器端口
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器绑定的证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Certificate 监听器绑定的证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateOutput GetCertificate() const;

                    /**
                     * 设置监听器绑定的证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Certificate 监听器绑定的证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertificate(const CertificateOutput& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheck GetHealthCheck() const;

                    /**
                     * 设置监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthCheck 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthCheck(const HealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheduler 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Scheduler 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionExpireTime 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SessionExpireTime 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSessionExpireTime(const int64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                    /**
                     * 获取是否开启SNI特性（本参数仅对于HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SniSwitch 是否开启SNI特性（本参数仅对于HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI特性（本参数仅对于HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SniSwitch 是否开启SNI特性（本参数仅对于HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取监听器下的全部转发规则（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 监听器下的全部转发规则（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleOutput> GetRules() const;

                    /**
                     * 设置监听器下的全部转发规则（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rules 监听器下的全部转发规则（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRules(const std::vector<RuleOutput>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerName 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ListenerName 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 监听器的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置监听器的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 监听器的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPort 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEndPort() const;

                    /**
                     * 设置端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndPort 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndPort(const int64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     */
                    bool EndPortHasBeenSet() const;

                    /**
                     * 获取后端服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetType 后端服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置后端服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetType 后端服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取绑定的目标组基本信息；当监听器绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetGroup 绑定的目标组基本信息；当监听器绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicTargetGroupInfo GetTargetGroup() const;

                    /**
                     * 设置绑定的目标组基本信息；当监听器绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetGroup 绑定的目标组基本信息；当监听器绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetGroup(const BasicTargetGroupInfo& _targetGroup);

                    /**
                     * 判断参数 TargetGroup 是否已赋值
                     * @return TargetGroup 是否已赋值
                     */
                    bool TargetGroupHasBeenSet() const;

                    /**
                     * 获取会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionType 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSessionType() const;

                    /**
                     * 设置会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SessionType 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSessionType(const std::string& _sessionType);

                    /**
                     * 判断参数 SessionType 是否已赋值
                     * @return SessionType 是否已赋值
                     */
                    bool SessionTypeHasBeenSet() const;

                    /**
                     * 获取是否开启长连接，1开启，0关闭，（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeepaliveEnable 是否开启长连接，1开启，0关闭，（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，1开启，0关闭，（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param KeepaliveEnable 是否开启长连接，1开启，0关闭，（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeepaliveEnable(const int64_t& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取仅支持Nat64 CLB TCP监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Toa 仅支持Nat64 CLB TCP监听器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetToa() const;

                    /**
                     * 设置仅支持Nat64 CLB TCP监听器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Toa 仅支持Nat64 CLB TCP监听器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetToa(const bool& _toa);

                    /**
                     * 判断参数 Toa 是否已赋值
                     * @return Toa 是否已赋值
                     */
                    bool ToaHasBeenSet() const;

                    /**
                     * 获取解绑后端目标时，是否发RST给客户端，（此参数仅对于TCP监听器有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeregisterTargetRst 解绑后端目标时，是否发RST给客户端，（此参数仅对于TCP监听器有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeregisterTargetRst() const;

                    /**
                     * 设置解绑后端目标时，是否发RST给客户端，（此参数仅对于TCP监听器有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeregisterTargetRst 解绑后端目标时，是否发RST给客户端，（此参数仅对于TCP监听器有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeregisterTargetRst(const bool& _deregisterTargetRst);

                    /**
                     * 判断参数 DeregisterTargetRst 是否已赋值
                     * @return DeregisterTargetRst 是否已赋值
                     */
                    bool DeregisterTargetRstHasBeenSet() const;

                private:

                    /**
                     * 负载均衡监听器 ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 监听器绑定的证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CertificateOutput m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 监听器的健康检查信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 请求的调度方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * 会话保持时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                    /**
                     * 是否开启SNI特性（本参数仅对于HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * 监听器下的全部转发规则（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleOutput> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 监听器的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 端口段结束端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endPort;
                    bool m_endPortHasBeenSet;

                    /**
                     * 后端服务器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 绑定的目标组基本信息；当监听器绑定目标组时，会返回该字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicTargetGroupInfo m_targetGroup;
                    bool m_targetGroupHasBeenSet;

                    /**
                     * 会话保持类型。NORMAL表示默认会话保持类型。QUIC_CID 表示根据Quic Connection ID做会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionType;
                    bool m_sessionTypeHasBeenSet;

                    /**
                     * 是否开启长连接，1开启，0关闭，（本参数仅对于HTTP/HTTPS监听器有意义）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * 仅支持Nat64 CLB TCP监听器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_toa;
                    bool m_toaHasBeenSet;

                    /**
                     * 解绑后端目标时，是否发RST给客户端，（此参数仅对于TCP监听器有意义）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deregisterTargetRst;
                    bool m_deregisterTargetRstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LISTENER_H_
