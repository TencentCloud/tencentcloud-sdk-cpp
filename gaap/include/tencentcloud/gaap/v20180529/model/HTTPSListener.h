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
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID
                     * @param ListenerId 监听器ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取监听器名称
                     * @return ListenerName 监听器名称
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置监听器名称
                     * @param ListenerName 监听器名称
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取监听器端口
                     * @return Port 监听器端口
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置监听器端口
                     * @param Port 监听器端口
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     * @return Protocol 监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     * @param Protocol 监听器协议， HTTP表示HTTP，HTTPS表示HTTPS，此结构取值HTTPS
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
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
                     */
                    uint64_t GetListenerStatus() const;

                    /**
                     * 设置监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     * @param ListenerStatus 监听器状态，其中：
0表示运行中；
1表示创建中；
2表示销毁中；
3表示源站调整中；
4表示配置变更中。
                     */
                    void SetListenerStatus(const uint64_t& _listenerStatus);

                    /**
                     * 判断参数 ListenerStatus 是否已赋值
                     * @return ListenerStatus 是否已赋值
                     */
                    bool ListenerStatusHasBeenSet() const;

                    /**
                     * 获取监听器服务器SSL证书ID
                     * @return CertificateId 监听器服务器SSL证书ID
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置监听器服务器SSL证书ID
                     * @param CertificateId 监听器服务器SSL证书ID
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取监听器后端转发源站协议
                     * @return ForwardProtocol 监听器后端转发源站协议
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置监听器后端转发源站协议
                     * @param ForwardProtocol 监听器后端转发源站协议
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     */
                    bool ForwardProtocolHasBeenSet() const;

                    /**
                     * 获取监听器创建时间，Unix时间戳
                     * @return CreateTime 监听器创建时间，Unix时间戳
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置监听器创建时间，Unix时间戳
                     * @param CreateTime 监听器创建时间，Unix时间戳
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取服务器SSL证书的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateAlias 服务器SSL证书的别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置服务器SSL证书的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertificateAlias 服务器SSL证书的别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateId 监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientCertificateId 监听器客户端CA证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientCertificateId(const std::string& _clientCertificateId);

                    /**
                     * 判断参数 ClientCertificateId 是否已赋值
                     * @return ClientCertificateId 是否已赋值
                     */
                    bool ClientCertificateIdHasBeenSet() const;

                    /**
                     * 获取监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType 监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuthType 监听器认证方式。其中，
0表示单向认证；
1表示双向认证。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertificateAlias 客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientCertificateAlias() const;

                    /**
                     * 设置客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientCertificateAlias 客户端CA证书别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientCertificateAlias(const std::string& _clientCertificateAlias);

                    /**
                     * 判断参数 ClientCertificateAlias 是否已赋值
                     * @return ClientCertificateAlias 是否已赋值
                     */
                    bool ClientCertificateAliasHasBeenSet() const;

                    /**
                     * 获取多客户端CA证书别名信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolyClientCertificateAliasInfo 多客户端CA证书别名信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> GetPolyClientCertificateAliasInfo() const;

                    /**
                     * 设置多客户端CA证书别名信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolyClientCertificateAliasInfo 多客户端CA证书别名信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolyClientCertificateAliasInfo(const std::vector<CertificateAliasInfo>& _polyClientCertificateAliasInfo);

                    /**
                     * 判断参数 PolyClientCertificateAliasInfo 是否已赋值
                     * @return PolyClientCertificateAliasInfo 是否已赋值
                     */
                    bool PolyClientCertificateAliasInfoHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateAliasInfo> m_polyClientCertificateAliasInfo;
                    bool m_polyClientCertificateAliasInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_HTTPSLISTENER_H_
