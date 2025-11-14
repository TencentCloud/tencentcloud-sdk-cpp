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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HTTPS 源站证书校验的模式。
                */
                class OriginCertificateVerify : public AbstractModel
                {
                public:
                    OriginCertificateVerify();
                    ~OriginCertificateVerify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站证书校验模式。取值有：<li>disable:禁用源站证书校验。</li><li>custom_ca:使用指定受信任 CA 证书校验。</li>
                     * @return VerificationMode 源站证书校验模式。取值有：<li>disable:禁用源站证书校验。</li><li>custom_ca:使用指定受信任 CA 证书校验。</li>
                     * 
                     */
                    std::string GetVerificationMode() const;

                    /**
                     * 设置源站证书校验模式。取值有：<li>disable:禁用源站证书校验。</li><li>custom_ca:使用指定受信任 CA 证书校验。</li>
                     * @param _verificationMode 源站证书校验模式。取值有：<li>disable:禁用源站证书校验。</li><li>custom_ca:使用指定受信任 CA 证书校验。</li>
                     * 
                     */
                    void SetVerificationMode(const std::string& _verificationMode);

                    /**
                     * 判断参数 VerificationMode 是否已赋值
                     * @return VerificationMode 是否已赋值
                     * 
                     */
                    bool VerificationModeHasBeenSet() const;

                    /**
                     * 获取指定受信任的 CA 证书列表，源站证书需要由该 CA 签发才能校验通过。 注意：仅当 VerificationMode 为 custom_ca 时，需要传入该参数，指定受信任的CA证书信息。
OriginCertificateVerify 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。	

                     * @return CustomCACerts 指定受信任的 CA 证书列表，源站证书需要由该 CA 签发才能校验通过。 注意：仅当 VerificationMode 为 custom_ca 时，需要传入该参数，指定受信任的CA证书信息。
OriginCertificateVerify 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。	

                     * 
                     */
                    std::vector<CertificateInfo> GetCustomCACerts() const;

                    /**
                     * 设置指定受信任的 CA 证书列表，源站证书需要由该 CA 签发才能校验通过。 注意：仅当 VerificationMode 为 custom_ca 时，需要传入该参数，指定受信任的CA证书信息。
OriginCertificateVerify 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。	

                     * @param _customCACerts 指定受信任的 CA 证书列表，源站证书需要由该 CA 签发才能校验通过。 注意：仅当 VerificationMode 为 custom_ca 时，需要传入该参数，指定受信任的CA证书信息。
OriginCertificateVerify 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。	

                     * 
                     */
                    void SetCustomCACerts(const std::vector<CertificateInfo>& _customCACerts);

                    /**
                     * 判断参数 CustomCACerts 是否已赋值
                     * @return CustomCACerts 是否已赋值
                     * 
                     */
                    bool CustomCACertsHasBeenSet() const;

                private:

                    /**
                     * 源站证书校验模式。取值有：<li>disable:禁用源站证书校验。</li><li>custom_ca:使用指定受信任 CA 证书校验。</li>
                     */
                    std::string m_verificationMode;
                    bool m_verificationModeHasBeenSet;

                    /**
                     * 指定受信任的 CA 证书列表，源站证书需要由该 CA 签发才能校验通过。 注意：仅当 VerificationMode 为 custom_ca 时，需要传入该参数，指定受信任的CA证书信息。
OriginCertificateVerify 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。	

                     */
                    std::vector<CertificateInfo> m_customCACerts;
                    bool m_customCACertsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINCERTIFICATEVERIFY_H_
