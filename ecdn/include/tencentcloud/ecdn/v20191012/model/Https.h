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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/ServerCert.h>
#include <tencentcloud/ecdn/v20191012/model/ClientCert.h>
#include <tencentcloud/ecdn/v20191012/model/Hsts.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * 域名https配置。
                */
                class Https : public AbstractModel
                {
                public:
                    Https();
                    ~Https() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取https配置开关，on或off。开启https配置的域名在部署中状态，开关保持off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch https配置开关，on或off。开启https配置的域名在部署中状态，开关保持off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置https配置开关，on或off。开启https配置的域名在部署中状态，开关保持off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch https配置开关，on或off。开启https配置的域名在部署中状态，开关保持off。
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
                     * 获取是否开启http2，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Http2 是否开启http2，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttp2() const;

                    /**
                     * 设置是否开启http2，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _http2 是否开启http2，on或off。
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
                     * 获取是否开启OCSP功能，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcspStapling 是否开启OCSP功能，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOcspStapling() const;

                    /**
                     * 设置是否开启OCSP功能，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocspStapling 是否开启OCSP功能，on或off。
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
                     * 获取是否开启客户端证书校验功能，on或off，开启时必选上传客户端证书信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyClient 是否开启客户端证书校验功能，on或off，开启时必选上传客户端证书信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyClient() const;

                    /**
                     * 设置是否开启客户端证书校验功能，on或off，开启时必选上传客户端证书信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyClient 是否开启客户端证书校验功能，on或off，开启时必选上传客户端证书信息。
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
                     * 获取服务器证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertInfo 服务器证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置服务器证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certInfo 服务器证书配置信息。
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
                     * 获取客户端证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientCertInfo 客户端证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientCert GetClientCertInfo() const;

                    /**
                     * 设置客户端证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientCertInfo 客户端证书配置信息。
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
                     * 获取是否开启Spdy，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spdy 是否开启Spdy，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpdy() const;

                    /**
                     * 设置是否开启Spdy，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spdy 是否开启Spdy，on或off。
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
                     * 获取https证书部署状态，closed，deploying，deployed，failed分别表示已关闭，部署中，部署成功，部署失败。不可作为入参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SslStatus https证书部署状态，closed，deploying，deployed，failed分别表示已关闭，部署中，部署成功，部署失败。不可作为入参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSslStatus() const;

                    /**
                     * 设置https证书部署状态，closed，deploying，deployed，failed分别表示已关闭，部署中，部署成功，部署失败。不可作为入参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sslStatus https证书部署状态，closed，deploying，deployed，failed分别表示已关闭，部署中，部署成功，部署失败。不可作为入参使用。
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

                private:

                    /**
                     * https配置开关，on或off。开启https配置的域名在部署中状态，开关保持off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 是否开启http2，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_http2;
                    bool m_http2HasBeenSet;

                    /**
                     * 是否开启OCSP功能，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocspStapling;
                    bool m_ocspStaplingHasBeenSet;

                    /**
                     * 是否开启客户端证书校验功能，on或off，开启时必选上传客户端证书信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyClient;
                    bool m_verifyClientHasBeenSet;

                    /**
                     * 服务器证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * 客户端证书配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientCert m_clientCertInfo;
                    bool m_clientCertInfoHasBeenSet;

                    /**
                     * 是否开启Spdy，on或off。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spdy;
                    bool m_spdyHasBeenSet;

                    /**
                     * https证书部署状态，closed，deploying，deployed，failed分别表示已关闭，部署中，部署成功，部署失败。不可作为入参使用。
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_HTTPS_H_
