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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_WAFINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_WAFINSTANCEDETAIL_H_

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
                * waf实例详情
                */
                class WafInstanceDetail : public AbstractModel
                {
                public:
                    WafInstanceDetail();
                    ~WafInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certId 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取是否保持长连接，1是，0 否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keepalive 是否保持长连接，1是，0 否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetKeepalive() const;

                    /**
                     * 设置是否保持长连接，1是，0 否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keepalive 是否保持长连接，1是，0 否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeepalive(const uint64_t& _keepalive);

                    /**
                     * 判断参数 Keepalive 是否已赋值
                     * @return Keepalive 是否已赋值
                     * 
                     */
                    bool KeepaliveHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 是否保持长连接，1是，0 否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_keepalive;
                    bool m_keepaliveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_WAFINSTANCEDETAIL_H_
