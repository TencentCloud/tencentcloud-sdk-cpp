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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_

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
                * DescribeSpartaProtectionInfo返回参数结构体
                */
                class DescribeSpartaProtectionInfoResponse : public AbstractModel
                {
                public:
                    DescribeSpartaProtectionInfoResponse();
                    ~DescribeSpartaProtectionInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取cname取值
                     * @return Cname cname取值
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取源IP地址列表
                     * @return SrcList 源IP地址列表
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 判断参数 SrcList 是否已赋值
                     * @return SrcList 是否已赋值
                     * 
                     */
                    bool SrcListHasBeenSet() const;

                    /**
                     * 获取证书类型
                     * @return CertType 证书类型
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取证书
                     * @return Cert 证书
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取私有密钥
                     * @return PrivateKey 私有密钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取ssl的id
                     * @return Sslid ssl的id
                     * 
                     */
                    std::string GetSslid() const;

                    /**
                     * 判断参数 Sslid 是否已赋值
                     * @return Sslid 是否已赋值
                     * 
                     */
                    bool SslidHasBeenSet() const;

                    /**
                     * 获取是否是cdn
                     * @return IsCdn 是否是cdn
                     * 
                     */
                    std::string GetIsCdn() const;

                    /**
                     * 判断参数 IsCdn 是否已赋值
                     * @return IsCdn 是否已赋值
                     * 
                     */
                    bool IsCdnHasBeenSet() const;

                    /**
                     * 获取灰度区域列表
                     * @return GrayAreas 灰度区域列表
                     * 
                     */
                    std::vector<std::string> GetGrayAreas() const;

                    /**
                     * 判断参数 GrayAreas 是否已赋值
                     * @return GrayAreas 是否已赋值
                     * 
                     */
                    bool GrayAreasHasBeenSet() const;

                    /**
                     * 获取引擎
                     * @return Engine 引擎
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取HTTPS重写
                     * @return HttpsRewrite HTTPS重写
                     * 
                     */
                    std::string GetHttpsRewrite() const;

                    /**
                     * 判断参数 HttpsRewrite 是否已赋值
                     * @return HttpsRewrite 是否已赋值
                     * 
                     */
                    bool HttpsRewriteHasBeenSet() const;

                    /**
                     * 获取upstreamType取值
                     * @return UpstreamType upstreamType取值
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取upstreamDomain取值
                     * @return UpstreamDomain upstreamDomain取值
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 判断参数 UpstreamDomain 是否已赋值
                     * @return UpstreamDomain 是否已赋值
                     * 
                     */
                    bool UpstreamDomainHasBeenSet() const;

                    /**
                     * 获取upstreamScheme取值
                     * @return UpstreamScheme upstreamScheme取值
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 判断参数 UpstreamScheme 是否已赋值
                     * @return UpstreamScheme 是否已赋值
                     * 
                     */
                    bool UpstreamSchemeHasBeenSet() const;

                    /**
                     * 获取是否是HTTP2
                     * @return IsHttp2 是否是HTTP2
                     * 
                     */
                    std::string GetIsHttp2() const;

                    /**
                     * 判断参数 IsHttp2 是否已赋值
                     * @return IsHttp2 是否已赋值
                     * 
                     */
                    bool IsHttp2HasBeenSet() const;

                    /**
                     * 获取是否含有websocket
                     * @return IsWebsocket 是否含有websocket
                     * 
                     */
                    std::string GetIsWebsocket() const;

                    /**
                     * 判断参数 IsWebsocket 是否已赋值
                     * @return IsWebsocket 是否已赋值
                     * 
                     */
                    bool IsWebsocketHasBeenSet() const;

                    /**
                     * 获取loadBalance信息
                     * @return LoadBalance loadBalance信息
                     * 
                     */
                    std::string GetLoadBalance() const;

                    /**
                     * 判断参数 LoadBalance 是否已赋值
                     * @return LoadBalance 是否已赋值
                     * 
                     */
                    bool LoadBalanceHasBeenSet() const;

                    /**
                     * 获取httpsUpstreamPort取值
                     * @return HttpsUpstreamPort httpsUpstreamPort取值
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 判断参数 HttpsUpstreamPort 是否已赋值
                     * @return HttpsUpstreamPort 是否已赋值
                     * 
                     */
                    bool HttpsUpstreamPortHasBeenSet() const;

                    /**
                     * 获取port信息
                     * @return Ports port信息
                     * 
                     */
                    std::vector<PortItem> GetPorts() const;

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取是否灰度
                     * @return IsGray 是否灰度
                     * 
                     */
                    std::string GetIsGray() const;

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * 
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取模式
                     * @return Mode 模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取防御等级,100,200,300
                     * @return Level 防御等级,100,200,300
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取与源站是否保持长连接
                     * @return IsKeepAlive 与源站是否保持长连接
                     * 
                     */
                    std::string GetIsKeepAlive() const;

                    /**
                     * 判断参数 IsKeepAlive 是否已赋值
                     * @return IsKeepAlive 是否已赋值
                     * 
                     */
                    bool IsKeepAliveHasBeenSet() const;

                    /**
                     * 获取0：BGP 1：Anycast
                     * @return Anycast 0：BGP 1：Anycast
                     * 
                     */
                    std::string GetAnycast() const;

                    /**
                     * 判断参数 Anycast 是否已赋值
                     * @return Anycast 是否已赋值
                     * 
                     */
                    bool AnycastHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * cname取值
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源IP地址列表
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * 证书类型
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 私有密钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * ssl的id
                     */
                    std::string m_sslid;
                    bool m_sslidHasBeenSet;

                    /**
                     * 是否是cdn
                     */
                    std::string m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 灰度区域列表
                     */
                    std::vector<std::string> m_grayAreas;
                    bool m_grayAreasHasBeenSet;

                    /**
                     * 引擎
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * HTTPS重写
                     */
                    std::string m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * upstreamType取值
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * upstreamDomain取值
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * upstreamScheme取值
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * 是否是HTTP2
                     */
                    std::string m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * 是否含有websocket
                     */
                    std::string m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * loadBalance信息
                     */
                    std::string m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * httpsUpstreamPort取值
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * port信息
                     */
                    std::vector<PortItem> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 是否灰度
                     */
                    std::string m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * 模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 防御等级,100,200,300
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 与源站是否保持长连接
                     */
                    std::string m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * 0：BGP 1：Anycast
                     */
                    std::string m_anycast;
                    bool m_anycastHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESPARTAPROTECTIONINFORESPONSE_H_
