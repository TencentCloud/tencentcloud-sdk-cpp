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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>
#include <tencentcloud/teo/v20220901/model/MutualTLS.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyHostsCertificate请求参数结构体
                */
                class ModifyHostsCertificateRequest : public AbstractModel
                {
                public:
                    ModifyHostsCertificateRequest();
                    ~ModifyHostsCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取需要修改证书配置的加速域名。
                     * @return Hosts 需要修改证书配置的加速域名。
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置需要修改证书配置的加速域名。
                     * @param _hosts 需要修改证书配置的加速域名。
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取配置服务端证书的模式，取值有：
<li>disable：不配置服务端证书；</li>
<li>eofreecert：配置 EdgeOne 免费服务端证书；</li>
<li>sslcert：配置 SSL 托管服务端证书；</li>
不填写表示服务端证书保持原有配置。
                     * @return Mode 配置服务端证书的模式，取值有：
<li>disable：不配置服务端证书；</li>
<li>eofreecert：配置 EdgeOne 免费服务端证书；</li>
<li>sslcert：配置 SSL 托管服务端证书；</li>
不填写表示服务端证书保持原有配置。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置配置服务端证书的模式，取值有：
<li>disable：不配置服务端证书；</li>
<li>eofreecert：配置 EdgeOne 免费服务端证书；</li>
<li>sslcert：配置 SSL 托管服务端证书；</li>
不填写表示服务端证书保持原有配置。
                     * @param _mode 配置服务端证书的模式，取值有：
<li>disable：不配置服务端证书；</li>
<li>eofreecert：配置 EdgeOne 免费服务端证书；</li>
<li>sslcert：配置 SSL 托管服务端证书；</li>
不填写表示服务端证书保持原有配置。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取SSL 证书配置，本参数仅在 mode 为 sslcert 时生效，传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @return ServerCertInfo SSL 证书配置，本参数仅在 mode 为 sslcert 时生效，传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    std::vector<ServerCertInfo> GetServerCertInfo() const;

                    /**
                     * 设置SSL 证书配置，本参数仅在 mode 为 sslcert 时生效，传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @param _serverCertInfo SSL 证书配置，本参数仅在 mode 为 sslcert 时生效，传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    void SetServerCertInfo(const std::vector<ServerCertInfo>& _serverCertInfo);

                    /**
                     * 判断参数 ServerCertInfo 是否已赋值
                     * @return ServerCertInfo 是否已赋值
                     * 
                     */
                    bool ServerCertInfoHasBeenSet() const;

                    /**
                     * 获取托管类型，取值有：
<li>none：不托管EO；</li>
<li>apply：托管EO</li>
不填，默认取值为none。
                     * @return ApplyType 托管类型，取值有：
<li>none：不托管EO；</li>
<li>apply：托管EO</li>
不填，默认取值为none。
                     * @deprecated
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置托管类型，取值有：
<li>none：不托管EO；</li>
<li>apply：托管EO</li>
不填，默认取值为none。
                     * @param _applyType 托管类型，取值有：
<li>none：不托管EO；</li>
<li>apply：托管EO</li>
不填，默认取值为none。
                     * @deprecated
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * @deprecated
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于客户端对 EO 节点进行认证。默认关闭，不填写表示保持原有配置。
                     * @return ClientCertInfo 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于客户端对 EO 节点进行认证。默认关闭，不填写表示保持原有配置。
                     * 
                     */
                    MutualTLS GetClientCertInfo() const;

                    /**
                     * 设置在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于客户端对 EO 节点进行认证。默认关闭，不填写表示保持原有配置。
                     * @param _clientCertInfo 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于客户端对 EO 节点进行认证。默认关闭，不填写表示保持原有配置。
                     * 
                     */
                    void SetClientCertInfo(const MutualTLS& _clientCertInfo);

                    /**
                     * 判断参数 ClientCertInfo 是否已赋值
                     * @return ClientCertInfo 是否已赋值
                     * 
                     */
                    bool ClientCertInfoHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 需要修改证书配置的加速域名。
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 配置服务端证书的模式，取值有：
<li>disable：不配置服务端证书；</li>
<li>eofreecert：配置 EdgeOne 免费服务端证书；</li>
<li>sslcert：配置 SSL 托管服务端证书；</li>
不填写表示服务端证书保持原有配置。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * SSL 证书配置，本参数仅在 mode 为 sslcert 时生效，传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     */
                    std::vector<ServerCertInfo> m_serverCertInfo;
                    bool m_serverCertInfoHasBeenSet;

                    /**
                     * 托管类型，取值有：
<li>none：不托管EO；</li>
<li>apply：托管EO</li>
不填，默认取值为none。
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于客户端对 EO 节点进行认证。默认关闭，不填写表示保持原有配置。
                     */
                    MutualTLS m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
