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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Hsts.h>
#include <tencentcloud/teo/v20220901/model/ServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 域名 https 加速配置，默认为关闭状态
                */
                class Https : public AbstractModel
                {
                public:
                    Https();
                    ~Https() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取http2 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Http2 http2 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置http2 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _http2 http2 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    void SetHttp2(const std::string& _http2);

                    /**
                     * 判断参数 Http2 是否已赋值
                     * @return Http2 是否已赋值
                     * 
                     */
                    bool Http2HasBeenSet() const;

                    /**
                     * 获取OCSP 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return OcspStapling OCSP 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置OCSP 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _ocspStapling OCSP 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    void SetOcspStapling(const std::string& _ocspStapling);

                    /**
                     * 判断参数 OcspStapling 是否已赋值
                     * @return OcspStapling 是否已赋值
                     * 
                     */
                    bool OcspStaplingHasBeenSet() const;

                    /**
                     * 获取Tls 版本设置，取值有：
<li>TLSv1：TLSv1版本；</li>
<li>TLSV1.1：TLSv1.1版本；</li>
<li>TLSV1.2：TLSv1.2版本；</li>
<li>TLSv1.3：TLSv1.3版本。</li>修改时必须开启连续的版本。
                     * @return TlsVersion Tls 版本设置，取值有：
<li>TLSv1：TLSv1版本；</li>
<li>TLSV1.1：TLSv1.1版本；</li>
<li>TLSV1.2：TLSv1.2版本；</li>
<li>TLSv1.3：TLSv1.3版本。</li>修改时必须开启连续的版本。
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置Tls 版本设置，取值有：
<li>TLSv1：TLSv1版本；</li>
<li>TLSV1.1：TLSv1.1版本；</li>
<li>TLSV1.2：TLSv1.2版本；</li>
<li>TLSv1.3：TLSv1.3版本。</li>修改时必须开启连续的版本。
                     * @param _tlsVersion Tls 版本设置，取值有：
<li>TLSv1：TLSv1版本；</li>
<li>TLSV1.1：TLSv1.1版本；</li>
<li>TLSV1.2：TLSv1.2版本；</li>
<li>TLSv1.3：TLSv1.3版本。</li>修改时必须开启连续的版本。
                     * 
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     * 
                     */
                    bool TlsVersionHasBeenSet() const;

                    /**
                     * 获取HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hsts HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Hsts GetHsts() const;

                    /**
                     * 设置HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hsts HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHsts(const Hsts& _hsts);

                    /**
                     * 判断参数 Hsts 是否已赋值
                     * @return Hsts 是否已赋值
                     * 
                     */
                    bool HstsHasBeenSet() const;

                    /**
                     * 获取证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertInfo 证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServerCertInfo> GetCertInfo() const;

                    /**
                     * 设置证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certInfo 证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertInfo(const std::vector<ServerCertInfo>& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取申请类型，取值有：
<li>apply：托管EdgeOne；</li>
<li>none：不托管EdgeOne。</li>不填，默认取值为none。
                     * @return ApplyType 申请类型，取值有：
<li>apply：托管EdgeOne；</li>
<li>none：不托管EdgeOne。</li>不填，默认取值为none。
                     * 
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置申请类型，取值有：
<li>apply：托管EdgeOne；</li>
<li>none：不托管EdgeOne。</li>不填，默认取值为none。
                     * @param _applyType 申请类型，取值有：
<li>apply：托管EdgeOne；</li>
<li>none：不托管EdgeOne。</li>不填，默认取值为none。
                     * 
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * 
                     */
                    bool ApplyTypeHasBeenSet() const;

                    /**
                     * 获取密码套件，取值有：
<li>loose-v2023：提供高兼容性，安全性一般，支持 TLS 1.0-1.3 密码套件；</li>
<li>general-v2023：提供较高兼容性，安全性中等，支持 TLS 1.2-1.3 密码套件；</li>
<li>strict-v2023：提供高安全性能，禁用所有含不安全隐患的加密套件，支持 TLS 1.2-1.3 密码套件。</li>
                     * @return CipherSuite 密码套件，取值有：
<li>loose-v2023：提供高兼容性，安全性一般，支持 TLS 1.0-1.3 密码套件；</li>
<li>general-v2023：提供较高兼容性，安全性中等，支持 TLS 1.2-1.3 密码套件；</li>
<li>strict-v2023：提供高安全性能，禁用所有含不安全隐患的加密套件，支持 TLS 1.2-1.3 密码套件。</li>
                     * 
                     */
                    std::string GetCipherSuite() const;

                    /**
                     * 设置密码套件，取值有：
<li>loose-v2023：提供高兼容性，安全性一般，支持 TLS 1.0-1.3 密码套件；</li>
<li>general-v2023：提供较高兼容性，安全性中等，支持 TLS 1.2-1.3 密码套件；</li>
<li>strict-v2023：提供高安全性能，禁用所有含不安全隐患的加密套件，支持 TLS 1.2-1.3 密码套件。</li>
                     * @param _cipherSuite 密码套件，取值有：
<li>loose-v2023：提供高兼容性，安全性一般，支持 TLS 1.0-1.3 密码套件；</li>
<li>general-v2023：提供较高兼容性，安全性中等，支持 TLS 1.2-1.3 密码套件；</li>
<li>strict-v2023：提供高安全性能，禁用所有含不安全隐患的加密套件，支持 TLS 1.2-1.3 密码套件。</li>
                     * 
                     */
                    void SetCipherSuite(const std::string& _cipherSuite);

                    /**
                     * 判断参数 CipherSuite 是否已赋值
                     * @return CipherSuite 是否已赋值
                     * 
                     */
                    bool CipherSuiteHasBeenSet() const;

                private:

                    /**
                     * http2 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * OCSP 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * Tls 版本设置，取值有：
<li>TLSv1：TLSv1版本；</li>
<li>TLSV1.1：TLSv1.1版本；</li>
<li>TLSV1.2：TLSv1.2版本；</li>
<li>TLSv1.3：TLSv1.3版本。</li>修改时必须开启连续的版本。
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * HSTS 配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Hsts m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * 证书配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerCertInfo> m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * 申请类型，取值有：
<li>apply：托管EdgeOne；</li>
<li>none：不托管EdgeOne。</li>不填，默认取值为none。
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                    /**
                     * 密码套件，取值有：
<li>loose-v2023：提供高兼容性，安全性一般，支持 TLS 1.0-1.3 密码套件；</li>
<li>general-v2023：提供较高兼容性，安全性中等，支持 TLS 1.2-1.3 密码套件；</li>
<li>strict-v2023：提供高安全性能，禁用所有含不安全隐患的加密套件，支持 TLS 1.2-1.3 密码套件。</li>
                     */
                    std::string m_cipherSuite;
                    bool m_cipherSuiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPS_H_
