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
#include <tencentcloud/waf/v20180125/model/UpstreamRule.h>


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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取域名唯一ID
                     * @return DomainId 域名唯一ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名唯一ID
                     * @param _domainId 域名唯一ID
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
                     * 获取域名所属实例唯一ID
                     * @return InstanceId 域名所属实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置域名所属实例唯一ID
                     * @param _instanceId 域名所属实例唯一ID
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
                     * 获取域名所属实例类型
                     * @return Edition 域名所属实例类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置域名所属实例类型
                     * @param _edition 域名所属实例类型
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
                     * 获取域名所属实例名
                     * @return InstanceName 域名所属实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置域名所属实例名
                     * @param _instanceName 域名所属实例名
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
                     * 获取证书
                     * @return Cert 证书
                     * 
                     */
                    std::string GetCert() const;

                    /**
                     * 设置证书
                     * @param _cert 证书
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @return Engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * 
                     */
                    uint64_t GetEngine() const;

                    /**
                     * 设置规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     * @param _engine 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
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
                     * 获取是否开启HTTP强制跳转到HTTPS。
0：不强制跳转
1：开启强制跳转
                     * @return HttpsRewrite 是否开启HTTP强制跳转到HTTPS。
0：不强制跳转
1：开启强制跳转
                     * 
                     */
                    uint64_t GetHttpsRewrite() const;

                    /**
                     * 设置是否开启HTTP强制跳转到HTTPS。
0：不强制跳转
1：开启强制跳转
                     * @param _httpsRewrite 是否开启HTTP强制跳转到HTTPS。
0：不强制跳转
1：开启强制跳转
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
                     * 获取HTTPS回源端口
                     * @return HttpsUpstreamPort HTTPS回源端口
                     * 
                     */
                    std::string GetHttpsUpstreamPort() const;

                    /**
                     * 设置HTTPS回源端口
                     * @param _httpsUpstreamPort HTTPS回源端口
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
                     * 获取waf前是否部署有七层代理服务。
0：没有部署代理服务
1：有部署代理服务，waf将使用XFF获取客户端IP
2：有部署代理服务，waf将使用remote_addr获取客户端IP
3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @return IsCdn waf前是否部署有七层代理服务。
0：没有部署代理服务
1：有部署代理服务，waf将使用XFF获取客户端IP
2：有部署代理服务，waf将使用remote_addr获取客户端IP
3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * 
                     */
                    uint64_t GetIsCdn() const;

                    /**
                     * 设置waf前是否部署有七层代理服务。
0：没有部署代理服务
1：有部署代理服务，waf将使用XFF获取客户端IP
2：有部署代理服务，waf将使用remote_addr获取客户端IP
3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     * @param _isCdn waf前是否部署有七层代理服务。
0：没有部署代理服务
1：有部署代理服务，waf将使用XFF获取客户端IP
2：有部署代理服务，waf将使用remote_addr获取客户端IP
3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
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
                     * 获取是否开启灰度，已废弃。
                     * @return IsGray 是否开启灰度，已废弃。
                     * 
                     */
                    uint64_t GetIsGray() const;

                    /**
                     * 设置是否开启灰度，已废弃。
                     * @param _isGray 是否开启灰度，已废弃。
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
                     * 获取是否开启HTTP2，需要开启HTTPS协议支持。
0：关闭
1：开启
                     * @return IsHttp2 是否开启HTTP2，需要开启HTTPS协议支持。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetIsHttp2() const;

                    /**
                     * 设置是否开启HTTP2，需要开启HTTPS协议支持。
0：关闭
1：开启
                     * @param _isHttp2 是否开启HTTP2，需要开启HTTPS协议支持。
0：关闭
1：开启
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
                     * 获取是否开启WebSocket支持。
0：关闭
1：开启
                     * @return IsWebsocket 是否开启WebSocket支持。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetIsWebsocket() const;

                    /**
                     * 设置是否开启WebSocket支持。
0：关闭
1：开启
                     * @param _isWebsocket 是否开启WebSocket支持。
0：关闭
1：开启
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
                     * 获取回源负载均衡策略。
0：轮询
1：IP hash
2：加权轮询
                     * @return LoadBalance 回源负载均衡策略。
0：轮询
1：IP hash
2：加权轮询
                     * 
                     */
                    uint64_t GetLoadBalance() const;

                    /**
                     * 设置回源负载均衡策略。
0：轮询
1：IP hash
2：加权轮询
                     * @param _loadBalance 回源负载均衡策略。
0：轮询
1：IP hash
2：加权轮询
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
                     * 获取防护模式。
0：观察模式
1：拦截模式
                     * @return Mode 防护模式。
0：观察模式
1：拦截模式
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置防护模式。
0：观察模式
1：拦截模式
                     * @param _mode 防护模式。
0：观察模式
1：拦截模式
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
                     * 获取自有证书的私钥
                     * @return PrivateKey 自有证书的私钥
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置自有证书的私钥
                     * @param _privateKey 自有证书的私钥
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
                     * 获取CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @return SSLId CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    std::string GetSSLId() const;

                    /**
                     * 设置CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @param _sSLId CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
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
                     * 获取域名回源时的回源域名。UpstreamType为1时，需要填充此字段
                     * @return UpstreamDomain 域名回源时的回源域名。UpstreamType为1时，需要填充此字段
                     * 
                     */
                    std::string GetUpstreamDomain() const;

                    /**
                     * 设置域名回源时的回源域名。UpstreamType为1时，需要填充此字段
                     * @param _upstreamDomain 域名回源时的回源域名。UpstreamType为1时，需要填充此字段
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
                     * 获取回源类型。
0：通过IP回源
1：通过域名回源
                     * @return UpstreamType 回源类型。
0：通过IP回源
1：通过域名回源
                     * 
                     */
                    uint64_t GetUpstreamType() const;

                    /**
                     * 设置回源类型。
0：通过IP回源
1：通过域名回源
                     * @param _upstreamType 回源类型。
0：通过IP回源
1：通过域名回源
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
                     * 获取IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段
                     * @return SrcList IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段
                     * 
                     */
                    std::vector<std::string> GetSrcList() const;

                    /**
                     * 设置IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段
                     * @param _srcList IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段
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
                     * 获取域名端口配置
                     * @return Ports 域名端口配置
                     * 
                     */
                    std::vector<PortInfo> GetPorts() const;

                    /**
                     * 设置域名端口配置
                     * @param _ports 域名端口配置
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
                     * 获取证书类型。
0：仅配置HTTP监听端口，没有证书
1：证书来源为自有证书
2：证书来源为托管证书
                     * @return CertType 证书类型。
0：仅配置HTTP监听端口，没有证书
1：证书来源为自有证书
2：证书来源为托管证书
                     * 
                     */
                    uint64_t GetCertType() const;

                    /**
                     * 设置证书类型。
0：仅配置HTTP监听端口，没有证书
1：证书来源为自有证书
2：证书来源为托管证书
                     * @param _certType 证书类型。
0：仅配置HTTP监听端口，没有证书
1：证书来源为自有证书
2：证书来源为托管证书
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
                     * 获取服务配置有HTTPS端口时，HTTPS的回源协议。
http：使用http协议回源，和HttpsUpstreamPort配合使用
https：使用https协议回源
                     * @return UpstreamScheme 服务配置有HTTPS端口时，HTTPS的回源协议。
http：使用http协议回源，和HttpsUpstreamPort配合使用
https：使用https协议回源
                     * 
                     */
                    std::string GetUpstreamScheme() const;

                    /**
                     * 设置服务配置有HTTPS端口时，HTTPS的回源协议。
http：使用http协议回源，和HttpsUpstreamPort配合使用
https：使用https协议回源
                     * @param _upstreamScheme 服务配置有HTTPS端口时，HTTPS的回源协议。
http：使用http协议回源，和HttpsUpstreamPort配合使用
https：使用https协议回源
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
                     * 获取日志包是否开启。
0：关闭
1：开启
                     * @return Cls 日志包是否开启。
0：关闭
1：开启
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置日志包是否开启。
0：关闭
1：开启
                     * @param _cls 日志包是否开启。
0：关闭
1：开启
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
                     * 获取接入Cname，SaaS型域名使用此Cname进行接入
                     * @return Cname 接入Cname，SaaS型域名使用此Cname进行接入
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置接入Cname，SaaS型域名使用此Cname进行接入
                     * @param _cname 接入Cname，SaaS型域名使用此Cname进行接入
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
                     * 获取是否开启长连接。
0： 短连接
1： 长连接
                     * @return IsKeepAlive 是否开启长连接。
0： 短连接
1： 长连接
                     * 
                     */
                    uint64_t GetIsKeepAlive() const;

                    /**
                     * 设置是否开启长连接。
0： 短连接
1： 长连接
                     * @param _isKeepAlive 是否开启长连接。
0： 短连接
1： 长连接
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
                     * 获取是否开启主动健康检测。
0：不开启
1：开启
                     * @return ActiveCheck 是否开启主动健康检测。
0：不开启
1：开启
                     * 
                     */
                    uint64_t GetActiveCheck() const;

                    /**
                     * 设置是否开启主动健康检测。
0：不开启
1：开启
                     * @param _activeCheck 是否开启主动健康检测。
0：不开启
1：开启
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
                     * @return TLSVersion TLS版本信息
                     * 
                     */
                    int64_t GetTLSVersion() const;

                    /**
                     * 设置TLS版本信息
                     * @param _tLSVersion TLS版本信息
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
                     * 获取自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。
                     * @return Ciphers 自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。
                     * 
                     */
                    std::vector<int64_t> GetCiphers() const;

                    /**
                     * 设置自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。
                     * @param _ciphers 自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。
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
                     * 获取加密套件模板。
0：不支持选择，使用默认模板  
1：通用型模板 
2：安全型模板
3：自定义模板
                     * @return CipherTemplate 加密套件模板。
0：不支持选择，使用默认模板  
1：通用型模板 
2：安全型模板
3：自定义模板
                     * 
                     */
                    int64_t GetCipherTemplate() const;

                    /**
                     * 设置加密套件模板。
0：不支持选择，使用默认模板  
1：通用型模板 
2：安全型模板
3：自定义模板
                     * @param _cipherTemplate 加密套件模板。
0：不支持选择，使用默认模板  
1：通用型模板 
2：安全型模板
3：自定义模板
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
                     * 获取WAF与源站的读超时时间，默认300s。
                     * @return ProxyReadTimeout WAF与源站的读超时时间，默认300s。
                     * 
                     */
                    int64_t GetProxyReadTimeout() const;

                    /**
                     * 设置WAF与源站的读超时时间，默认300s。
                     * @param _proxyReadTimeout WAF与源站的读超时时间，默认300s。
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
                     * 获取WAF与源站的写超时时间，默认300s。
                     * @return ProxySendTimeout WAF与源站的写超时时间，默认300s。
                     * 
                     */
                    int64_t GetProxySendTimeout() const;

                    /**
                     * 设置WAF与源站的写超时时间，默认300s。
                     * @param _proxySendTimeout WAF与源站的写超时时间，默认300s。
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
                     * 获取WAF回源时的SNI类型。
0：关闭SNI，不配置client_hello中的server_name
1：开启SNI，client_hello中的server_name为防护域名
2：开启SNI，SNI为域名回源时的源站域名
3：开启SNI，SNI为自定义域名
                     * @return SniType WAF回源时的SNI类型。
0：关闭SNI，不配置client_hello中的server_name
1：开启SNI，client_hello中的server_name为防护域名
2：开启SNI，SNI为域名回源时的源站域名
3：开启SNI，SNI为自定义域名
                     * 
                     */
                    int64_t GetSniType() const;

                    /**
                     * 设置WAF回源时的SNI类型。
0：关闭SNI，不配置client_hello中的server_name
1：开启SNI，client_hello中的server_name为防护域名
2：开启SNI，SNI为域名回源时的源站域名
3：开启SNI，SNI为自定义域名
                     * @param _sniType WAF回源时的SNI类型。
0：关闭SNI，不配置client_hello中的server_name
1：开启SNI，client_hello中的server_name为防护域名
2：开启SNI，SNI为域名回源时的源站域名
3：开启SNI，SNI为自定义域名
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
                     * 获取SniType为3时，需要填此参数，表示自定义的SNI；
                     * @return SniHost SniType为3时，需要填此参数，表示自定义的SNI；
                     * 
                     */
                    std::string GetSniHost() const;

                    /**
                     * 设置SniType为3时，需要填此参数，表示自定义的SNI；
                     * @param _sniHost SniType为3时，需要填此参数，表示自定义的SNI；
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
                     * 获取回源IP权重
                     * @return Weights 回源IP权重
                     * 
                     */
                    std::vector<std::string> GetWeights() const;

                    /**
                     * 设置回源IP权重
                     * @param _weights 回源IP权重
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
                     * @return IpHeaders IsCdn=3时，表示自定义header
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，表示自定义header
                     * @param _ipHeaders IsCdn=3时，表示自定义header
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
                     * 获取是否开启XFF重置。
0：关闭
1：开启
                     * @return XFFReset 是否开启XFF重置。
0：关闭
1：开启
                     * 
                     */
                    int64_t GetXFFReset() const;

                    /**
                     * 设置是否开启XFF重置。
0：关闭
1：开启
                     * @param _xFFReset 是否开启XFF重置。
0：关闭
1：开启
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
                     * 获取域名备注信息
                     * @return Note 域名备注信息
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置域名备注信息
                     * @param _note 域名备注信息
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
                     * 获取自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。
                     * @return UpstreamHost 自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。
                     * 
                     */
                    std::string GetUpstreamHost() const;

                    /**
                     * 设置自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。
                     * @param _upstreamHost 自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。
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
                     * 获取防护规则
                     * @return Level 防护规则
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置防护规则
                     * @param _level 防护规则
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
                     * 获取是否开启缓存 0-关闭 1-开启
                     * @return ProxyBuffer 是否开启缓存 0-关闭 1-开启
                     * 
                     */
                    int64_t GetProxyBuffer() const;

                    /**
                     * 设置是否开启缓存 0-关闭 1-开启
                     * @param _proxyBuffer 是否开启缓存 0-关闭 1-开启
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
                     * 获取国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问
                     * @return GmType 国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问
                     * 
                     */
                    int64_t GetGmType() const;

                    /**
                     * 设置国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问
                     * @param _gmType 国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问
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
                     * 获取国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * @return GmCertType 国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * 
                     */
                    int64_t GetGmCertType() const;

                    /**
                     * 设置国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     * @param _gmCertType 国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
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
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * @return GmCert GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * 
                     */
                    std::string GetGmCert() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     * @param _gmCert GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
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
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * @return GmPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * 
                     */
                    std::string GetGmPrivateKey() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     * @param _gmPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
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
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * @return GmEncCert GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * 
                     */
                    std::string GetGmEncCert() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     * @param _gmEncCert GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
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
                     * 获取GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * @return GmEncPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * 
                     */
                    std::string GetGmEncPrivateKey() const;

                    /**
                     * 设置GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     * @param _gmEncPrivateKey GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
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
                     * 获取GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @return GmSSLId GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * 
                     */
                    std::string GetGmSSLId() const;

                    /**
                     * 设置GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     * @param _gmSSLId GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
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
                     * 获取域名标签
                     * @return Labels 域名标签
                     * 
                     */
                    std::vector<std::string> GetLabels() const;

                    /**
                     * 设置域名标签
                     * @param _labels 域名标签
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
                     * 获取拨测状态。 0: 禁用拨测, 1: 启用拨测
                     * @return ProbeStatus 拨测状态。 0: 禁用拨测, 1: 启用拨测
                     * 
                     */
                    int64_t GetProbeStatus() const;

                    /**
                     * 设置拨测状态。 0: 禁用拨测, 1: 启用拨测
                     * @param _probeStatus 拨测状态。 0: 禁用拨测, 1: 启用拨测
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
                     * 获取回源策略。
0：负载均衡回源
1：分流回源
                     * @return UpstreamPolicy 回源策略。
0：负载均衡回源
1：分流回源
                     * 
                     */
                    int64_t GetUpstreamPolicy() const;

                    /**
                     * 设置回源策略。
0：负载均衡回源
1：分流回源
                     * @param _upstreamPolicy 回源策略。
0：负载均衡回源
1：分流回源
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
                     * 获取分流回源策略
                     * @return UpstreamRules 分流回源策略
                     * 
                     */
                    std::vector<UpstreamRule> GetUpstreamRules() const;

                    /**
                     * 设置分流回源策略
                     * @param _upstreamRules 分流回源策略
                     * 
                     */
                    void SetUpstreamRules(const std::vector<UpstreamRule>& _upstreamRules);

                    /**
                     * 判断参数 UpstreamRules 是否已赋值
                     * @return UpstreamRules 是否已赋值
                     * 
                     */
                    bool UpstreamRulesHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名唯一ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名所属实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 域名所属实例类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 域名所属实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 证书
                     */
                    std::string m_cert;
                    bool m_certHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 规则引擎和AI引擎防护模式联合状态。
