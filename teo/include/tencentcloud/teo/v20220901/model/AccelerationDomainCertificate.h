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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>
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
                * 加速域名所对应的证书信息。
                */
                class AccelerationDomainCertificate : public AbstractModel
                {
                public:
                    AccelerationDomainCertificate();
                    ~AccelerationDomainCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置服务端证书的模式，取值有： <ul><li>disable：不配置服务端证书；</li> <li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437) - 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。 - 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口获取申请失败原因。</li><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://tcloud4api.woa.com/document/product/1657/927322?!preview&!document=1'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li> <ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li> </ul> <li>sslcert：配置 SSL 托管服务端证书。</li></ul>
                     * @return Mode 配置服务端证书的模式，取值有： <ul><li>disable：不配置服务端证书；</li> <li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437) - 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。 - 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口获取申请失败原因。</li><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://tcloud4api.woa.com/document/product/1657/927322?!preview&!document=1'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li> <ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li> </ul> <li>sslcert：配置 SSL 托管服务端证书。</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置配置服务端证书的模式，取值有： <ul><li>disable：不配置服务端证书；</li> <li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437) - 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。 - 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口获取申请失败原因。</li><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://tcloud4api.woa.com/document/product/1657/927322?!preview&!document=1'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li> <ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li> </ul> <li>sslcert：配置 SSL 托管服务端证书。</li></ul>
                     * @param _mode 配置服务端证书的模式，取值有： <ul><li>disable：不配置服务端证书；</li> <li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437) - 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。 - 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口获取申请失败原因。</li><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://tcloud4api.woa.com/document/product/1657/927322?!preview&!document=1'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li> <ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li> </ul> <li>sslcert：配置 SSL 托管服务端证书。</li></ul>
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
                     * 获取服务端证书列表，相关证书部署在 EO 的入口侧。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 服务端证书列表，相关证书部署在 EO 的入口侧。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CertificateInfo> GetList() const;

                    /**
                     * 设置服务端证书列表，相关证书部署在 EO 的入口侧。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 服务端证书列表，相关证书部署在 EO 的入口侧。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<CertificateInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于 EO 节点认证客户端证书。
                     * @return ClientCertInfo 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于 EO 节点认证客户端证书。
                     * 
                     */
                    MutualTLS GetClientCertInfo() const;

                    /**
                     * 设置在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于 EO 节点认证客户端证书。
                     * @param _clientCertInfo 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于 EO 节点认证客户端证书。
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
                     * 获取用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
                     * @return UpstreamCertInfo 用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
                     * 
                     */
                    UpstreamCertInfo GetUpstreamCertInfo() const;

                    /**
                     * 设置用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
                     * @param _upstreamCertInfo 用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
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
                     * 配置服务端证书的模式，取值有： <ul><li>disable：不配置服务端证书；</li> <li>eofreecert：通过自动验证申请免费证书并部署。验证方式详见：[申请免费证书支持的验证方式](https://cloud.tencent.com/document/product/1552/90437) - 在 NS 或者 DNSPod 托管接入模式下，仅支持自动验证的方式申请免费证书。 - 当免费证书申请失败时会导致证书部署失败，您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口获取申请失败原因。</li><li>eofreecert_manual：部署 DNS 委派验证或者文件验证申请的免费证书。在部署免费证书前，您需要触发<a href = 'https://tcloud4api.woa.com/document/product/1657/927322?!preview&!document=1'>申请免费证书</a>接口申请免费证书。在免费证书申请成功后，你可以通过该枚举值对免费证书进行部署；</li> <ul><li>注意：在对免费证书部署时，需要保证当前已存在申请成功的免费证书。您可以通过<a href = 'https://tcloud4api.woa.com/document/product/1657/927938?!preview&!document=1'>检查免费证书申请结果</a>接口检查当前是否已存在申请成功的免费证书。</li> </ul> <li>sslcert：配置 SSL 托管服务端证书。</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 服务端证书列表，相关证书部署在 EO 的入口侧。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CertificateInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 在边缘双向认证场景下，该字段为客户端的 CA 证书，部署在 EO 节点内，用于 EO 节点认证客户端证书。
                     */
                    MutualTLS m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * 用于 EO 节点回源时携带的证书，源站启用双向认证握手时使用，用于源站认证客户端证书是否有效，确保请求来源于受信任的 EO 节点。
                     */
                    UpstreamCertInfo m_upstreamCertInfo;
                    bool m_upstreamCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCELERATIONDOMAINCERTIFICATE_H_
