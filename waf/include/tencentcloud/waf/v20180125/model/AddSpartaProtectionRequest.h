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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PortItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddSpartaProtection请求参数结构体
                */
                class AddSpartaProtectionRequest : public AbstractModel
                {
                public:
                    AddSpartaProtectionRequest();
                    ~AddSpartaProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要防御的域名
                     * @return Domain 需要防御的域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要防御的域名
                     * @param Domain 需要防御的域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取证书类型，0表示没有证书，CertType=1表示自有证书,2 为托管证书
                     * @return CertType 证书类型，0表示没有证书，CertType=1表示自有证书,2 为托管证书
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证书类型，0表示没有证书，CertType=1表示自有证书,2 为托管证书
                     * @param CertType 证书类型，0表示没有证书，CertType=1表示自有证书,2 为托管证书
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取表示是否开启了CDN代理，1：有部署CDN，0：未部署CDN
                     * @return IsCdn 表示是否开启了CDN代理，1：有部署CDN，0：未部署CDN
                     */
                    int64_t GetIsCdn() const;

                    /**
                     * 设置表示是否开启了CDN代理，1：有部署CDN，0：未部署CDN
                     * @param IsCdn 表示是否开启了CDN代理，1：有部署CDN，0：未部署CDN
                     */
                    void SetIsCdn(const int64_t& _isCdn);

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取回源类型，0表示通过IP回源,1 表示通过域名回源
                     * @return UpstreamType 回源类型，0表示通过IP回源,1 表示通过域名回源
                     */
                    int64_t GetUpstreamType() const;

                    /**
                     * 设置回源类型，0表示通过IP回源,1 表示通过域名回源
                     * @param UpstreamType 回源类型，0表示通过IP回源,1 表示通过域名回源
                     */
                    void SetUpstreamType(const int64_t& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取是否开启WebSocket支持，1表示开启，0不开启
                     * @return IsWebsocket 是否开启WebSocket支持，1表示开启，0不开启
                     */
                    int64_t GetIsWebsocket() const;

                    /**
                     * 设置是否开启WebSocket支持，1表示开启，0不开启
                     * @param IsWebsocket 是否开启WebSocket支持，1表示开启，0不开启
                     */
                    void SetIsWebsocket(const int64_t& _isWebsocket);

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取负载均衡策略，0表示轮徇，1表示IP hash
                     * @return LoadBalance 负载均衡策略，0表示轮徇，1表示IP hash
                     */
                    std::string GetLoadBalance() const;

                    /**
                     * 设置负载均衡策略，0表示轮徇，1表示IP hash
                     * @param LoadBalance 负载均衡策略，0表示轮徇，1表示IP hash
                     */
                    void SetLoadBalance(const std::string& _loadBalance);

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取CertType=1时，需要填次参数，表示证书内容
                     * @return Cert CertType=1时，需要填次参数，表示证书内容
                     */
                    std::string GetCert() const;

                    /**
                     * 设置CertType=1时，需要填次参数，表示证书内容
                     * @param Cert CertType=1时，需要填次参数，表示证书内容
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取CertType=1时，需要填次参数，表示证书的私钥
                     * @return PrivateKey CertType=1时，需要填次参数，表示证书的私钥
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置CertType=1时，需要填次参数，表示证书的私钥
                     * @param PrivateKey CertType=1时，需要填次参数，表示证书的私钥
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取CertType=2时，需要填次参数，表示证书的ID
                     * @return SSLId CertType=2时，需要填次参数，表示证书的ID
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置CertType=2时，需要填次参数，表示证书的ID
                     * @param SSLId CertType=2时，需要填次参数，表示证书的ID
                     */
                    void SetSSLId(const std::string& _sSLId);

                    /**
                     * 判断参数 SSLId 是否已赋值
                     * @return SSLId 是否已赋值
                     */
                    bool SSLIdHasBeenSet() const;

                    /**
                     * 获取Waf的资源ID
                     * @return ResourceId Waf的资源ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Waf的资源ID
                     * @param ResourceId Waf的资源ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取HTTPS回源协议，填http或者https
                     * @return UpstreamScheme HTTPS回源协议，填http或者https
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置HTTPS回源协议，填http或者https
                     * @param UpstreamScheme HTTPS回源协议，填http或者https
                     */
                    void SetUpstreamScheme(const std::string& _upstreamScheme);

                    /**
                     * 判断参数 UpstreamScheme 是否已赋值
                     * @return UpstreamScheme 是否已赋值
                     */
                    bool UpstreamSchemeHasBeenSet() const;

                    /**
                     * 获取HTTPS回源端口,仅UpstreamScheme为http时需要填当前字段
                     * @return HttpsUpstreamPort HTTPS回源端口,仅UpstreamScheme为http时需要填当前字段
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置HTTPS回源端口,仅UpstreamScheme为http时需要填当前字段
                     * @param HttpsUpstreamPort HTTPS回源端口,仅UpstreamScheme为http时需要填当前字段
                     */
                    void SetHttpsUpstreamPort(const std::string& _httpsUpstreamPort);

                    /**
                     * 判断参数 HttpsUpstreamPort 是否已赋值
                     * @return HttpsUpstreamPort 是否已赋值
                     */
                    bool HttpsUpstreamPortHasBeenSet() const;

                    /**
                     * 获取是否开启灰度，0表示不开启灰度
                     * @return IsGray 是否开启灰度，0表示不开启灰度
                     */
                    int64_t GetIsGray() const;

                    /**
                     * 设置是否开启灰度，0表示不开启灰度
                     * @param IsGray 是否开启灰度，0表示不开启灰度
                     */
                    void SetIsGray(const int64_t& _isGray);

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取灰度的地区
                     * @return GrayAreas 灰度的地区
                     */
                    std::vector<std::string> GetGrayAreas() const;

                    /**
                     * 设置灰度的地区
                     * @param GrayAreas 灰度的地区
                     */
                    void SetGrayAreas(const std::vector<std::string>& _grayAreas);

                    /**
                     * 判断参数 GrayAreas 是否已赋值
                     * @return GrayAreas 是否已赋值
                     */
                    bool GrayAreasHasBeenSet() const;

                    /**
                     * 获取UpstreamType=1时，填次字段表示回源域名
                     * @return UpstreamDomain UpstreamType=1时，填次字段表示回源域名
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置UpstreamType=1时，填次字段表示回源域名
                     * @param UpstreamDomain UpstreamType=1时，填次字段表示回源域名
                     */
                    void SetUpstreamDomain(const std::string& _upstreamDomain);

                    /**
                     * 判断参数 UpstreamDomain 是否已赋值
                     * @return UpstreamDomain 是否已赋值
                     */
                    bool UpstreamDomainHasBeenSet() const;

                    /**
                     * 获取UpstreamType=0时，填次字段表示回源IP
                     * @return SrcList UpstreamType=0时，填次字段表示回源IP
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置UpstreamType=0时，填次字段表示回源IP
                     * @param SrcList UpstreamType=0时，填次字段表示回源IP
                     */
                    void SetSrcList(const std::vector<std::string>& _srcList);

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取是否开启HTTP2,开启HTTP2需要HTTPS支持
                     * @return IsHttp2 是否开启HTTP2,开启HTTP2需要HTTPS支持
                     */
                    int64_t GetIsHttp2() const;

                    /**
                     * 设置是否开启HTTP2,开启HTTP2需要HTTPS支持
                     * @param IsHttp2 是否开启HTTP2,开启HTTP2需要HTTPS支持
                     */
                    void SetIsHttp2(const int64_t& _isHttp2);

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取表示是否强制跳转到HTTPS，1强制跳转Https，0不强制跳转
                     * @return HttpsRewrite 表示是否强制跳转到HTTPS，1强制跳转Https，0不强制跳转
                     */
                    int64_t GetHttpsRewrite() const;

                    /**
                     * 设置表示是否强制跳转到HTTPS，1强制跳转Https，0不强制跳转
                     * @param HttpsRewrite 表示是否强制跳转到HTTPS，1强制跳转Https，0不强制跳转
                     */
                    void SetHttpsRewrite(const int64_t& _httpsRewrite);

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     */
                    bool HttpsRewriteHasBeenSet() const;

                    /**
                     * 获取服务有多端口需要设置此字段
                     * @return Ports 服务有多端口需要设置此字段
                     */
                    std::vector<PortItem> GetPorts() const;

                    /**
                     * 设置服务有多端口需要设置此字段
                     * @param Ports 服务有多端口需要设置此字段
                     */
                    void SetPorts(const std::vector<PortItem>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取版本：sparta-waf、clb-waf、cdn-waf
                     * @return Edition 版本：sparta-waf、clb-waf、cdn-waf
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本：sparta-waf、clb-waf、cdn-waf
                     * @param Edition 版本：sparta-waf、clb-waf、cdn-waf
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取是否开启长连接，仅IP回源时可以用填次参数，域名回源时这个参数无效
                     * @return IsKeepAlive 是否开启长连接，仅IP回源时可以用填次参数，域名回源时这个参数无效
                     */
                    std::string GetIsKeepAlive() const;

                    /**
                     * 设置是否开启长连接，仅IP回源时可以用填次参数，域名回源时这个参数无效
                     * @param IsKeepAlive 是否开启长连接，仅IP回源时可以用填次参数，域名回源时这个参数无效
                     */
                    void SetIsKeepAlive(const std::string& _isKeepAlive);

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取实例id，上线之后带上此字段
                     * @return InstanceID 实例id，上线之后带上此字段
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id，上线之后带上此字段
                     * @param InstanceID 实例id，上线之后带上此字段
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取anycast IP类型开关： 0 普通IP 1 Anycast IP
                     * @return Anycast anycast IP类型开关： 0 普通IP 1 Anycast IP
                     */
                    int64_t GetAnycast() const;

                    /**
                     * 设置anycast IP类型开关： 0 普通IP 1 Anycast IP
                     * @param Anycast anycast IP类型开关： 0 普通IP 1 Anycast IP
                     */
                    void SetAnycast(const int64_t& _anycast);

                    /**
                     * 判断参数 Anycast 是否已赋值
                     * @return Anycast 是否已赋值
                     */
                    bool AnycastHasBeenSet() const;

                    /**
                     * 获取src权重
                     * @return Weights src权重
                     */
                    std::vector<int64_t> GetWeights() const;

                    /**
                     * 设置src权重
                     * @param Weights src权重
                     */
                    void SetWeights(const std::vector<int64_t>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     */
                    bool WeightsHasBeenSet() const;

                    /**
                     * 获取是否开启主动健康检测，1表示开启，0表示不开启
                     * @return ActiveCheck 是否开启主动健康检测，1表示开启，0表示不开启
                     */
                    int64_t GetActiveCheck() const;

                    /**
                     * 设置是否开启主动健康检测，1表示开启，0表示不开启
                     * @param ActiveCheck 是否开启主动健康检测，1表示开启，0表示不开启
                     */
                    void SetActiveCheck(const int64_t& _activeCheck);

                    /**
                     * 判断参数 ActiveCheck 是否已赋值
                     * @return ActiveCheck 是否已赋值
                     */
                    bool ActiveCheckHasBeenSet() const;

                    /**
                     * 获取TLS版本信息
                     * @return TLSVersion TLS版本信息
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置TLS版本信息
                     * @param TLSVersion TLS版本信息
                     */
                    void SetTLSVersion(const int64_t& _tLSVersion);

                    /**
                     * 判断参数 TLSVersion 是否已赋值
                     * @return TLSVersion 是否已赋值
                     */
                    bool TLSVersionHasBeenSet() const;

                    /**
                     * 获取加密套件信息
                     * @return Ciphers 加密套件信息
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置加密套件信息
                     * @param Ciphers 加密套件信息
                     */
                    void SetCiphers(const std::vector<int64_t>& _ciphers);

                    /**
                     * 判断参数 Ciphers 是否已赋值
                     * @return Ciphers 是否已赋值
                     */
                    bool CiphersHasBeenSet() const;

                    /**
                     * 获取0:不支持选择：默认模版  1:通用型模版 2:安全型模版 3:自定义模版
                     * @return CipherTemplate 0:不支持选择：默认模版  1:通用型模版 2:安全型模版 3:自定义模版
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置0:不支持选择：默认模版  1:通用型模版 2:安全型模版 3:自定义模版
                     * @param CipherTemplate 0:不支持选择：默认模版  1:通用型模版 2:安全型模版 3:自定义模版
                     */
                    void SetCipherTemplate(const int64_t& _cipherTemplate);

                    /**
                     * 判断参数 CipherTemplate 是否已赋值
                     * @return CipherTemplate 是否已赋值
                     */
                    bool CipherTemplateHasBeenSet() const;

                private:

                    /**
                     * 需要防御的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 证书类型，0表示没有证书，CertType=1表示自有证书,2 为托管证书
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 表示是否开启了CDN代理，1：有部署CDN，0：未部署CDN
                     */
                    int64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 回源类型，0表示通过IP回源,1 表示通过域名回源
                     */
                    int64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * 是否开启WebSocket支持，1表示开启，0不开启
                     */
                    int64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * 负载均衡策略，0表示轮徇，1表示IP hash
                     */
                    std::string m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * CertType=1时，需要填次参数，表示证书内容
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * CertType=1时，需要填次参数，表示证书的私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * CertType=2时，需要填次参数，表示证书的ID
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * Waf的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * HTTPS回源协议，填http或者https
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * HTTPS回源端口,仅UpstreamScheme为http时需要填当前字段
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * 是否开启灰度，0表示不开启灰度
                     */
                    int64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * 灰度的地区
                     */
                    std::vector<std::string> m_grayAreas;
                    bool m_grayAreasHasBeenSet;

                    /**
                     * UpstreamType=1时，填次字段表示回源域名
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * UpstreamType=0时，填次字段表示回源IP
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * 是否开启HTTP2,开启HTTP2需要HTTPS支持
                     */
                    int64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * 表示是否强制跳转到HTTPS，1强制跳转Https，0不强制跳转
                     */
                    int64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * 服务有多端口需要设置此字段
                     */
                    std::vector<PortItem> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 版本：sparta-waf、clb-waf、cdn-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 是否开启长连接，仅IP回源时可以用填次参数，域名回源时这个参数无效
                     */
                    std::string m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * 实例id，上线之后带上此字段
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * anycast IP类型开关： 0 普通IP 1 Anycast IP
                     */
                    int64_t m_anycast;
                    bool m_anycastHasBeenSet;

                    /**
                     * src权重
                     */
                    std::vector<int64_t> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * 是否开启主动健康检测，1表示开启，0表示不开启
                     */
                    int64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS版本信息
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * 加密套件信息
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * 0:不支持选择：默认模版  1:通用型模版 2:安全型模版 3:自定义模版
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDSPARTAPROTECTIONREQUEST_H_
