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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_CLIENTCERT_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_CLIENTCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * https客户端证书配置。
                */
                class ClientCert : public AbstractModel
                {
                public:
                    ClientCert();
                    ~ClientCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端证书，pem格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Certificate 客户端证书，pem格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置客户端证书，pem格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificate 客户端证书，pem格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificate(const std::string& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertName 客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certName 客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书颁发时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployTime 证书颁发时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置证书颁发时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployTime 证书颁发时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                private:

                    /**
                     * 客户端证书，pem格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 客户端证书名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 证书过期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书颁发时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_CLIENTCERT_H_
