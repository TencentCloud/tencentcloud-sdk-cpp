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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 用于创建四层监听器的监听器信息。目前一个负载均衡下面最多允许创建50个七层监听器。
                */
                class CreateL7Listener : public AbstractModel
                {
                public:
                    CreateL7Listener();
                    ~CreateL7Listener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取七层监听器端口，可选值1~65535。
                     * @return LoadBalancerPort 七层监听器端口，可选值1~65535。
                     * 
                     */
                    int64_t GetLoadBalancerPort() const;

                    /**
                     * 设置七层监听器端口，可选值1~65535。
                     * @param _loadBalancerPort 七层监听器端口，可选值1~65535。
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
                     * 获取认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。当创建的是https类型的监听器时，此值必选。
                     * @return SslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。当创建的是https类型的监听器时，此值必选。
                     * 
                     */
                    int64_t GetSslMode() const;

                    /**
                     * 设置认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。当创建的是https类型的监听器时，此值必选。
                     * @param _sslMode 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。当创建的是https类型的监听器时，此值必选。
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
                     * 获取服务端证书ID。当创建的是https类型的监听器时，此值必选。
                     * @return CertId 服务端证书ID。当创建的是https类型的监听器时，此值必选。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务端证书ID。当创建的是https类型的监听器时，此值必选。
                     * @param _certId 服务端证书ID。当创建的是https类型的监听器时，此值必选。
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
                     * 获取服务端证书名称。
                     * @return CertName 服务端证书名称。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置服务端证书名称。
                     * @param _certName 服务端证书名称。
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取服务端证书内容。
                     * @return CertContent 服务端证书内容。
                     * 
                     */
                    std::string GetCertContent() const;

                    /**
                     * 设置服务端证书内容。
                     * @param _certContent 服务端证书内容。
                     * 
                     */
                    void SetCertContent(const std::string& _certContent);

                    /**
                     * 判断参数 CertContent 是否已赋值
                     * @return CertContent 是否已赋值
                     * 
                     */
                    bool CertContentHasBeenSet() const;

                    /**
                     * 获取服务端证书密钥。
                     * @return CertKey 服务端证书密钥。
                     * 
                     */
                    std::string GetCertKey() const;

                    /**
                     * 设置服务端证书密钥。
                     * @param _certKey 服务端证书密钥。
                     * 
                     */
                    void SetCertKey(const std::string& _certKey);

                    /**
                     * 判断参数 CertKey 是否已赋值
                     * @return CertKey 是否已赋值
                     * 
                     */
                    bool CertKeyHasBeenSet() const;

                    /**
                     * 获取客户端证书ID。
                     * @return CertCaId 客户端证书ID。
                     * 
                     */
                    std::string GetCertCaId() const;

                    /**
                     * 设置客户端证书ID。
                     * @param _certCaId 客户端证书ID。
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
                     * 获取客户端证书名称。
                     * @return CertCaName 客户端证书名称。
                     * 
                     */
                    std::string GetCertCaName() const;

                    /**
                     * 设置客户端证书名称。
                     * @param _certCaName 客户端证书名称。
                     * 
                     */
                    void SetCertCaName(const std::string& _certCaName);

                    /**
                     * 判断参数 CertCaName 是否已赋值
                     * @return CertCaName 是否已赋值
                     * 
                     */
                    bool CertCaNameHasBeenSet() const;

                    /**
                     * 获取客户端证书内容。
                     * @return CertCaContent 客户端证书内容。
                     * 
                     */
                    std::string GetCertCaContent() const;

                    /**
                     * 设置客户端证书内容。
                     * @param _certCaContent 客户端证书内容。
                     * 
                     */
                    void SetCertCaContent(const std::string& _certCaContent);

                    /**
                     * 判断参数 CertCaContent 是否已赋值
                     * @return CertCaContent 是否已赋值
                     * 
                     */
                    bool CertCaContentHasBeenSet() const;

                    /**
                     * 获取用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * @return Bandwidth 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     * @param _bandwidth 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
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
                     * 获取转发协议。当Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * @return ForwardProtocol 转发协议。当Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * 
                     */
                    int64_t GetForwardProtocol() const;

                    /**
                     * 设置转发协议。当Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     * @param _forwardProtocol 转发协议。当Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
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
                     * 七层监听器端口，可选值1~65535。
                     */
                    int64_t m_loadBalancerPort;
                    bool m_loadBalancerPortHasBeenSet;

                    /**
                     * 七层监听器协议类型，可选值：http,https。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 七层监听器名称。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 认证方式：0（不认证，用于http），1（单向认证，用于https），2（双向认证，用于https）。当创建的是https类型的监听器时，此值必选。
                     */
                    int64_t m_sslMode;
                    bool m_sslModeHasBeenSet;

                    /**
                     * 服务端证书ID。当创建的是https类型的监听器时，此值必选。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 服务端证书名称。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 服务端证书内容。
                     */
                    std::string m_certContent;
                    bool m_certContentHasBeenSet;

                    /**
                     * 服务端证书密钥。
                     */
                    std::string m_certKey;
                    bool m_certKeyHasBeenSet;

                    /**
                     * 客户端证书ID。
                     */
                    std::string m_certCaId;
                    bool m_certCaIdHasBeenSet;

                    /**
                     * 客户端证书名称。
                     */
                    std::string m_certCaName;
                    bool m_certCaNameHasBeenSet;

                    /**
                     * 客户端证书内容。
                     */
                    std::string m_certCaContent;
                    bool m_certCaContentHasBeenSet;

                    /**
                     * 用于计费模式为固定带宽计费，指定监听器最大带宽值，可选值：0-1000，单位：Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 转发协议。当Protocol为https时并且SslMode为1或2时，有意义。可选的值为0：https，1：spdy，2：http2，3：spdy+http2。
                     */
                    int64_t m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATEL7LISTENER_H_
