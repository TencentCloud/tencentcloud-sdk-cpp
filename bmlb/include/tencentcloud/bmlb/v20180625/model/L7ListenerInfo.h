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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFO_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/L7ListenerInfoRule.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 查询绑定了某主机的七层监听器时返回的七层监听器信息。
                */
                class L7ListenerInfo : public AbstractModel
                {
                public:
                    L7ListenerInfo();
                    ~L7ListenerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层监听器实例ID。
                     * @return ListenerId 七层监听器实例ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置七层监听器实例ID。
                     * @param _listenerId 七层监听器实例ID。
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
                     * 获取七层监听器名称。
                     * @return ListenerName 七层监听器名称。
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置七层监听器名称。
                     * @param _listenerName 七层监听器名称。
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
                     * 获取七层监听器协议类型，可选值：http,https。
                     * @return Protocol 七层监听器协议类型，可选值：http,https。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置七层监听器协议类型，可选值：http,https。
                     * @param _protocol 七层监听器协议类型，可选值：http,https。
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
                     * 获取七层监听器的监听端口。
                     * @return LoadBalancerPort 七层监听器的监听端口。
                     * 
                     */
                    int64_t GetLoadBalancerPort() const;

                    /**
                     * 设置七层监听器的监听端口。
                     * @param _loadBalancerPort 七层监听器的监听端口。
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
                     * 获取监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * @return ListenerType 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * @param _listenerType 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     * 
                     */
                    void SetListenerType(const std::string& _listenerType);

                    /**
                     * 判断参数 ListenerType 是否已赋值
                     * @return ListenerType 是否已赋值
                     * 
                     */
                    bool ListenerTypeHasBeenSet() const;

                    /**
                     * 获取七层监听器的认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @return SslMode 七层监听器的认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    int64_t GetSslMode() const;

                    /**
                     * 设置七层监听器的认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * @param _sslMode 七层监听器的认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     * 
                     */
                    void SetSslMode(const int64_t& _sslMode);

                    /**
                     * 判断参数 SslMode 是否已赋值
                     * @return SslMode 是否已赋值
                     * 
                     */
                    bool SslModeHasBeenSet() const;

                    /**
                     * 获取七层监听器关联的服务端证书ID。
                     * @return CertId 七层监听器关联的服务端证书ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置七层监听器关联的服务端证书ID。
                     * @param _certId 七层监听器关联的服务端证书ID。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取七层监听器关联的客户端证书ID。
                     * @return CertCaId 七层监听器关联的客户端证书ID。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置七层监听器关联的客户端证书ID。
                     * @param _certCaId 七层监听器关联的客户端证书ID。
                     * 
                     */
                    void SetCertCaId(const std::string& _certCaId);

                    /**
                     * 判断参数 CertCaId 是否已赋值
                     * @return CertCaId 是否已赋值
                     * 
                     */
                    bool CertCaIdHasBeenSet() const;

                    /**
                     * 获取当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @return Status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @param _status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
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
                     * 获取创建时间戳。
                     * @return AddTimestamp 创建时间戳。
                     * 
                     */
                    std::string GetAddTimestamp() const;

                    /**
                     * 设置创建时间戳。
                     * @param _addTimestamp 创建时间戳。
                     * 
                     */
                    void SetAddTimestamp(const std::string& _addTimestamp);

                    /**
                     * 判断参数 AddTimestamp 是否已赋值
                     * @return AddTimestamp 是否已赋值
                     * 
                     */
                    bool AddTimestampHasBeenSet() const;

                    /**
                     * 获取返回的转发规则列表。
                     * @return RuleSet 返回的转发规则列表。
                     * 
                     */
                    std::vector<L7ListenerInfoRule> GetRuleSet() const;

                    /**
                     * 设置返回的转发规则列表。
                     * @param _ruleSet 返回的转发规则列表。
                     * 
                     */
                    void SetRuleSet(const std::vector<L7ListenerInfoRule>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * 
                     */
                    bool RuleSetHasBeenSet() const;

                    /**
                     * 获取https转发类型。0：https。1：spdy。2：http2。3：spdy+http2。
                     * @return ForwardProtocol https转发类型。0：https。1：spdy。2：http2。3：spdy+http2。
                     * 
                     */
                    int64_t GetForwardProtocol() const;

                    /**
                     * 设置https转发类型。0：https。1：spdy。2：http2。3：spdy+http2。
                     * @param _forwardProtocol https转发类型。0：https。1：spdy。2：http2。3：spdy+http2。
                     * 
                     */
                    void SetForwardProtocol(const int64_t& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                private:

                    /**
                     * 七层监听器实例ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 七层监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 七层监听器协议类型，可选值：http,https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 七层监听器的监听端口。
                     */
                    int64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 计费模式为按固定带宽方式时监听器的限速值，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 监听器的类别：L4Listener（四层监听器），L7Listener（七层监听器）。
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * 七层监听器的认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。
                     */
                    int64_t m_sslMode;
                    bool m_sslModeHasBeenSet;

                    /**
                     * 七层监听器关联的服务端证书ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 七层监听器关联的客户端证书ID。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间戳。
                     */
                    std::string m_addTimestamp;
                    bool m_addTimestampHasBeenSet;

                    /**
                     * 返回的转发规则列表。
                     */
                    std::vector<L7ListenerInfoRule> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                    /**
                     * https转发类型。0：https。1：spdy。2：http2。3：spdy+http2。
                     */
                    int64_t m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFO_H_
