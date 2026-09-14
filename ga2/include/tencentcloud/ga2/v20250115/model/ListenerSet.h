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
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
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
                     * 获取<p>监听器ID。</p>
                     * @return ListenerId <p>监听器ID。</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器ID。</p>
                     * @param _listenerId <p>监听器ID。</p>
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
                     * 获取<p>监听器名称。</p>
                     * @return Name <p>监听器名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>监听器名称。</p>
                     * @param _name <p>监听器名称。</p>
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
                     * 获取<p>监听器描述。</p>
                     * @return Description <p>监听器描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>监听器描述。</p>
                     * @param _description <p>监听器描述。</p>
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
                     * 获取<p>协议。</p>
                     * @return Protocol <p>协议。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>协议。</p>
                     * @param _protocol <p>协议。</p>
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
                     * 获取<p>端口范围。</p>
                     * @return PortRanges <p>端口范围。</p>
                     * 
                     */
                    PortRanges GetPortRanges() const;

                    /**
                     * 设置<p>端口范围。</p>
                     * @param _portRanges <p>端口范围。</p>
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
                     * 获取<p>是否打开七层获取源IP方式。</p>
                     * @return XForwardedForRealIp <p>是否打开七层获取源IP方式。</p>
                     * 
                     */
                    bool GetXForwardedForRealIp() const;

                    /**
                     * 设置<p>是否打开七层获取源IP方式。</p>
                     * @param _xForwardedForRealIp <p>是否打开七层获取源IP方式。</p>
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
                     * 获取<p>开启会话保持。</p>
                     * @return ClientAffinity <p>开启会话保持。</p>
                     * 
                     */
                    std::string GetClientAffinity() const;

                    /**
                     * 设置<p>开启会话保持。</p>
                     * @param _clientAffinity <p>开启会话保持。</p>
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
                     * 获取<p>会话保持时间。</p>
                     * @return ClientAffinityTime <p>会话保持时间。</p>
                     * 
                     */
                    uint64_t GetClientAffinityTime() const;

                    /**
                     * 设置<p>会话保持时间。</p>
                     * @param _clientAffinityTime <p>会话保持时间。</p>
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
                     * 获取<p>SSL解析方式。</p>
                     * @return CertificationType <p>SSL解析方式。</p>
                     * 
                     */
                    std::string GetCertificationType() const;

                    /**
                     * 设置<p>SSL解析方式。</p>
                     * @param _certificationType <p>SSL解析方式。</p>
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
                     * 获取<p>服务器证书。</p>
                     * @return ServerCertificates <p>服务器证书。</p>
                     * 
                     */
                    std::vector<std::string> GetServerCertificates() const;

                    /**
                     * 设置<p>服务器证书。</p>
                     * @param _serverCertificates <p>服务器证书。</p>
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
                     * 获取<p>客户端证书。</p>
                     * @return ClientCaCertificates <p>客户端证书。</p>
                     * 
                     */
                    std::vector<std::string> GetClientCaCertificates() const;

                    /**
                     * 设置<p>客户端证书。</p>
                     * @param _clientCaCertificates <p>客户端证书。</p>
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
                     * 获取<p>TLS密码套件包。</p>
                     * @return CipherPolicyId <p>TLS密码套件包。</p>
                     * 
                     */
                    std::string GetCipherPolicyId() const;

                    /**
                     * 设置<p>TLS密码套件包。</p>
                     * @param _cipherPolicyId <p>TLS密码套件包。</p>
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
                     * 获取<p>HTTP版本。</p>
                     * @return HttpVersion <p>HTTP版本。</p>
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置<p>HTTP版本。</p>
                     * @param _httpVersion <p>HTTP版本。</p>
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
                     * 获取<p>请求超时时间。</p>
                     * @return RequestTimeout <p>请求超时时间。</p>
                     * 
                     */
                    uint64_t GetRequestTimeout() const;

                    /**
                     * 设置<p>请求超时时间。</p>
                     * @param _requestTimeout <p>请求超时时间。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
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
                     * 获取<p>监听路由类型。</p>
                     * @return ListenerType <p>监听路由类型。</p>
                     * 
                     */
                    std::string GetListenerType() const;

                    /**
                     * 设置<p>监听路由类型。</p>
                     * @param _listenerType <p>监听路由类型。</p>
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
                     * 获取<p>监听器状态。</p><p>枚举值：</p><ul><li>ACTIVE： 可用。</li><li>CREATING： 创建中。</li><li>DELETING： 删除中。</li><li>CONFIGURING： 修改配置中。</li></ul>
                     * @return Status <p>监听器状态。</p><p>枚举值：</p><ul><li>ACTIVE： 可用。</li><li>CREATING： 创建中。</li><li>DELETING： 删除中。</li><li>CONFIGURING： 修改配置中。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>监听器状态。</p><p>枚举值：</p><ul><li>ACTIVE： 可用。</li><li>CREATING： 创建中。</li><li>DELETING： 删除中。</li><li>CONFIGURING： 修改配置中。</li></ul>
                     * @param _status <p>监听器状态。</p><p>枚举值：</p><ul><li>ACTIVE： 可用。</li><li>CREATING： 创建中。</li><li>DELETING： 删除中。</li><li>CONFIGURING： 修改配置中。</li></ul>
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
                     * 获取<p>所属监听器终端节点组个数。</p>
                     * @return EndpointGroupCounts <p>所属监听器终端节点组个数。</p>
                     * 
                     */
                    uint64_t GetEndpointGroupCounts() const;

                    /**
                     * 设置<p>所属监听器终端节点组个数。</p>
                     * @param _endpointGroupCounts <p>所属监听器终端节点组个数。</p>
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
                     * 获取<p>四层获取源IP方式。</p>
                     * @return GetRealIpType <p>四层获取源IP方式。</p>
                     * 
                     */
                    std::string GetGetRealIpType() const;

                    /**
                     * 设置<p>四层获取源IP方式。</p>
                     * @param _getRealIpType <p>四层获取源IP方式。</p>
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
                     * 获取<p>连接超时时间。</p>
                     * @return IdleTimeout <p>连接超时时间。</p>
                     * 
                     */
                    uint64_t GetIdleTimeout() const;

                    /**
                     * 设置<p>连接超时时间。</p>
                     * @param _idleTimeout <p>连接超时时间。</p>
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
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器ID。</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>监听器名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>监听器描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>协议。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>端口范围。</p>
                     */
                    PortRanges m_portRanges;
                    bool m_portRangesHasBeenSet;

                    /**
                     * <p>是否打开七层获取源IP方式。</p>
                     */
                    bool m_xForwardedForRealIp;
                    bool m_xForwardedForRealIpHasBeenSet;

                    /**
                     * <p>开启会话保持。</p>
                     */
                    std::string m_clientAffinity;
                    bool m_clientAffinityHasBeenSet;

                    /**
                     * <p>会话保持时间。</p>
                     */
                    uint64_t m_clientAffinityTime;
                    bool m_clientAffinityTimeHasBeenSet;

                    /**
                     * <p>SSL解析方式。</p>
                     */
                    std::string m_certificationType;
                    bool m_certificationTypeHasBeenSet;

                    /**
                     * <p>服务器证书。</p>
                     */
                    std::vector<std::string> m_serverCertificates;
                    bool m_serverCertificatesHasBeenSet;

                    /**
                     * <p>客户端证书。</p>
                     */
                    std::vector<std::string> m_clientCaCertificates;
                    bool m_clientCaCertificatesHasBeenSet;

                    /**
                     * <p>TLS密码套件包。</p>
                     */
                    std::string m_cipherPolicyId;
                    bool m_cipherPolicyIdHasBeenSet;

                    /**
                     * <p>HTTP版本。</p>
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * <p>请求超时时间。</p>
                     */
                    uint64_t m_requestTimeout;
                    bool m_requestTimeoutHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>监听路由类型。</p>
                     */
                    std::string m_listenerType;
                    bool m_listenerTypeHasBeenSet;

                    /**
                     * <p>监听器状态。</p><p>枚举值：</p><ul><li>ACTIVE： 可用。</li><li>CREATING： 创建中。</li><li>DELETING： 删除中。</li><li>CONFIGURING： 修改配置中。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>所属监听器终端节点组个数。</p>
                     */
                    uint64_t m_endpointGroupCounts;
                    bool m_endpointGroupCountsHasBeenSet;

                    /**
                     * <p>四层获取源IP方式。</p>
                     */
                    std::string m_getRealIpType;
                    bool m_getRealIpTypeHasBeenSet;

                    /**
                     * <p>连接超时时间。</p>
                     */
                    uint64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_LISTENERSET_H_
