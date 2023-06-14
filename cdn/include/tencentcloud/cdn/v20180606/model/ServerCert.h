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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * https 加速服务端证书配置：
+ 支持使用托管至 SSL 证书管理的证书进行部署
+ 支持上传 PEM 格式的证书进行部署
                */
                class ServerCert : public AbstractModel
                {
                public:
                    ServerCert();
                    ~ServerCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器证书 ID 在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 服务器证书 ID 在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务器证书 ID 在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certId 服务器证书 ID 在 SSL 证书管理进行证书托管时自动生成
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
                     * 获取服务器证书名称
在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertName 服务器证书名称
在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置服务器证书名称
在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certName 服务器证书名称
在 SSL 证书管理进行证书托管时自动生成
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
                     * 获取服务器证书信息
上传自有证书时必填，需要包含完整的证书链
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Certificate 服务器证书信息
上传自有证书时必填，需要包含完整的证书链
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertificate() const;

                    /**
                     * 设置服务器证书信息
上传自有证书时必填，需要包含完整的证书链
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificate 服务器证书信息
上传自有证书时必填，需要包含完整的证书链
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
                     * 获取服务器密钥信息
上传自有证书时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateKey 服务器密钥信息
上传自有证书时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置服务器密钥信息
上传自有证书时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateKey 服务器密钥信息
上传自有证书时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取证书过期时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 证书过期时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 证书过期时间
作为入参配置时无需填充
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
                     * 获取证书颁发时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployTime 证书颁发时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置证书颁发时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployTime 证书颁发时间
作为入参配置时无需填充
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

                    /**
                     * 获取证书备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 证书备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置证书备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 证书备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取证书来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return From 证书来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置证书来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _from 证书来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * 服务器证书 ID 在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 服务器证书名称
在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 服务器证书信息
上传自有证书时必填，需要包含完整的证书链
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * 服务器密钥信息
上传自有证书时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 证书过期时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书颁发时间
作为入参配置时无需填充
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * 证书备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 证书来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SERVERCERT_H_