1:初始状态,规则引擎拦截&&AI引擎未操作开关状态
10：规则引擎观察&&AI引擎关闭模式 
11：规则引擎观察&&AI引擎观察模式 
12：规则引擎观察&&AI引擎拦截模式 
20：规则引擎拦截&&AI引擎关闭模式 
21：规则引擎拦截&&AI引擎观察模式 
22：规则引擎拦截&&AI引擎拦截模式
                     */
                    uint64_t m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 是否开启HTTP强制跳转到HTTPS。
0：不强制跳转
1：开启强制跳转
                     */
                    uint64_t m_httpsRewrite;
                    bool m_httpsRewriteHasBeenSet;

                    /**
                     * HTTPS回源端口
                     */
                    std::string m_httpsUpstreamPort;
                    bool m_httpsUpstreamPortHasBeenSet;

                    /**
                     * waf前是否部署有七层代理服务。
0：没有部署代理服务
1：有部署代理服务，waf将使用XFF获取客户端IP
2：有部署代理服务，waf将使用remote_addr获取客户端IP
3：有部署代理服务，waf将使用ip_headers中的自定义header获取客户端IP
                     */
                    uint64_t m_isCdn;
                    bool m_isCdnHasBeenSet;

                    /**
                     * 是否开启灰度，已废弃。
                     */
                    uint64_t m_isGray;
                    bool m_isGrayHasBeenSet;

                    /**
                     * 是否开启HTTP2，需要开启HTTPS协议支持。
0：关闭
1：开启
                     */
                    uint64_t m_isHttp2;
                    bool m_isHttp2HasBeenSet;

                    /**
                     * 是否开启WebSocket支持。
0：关闭
1：开启
                     */
                    uint64_t m_isWebsocket;
                    bool m_isWebsocketHasBeenSet;

                    /**
                     * 回源负载均衡策略。
0：轮询
1：IP hash
2：加权轮询
                     */
                    uint64_t m_loadBalance;
                    bool m_loadBalanceHasBeenSet;

                    /**
                     * 防护模式。
0：观察模式
1：拦截模式
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 自有证书的私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * CertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     */
                    std::string m_sSLId;
                    bool m_sSLIdHasBeenSet;

                    /**
                     * 域名回源时的回源域名。UpstreamType为1时，需要填充此字段
                     */
                    std::string m_upstreamDomain;
                    bool m_upstreamDomainHasBeenSet;

                    /**
                     * 回源类型。
0：通过IP回源
1：通过域名回源
                     */
                    uint64_t m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * IP回源时的回源IP列表。UpstreamType为0时，需要填充此字段
                     */
                    std::vector<std::string> m_srcList;
                    bool m_srcListHasBeenSet;

                    /**
                     * 域名端口配置
                     */
                    std::vector<PortInfo> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 证书类型。
