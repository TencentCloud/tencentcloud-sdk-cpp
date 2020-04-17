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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 数组下，key为CertificateExtra 的内容。
                */
                class CertificateExtra : public AbstractModel
                {
                public:
                    CertificateExtra();
                    ~CertificateExtra() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书可配置域名数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainNumber 证书可配置域名数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomainNumber() const;

                    /**
                     * 设置证书可配置域名数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DomainNumber 证书可配置域名数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomainNumber(const std::string& _domainNumber);

                    /**
                     * 判断参数 DomainNumber 是否已赋值
                     * @return DomainNumber 是否已赋值
                     */
                    bool DomainNumberHasBeenSet() const;

                    /**
                     * 获取原始证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginCertificateId 原始证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginCertificateId() const;

                    /**
                     * 设置原始证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginCertificateId 原始证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginCertificateId(const std::string& _originCertificateId);

                    /**
                     * 判断参数 OriginCertificateId 是否已赋值
                     * @return OriginCertificateId 是否已赋值
                     */
                    bool OriginCertificateIdHasBeenSet() const;

                    /**
                     * 获取重颁发证书原始 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplacedBy 重颁发证书原始 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReplacedBy() const;

                    /**
                     * 设置重颁发证书原始 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReplacedBy 重颁发证书原始 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplacedBy(const std::string& _replacedBy);

                    /**
                     * 判断参数 ReplacedBy 是否已赋值
                     * @return ReplacedBy 是否已赋值
                     */
                    bool ReplacedByHasBeenSet() const;

                    /**
                     * 获取重颁发证书新 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplacedFor 重颁发证书新 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReplacedFor() const;

                    /**
                     * 设置重颁发证书新 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReplacedFor 重颁发证书新 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReplacedFor(const std::string& _replacedFor);

                    /**
                     * 判断参数 ReplacedFor 是否已赋值
                     * @return ReplacedFor 是否已赋值
                     */
                    bool ReplacedForHasBeenSet() const;

                    /**
                     * 获取新订单证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewOrder 新订单证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRenewOrder() const;

                    /**
                     * 设置新订单证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RenewOrder 新订单证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRenewOrder(const std::string& _renewOrder);

                    /**
                     * 判断参数 RenewOrder 是否已赋值
                     * @return RenewOrder 是否已赋值
                     */
                    bool RenewOrderHasBeenSet() const;

                private:

                    /**
                     * 证书可配置域名数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainNumber;
                    bool m_domainNumberHasBeenSet;

                    /**
                     * 原始证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originCertificateId;
                    bool m_originCertificateIdHasBeenSet;

                    /**
                     * 重颁发证书原始 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replacedBy;
                    bool m_replacedByHasBeenSet;

                    /**
                     * 重颁发证书新 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replacedFor;
                    bool m_replacedForHasBeenSet;

                    /**
                     * 新订单证书 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewOrder;
                    bool m_renewOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEEXTRA_H_
