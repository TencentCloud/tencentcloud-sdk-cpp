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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * https 服务端证书配置
                */
                class DefaultServerCertInfo : public AbstractModel
                {
                public:
                    DefaultServerCertInfo();
                    ~DefaultServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 服务器证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务器证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertId 服务器证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书备注名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 证书备注名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书备注名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Alias 证书备注名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书类型，取值有：
<li>default: 默认证书;</li>
<li>upload:用户上传;</li>
<li>managed:腾讯云托管。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 证书类型，取值有：
<li>default: 默认证书;</li>
<li>upload:用户上传;</li>
<li>managed:腾讯云托管。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置证书类型，取值有：
<li>default: 默认证书;</li>
<li>upload:用户上传;</li>
<li>managed:腾讯云托管。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 证书类型，取值有：
<li>default: 默认证书;</li>
<li>upload:用户上传;</li>
<li>managed:腾讯云托管。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EffectiveTime 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取证书公用名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonName 证书公用名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置证书公用名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CommonName 证书公用名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCommonName(const std::string& _commonName);

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取证书SAN域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubjectAltName 证书SAN域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置证书SAN域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubjectAltName 证书SAN域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取部署状态，取值有：
<li>processing: 部署中；</li>
<li>deployed: 已部署；</li>
<li>failed: 部署失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 部署状态，取值有：
<li>processing: 部署中；</li>
<li>deployed: 已部署；</li>
<li>failed: 部署失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置部署状态，取值有：
<li>processing: 部署中；</li>
<li>deployed: 已部署；</li>
<li>failed: 部署失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 部署状态，取值有：
<li>processing: 部署中；</li>
<li>deployed: 已部署；</li>
<li>failed: 部署失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status为失败时,此字段返回失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message Status为失败时,此字段返回失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Status为失败时,此字段返回失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message Status为失败时,此字段返回失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取证书算法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignAlgo 证书算法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置证书算法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SignAlgo 证书算法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     */
                    bool SignAlgoHasBeenSet() const;

                private:

                    /**
                     * 服务器证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书备注名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 证书类型，取值有：
<li>default: 默认证书;</li>
<li>upload:用户上传;</li>
<li>managed:腾讯云托管。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书生效时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 证书公用名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * 证书SAN域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 部署状态，取值有：
<li>processing: 部署中；</li>
<li>deployed: 已部署；</li>
<li>failed: 部署失败。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status为失败时,此字段返回失败原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 证书算法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEFAULTSERVERCERTINFO_H_
