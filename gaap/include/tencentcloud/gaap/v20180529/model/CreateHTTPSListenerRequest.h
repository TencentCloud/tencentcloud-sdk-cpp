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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateHTTPSListener请求参数结构体
                */
                class CreateHTTPSListenerRequest : public AbstractModel
                {
                public:
                    CreateHTTPSListenerRequest();
                    ~CreateHTTPSListenerRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复
                     * @return Port 监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复
                     * @param _port 监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复
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
                     * 获取服务器证书ID
                     * @return CertificateId 服务器证书ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置服务器证书ID
                     * @param _certificateId 服务器证书ID
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
                     * 获取加速通道转发到源站的协议类型：HTTP | HTTPS
                     * @return ForwardProtocol 加速通道转发到源站的协议类型：HTTP | HTTPS
                     * 
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置加速通道转发到源站的协议类型：HTTP | HTTPS
                     * @param _forwardProtocol 加速通道转发到源站的协议类型：HTTP | HTTPS
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
                     * 获取通道ID，与GroupId之间只能设置一个。表示创建通道的监听器。
                     * @return ProxyId 通道ID，与GroupId之间只能设置一个。表示创建通道的监听器。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID，与GroupId之间只能设置一个。表示创建通道的监听器。
                     * @param _proxyId 通道ID，与GroupId之间只能设置一个。表示创建通道的监听器。
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
                     * 获取认证类型，其中：
0，单向认证；
1，双向认证。
默认使用单向认证。
                     * @return AuthType 认证类型，其中：
0，单向认证；
1，双向认证。
默认使用单向认证。
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置认证类型，其中：
0，单向认证；
1，双向认证。
默认使用单向认证。
                     * @param _authType 认证类型，其中：
0，单向认证；
1，双向认证。
默认使用单向认证。
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取客户端CA单证书ID，仅当双向认证时设置该参数或PolyClientCertificateIds参数
                     * @return ClientCertificateId 客户端CA单证书ID，仅当双向认证时设置该参数或PolyClientCertificateIds参数
                     * 
                     */
                    std::string GetClientCertificateId() const;

                    /**
                     * 设置客户端CA单证书ID，仅当双向认证时设置该参数或PolyClientCertificateIds参数
                     * @param _clientCertificateId 客户端CA单证书ID，仅当双向认证时设置该参数或PolyClientCertificateIds参数
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
                     * 获取新的客户端多CA证书ID，仅当双向认证时设置该参数或设置ClientCertificateId参数
                     * @return PolyClientCertificateIds 新的客户端多CA证书ID，仅当双向认证时设置该参数或设置ClientCertificateId参数
                     * 
                     */
                    std::vector<std::string> GetPolyClientCertificateIds() const;

                    /**
                     * 设置新的客户端多CA证书ID，仅当双向认证时设置该参数或设置ClientCertificateId参数
                     * @param _polyClientCertificateIds 新的客户端多CA证书ID，仅当双向认证时设置该参数或设置ClientCertificateId参数
                     * 
                     */
                    void SetPolyClientCertificateIds(const std::vector<std::string>& _polyClientCertificateIds);

                    /**
                     * 判断参数 PolyClientCertificateIds 是否已赋值
                     * @return PolyClientCertificateIds 是否已赋值
                     * 
                     */
                    bool PolyClientCertificateIdsHasBeenSet() const;

                    /**
                     * 获取通道组ID，与ProxyId之间只能设置一个。表示创建通道组的监听器。
                     * @return GroupId 通道组ID，与ProxyId之间只能设置一个。表示创建通道组的监听器。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置通道组ID，与ProxyId之间只能设置一个。表示创建通道组的监听器。
                     * @param _groupId 通道组ID，与ProxyId之间只能设置一个。表示创建通道组的监听器。
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
                     * 获取支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * @return Http3Supported 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * @param _http3Supported 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * 监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 监听器端口，基于同种传输层协议（TCP 或 UDP）的监听器，端口不可重复
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 服务器证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 加速通道转发到源站的协议类型：HTTP | HTTPS
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                    /**
                     * 通道ID，与GroupId之间只能设置一个。表示创建通道的监听器。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 认证类型，其中：
0，单向认证；
1，双向认证。
默认使用单向认证。
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 客户端CA单证书ID，仅当双向认证时设置该参数或PolyClientCertificateIds参数
                     */
                    std::string m_clientCertificateId;
                    bool m_clientCertificateIdHasBeenSet;

                    /**
                     * 新的客户端多CA证书ID，仅当双向认证时设置该参数或设置ClientCertificateId参数
                     */
                    std::vector<std::string> m_polyClientCertificateIds;
                    bool m_polyClientCertificateIdsHasBeenSet;

                    /**
                     * 通道组ID，与ProxyId之间只能设置一个。表示创建通道组的监听器。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPSLISTENERREQUEST_H_
