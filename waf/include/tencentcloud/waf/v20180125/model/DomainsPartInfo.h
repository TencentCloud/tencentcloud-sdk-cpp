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
#include <tencentcloud/waf/v20180125/model/UpstreamRule.h>
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SaaS型WAF域名详情
                */
                class DomainsPartInfo : public AbstractModel
                {
                public:
                    DomainsPartInfo();
                    ~DomainsPartInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>域名唯一ID</p>
                     * @return DomainId <p>域名唯一ID</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>域名唯一ID</p>
                     * @param _domainId <p>域名唯一ID</p>
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取<p>域名所属实例唯一ID</p>
                     * @return InstanceId <p>域名所属实例唯一ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>域名所属实例唯一ID</p>
                     * @param _instanceId <p>域名所属实例唯一ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>域名所属实例类型</p>
                     * @return Edition <p>域名所属实例类型</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>域名所属实例类型</p>
                     * @param _edition <p>域名所属实例类型</p>
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取<p>域名所属实例名</p>
                     * @return InstanceName <p>域名所属实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>域名所属实例名</p>
                     * @param _instanceName <p>域名所属实例名</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>证书</p>
                     * @return Cert <p>证书</p>
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置<p>证书</p>
                     * @param _cert <p>证书</p>
                     * 
                     */
                    void SetCert(const std::string& _cert);

                    /**
                     * 判断参数 Cert 是否已赋值
                     * @return Cert 是否已赋值
                     * 
                     */
                    bool CertHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return ModifyTime <p>更新时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _modifyTime <p>更新时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * @return Engine <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置<p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * @param _engine <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     * 
                     */
                    void SetEngine(const uint64_t& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>是否开启HTTP强制跳转到HTTPS。<br>0：不强制跳转<br>1：开启强制跳转</p>
                     * @return HttpsRewrite <p>是否开启HTTP强制跳转到HTTPS。<br>0：不强制跳转<br>1：开启强制跳转</p>
                     * 
                     */
                    uint64_t GetHttpsRewrite() const;

                    /**
                     * 设置<p>是否开启HTTP强制跳转到HTTPS。<br>0：不强制跳转<br>1：开启强制跳转</p>
                     * @param _httpsRewrite <p>是否开启HTTP强制跳转到HTTPS。<br>0：不强制跳转<br>1：开启强制跳转</p>
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
                     * 获取<p>HTTPS回源端口</p>
                     * @return HttpsUpstreamPort <p>HTTPS回源端口</p>
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置<p>HTTPS回源端口</p>
                     * @param _httpsUpstreamPort <p>HTTPS回源端口</p>
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
                     * 获取<p>waf前是否部署有七层代理服务。<br>0：没有部署代理服务<br>1：有部署代理服务，waf将使用XFF获取客户端IP<br>2：有部署代理服务，waf将使用remote_addr获取客户端IP<br>3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * @return IsCdn <p>waf前是否部署有七层代理服务。<br>0：没有部署代理服务<br>1：有部署代理服务，waf将使用XFF获取客户端IP<br>2：有部署代理服务，waf将使用remote_addr获取客户端IP<br>3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置<p>waf前是否部署有七层代理服务。<br>0：没有部署代理服务<br>1：有部署代理服务，waf将使用XFF获取客户端IP<br>2：有部署代理服务，waf将使用remote_addr获取客户端IP<br>3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     * @param _isCdn <p>waf前是否部署有七层代理服务。<br>0：没有部署代理服务<br>1：有部署代理服务，waf将使用XFF获取客户端IP<br>2：有部署代理服务，waf将使用remote_addr获取客户端IP<br>3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
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
                     * 获取<p>是否开启灰度。</p>
                     * @return IsGray <p>是否开启灰度。</p>
                     * @deprecated
                     */
                    uint64_t GetIsGray() const;

                    /**
                     * 设置<p>是否开启灰度。</p>
                     * @param _isGray <p>是否开启灰度。</p>
                     * @deprecated
                     */
                    void SetIsGray(const uint64_t& _isGray);

                    /**
                     * 判断参数 IsGray 是否已赋值
                     * @return IsGray 是否已赋值
                     * @deprecated
                     */
                    bool IsGrayHasBeenSet() const;

                    /**
                     * 获取<p>是否开启HTTP2，需要开启HTTPS协议支持。<br>0：关闭<br>1：开启</p>
                     * @return IsHttp2 <p>是否开启HTTP2，需要开启HTTPS协议支持。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetIsHttp2() const;

                    /**
                     * 设置<p>是否开启HTTP2，需要开启HTTPS协议支持。<br>0：关闭<br>1：开启</p>
                     * @param _isHttp2 <p>是否开启HTTP2，需要开启HTTPS协议支持。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>是否开启WebSocket支持。<br>0：关闭<br>1：开启</p>
                     * @return IsWebsocket <p>是否开启WebSocket支持。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetIsWebsocket() const;

                    /**
                     * 设置<p>是否开启WebSocket支持。<br>0：关闭<br>1：开启</p>
                     * @param _isWebsocket <p>是否开启WebSocket支持。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>回源负载均衡策略。<br>0：轮询<br>1：IP hash<br>2：加权轮询</p>
                     * @return LoadBalance <p>回源负载均衡策略。<br>0：轮询<br>1：IP hash<br>2：加权轮询</p>
                     * 
                     */
                    uint64_t GetLoadBalance() const;

                    /**
                     * 设置<p>回源负载均衡策略。<br>0：轮询<br>1：IP hash<br>2：加权轮询</p>
                     * @param _loadBalance <p>回源负载均衡策略。<br>0：轮询<br>1：IP hash<br>2：加权轮询</p>
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
                     * 获取<p>防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * @return Mode <p>防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置<p>防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     * @param _mode <p>防护模式。<br>0：观察模式<br>1：拦截模式</p>
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
                     * 获取<p>自有证书的私钥</p>
                     * @return PrivateKey <p>自有证书的私钥</p>
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置<p>自有证书的私钥</p>
                     * @param _privateKey <p>自有证书的私钥</p>
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
                     * 获取<p>CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * @return SSLId <p>CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置<p>CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * @param _sSLId <p>CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
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
                     * 获取<p>域名回源时的回源域名。UpstreamType为1时，需要填充此字段</p>
                     * @return UpstreamDomain <p>域名回源时的回源域名。UpstreamType为1时，需要填充此字段</p>
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置<p>域名回源时的回源域名。UpstreamType为1时，需要填充此字段</p>
                     * @param _upstreamDomain <p>域名回源时的回源域名。UpstreamType为1时，需要填充此字段</p>
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
                     * 获取<p>回源类型。<br>0：通过IP回源<br>1：通过域名回源</p>
                     * @return UpstreamType <p>回源类型。<br>0：通过IP回源<br>1：通过域名回源</p>
                     * 
                     */
                    uint64_t GetUpstreamType() const;

                    /**
                     * 设置<p>回源类型。<br>0：通过IP回源<br>1：通过域名回源</p>
                     * @param _upstreamType <p>回源类型。<br>0：通过IP回源<br>1：通过域名回源</p>
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
                     * 获取<p>IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段</p>
                     * @return SrcList <p>IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段</p>
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置<p>IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段</p>
                     * @param _srcList <p>IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段</p>
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
                     * 获取<p>域名端口配置</p>
                     * @return Ports <p>域名端口配置</p>
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置<p>域名端口配置</p>
                     * @param _ports <p>域名端口配置</p>
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
                     * 获取<p>证书类型。<br>0：仅配置HTTP监听端口，没有证书<br>1：证书来源为自有证书<br>2：证书来源为托管证书</p>
                     * @return CertType <p>证书类型。<br>0：仅配置HTTP监听端口，没有证书<br>1：证书来源为自有证书<br>2：证书来源为托管证书</p>
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置<p>证书类型。<br>0：仅配置HTTP监听端口，没有证书<br>1：证书来源为自有证书<br>2：证书来源为托管证书</p>
                     * @param _certType <p>证书类型。<br>0：仅配置HTTP监听端口，没有证书<br>1：证书来源为自有证书<br>2：证书来源为托管证书</p>
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
                     * 获取<p>服务配置有HTTPS端口时，HTTPS的回源协议。<br>http：使用http协议回源，和HttpsUpstreamPort配合使用<br>https：使用https协议回源</p>
                     * @return UpstreamScheme <p>服务配置有HTTPS端口时，HTTPS的回源协议。<br>http：使用http协议回源，和HttpsUpstreamPort配合使用<br>https：使用https协议回源</p>
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置<p>服务配置有HTTPS端口时，HTTPS的回源协议。<br>http：使用http协议回源，和HttpsUpstreamPort配合使用<br>https：使用https协议回源</p>
                     * @param _upstreamScheme <p>服务配置有HTTPS端口时，HTTPS的回源协议。<br>http：使用http协议回源，和HttpsUpstreamPort配合使用<br>https：使用https协议回源</p>
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
                     * 获取<p>日志包是否开启。<br>0：关闭<br>1：开启</p>
                     * @return Cls <p>日志包是否开启。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置<p>日志包是否开启。<br>0：关闭<br>1：开启</p>
                     * @param _cls <p>日志包是否开启。<br>0：关闭<br>1：开启</p>
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
                     * 获取<p>接入Cname，SaaS型域名使用此Cname进行接入</p>
                     * @return Cname <p>接入Cname，SaaS型域名使用此Cname进行接入</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>接入Cname，SaaS型域名使用此Cname进行接入</p>
                     * @param _cname <p>接入Cname，SaaS型域名使用此Cname进行接入</p>
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
                     * 获取<p>是否开启长连接。<br>0： 短连接<br>1： 长连接</p>
                     * @return IsKeepAlive <p>是否开启长连接。<br>0： 短连接<br>1： 长连接</p>
                     * 
                     */
                    uint64_t GetIsKeepAlive() const;

                    /**
                     * 设置<p>是否开启长连接。<br>0： 短连接<br>1： 长连接</p>
                     * @param _isKeepAlive <p>是否开启长连接。<br>0： 短连接<br>1： 长连接</p>
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
                     * 获取<p>是否开启主动健康检测。<br>0：不开启<br>1：开启</p>
                     * @return ActiveCheck <p>是否开启主动健康检测。<br>0：不开启<br>1：开启</p>
                     * 
                     */
                    uint64_t GetActiveCheck() const;

                    /**
                     * 设置<p>是否开启主动健康检测。<br>0：不开启<br>1：开启</p>
                     * @param _activeCheck <p>是否开启主动健康检测。<br>0：不开启<br>1：开启</p>
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
                     * 获取<p>TLS版本信息</p>
                     * @return TLSVersion <p>TLS版本信息</p>
                     * 
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置<p>TLS版本信息</p>
                     * @param _tLSVersion <p>TLS版本信息</p>
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
                     * 获取<p>自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。</p>
                     * @return Ciphers <p>自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。</p>
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置<p>自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。</p>
                     * @param _ciphers <p>自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。</p>
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
                     * 获取<p>加密套件模板。<br>0：不支持选择，使用默认模板<br>1：通用型模板<br>2：安全型模板<br>3：自定义模板</p>
                     * @return CipherTemplate <p>加密套件模板。<br>0：不支持选择，使用默认模板<br>1：通用型模板<br>2：安全型模板<br>3：自定义模板</p>
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置<p>加密套件模板。<br>0：不支持选择，使用默认模板<br>1：通用型模板<br>2：安全型模板<br>3：自定义模板</p>
                     * @param _cipherTemplate <p>加密套件模板。<br>0：不支持选择，使用默认模板<br>1：通用型模板<br>2：安全型模板<br>3：自定义模板</p>
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
                     * 获取<p>WAF与源站的连接超时，默认10s。</p>
                     * @return ProxyConnectTimeout <p>WAF与源站的连接超时，默认10s。</p>
                     * 
                     */
                    int64_t GetProxyConnectTimeout() const;

                    /**
                     * 设置<p>WAF与源站的连接超时，默认10s。</p>
                     * @param _proxyConnectTimeout <p>WAF与源站的连接超时，默认10s。</p>
                     * 
                     */
                    void SetProxyConnectTimeout(const int64_t& _proxyConnectTimeout);

                    /**
                     * 判断参数 ProxyConnectTimeout 是否已赋值
                     * @return ProxyConnectTimeout 是否已赋值
                     * 
                     */
                    bool ProxyConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>WAF与源站的读超时时间，默认300s。</p>
                     * @return ProxyReadTimeout <p>WAF与源站的读超时时间，默认300s。</p>
                     * 
                     */
                    int64_t GetProxyReadTimeout() const;

                    /**
                     * 设置<p>WAF与源站的读超时时间，默认300s。</p>
                     * @param _proxyReadTimeout <p>WAF与源站的读超时时间，默认300s。</p>
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
                     * 获取<p>WAF与源站的写超时时间，默认300s。</p>
                     * @return ProxySendTimeout <p>WAF与源站的写超时时间，默认300s。</p>
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置<p>WAF与源站的写超时时间，默认300s。</p>
                     * @param _proxySendTimeout <p>WAF与源站的写超时时间，默认300s。</p>
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
                     * 获取<p>WAF回源时的SNI类型。<br>0：关闭SNI，不配置client_hello中的server_name<br>1：开启SNI，client_hello中的server_name为防护域名<br>2：开启SNI，SNI为域名回源时的源站域名<br>3：开启SNI，SNI为自定义域名</p>
                     * @return SniType <p>WAF回源时的SNI类型。<br>0：关闭SNI，不配置client_hello中的server_name<br>1：开启SNI，client_hello中的server_name为防护域名<br>2：开启SNI，SNI为域名回源时的源站域名<br>3：开启SNI，SNI为自定义域名</p>
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置<p>WAF回源时的SNI类型。<br>0：关闭SNI，不配置client_hello中的server_name<br>1：开启SNI，client_hello中的server_name为防护域名<br>2：开启SNI，SNI为域名回源时的源站域名<br>3：开启SNI，SNI为自定义域名</p>
                     * @param _sniType <p>WAF回源时的SNI类型。<br>0：关闭SNI，不配置client_hello中的server_name<br>1：开启SNI，client_hello中的server_name为防护域名<br>2：开启SNI，SNI为域名回源时的源站域名<br>3：开启SNI，SNI为自定义域名</p>
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
                     * 获取<p>SniType为3时，需要填此参数，表示自定义的SNI；</p>
                     * @return SniHost <p>SniType为3时，需要填此参数，表示自定义的SNI；</p>
                     * 
                     */
                    std::string GetSniHost() const;

                    /**
                     * 设置<p>SniType为3时，需要填此参数，表示自定义的SNI；</p>
                     * @param _sniHost <p>SniType为3时，需要填此参数，表示自定义的SNI；</p>
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
                     * 获取<p>回源IP权重</p>
                     * @return Weights <p>回源IP权重</p>
                     * 
                     */
                    std::vector<std::string> GetWeights() const;

                    /**
                     * 设置<p>回源IP权重</p>
                     * @param _weights <p>回源IP权重</p>
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
                     * 获取<p>IsCdn=3时，表示自定义header</p>
                     * @return IpHeaders <p>IsCdn=3时，表示自定义header</p>
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置<p>IsCdn=3时，表示自定义header</p>
                     * @param _ipHeaders <p>IsCdn=3时，表示自定义header</p>
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
                     * 获取<p>是否开启XFF重置。<br>0：关闭<br>1：开启</p>
                     * @return XFFReset <p>是否开启XFF重置。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置<p>是否开启XFF重置。<br>0：关闭<br>1：开启</p>
                     * @param _xFFReset <p>是否开启XFF重置。<br>0：关闭<br>1：开启</p>
                     * 
                     */
                    void SetXFFReset(const int64_t& _xFFReset);

                    /**
                     * 判断参数 XFFReset 是否已赋值
                     * @return XFFReset 是否已赋值
                     * 
                     */
                    bool XFFResetHasBeenSet() const;

                    /**
                     * 获取<p>域名备注信息</p>
                     * @return Note <p>域名备注信息</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>域名备注信息</p>
                     * @param _note <p>域名备注信息</p>
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<p>自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。</p>
                     * @return UpstreamHost <p>自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。</p>
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置<p>自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。</p>
                     * @param _upstreamHost <p>自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。</p>
                     * 
                     */
                    void SetUpstreamHost(const std::string& _upstreamHost);

                    /**
                     * 判断参数 UpstreamHost 是否已赋值
                     * @return UpstreamHost 是否已赋值
                     * 
                     */
                    bool UpstreamHostHasBeenSet() const;

                    /**
                     * 获取<p>防护规则</p>
                     * @return Level <p>防护规则</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>防护规则</p>
                     * @param _level <p>防护规则</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>是否开启缓存 0-关闭 1-开启</p>
                     * @return ProxyBuffer <p>是否开启缓存 0-关闭 1-开启</p>
                     * 
                     */
                    int64_t GetProxyBuffer() const;

                    /**
                     * 设置<p>是否开启缓存 0-关闭 1-开启</p>
                     * @param _proxyBuffer <p>是否开启缓存 0-关闭 1-开启</p>
                     * 
                     */
                    void SetProxyBuffer(const int64_t& _proxyBuffer);

                    /**
                     * 判断参数 ProxyBuffer 是否已赋值
                     * @return ProxyBuffer 是否已赋值
                     * 
                     */
                    bool ProxyBufferHasBeenSet() const;

                    /**
                     * 获取<p>国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问</p>
                     * @return GmType <p>国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问</p>
                     * 
                     */
                    int64_t GetGmType() const;

                    /**
                     * 设置<p>国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问</p>
                     * @param _gmType <p>国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问</p>
                     * 
                     */
                    void SetGmType(const int64_t& _gmType);

                    /**
                     * 判断参数 GmType 是否已赋值
                     * @return GmType 是否已赋值
                     * 
                     */
                    bool GmTypeHasBeenSet() const;

                    /**
                     * 获取<p>国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书</p>
                     * @return GmCertType <p>国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书</p>
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置<p>国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书</p>
                     * @param _gmCertType <p>国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书</p>
                     * 
                     */
                    void SetGmCertType(const int64_t& _gmCertType);

                    /**
                     * 判断参数 GmCertType 是否已赋值
                     * @return GmCertType 是否已赋值
                     * 
                     */
                    bool GmCertTypeHasBeenSet() const;

                    /**
                     * 获取<p>GmCertType为1时，需要填充此参数，表示自有国密证书的证书链</p>
                     * @return GmCert <p>GmCertType为1时，需要填充此参数，表示自有国密证书的证书链</p>
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置<p>GmCertType为1时，需要填充此参数，表示自有国密证书的证书链</p>
                     * @param _gmCert <p>GmCertType为1时，需要填充此参数，表示自有国密证书的证书链</p>
                     * 
                     */
                    void SetGmCert(const std::string& _gmCert);

                    /**
                     * 判断参数 GmCert 是否已赋值
                     * @return GmCert 是否已赋值
                     * 
                     */
                    bool GmCertHasBeenSet() const;

                    /**
                     * 获取<p>GmCertType为1时，需要填充此参数，表示自有国密证书的私钥</p>
                     * @return GmPrivateKey <p>GmCertType为1时，需要填充此参数，表示自有国密证书的私钥</p>
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置<p>GmCertType为1时，需要填充此参数，表示自有国密证书的私钥</p>
                     * @param _gmPrivateKey <p>GmCertType为1时，需要填充此参数，表示自有国密证书的私钥</p>
                     * 
                     */
                    void SetGmPrivateKey(const std::string& _gmPrivateKey);

                    /**
                     * 判断参数 GmPrivateKey 是否已赋值
                     * @return GmPrivateKey 是否已赋值
                     * 
                     */
                    bool GmPrivateKeyHasBeenSet() const;

                    /**
                     * 获取<p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书</p>
                     * @return GmEncCert <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书</p>
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置<p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书</p>
                     * @param _gmEncCert <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书</p>
                     * 
                     */
                    void SetGmEncCert(const std::string& _gmEncCert);

                    /**
                     * 判断参数 GmEncCert 是否已赋值
                     * @return GmEncCert 是否已赋值
                     * 
                     */
                    bool GmEncCertHasBeenSet() const;

                    /**
                     * 获取<p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥</p>
                     * @return GmEncPrivateKey <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥</p>
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置<p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥</p>
                     * @param _gmEncPrivateKey <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥</p>
                     * 
                     */
                    void SetGmEncPrivateKey(const std::string& _gmEncPrivateKey);

                    /**
                     * 判断参数 GmEncPrivateKey 是否已赋值
                     * @return GmEncPrivateKey 是否已赋值
                     * 
                     */
                    bool GmEncPrivateKeyHasBeenSet() const;

                    /**
                     * 获取<p>GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * @return GmSSLId <p>GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置<p>GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * @param _gmSSLId <p>GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     * 
                     */
                    void SetGmSSLId(const std::string& _gmSSLId);

                    /**
                     * 判断参数 GmSSLId 是否已赋值
                     * @return GmSSLId 是否已赋值
                     * 
                     */
                    bool GmSSLIdHasBeenSet() const;

                    /**
                     * 获取<p>域名标签</p>
                     * @return Labels <p>域名标签</p>
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置<p>域名标签</p>
                     * @param _labels <p>域名标签</p>
                     * 
                     */
                    void SetLabels(const std::vector<std::string>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>拨测状态。 0: 禁用拨测, 1: 启用拨测</p>
                     * @return ProbeStatus <p>拨测状态。 0: 禁用拨测, 1: 启用拨测</p>
                     * 
                     */
                    int64_t GetProbeStatus() const;

                    /**
                     * 设置<p>拨测状态。 0: 禁用拨测, 1: 启用拨测</p>
                     * @param _probeStatus <p>拨测状态。 0: 禁用拨测, 1: 启用拨测</p>
                     * 
                     */
                    void SetProbeStatus(const int64_t& _probeStatus);

                    /**
                     * 判断参数 ProbeStatus 是否已赋值
                     * @return ProbeStatus 是否已赋值
                     * 
                     */
                    bool ProbeStatusHasBeenSet() const;

                    /**
                     * 获取<p>回源策略。<br>0：负载均衡回源<br>1：分流回源</p>
                     * @return UpstreamPolicy <p>回源策略。<br>0：负载均衡回源<br>1：分流回源</p>
                     * 
                     */
                    int64_t GetUpstreamPolicy() const;

                    /**
                     * 设置<p>回源策略。<br>0：负载均衡回源<br>1：分流回源</p>
                     * @param _upstreamPolicy <p>回源策略。<br>0：负载均衡回源<br>1：分流回源</p>
                     * 
                     */
                    void SetUpstreamPolicy(const int64_t& _upstreamPolicy);

                    /**
                     * 判断参数 UpstreamPolicy 是否已赋值
                     * @return UpstreamPolicy 是否已赋值
                     * 
                     */
                    bool UpstreamPolicyHasBeenSet() const;

                    /**
                     * 获取<p>分流回源策略</p>
                     * @return UpstreamRules <p>分流回源策略</p>
                     * 
                     */
                    std::vector<UpstreamRule> GetUpstreamRules() const;

                    /**
                     * 设置<p>分流回源策略</p>
                     * @param _upstreamRules <p>分流回源策略</p>
                     * 
                     */
                    void SetUpstreamRules(const std::vector<UpstreamRule>& _upstreamRules);

                    /**
                     * 判断参数 UpstreamRules 是否已赋值
                     * @return UpstreamRules 是否已赋值
                     * 
                     */
                    bool UpstreamRulesHasBeenSet() const;

                    /**
                     * 获取<p>业务场景。0：默认值，表示常规业务场景 1：大模型业务场景</p>
                     * @return UseCase <p>业务场景。0：默认值，表示常规业务场景 1：大模型业务场景</p>
                     * 
                     */
                    int64_t GetUseCase() const;

                    /**
                     * 设置<p>业务场景。0：默认值，表示常规业务场景 1：大模型业务场景</p>
                     * @param _useCase <p>业务场景。0：默认值，表示常规业务场景 1：大模型业务场景</p>
                     * 
                     */
                    void SetUseCase(const int64_t& _useCase);

                    /**
                     * 判断参数 UseCase 是否已赋值
                     * @return UseCase 是否已赋值
                     * 
                     */
                    bool UseCaseHasBeenSet() const;

                    /**
                     * 获取<p>gzip开关。0：关闭 1：默认值，打开。</p>
                     * @return Gzip <p>gzip开关。0：关闭 1：默认值，打开。</p>
                     * 
                     */
                    int64_t GetGzip() const;

                    /**
                     * 设置<p>gzip开关。0：关闭 1：默认值，打开。</p>
                     * @param _gzip <p>gzip开关。0：关闭 1：默认值，打开。</p>
                     * 
                     */
                    void SetGzip(const int64_t& _gzip);

                    /**
                     * 判断参数 Gzip 是否已赋值
                     * @return Gzip 是否已赋值
                     * 
                     */
                    bool GzipHasBeenSet() const;

                    /**
                     * 获取<p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * @return State <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * @param _state <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>saaswaf独享ip状态，0是关闭状态，1是开启状态，2是开启中</p>
                     * @return PrivateVipStatus <p>saaswaf独享ip状态，0是关闭状态，1是开启状态，2是开启中</p>
                     * 
                     */
                    int64_t GetPrivateVipStatus() const;

                    /**
                     * 设置<p>saaswaf独享ip状态，0是关闭状态，1是开启状态，2是开启中</p>
                     * @param _privateVipStatus <p>saaswaf独享ip状态，0是关闭状态，1是开启状态，2是开启中</p>
                     * 
                     */
                    void SetPrivateVipStatus(const int64_t& _privateVipStatus);

                    /**
                     * 判断参数 PrivateVipStatus 是否已赋值
                     * @return PrivateVipStatus 是否已赋值
                     * 
                     */
                    bool PrivateVipStatusHasBeenSet() const;

                    /**
                     * 获取<p>标签结构体</p>
                     * @return TagInfos <p>标签结构体</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagInfos() const;

                    /**
                     * 设置<p>标签结构体</p>
                     * @param _tagInfos <p>标签结构体</p>
                     * 
                     */
                    void SetTagInfos(const std::vector<TagInfo>& _tagInfos);

                    /**
                     * 判断参数 TagInfos 是否已赋值
                     * @return TagInfos 是否已赋值
                     * 
                     */
                    bool TagInfosHasBeenSet() const;

                    /**
                     * 获取<p>ipv6开启状态</p><p>枚举值：</p><ul><li>1： ipv6开关打开</li><li>0： ipv6开关关闭</li></ul>
                     * @return Ipv6Status <p>ipv6开启状态</p><p>枚举值：</p><ul><li>1： ipv6开关打开</li><li>0： ipv6开关关闭</li></ul>
                     * 
                     */
                    int64_t GetIpv6Status() const;

                    /**
                     * 设置<p>ipv6开启状态</p><p>枚举值：</p><ul><li>1： ipv6开关打开</li><li>0： ipv6开关关闭</li></ul>
                     * @param _ipv6Status <p>ipv6开启状态</p><p>枚举值：</p><ul><li>1： ipv6开关打开</li><li>0： ipv6开关关闭</li></ul>
                     * 
                     */
                    void SetIpv6Status(const int64_t& _ipv6Status);

                    /**
                     * 判断参数 Ipv6Status 是否已赋值
                     * @return Ipv6Status 是否已赋值
                     * 
                     */
                    bool Ipv6StatusHasBeenSet() const;

                private:

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名唯一ID</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>域名所属实例唯一ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>域名所属实例类型</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>域名所属实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>证书</p>
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>规则引擎和AI引擎防护模式联合状态。<br>1:初始状态,规则引擎拦截&amp;&amp;AI引擎未操作开关状态<br>10：规则引擎观察&amp;&amp;AI引擎关闭模式<br>11：规则引擎观察&amp;&amp;AI引擎观察模式<br>12：规则引擎观察&amp;&amp;AI引擎拦截模式<br>20：规则引擎拦截&amp;&amp;AI引擎关闭模式<br>21：规则引擎拦截&amp;&amp;AI引擎观察模式<br>22：规则引擎拦截&amp;&amp;AI引擎拦截模式</p>
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>是否开启HTTP强制跳转到HTTPS。<br>0：不强制跳转<br>1：开启强制跳转</p>
                     */
                    uint64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * <p>HTTPS回源端口</p>
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * <p>waf前是否部署有七层代理服务。<br>0：没有部署代理服务<br>1：有部署代理服务，waf将使用XFF获取客户端IP<br>2：有部署代理服务，waf将使用remote_addr获取客户端IP<br>3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP</p>
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * <p>是否开启灰度。</p>
                     */
                    uint64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * <p>是否开启HTTP2，需要开启HTTPS协议支持。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * <p>是否开启WebSocket支持。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * <p>回源负载均衡策略。<br>0：轮询<br>1：IP hash<br>2：加权轮询</p>
                     */
                    uint64_t m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * <p>防护模式。<br>0：观察模式<br>1：拦截模式</p>
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>自有证书的私钥</p>
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * <p>CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * <p>域名回源时的回源域名。UpstreamType为1时，需要填充此字段</p>
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * <p>回源类型。<br>0：通过IP回源<br>1：通过域名回源</p>
                     */
                    uint64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * <p>IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段</p>
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * <p>域名端口配置</p>
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>证书类型。<br>0：仅配置HTTP监听端口，没有证书<br>1：证书来源为自有证书<br>2：证书来源为托管证书</p>
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>服务配置有HTTPS端口时，HTTPS的回源协议。<br>http：使用http协议回源，和HttpsUpstreamPort配合使用<br>https：使用https协议回源</p>
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * <p>日志包是否开启。<br>0：关闭<br>1：开启</p>
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * <p>接入Cname，SaaS型域名使用此Cname进行接入</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>是否开启长连接。<br>0： 短连接<br>1： 长连接</p>
                     */
                    uint64_t m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * <p>是否开启主动健康检测。<br>0：不开启<br>1：开启</p>
                     */
                    uint64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * <p>TLS版本信息</p>
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * <p>自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。</p>
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * <p>加密套件模板。<br>0：不支持选择，使用默认模板<br>1：通用型模板<br>2：安全型模板<br>3：自定义模板</p>
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * <p>WAF与源站的连接超时，默认10s。</p>
                     */
                    int64_t m_proxyConnectTimeout;
                    bool m_proxyConnectTimeoutHasBeenSet;

                    /**
                     * <p>WAF与源站的读超时时间，默认300s。</p>
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * <p>WAF与源站的写超时时间，默认300s。</p>
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * <p>WAF回源时的SNI类型。<br>0：关闭SNI，不配置client_hello中的server_name<br>1：开启SNI，client_hello中的server_name为防护域名<br>2：开启SNI，SNI为域名回源时的源站域名<br>3：开启SNI，SNI为自定义域名</p>
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * <p>SniType为3时，需要填此参数，表示自定义的SNI；</p>
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * <p>回源IP权重</p>
                     */
                    std::vector<std::string> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * <p>IsCdn=3时，表示自定义header</p>
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * <p>是否开启XFF重置。<br>0：关闭<br>1：开启</p>
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                    /**
                     * <p>域名备注信息</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。</p>
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * <p>防护规则</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>是否开启缓存 0-关闭 1-开启</p>
                     */
                    int64_t m_proxyBuffer;
                    bool m_proxyBufferHasBeenSet;

                    /**
                     * <p>国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问</p>
                     */
                    int64_t m_gmType;
                    bool m_gmTypeHasBeenSet;

                    /**
                     * <p>国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书</p>
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * <p>GmCertType为1时，需要填充此参数，表示自有国密证书的证书链</p>
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * <p>GmCertType为1时，需要填充此参数，表示自有国密证书的私钥</p>
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书</p>
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * <p>GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥</p>
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * <p>GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id</p>
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                    /**
                     * <p>域名标签</p>
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>拨测状态。 0: 禁用拨测, 1: 启用拨测</p>
                     */
                    int64_t m_probeStatus;
                    bool m_probeStatusHasBeenSet;

                    /**
                     * <p>回源策略。<br>0：负载均衡回源<br>1：分流回源</p>
                     */
                    int64_t m_upstreamPolicy;
                    bool m_upstreamPolicyHasBeenSet;

                    /**
                     * <p>分流回源策略</p>
                     */
                    std::vector<UpstreamRule> m_upstreamRules;
                    bool m_upstreamRulesHasBeenSet;

                    /**
                     * <p>业务场景。0：默认值，表示常规业务场景 1：大模型业务场景</p>
                     */
                    int64_t m_useCase;
                    bool m_useCaseHasBeenSet;

                    /**
                     * <p>gzip开关。0：关闭 1：默认值，打开。</p>
                     */
                    int64_t m_gzip;
                    bool m_gzipHasBeenSet;

                    /**
                     * <p>SAAS型WAF域名状态：<br>-2：配置下发失败<br>-1：配置下发中<br>0：DNS解析中<br>1：无DNS解析记录，请接入WAF<br>10：DNS解析未知，域名启用了代理<br>11：DNS解析异常，使用A记录接入WAF IP<br>200：检测源站不可达<br>220：源站不支持长连接<br>311：证书过期<br>312：证书即将过期<br>310：证书异常<br>316：备案异常<br>5：WAF回源已变更<br>负载均衡型WAF域名LB监听器状态：<br>0：操作成功<br>4：正在绑定LB<br>6：正在解绑LB<br>7：解绑LB失败<br>8：绑定LB失败<br>10：内部错误</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>saaswaf独享ip状态，0是关闭状态，1是开启状态，2是开启中</p>
                     */
                    int64_t m_privateVipStatus;
                    bool m_privateVipStatusHasBeenSet;

                    /**
                     * <p>标签结构体</p>
                     */
                    std::vector<TagInfo> m_tagInfos;
                    bool m_tagInfosHasBeenSet;

                    /**
                     * <p>ipv6开启状态</p><p>枚举值：</p><ul><li>1： ipv6开关打开</li><li>0： ipv6开关关闭</li></ul>
                     */
                    int64_t m_ipv6Status;
                    bool m_ipv6StatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
