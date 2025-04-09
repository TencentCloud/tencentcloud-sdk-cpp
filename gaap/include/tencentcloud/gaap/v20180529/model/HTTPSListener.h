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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/CertificateAliasInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * HTTPS类型监听器信息
                */
                class HTTPSListener : public AbstractModel
                {
                public:
                    HTTPSListener();
                    ~HTTPSListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听器ID
                     * @return ListenerId 监听器ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param _listenerId 监听器ID
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
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param _listenerName 监听器名称
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
                     * 获取监听器端口
                     * @return Port 监听器端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置监听器端口
                     * @param _port 监听器端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     * @return Protocol 监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     * @param _protocol 监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
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
                     * 获取监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * @return ListenerStatus 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * 
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * @param _listenerStatus 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * 
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     * 
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取监听器服务器SSL证书ID
                     * @return CertificateId 监听器服务器SSL证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置监听器服务器SSL证书ID
                     * @param _certificateId 监听器服务器SSL证书ID
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取监听器后端转发源站协议
                     * @return ForwardProtocol 监听器后端转发源站协议
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置监听器后端转发源站协议
                     * @param _forwardProtocol 监听器后端转发源站协议
                     * 
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     * 
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取监听器创建时间，Unix时间戳
                     * @return CreateTime 监听器创建时间，Unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置监听器创建时间，Unix时间戳
                     * @param _createTime 监听器创建时间，Unix时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取服务器SSL证书的别名
                     * @return CertificateAlias 服务器SSL证书的别名
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置服务器SSL证书的别名
                     * @param _certificateAlias 服务器SSL证书的别名
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateId 监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCertificateId 监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     * 
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
                     * @return AuthType 监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
                     * @param _authType 监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateAlias 客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientCertificateAlias() const;

                    /**
                     * 设置客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCertificateAlias 客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientCertificateAlias(const std::string& _clientCertificateAlias);

                    /**
                     * 判断参数 ClientCertificateAlias 是否已赋值
                     * @return ClientCertificateAlias 是否已赋值
                     * 
                     */
                    bool ClientCertificateAliasHasBeenSet() const;

                    /**
                     * 获取多客户端CA证书别名信息
                     * @return PolyClientCertificateAliasInfo 多客户端CA证书别名信息
                     * 
                     */
                    std::vector<CertificateAliasInfo> GetPolyClientCertificateAliasInfo() const;

                    /**
                     * 设置多客户端CA证书别名信息
                     * @param _polyClientCertificateAliasInfo 多客户端CA证书别名信息
                     * 
                     */
                    void SetPolyClientCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo);

                    /**
                     * 判断参数 PolyClientCertificateAliasInfo 是否已赋值
                     * @return PolyClientCertificateAliasInfo 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateAliasInfoHasBeenSet() const;

                    /**
                     * 获取是否支持Http3，其中：
0，不支持Http3接入；
1，持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
                     * @return Http3Supported 是否支持Http3，其中：
0，不支持Http3接入；
1，持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置是否支持Http3，其中：
0，不支持Http3接入；
1，持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
                     * @param _http3Supported 是否支持Http3，其中：
0，不支持Http3接入；
1，持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取监听器的通道ID，如果监听器属于通道组，则为null
                     * @return ProxyId 监听器的通道ID，如果监听器属于通道组，则为null
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置监听器的通道ID，如果监听器属于通道组，则为null
                     * @param _proxyId 监听器的通道ID，如果监听器属于通道组，则为null
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取监听器的通道组ID，如果监听器属于通道，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 监听器的通道组ID，如果监听器属于通道，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置监听器的通道组ID，如果监听器属于通道，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 监听器的通道组ID，如果监听器属于通道，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取支持的TLS版本
                     * @return TLSSupportVersion 支持的TLS版本
                     * 
                     */
                    std::vector<std::string> GetTLSSupportVersion() const;

                    /**
                     * 设置支持的TLS版本
                     * @param _tLSSupportVersion 支持的TLS版本
                     * 
                     */
                    void SetTLSSupportVersion(const std::vector<std::string>& _tLSSupportVersion);

                    /**
                     * 判断参数 TLSSupportVersion 是否已赋值
                     * @return TLSSupportVersion 是否已赋值
                     * 
                     */
                    bool TLSSupportVersionHasBeenSet() const;

                    /**
                     * 获取支持的TLS密码套件
                     * @return TLSCiphers 支持的TLS密码套件
                     * 
                     */
                    std::string GetTLSCiphers() const;

                    /**
                     * 设置支持的TLS密码套件
                     * @param _tLSCiphers 支持的TLS密码套件
                     * 
                     */
                    void SetTLSCiphers(const std::string& _tLSCiphers);

                    /**
                     * 判断参数 TLSCiphers 是否已赋值
                     * @return TLSCiphers 是否已赋值
                     * 
                     */
                    bool TLSCiphersHasBeenSet() const;

                private:

                    /**
                     * 监听器ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     */
                    uint64_t m_listenerStatus;
                    bool m_listenerStatusHasBeenSet;

                    /**
                     * 监听器服务器SSL证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 监听器后端转发源站协议
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * 监听器创建时间，Unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 服务器SSL证书的别名
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * 监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientCertificateAlias;
                    bool m_clientCertificateAliasHasBeenSet;

                    /**
                     * 多客户端CA证书别名信息
                     */
                    std::vector<CertificateAliasInfo> m_polyClientCertificateAliasInfo;
                    bool m_polyClientCertificateAliasInfoHasBeenSet;

                    /**
                     * 是否支持Http3，其中：
0，不支持Http3接入；
1，持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * 监听器的通道ID，如果监听器属于通道组，则为null
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 监听器的通道组ID，如果监听器属于通道，则为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 支持的TLS版本
                     */
                    std::vector<std::string> m_tLSSupportVersion;
                    bool m_tLSSupportVersionHasBeenSet;

                    /**
                     * 支持的TLS密码套件
                     */
                    std::string m_tLSCiphers;
                    bool m_tLSCiphersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_
