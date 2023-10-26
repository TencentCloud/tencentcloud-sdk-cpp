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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_

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
                * ModifyAccelerationDomain请求参数结构体
                */
                class ModifyAccelerationDomainRequest : public AbstractModel
                {
                public:
                    ModifyAccelerationDomainRequest();
                    ~ModifyAccelerationDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点ID。
                     * @return ZoneId 加速域名所属站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点ID。
                     * @param _zoneId 加速域名所属站点ID。
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
                     * 获取加速域名名称。
                     * @return DomainName 加速域名名称。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置加速域名名称。
                     * @param _domainName 加速域名名称。
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
<li>FOLLOW: 协议跟随；</li>
<li>HTTP: HTTP协议回源；</li>
<li>HTTPS: HTTPS协议回源。</li>
<li>不填保持原有配置。</li>
                     * @return OriginProtocol 回源协议，取值有：
<li>FOLLOW: 协议跟随；</li>
<li>HTTP: HTTP协议回源；</li>
<li>HTTPS: HTTPS协议回源。</li>
<li>不填保持原有配置。</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置回源协议，取值有：
<li>FOLLOW: 协议跟随；</li>
<li>HTTP: HTTP协议回源；</li>
<li>HTTPS: HTTPS协议回源。</li>
<li>不填保持原有配置。</li>
                     * @param _originProtocol 回源协议，取值有：
<li>FOLLOW: 协议跟随；</li>
<li>HTTP: HTTP协议回源；</li>
<li>HTTPS: HTTPS协议回源。</li>
<li>不填保持原有配置。</li>
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
                     * 获取HTTP回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTP时生效, 不填保持原有配置。
                     * @return HttpOriginPort HTTP回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTP时生效, 不填保持原有配置。
                     * 
                     */
                    uint64_t GetHttpOriginPort() const;

                    /**
                     * 设置HTTP回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTP时生效, 不填保持原有配置。
                     * @param _httpOriginPort HTTP回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTP时生效, 不填保持原有配置。
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
                     * 获取HTTPS回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTPS时生效，不填保持原有配置。
                     * @return HttpsOriginPort HTTPS回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTPS时生效，不填保持原有配置。
                     * 
                     */
                    uint64_t GetHttpsOriginPort() const;

                    /**
                     * 设置HTTPS回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTPS时生效，不填保持原有配置。
                     * @param _httpsOriginPort HTTPS回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTPS时生效，不填保持原有配置。
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
                     * 获取IPv6状态，取值有：
<li>follow：遵循站点IPv6配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>
<li>不填保持原有配置。</li>
                     * @return IPv6Status IPv6状态，取值有：
<li>follow：遵循站点IPv6配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>
<li>不填保持原有配置。</li>
                     * 
                     */
                    std::string GetIPv6Status() const;

                    /**
                     * 设置IPv6状态，取值有：
<li>follow：遵循站点IPv6配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>
<li>不填保持原有配置。</li>
                     * @param _iPv6Status IPv6状态，取值有：
<li>follow：遵循站点IPv6配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>
<li>不填保持原有配置。</li>
                     * 
                     */
                    void SetIPv6Status(const std::string& _iPv6Status);

                    /**
                     * 判断参数 IPv6Status 是否已赋值
                     * @return IPv6Status 是否已赋值
                     * 
                     */
                    bool IPv6StatusHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速域名名称。
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
<li>FOLLOW: 协议跟随；</li>
<li>HTTP: HTTP协议回源；</li>
<li>HTTPS: HTTPS协议回源。</li>
<li>不填保持原有配置。</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTP时生效, 不填保持原有配置。
                     */
                    uint64_t m_httpOriginPort;
                    bool m_httpOriginPortHasBeenSet;

                    /**
                     * HTTPS回源端口，取值为1-65535，当OriginProtocol=FOLLOW/HTTPS时生效，不填保持原有配置。
                     */
                    uint64_t m_httpsOriginPort;
                    bool m_httpsOriginPortHasBeenSet;

                    /**
                     * IPv6状态，取值有：
<li>follow：遵循站点IPv6配置；</li>
<li>on：开启状态；</li>
<li>off：关闭状态。</li>
<li>不填保持原有配置。</li>
                     */
                    std::string m_iPv6Status;
                    bool m_iPv6StatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYACCELERATIONDOMAINREQUEST_H_
