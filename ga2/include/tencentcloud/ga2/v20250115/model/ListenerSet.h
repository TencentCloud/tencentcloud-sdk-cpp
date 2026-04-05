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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/PortRanges.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 监听器信息
                */
                class ListenerSet : public AbstractModel
                {
                public:
                    ListenerSet();
                    ~ListenerSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。
                     * @return ListenerId 监听器ID。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。
                     * @param _listenerId 监听器ID。
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
                     * @return Name 监听器名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置监听器名称。
                     * @param _name 监听器名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取监听器描述。
                     * @return Description 监听器描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置监听器描述。
                     * @param _description 监听器描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取协议。
                     * @return Protocol 协议。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议。
                     * @param _protocol 协议。
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
                     * 获取端口范围。
                     * @return PortRanges 端口范围。
                     * 
                     */
                    PortRanges GetPortRanges() const;

                    /**
                     * 设置端口范围。
                     * @param _portRanges 端口范围。
                     * 
                     */
                    void SetPortRanges(const PortRanges& _portRanges);

                    /**
                     * 判断参数 PortRanges 是否已赋值
                     * @return PortRanges 是否已赋值
                     * 
                     */
                    bool PortRangesHasBeenSet() const;

                    /**
                     * 获取是否打开七层获取源IP方式。
                     * @return XForwardedForRealIp 是否打开七层获取源IP方式。
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置是否打开七层获取源IP方式。
                     * @param _xForwardedForRealIp 是否打开七层获取源IP方式。
                     * 
                     */
                    void SetXForwardedForRealIp(const bool& _xForwardedForRealIp);

                    /**
                     * 判断参数 XForwardedForRealIp 是否已赋值
                     * @return XForwardedForRealIp 是否已赋值
                     * 
                     */
                    bool XForwardedForRealIpHasBeenSet() const;

                    /**
                     * 获取开启会话保持。
                     * @return ClientAffinity 开启会话保持。
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置开启会话保持。
                     * @param _clientAffinity 开启会话保持。
                     * 
                     */
                    void SetClientAffinity(const std::string& _clientAffinity);

                    /**
                     * 判断参数 ClientAffinity 是否已赋值
                     * @return ClientAffinity 是否已赋值
                     * 
                     */
                    bool ClientAffinityHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
                     * @return ClientAffinityTime 会话保持时间。
                     * 
                     */
                    uint64_t GetClientAffinityTime() const;

                    /**
                     * 设置会话保持时间。
                     * @param _clientAffinityTime 会话保持时间。
                     * 
                     */
                    void SetClientAffinityTime(const uint64_t& _clientAffinityTime);

                    /**
                     * 判断参数 ClientAffinityTime 是否已赋值
                     * @return ClientAffinityTime 是否已赋值
                     * 
                     */
                    bool ClientAffinityTimeHasBeenSet() const;

                    /**
                     * 获取SSL解析方式。
                     * @return CertificationType SSL解析方式。
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置SSL解析方式。
                     * @param _certificationType SSL解析方式。
                     * 
                     */
                    void SetCertificationType(const std::string& _certificationType);

                    /**
                     * 判断参数 CertificationType 是否已赋值
                     * @return CertificationType 是否已赋值
                     * 
                     */
                    bool CertificationTypeHasBeenSet() const;

                    /**
                     * 获取服务器证书。
                     * @return ServerCertificates 服务器证书。
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置服务器证书。
                     * @param _serverCertificates 服务器证书。
                     * 
                     */
                    void SetServerCertificates(const std::vector<std::string>& _serverCertificates);

                    /**
                     * 判断参数 ServerCertificates 是否已赋值
                     * @return ServerCertificates 是否已赋值
                     * 
                     */
                    bool ServerCertificatesHasBeenSet() const;

                    /**
                     * 获取客户端证书。
                     * @return ClientCaCertificates 客户端证书。
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置客户端证书。
                     * @param _clientCaCertificates 客户端证书。
                     * 
                     */
                    void SetClientCaCertificates(const std::vector<std::string>& _clientCaCertificates);

                    /**
                     * 判断参数 ClientCaCertificates 是否已赋值
                     * @return ClientCaCertificates 是否已赋值
                     * 
                     */
                    bool ClientCaCertificatesHasBeenSet() const;

                    /**
                     * 获取TLS密码套件包。
                     * @return CipherPolicyId TLS密码套件包。
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置TLS密码套件包。
                     * @param _cipherPolicyId TLS密码套件包。
                     * 
                     */
                    void SetCipherPolicyId(const std::string& _cipherPolicyId);

                    /**
                     * 判断参数 CipherPolicyId 是否已赋值
                     * @return CipherPolicyId 是否已赋值
                     * 
                     */
                    bool CipherPolicyIdHasBeenSet() const;

                    /**
                     * 获取HTTP版本。
                     * @return HttpVersion HTTP版本。
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置HTTP版本。
                     * @param _httpVersion HTTP版本。
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取请求超时时间。
                     * @return RequestTimeout 请求超时时间。
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置请求超时时间。
                     * @param _requestTimeout 请求超时时间。
                     * 
                     */
                    void SetRequestTimeout(const uint64_t& _requestTimeout);

                    /**
                     * 判断参数 RequestTimeout 是否已赋值
                     * @return RequestTimeout 是否已赋值
                     * 
                     */
                    bool RequestTimeoutHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取监听路由类型。
                     * @return ListenerType 监听路由类型。
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置监听路由类型。
                     * @param _listenerType 监听路由类型。
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
                     * 获取监听器状态。
                     * @return Status 监听器状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置监听器状态。
                     * @param _status 监听器状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取所属监听器终端节点组个数。
                     * @return EndpointGroupCounts 所属监听器终端节点组个数。
                     * 
                     */
                    uint64_t GetEndpointGroupCounts() const;

                    /**
                     * 设置所属监听器终端节点组个数。
                     * @param _endpointGroupCounts 所属监听器终端节点组个数。
                     * 
                     */
                    void SetEndpointGroupCounts(const uint64_t& _endpointGroupCounts);

                    /**
                     * 判断参数 EndpointGroupCounts 是否已赋值
                     * @return EndpointGroupCounts 是否已赋值
                     * 
                     */
                    bool EndpointGroupCountsHasBeenSet() const;

                    /**
                     * 获取四层获取源IP方式。
                     * @return GetRealIpType 四层获取源IP方式。
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置四层获取源IP方式。
                     * @param _getRealIpType 四层获取源IP方式。
                     * 
                     */
                    void SetGetRealIpType(const std::string& _getRealIpType);

                    /**
                     * 判断参数 GetRealIpType 是否已赋值
                     * @return GetRealIpType 是否已赋值
                     * 
                     */
                    bool GetRealIpTypeHasBeenSet() const;

                    /**
                     * 获取连接超时时间。
                     * @return IdleTimeout 连接超时时间。
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置连接超时时间。
                     * @param _idleTimeout 连接超时时间。
                     * 
                     */
                    void SetIdleTimeout(const uint64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 监听器ID。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监听器描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 端口范围。
                     */
                    PortRanges m_portRanges;
                    bool m_portRangesHasBeenSet;

                    /**
                     * 是否打开七层获取源IP方式。
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * 开启会话保持。
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * 会话保持时间。
                     */
                    uint64_t m_clientAffinityTime;
                    bool m_clientAffinityTimeHasBeenSet;

                    /**
                     * SSL解析方式。
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * 服务器证书。
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * 客户端证书。
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * TLS密码套件包。
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * HTTP版本。
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * 请求超时时间。
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 监听路由类型。
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * 监听器状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所属监听器终端节点组个数。
                     */
                    uint64_t m_endpointGroupCounts;
                    bool m_endpointGroupCountsHasBeenSet;

                    /**
                     * 四层获取源IP方式。
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                    /**
                     * 连接超时时间。
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_
