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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ServerCert.h>
#include <tencentcloud/cdn/v20180606/model/ClientCert.h>
#include <tencentcloud/cdn/v20180606/model/Hsts.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
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
                     * 获取https 配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch https 配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置https 配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch https 配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Http2 http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _http2 http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcspStapling OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocspStapling OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取客户端证书校验功能
on：开启
off：关闭
默认为关闭状态，开启时需要上传客户端证书信息，该配置项目前在灰度中，尚未全量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyClient 客户端证书校验功能
on：开启
off：关闭
默认为关闭状态，开启时需要上传客户端证书信息，该配置项目前在灰度中，尚未全量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyClient() const;

                    /**
                     * 设置客户端证书校验功能
on：开启
off：关闭
默认为关闭状态，开启时需要上传客户端证书信息，该配置项目前在灰度中，尚未全量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyClient 客户端证书校验功能
on：开启
off：关闭
默认为关闭状态，开启时需要上传客户端证书信息，该配置项目前在灰度中，尚未全量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyClient(const std::string& _verifyClient);

                    /**
                     * 判断参数 VerifyClient 是否已赋值
                     * @return VerifyClient 是否已赋值
                     * 
                     */
                    bool VerifyClientHasBeenSet() const;

                    /**
                     * 获取服务端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertInfo 服务端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置服务端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certInfo 服务端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertInfo(const ServerCert& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                    /**
                     * 获取客户端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertInfo 客户端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientCert GetClientCertInfo() const;

                    /**
                     * 设置客户端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCertInfo 客户端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientCertInfo(const ClientCert& _clientCertInfo);

                    /**
                     * 判断参数 ClientCertInfo 是否已赋值
                     * @return ClientCertInfo 是否已赋值
                     * 
                     */
                    bool ClientCertInfoHasBeenSet() const;

                    /**
                     * 获取Spdy 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spdy Spdy 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpdy() const;

                    /**
                     * 设置Spdy 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spdy Spdy 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpdy(const std::string& _spdy);

                    /**
                     * 判断参数 Spdy 是否已赋值
                     * @return Spdy 是否已赋值
                     * 
                     */
                    bool SpdyHasBeenSet() const;

                    /**
                     * 获取https 证书部署状态
closed：已关闭
deploying：部署中
deployed：部署成功
failed：部署失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SslStatus https 证书部署状态
closed：已关闭
deploying：部署中
deployed：部署成功
failed：部署失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSslStatus() const;

                    /**
                     * 设置https 证书部署状态
closed：已关闭
deploying：部署中
deployed：部署成功
failed：部署失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sslStatus https 证书部署状态
closed：已关闭
deploying：部署中
deployed：部署成功
failed：部署失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSslStatus(const std::string& _sslStatus);

                    /**
                     * 判断参数 SslStatus 是否已赋值
                     * @return SslStatus 是否已赋值
                     * 
                     */
                    bool SslStatusHasBeenSet() const;

                    /**
                     * 获取Hsts配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hsts Hsts配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Hsts GetHsts() const;

                    /**
                     * 设置Hsts配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hsts Hsts配置
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
                     * 获取Tls版本设置，仅支持部分Advance域名，支持设置 TLSv1, TLSv1.1, TLSv1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TlsVersion Tls版本设置，仅支持部分Advance域名，支持设置 TLSv1, TLSv1.1, TLSv1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置Tls版本设置，仅支持部分Advance域名，支持设置 TLSv1, TLSv1.1, TLSv1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tlsVersion Tls版本设置，仅支持部分Advance域名，支持设置 TLSv1, TLSv1.1, TLSv1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTlsVersion(const std::vector<std::string>& _tlsVersion);

                    /**
                     * 判断参数 TlsVersion 是否已赋值
                     * @return TlsVersion 是否已赋值
                     * 
                     */
                    bool TlsVersionHasBeenSet() const;

                private:

                    /**
                     * https 配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * http2 配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * OCSP 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * 客户端证书校验功能
on：开启
off：关闭
默认为关闭状态，开启时需要上传客户端证书信息，该配置项目前在灰度中，尚未全量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyClient;
                    bool m_verifyClientHasBeenSet;

                    /**
                     * 服务端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * 客户端证书配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientCert m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * Spdy 配置开关
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spdy;
                    bool m_spdyHasBeenSet;

                    /**
                     * https 证书部署状态
closed：已关闭
deploying：部署中
deployed：部署成功
failed：部署失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sslStatus;
                    bool m_sslStatusHasBeenSet;

                    /**
                     * Hsts配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Hsts m_hsts;
                    bool m_hstsHasBeenSet;

                    /**
                     * Tls版本设置，仅支持部分Advance域名，支持设置 TLSv1, TLSv1.1, TLSv1.2, TLSv1.3，修改时必须开启连续的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HTTPS_H_