0：仅配置HTTP监听端口，没有证书
1：证书来源为自有证书
2：证书来源为托管证书
                     */
                    uint64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 服务配置有HTTPS端口时，HTTPS的回源协议。
http：使用http协议回源，和HttpsUpstreamPort配合使用
https：使用https协议回源
                     */
                    std::string m_upstreamScheme;
                    bool m_upstreamSchemeHasBeenSet;

                    /**
                     * 日志包是否开启。
0：关闭
1：开启
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * 接入Cname，SaaS型域名使用此Cname进行接入
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 是否开启长连接。
0： 短连接
1： 长连接
                     */
                    uint64_t m_isKeepAlive;
                    bool m_isKeepAliveHasBeenSet;

                    /**
                     * 是否开启主动健康检测。
0：不开启
1：开启
                     */
                    uint64_t m_activeCheck;
                    bool m_activeCheckHasBeenSet;

                    /**
                     * TLS版本信息
                     */
                    int64_t m_tLSVersion;
                    bool m_tLSVersionHasBeenSet;

                    /**
                     * 自定义的加密套件列表。CipherTemplate为3时需要填此字段，表示自定义的加密套件，值通过DescribeCiphersDetail接口获取。
                     */
                    std::vector<int64_t> m_ciphers;
                    bool m_ciphersHasBeenSet;

                    /**
                     * 加密套件模板。
0：不支持选择，使用默认模板  
1：通用型模板 
2：安全型模板
3：自定义模板
                     */
                    int64_t m_cipherTemplate;
                    bool m_cipherTemplateHasBeenSet;

                    /**
                     * WAF与源站的读超时时间，默认300s。
                     */
                    int64_t m_proxyReadTimeout;
                    bool m_proxyReadTimeoutHasBeenSet;

                    /**
                     * WAF与源站的写超时时间，默认300s。
                     */
                    int64_t m_proxySendTimeout;
                    bool m_proxySendTimeoutHasBeenSet;

                    /**
                     * WAF回源时的SNI类型。
0：关闭SNI，不配置client_hello中的server_name
1：开启SNI，client_hello中的server_name为防护域名
2：开启SNI，SNI为域名回源时的源站域名
3：开启SNI，SNI为自定义域名
                     */
                    int64_t m_sniType;
                    bool m_sniTypeHasBeenSet;

                    /**
                     * SniType为3时，需要填此参数，表示自定义的SNI；
                     */
                    std::string m_sniHost;
                    bool m_sniHostHasBeenSet;

                    /**
                     * 回源IP权重
                     */
                    std::vector<std::string> m_weights;
                    bool m_weightsHasBeenSet;

                    /**
                     * IsCdn=3时，表示自定义header
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * 是否开启XFF重置。
0：关闭
1：开启
                     */
                    int64_t m_xFFReset;
                    bool m_xFFResetHasBeenSet;

                    /**
                     * 域名备注信息
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 自定义回源Host。默认为空字符串，表示使用防护域名作为回源Host。
                     */
                    std::string m_upstreamHost;
                    bool m_upstreamHostHasBeenSet;

                    /**
                     * 防护规则
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 是否开启缓存 0-关闭 1-开启
                     */
                    int64_t m_proxyBuffer;
                    bool m_proxyBufferHasBeenSet;

                    /**
                     * 国密选项。0：不开启国密 1：在原有TLS选项的基础上追加支持国密 2：开启国密并仅支持国密客户端访问
                     */
                    int64_t m_gmType;
                    bool m_gmTypeHasBeenSet;

                    /**
                     * 国密证书类型。0：无国密证书 1：证书来源为自有国密证书 2：证书来源为托管国密证书
                     */
                    int64_t m_gmCertType;
                    bool m_gmCertTypeHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的证书链
                     */
                    std::string m_gmCert;
                    bool m_gmCertHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的私钥
                     */
                    std::string m_gmPrivateKey;
                    bool m_gmPrivateKeyHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书
                     */
                    std::string m_gmEncCert;
                    bool m_gmEncCertHasBeenSet;

                    /**
                     * GmCertType为1时，需要填充此参数，表示自有国密证书的加密证书的私钥
                     */
                    std::string m_gmEncPrivateKey;
                    bool m_gmEncPrivateKeyHasBeenSet;

                    /**
                     * GmCertType为2时，需要填充此参数，表示腾讯云SSL平台托管的证书id
                     */
                    std::string m_gmSSLId;
                    bool m_gmSSLIdHasBeenSet;

                    /**
                     * 域名标签
                     */
                    std::vector<std::string> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 拨测状态。 0: 禁用拨测, 1: 启用拨测
                     */
                    int64_t m_probeStatus;
                    bool m_probeStatusHasBeenSet;

                    /**
                     * 回源策略。
0：负载均衡回源
1：分流回源
                     */
                    int64_t m_upstreamPolicy;
                    bool m_upstreamPolicyHasBeenSet;

                    /**
                     * 分流回源策略
                     */
                    std::vector<UpstreamRule> m_upstreamRules;
                    bool m_upstreamRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DOMAINSPARTINFO_H_
