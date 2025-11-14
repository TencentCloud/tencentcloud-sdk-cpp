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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>
#include <tencentcloud/teo/v20220901/model/MutualTLS.h>
#include <tencentcloud/teo/v20220901/model/UpstreamCertInfo.h>


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
<ul><li>disable：不配置服务端证书；</li>
<li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437)

- 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。
- 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口获取申请失败原因。</li>
</ul><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://cloud.tencent.com/document/product/1552/124807'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li>
<ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li>
</ul><li>sslcert：配置 SSL 托管服务端证书。</li>
                     * @return Mode 配置服务端证书的模式，取值有：
<ul><li>disable：不配置服务端证书；</li>
<li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437)

- 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。
- 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口获取申请失败原因。</li>
</ul><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://cloud.tencent.com/document/product/1552/124807'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li>
<ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li>
</ul><li>sslcert：配置 SSL 托管服务端证书。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置配置服务端证书的模式，取值有：
<ul><li>disable：不配置服务端证书；</li>
<li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437)

- 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。
- 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口获取申请失败原因。</li>
</ul><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://cloud.tencent.com/document/product/1552/124807'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li>
<ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li>
</ul><li>sslcert：配置 SSL 托管服务端证书。</li>
                     * @param _mode 配置服务端证书的模式，取值有：
<ul><li>disable：不配置服务端证书；</li>
<li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437)

- 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。
- 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口获取申请失败原因。</li>
</ul><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://cloud.tencent.com/document/product/1552/124807'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li>
<ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li>
</ul><li>sslcert：配置 SSL 托管服务端证书。</li>
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

                    /**
                     * 获取用于分别开启/关闭回源双向认证和源站证书校验。默认关闭，不填写表示保持原有配置。回源双向认证配置当前为白名单内侧中，如需使用，请[联系我们](https://cloud.tencent.com/online-service)。
                     * @return UpstreamCertInfo 用于分别开启/关闭回源双向认证和源站证书校验。默认关闭，不填写表示保持原有配置。回源双向认证配置当前为白名单内侧中，如需使用，请[联系我们](https://cloud.tencent.com/online-service)。
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置用于分别开启/关闭回源双向认证和源站证书校验。默认关闭，不填写表示保持原有配置。回源双向认证配置当前为白名单内侧中，如需使用，请[联系我们](https://cloud.tencent.com/online-service)。
                     * @param _upstreamCertInfo 用于分别开启/关闭回源双向认证和源站证书校验。默认关闭，不填写表示保持原有配置。回源双向认证配置当前为白名单内侧中，如需使用，请[联系我们](https://cloud.tencent.com/online-service)。
                     * 
                     */
                    void SetUpstreamCertInfo(const UpstreamCertInfo& _upstreamCertInfo);

                    /**
                     * 判断参数 UpstreamCertInfo 是否已赋值
                     * @return UpstreamCertInfo 是否已赋值
                     * 
                     */
                    bool UpstreamCertInfoHasBeenSet() const;

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
<ul><li>disable：不配置服务端证书；</li>
<li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437)

- 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。
- 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口获取申请失败原因。</li>
</ul><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://cloud.tencent.com/document/product/1552/124807'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li>
<ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://cloud.tencent.com/document/product/1552/124806'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li>
</ul><li>sslcert：配置 SSL 托管服务端证书。</li>
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

                    /**
                     * 用于分别开启/关闭回源双向认证和源站证书校验。默认关闭，不填写表示保持原有配置。回源双向认证配置当前为白名单内侧中，如需使用，请[联系我们](https://cloud.tencent.com/online-service)。
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYHOSTSCERTIFICATEREQUEST_H_
