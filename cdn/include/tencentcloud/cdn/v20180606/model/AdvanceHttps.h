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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ServerCert.h>
#include <tencentcloud/cdn/v20180606/model/ClientCert.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 回源的自定义Https配置
                */
                class AdvanceHttps : public AbstractModel
                {
                public:
                    AdvanceHttps();
                    ~AdvanceHttps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义Tls数据开关<br>on - 开<br>off - 关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomTlsStatus <p>自定义Tls数据开关<br>on - 开<br>off - 关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomTlsStatus() const;

                    /**
                     * 设置<p>自定义Tls数据开关<br>on - 开<br>off - 关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customTlsStatus <p>自定义Tls数据开关<br>on - 开<br>off - 关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomTlsStatus(const std::string& _customTlsStatus);

                    /**
                     * 判断参数 CustomTlsStatus 是否已赋值
                     * @return CustomTlsStatus 是否已赋值
                     * 
                     */
                    bool CustomTlsStatusHasBeenSet() const;

                    /**
                     * 获取<p>Tls版本列表，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TlsVersion <p>Tls版本列表，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTlsVersion() const;

                    /**
                     * 设置<p>Tls版本列表，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tlsVersion <p>Tls版本列表，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本</p>
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

                    /**
                     * 获取<p>自定义加密套件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cipher <p>自定义加密套件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCipher() const;

                    /**
                     * 设置<p>自定义加密套件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cipher <p>自定义加密套件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCipher(const std::string& _cipher);

                    /**
                     * 判断参数 Cipher 是否已赋值
                     * @return Cipher 是否已赋值
                     * 
                     */
                    bool CipherHasBeenSet() const;

                    /**
                     * 获取<p>回源双向校验开启状态<br>off - 关闭校验<br>oneWay - 校验源站<br>twoWay - 双向校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyOriginType <p>回源双向校验开启状态<br>off - 关闭校验<br>oneWay - 校验源站<br>twoWay - 双向校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyOriginType() const;

                    /**
                     * 设置<p>回源双向校验开启状态<br>off - 关闭校验<br>oneWay - 校验源站<br>twoWay - 双向校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyOriginType <p>回源双向校验开启状态<br>off - 关闭校验<br>oneWay - 校验源站<br>twoWay - 双向校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyOriginType(const std::string& _verifyOriginType);

                    /**
                     * 判断参数 VerifyOriginType 是否已赋值
                     * @return VerifyOriginType 是否已赋值
                     * 
                     */
                    bool VerifyOriginTypeHasBeenSet() const;

                    /**
                     * 获取<p>回源层证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertInfo <p>回源层证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerCert GetCertInfo() const;

                    /**
                     * 设置<p>回源层证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certInfo <p>回源层证书配置信息</p>
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
                     * 获取<p>源站证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginCertInfo <p>源站证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClientCert GetOriginCertInfo() const;

                    /**
                     * 设置<p>源站证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originCertInfo <p>源站证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginCertInfo(const ClientCert& _originCertInfo);

                    /**
                     * 判断参数 OriginCertInfo 是否已赋值
                     * @return OriginCertInfo 是否已赋值
                     * 
                     */
                    bool OriginCertInfoHasBeenSet() const;

                private:

                    /**
                     * <p>自定义Tls数据开关<br>on - 开<br>off - 关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customTlsStatus;
                    bool m_customTlsStatusHasBeenSet;

                    /**
                     * <p>Tls版本列表，支持设置 TLSv1, TLSV1.1, TLSV1.2, TLSv1.3，修改时必须开启连续的版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tlsVersion;
                    bool m_tlsVersionHasBeenSet;

                    /**
                     * <p>自定义加密套件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cipher;
                    bool m_cipherHasBeenSet;

                    /**
                     * <p>回源双向校验开启状态<br>off - 关闭校验<br>oneWay - 校验源站<br>twoWay - 双向校验</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyOriginType;
                    bool m_verifyOriginTypeHasBeenSet;

                    /**
                     * <p>回源层证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerCert m_certInfo;
                    bool m_certInfoHasBeenSet;

                    /**
                     * <p>源站证书配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClientCert m_originCertInfo;
                    bool m_originCertInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEHTTPS_H_
