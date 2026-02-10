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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAccelerationDomain请求参数结构体
                */
                class CreateAccelerationDomainRequest : public AbstractModel
                {
                public:
                    CreateAccelerationDomainRequest();
                    ~CreateAccelerationDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点 ID。
                     * @return ZoneId 加速域名所属站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点 ID。
                     * @param _zoneId 加速域名所属站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取加速域名。
                     * @return DomainName 加速域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置加速域名。
                     * @param _domainName 加速域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取源站信息。
                     * @return OriginInfo 源站信息。
                     * 
                     */
                    OriginInfo GetOriginInfo() const;

                    /**
                     * 设置源站信息。
                     * @param _originInfo 源站信息。
                     * 
                     */
                    void SetOriginInfo(const OriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取回源协议，取值有：
<li>FOLLOW：协议跟随；</li>
<li>HTTP：HTTP 协议回源；</li>
<li>HTTPS：HTTPS 协议回源。</li>不填默认为：FOLLOW。
                     * @return OriginProtocol 回源协议，取值有：
<li>FOLLOW：协议跟随；</li>
<li>HTTP：HTTP 协议回源；</li>
<li>HTTPS：HTTPS 协议回源。</li>不填默认为：FOLLOW。
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置回源协议，取值有：
<li>FOLLOW：协议跟随；</li>
<li>HTTP：HTTP 协议回源；</li>
<li>HTTPS：HTTPS 协议回源。</li>不填默认为：FOLLOW。
                     * @param _originProtocol 回源协议，取值有：
<li>FOLLOW：协议跟随；</li>
<li>HTTP：HTTP 协议回源；</li>
<li>HTTPS：HTTPS 协议回源。</li>不填默认为：FOLLOW。
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP 回源端口，默认值80，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTP 时生效。
                     * @return HttpOriginPort HTTP 回源端口，默认值80，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTP 时生效。
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置HTTP 回源端口，默认值80，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTP 时生效。
                     * @param _httpOriginPort HTTP 回源端口，默认值80，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTP 时生效。
                     * 
                     */
                    void SetHttpOriginPort(const uint64_t& _httpOriginPort);

                    /**
                     * 判断参数 HttpOriginPort 是否已赋值
                     * @return HttpOriginPort 是否已赋值
                     * 
                     */
                    bool HttpOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS 回源端口，默认值443，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTPS 时生效。
                     * @return HttpsOriginPort HTTPS 回源端口，默认值443，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTPS 时生效。
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置HTTPS 回源端口，默认值443，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTPS 时生效。
                     * @param _httpsOriginPort HTTPS 回源端口，默认值443，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTPS 时生效。
                     * 
                     */
                    void SetHttpsOriginPort(const uint64_t& _httpsOriginPort);

                    /**
                     * 判断参数 HttpsOriginPort 是否已赋值
                     * @return HttpsOriginPort 是否已赋值
                     * 
                     */
                    bool HttpsOriginPortHasBeenSet() const;

                    /**
                     * 获取IPv6 状态，取值有：
<li>follow：遵循站点 IPv6 配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>不填默认为：follow。
                     * @return IPv6Status IPv6 状态，取值有：
<li>follow：遵循站点 IPv6 配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>不填默认为：follow。
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6 状态，取值有：
<li>follow：遵循站点 IPv6 配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>不填默认为：follow。
                     * @param _iPv6Status IPv6 状态，取值有：
<li>follow：遵循站点 IPv6 配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>不填默认为：follow。
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                    /**
                     * 获取指定域名绑定的共享 CNAME 地址，不传时使用默认 CNAME。
绑定共享 CNAME 要求所有域名的调度策略保持一致，以下配置将影响调度策略，在不一致时绑定共享 CNAME 将按照以下方式处理：
- IPv6 访问：不允许创建域名，请修改 IPv6Status 已保持与共享 CNAME 绑定的其余域名配置一致；
- DDoS 防护：如果选择的共享 CNAME 已启用 DDoS 防护，则创建域名时，将默认为该域名启用 DDoS 防护。
- 中国大陆网络优化（国际加速）：不允许创建域名，请保持当前域名的中国大陆网络优化（国际加速）配置与共享 CNAME 绑定的其余域名一致后重试。

注：共享 CNAME 当前仍在内测中，如需使用，请联系我们开通。
                     * @return SharedCNAME 指定域名绑定的共享 CNAME 地址，不传时使用默认 CNAME。
绑定共享 CNAME 要求所有域名的调度策略保持一致，以下配置将影响调度策略，在不一致时绑定共享 CNAME 将按照以下方式处理：
- IPv6 访问：不允许创建域名，请修改 IPv6Status 已保持与共享 CNAME 绑定的其余域名配置一致；
- DDoS 防护：如果选择的共享 CNAME 已启用 DDoS 防护，则创建域名时，将默认为该域名启用 DDoS 防护。
- 中国大陆网络优化（国际加速）：不允许创建域名，请保持当前域名的中国大陆网络优化（国际加速）配置与共享 CNAME 绑定的其余域名一致后重试。

注：共享 CNAME 当前仍在内测中，如需使用，请联系我们开通。
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置指定域名绑定的共享 CNAME 地址，不传时使用默认 CNAME。
绑定共享 CNAME 要求所有域名的调度策略保持一致，以下配置将影响调度策略，在不一致时绑定共享 CNAME 将按照以下方式处理：
- IPv6 访问：不允许创建域名，请修改 IPv6Status 已保持与共享 CNAME 绑定的其余域名配置一致；
- DDoS 防护：如果选择的共享 CNAME 已启用 DDoS 防护，则创建域名时，将默认为该域名启用 DDoS 防护。
- 中国大陆网络优化（国际加速）：不允许创建域名，请保持当前域名的中国大陆网络优化（国际加速）配置与共享 CNAME 绑定的其余域名一致后重试。

注：共享 CNAME 当前仍在内测中，如需使用，请联系我们开通。
                     * @param _sharedCNAME 指定域名绑定的共享 CNAME 地址，不传时使用默认 CNAME。
绑定共享 CNAME 要求所有域名的调度策略保持一致，以下配置将影响调度策略，在不一致时绑定共享 CNAME 将按照以下方式处理：
- IPv6 访问：不允许创建域名，请修改 IPv6Status 已保持与共享 CNAME 绑定的其余域名配置一致；
- DDoS 防护：如果选择的共享 CNAME 已启用 DDoS 防护，则创建域名时，将默认为该域名启用 DDoS 防护。
- 中国大陆网络优化（国际加速）：不允许创建域名，请保持当前域名的中国大陆网络优化（国际加速）配置与共享 CNAME 绑定的其余域名一致后重试。

注：共享 CNAME 当前仍在内测中，如需使用，请联系我们开通。
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 源站信息。
                     */
                    OriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * 回源协议，取值有：
<li>FOLLOW：协议跟随；</li>
<li>HTTP：HTTP 协议回源；</li>
<li>HTTPS：HTTPS 协议回源。</li>不填默认为：FOLLOW。
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP 回源端口，默认值80，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTP 时生效。
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * HTTPS 回源端口，默认值443，取值：1～65535。
当 OriginProtocol = FOLLOW 或 HTTPS 时生效。
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6 状态，取值有：
<li>follow：遵循站点 IPv6 配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>不填默认为：follow。
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                    /**
                     * 指定域名绑定的共享 CNAME 地址，不传时使用默认 CNAME。
绑定共享 CNAME 要求所有域名的调度策略保持一致，以下配置将影响调度策略，在不一致时绑定共享 CNAME 将按照以下方式处理：
- IPv6 访问：不允许创建域名，请修改 IPv6Status 已保持与共享 CNAME 绑定的其余域名配置一致；
- DDoS 防护：如果选择的共享 CNAME 已启用 DDoS 防护，则创建域名时，将默认为该域名启用 DDoS 防护。
- 中国大陆网络优化（国际加速）：不允许创建域名，请保持当前域名的中国大陆网络优化（国际加速）配置与共享 CNAME 绑定的其余域名一致后重试。

注：共享 CNAME 当前仍在内测中，如需使用，请联系我们开通。
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
