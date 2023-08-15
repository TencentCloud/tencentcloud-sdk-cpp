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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * saas域名详情
                */
                class DomainsPartInfo : public AbstractModel
                {
                public:
                    DomainsPartInfo();
                    ~DomainsPartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启httpRewrite
                     * @return HttpsRewrite 是否开启httpRewrite
                     * 
                     */
                    uint64_t GetHttpsRewrite() const;

                    /**
                     * 设置是否开启httpRewrite
                     * @param _httpsRewrite 是否开启httpRewrite
                     * 
                     */
                    void SetHttpsRewrite(const uint64_t& _httpsRewrite);

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     * 
                     */
                    bool HttpsRewriteHasBeenSet() const;

                    /**
                     * 获取https回源端口
                     * @return HttpsUpstreamPort https回源端口
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置https回源端口
                     * @param _httpsUpstreamPort https回源端口
                     * 
                     */
                    void SetHttpsUpstreamPort(const std::string& _httpsUpstreamPort);

                    /**
                     * 判断参数 HttpsUpstreamPort 是否已赋值
                     * @return HttpsUpstreamPort 是否已赋值
                     * 
                     */
                    bool HttpsUpstreamPortHasBeenSet() const;

                    /**
                     * 获取是否是cdn
                     * @return IsCdn 是否是cdn
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置是否是cdn
                     * @param _isCdn 是否是cdn
                     * 
                     */
                    void SetIsCdn(const uint64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取是否开启gray
                     * @return IsGray 是否开启gray
                     * 
                     */
                    uint64_t GetIsGray() const;

                    /**
                     * 设置是否开启gray
                     * @param _isGray 是否开启gray
                     * 
                     */
                    void SetIsGray(const uint64_t& _isGray);

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * 
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取是否是http2
                     * @return IsHttp2 是否是http2
                     * 
                     */
                    uint64_t GetIsHttp2() const;

                    /**
                     * 设置是否是http2
                     * @param _isHttp2 是否是http2
                     * 
                     */
                    void SetIsHttp2(const uint64_t& _isHttp2);

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     * 
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取是否开启websocket
                     * @return IsWebsocket 是否开启websocket
                     * 
                     */
                    uint64_t GetIsWebsocket() const;

                    /**
                     * 设置是否开启websocket
                     * @param _isWebsocket 是否开启websocket
                     * 
                     */
                    void SetIsWebsocket(const uint64_t& _isWebsocket);

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     * 
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取负载均衡
                     * @return LoadBalance 负载均衡
                     * 
                     */
                    uint64_t GetLoadBalance() const;

                    /**
                     * 设置负载均衡
                     * @param _loadBalance 负载均衡
                     * 
                     */
                    void SetLoadBalance(const uint64_t& _loadBalance);

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取防御模式
                     * @return Mode 防御模式
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置防御模式
                     * @param _mode 防御模式
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取私钥
                     * @return PrivateKey 私钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置私钥
                     * @param _privateKey 私钥
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取ssl id
                     * @return SSLId ssl id
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置ssl id
                     * @param _sSLId ssl id
                     * 
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     * 
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取回源域名
                     * @return UpstreamDomain 回源域名
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置回源域名
                     * @param _upstreamDomain 回源域名
                     * 
                     */
                    void SetUpstreamDomain(const std::string& _upstreamDomain);

                    /**
                     * 判断参数 UpstreamDomain 是否已赋值
                     * @return UpstreamDomain 是否已赋值
                     * 
                     */
                    bool UpstreamDomainHasBeenSet() const;

                    /**
                     * 获取回源类型
                     * @return UpstreamType 回源类型
                     * 
                     */
                    uint64_t GetUpstreamType() const;

                    /**
                     * 设置回源类型
                     * @param _upstreamType 回源类型
                     * 
                     */
                    void SetUpstreamType(const uint64_t& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取回源ip
                     * @return SrcList 回源ip
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置回源ip
                     * @param _srcList 回源ip
                     * 
                     */
                    void SetSrcList(const std::vector<std::string>& _srcList);

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取服务端口配置
                     * @return Ports 服务端口配置
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置服务端口配置
                     * @param _ports 服务端口配置
                     * 
                     */
                    void SetPorts(const std::vector<PortInfo>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取证书类型
                     * @return CertType 证书类型
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书类型
                     * @param _certType 证书类型
                     * 
                     */
                    void SetCertType(const uint64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取回源方式
                     * @return UpstreamScheme 回源方式
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置回源方式
                     * @param _upstreamScheme 回源方式
                     * 
                     */
                    void SetUpstreamScheme(const std::string& _upstreamScheme);

                    /**
                     * 判断参数 UpstreamScheme 是否已赋值
                     * @return UpstreamScheme 是否已赋值
                     * 
                     */
                    bool UpstreamSchemeHasBeenSet() const;

                    /**
                     * 获取日志包
                     * @return Cls 日志包
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置日志包
                     * @param _cls 日志包
                     * 
                     */
                    void SetCls(const uint64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     * 
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取一级cname
                     * @return Cname 一级cname
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置一级cname
                     * @param _cname 一级cname
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取是否长连接
                     * @return IsKeepAlive 是否长连接
                     * 
                     */
                    uint64_t GetIsKeepAlive() const;

                    /**
                     * 设置是否长连接
                     * @param _isKeepAlive 是否长连接
                     * 
                     */
                    void SetIsKeepAlive(const uint64_t& _isKeepAlive);

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     * 
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取是否开启主动健康检测，1表示开启，0表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveCheck 是否开启主动健康检测，1表示开启，0表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetActiveCheck() const;

                    /**
                     * 设置是否开启主动健康检测，1表示开启，0表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeCheck 是否开启主动健康检测，1表示开启，0表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveCheck(const uint64_t& _activeCheck);

                    /**
                     * 判断参数 ActiveCheck 是否已赋值
                     * @return ActiveCheck 是否已赋值
                     * 
                     */
                    bool ActiveCheckHasBeenSet() const;

                    /**
                     * 获取TLS版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TLSVersion TLS版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置TLS版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tLSVersion TLS版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTLSVersion(const int64_t& _tLSVersion);

                    /**
                     * 判断参数 TLSVersion 是否已赋值
                     * @return TLSVersion 是否已赋值
                     * 
                     */
                    bool TLSVersionHasBeenSet() const;

                    /**
                     * 获取加密套件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ciphers 加密套件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置加密套件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ciphers 加密套件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCiphers(const std::vector<int64_t>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     * 
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取模版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CipherTemplate 模版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置模版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cipherTemplate 模版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCipherTemplate(const int64_t& _cipherTemplate);

                    /**
                     * 判断参数 CipherTemplate 是否已赋值
                     * @return CipherTemplate 是否已赋值
                     * 
                     */
                    bool CipherTemplateHasBeenSet() const;

                    /**
                     * 获取300s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyReadTimeout 300s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxyReadTimeout() const;

                    /**
                     * 设置300s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxyReadTimeout 300s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxyReadTimeout(const int64_t& _proxyReadTimeout);

                    /**
                     * 判断参数 ProxyReadTimeout 是否已赋值
                     * @return ProxyReadTimeout 是否已赋值
                     * 
                     */
                    bool ProxyReadTimeoutHasBeenSet() const;

                    /**
                     * 获取300s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxySendTimeout 300s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置300s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proxySendTimeout 300s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProxySendTimeout(const int64_t& _proxySendTimeout);

                    /**
                     * 判断参数 ProxySendTimeout 是否已赋值
                     * @return ProxySendTimeout 是否已赋值
                     * 
                     */
                    bool ProxySendTimeoutHasBeenSet() const;

                    /**
                     * 获取0:关闭SNI；1:开启SNI，SNI=源请求host；2:开启SNI，SNI=修改为源站host；3：开启SNI，自定义host，SNI=SniHost；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SniType 0:关闭SNI；1:开启SNI，SNI=源请求host；2:开启SNI，SNI=修改为源站host；3：开启SNI，自定义host，SNI=SniHost；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置0:关闭SNI；1:开启SNI，SNI=源请求host；2:开启SNI，SNI=修改为源站host；3：开启SNI，自定义host，SNI=SniHost；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sniType 0:关闭SNI；1:开启SNI，SNI=源请求host；2:开启SNI，SNI=修改为源站host；3：开启SNI，自定义host，SNI=SniHost；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSniType(const int64_t& _sniType);

                    /**
                     * 判断参数 SniType 是否已赋值
                     * @return SniType 是否已赋值
                     * 
                     */
                    bool SniTypeHasBeenSet() const;

                    /**
                     * 获取SniType=3时，需要填此参数，表示自定义的host；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SniHost SniType=3时，需要填此参数，表示自定义的host；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSniHost() const;

                    /**
                     * 设置SniType=3时，需要填此参数，表示自定义的host；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sniHost SniType=3时，需要填此参数，表示自定义的host；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSniHost(const std::string& _sniHost);

                    /**
                     * 判断参数 SniHost 是否已赋值
                     * @return SniHost 是否已赋值
                     * 
                     */
                    bool SniHostHasBeenSet() const;

                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weights 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetWeights() const;

                    /**
                     * 设置无
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weights 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeights(const std::vector<std::string>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     * 
                     */
                    bool WeightsHasBeenSet() const;

                    /**
                     * 获取IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpHeaders IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipHeaders IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取0:关闭xff重置；1:开启xff重置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return XFFReset 0:关闭xff重置；1:开启xff重置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置0:关闭xff重置；1:开启xff重置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _xFFReset 0:关闭xff重置；1:开启xff重置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetXFFReset(const int64_t& _xFFReset);

                    /**
                     * 判断参数 XFFReset 是否已赋值
                     * @return XFFReset 是否已赋值
                     * 
                     */
                    bool XFFResetHasBeenSet() const;

                private:

                    /**
                     * 是否开启httpRewrite
                     */
                    uint64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * https回源端口
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * 是否是cdn
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 是否开启gray
                     */
                    uint64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * 是否是http2
                     */
                    uint64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * 是否开启websocket
                     */
                    uint64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * 负载均衡
                     */
                    uint64_t m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * 防御模式
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * ssl id
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * 回源域名
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * 回源类型
                     */
                    uint64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * 回源ip
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * 服务端口配置
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 证书类型
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 回源方式
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * 日志包
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * 一级cname
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 是否长连接
                     */
                    uint64_t m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * 是否开启主动健康检测，1表示开启，0表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * 加密套件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * 模版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * 300s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * 300s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * 0:关闭SNI；1:开启SNI，SNI=源请求host；2:开启SNI，SNI=修改为源站host；3：开启SNI，自定义host，SNI=SniHost；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * SniType=3时，需要填此参数，表示自定义的host；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * IsCdn=3时，表示自定义header
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * 0:关闭xff重置；1:开启xff重置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
