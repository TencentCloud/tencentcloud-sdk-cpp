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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * https 服务端证书配置
                */
                class ServerCertInfo : public AbstractModel
                {
                public:
                    ServerCertInfo();
                    ~ServerCertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器证书 ID, 默认证书ID, 或在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 服务器证书 ID, 默认证书ID, 或在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置服务器证书 ID, 默认证书ID, 或在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertId 服务器证书 ID, 默认证书ID, 或在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 证书备注名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书备注名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Alias 证书备注名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书类型:
default: 默认证书
upload:用户上传
managed:腾讯云托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 证书类型:
default: 默认证书
upload:用户上传
managed:腾讯云托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置证书类型:
default: 默认证书
upload:用户上传
managed:腾讯云托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 证书类型:
default: 默认证书
upload:用户上传
managed:腾讯云托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpireTime 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployTime 证书部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置证书部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeployTime 证书部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取部署状态:
processing: 部署中
deployed: 已部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 部署状态:
processing: 部署中
deployed: 已部署
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置部署状态:
processing: 部署中
deployed: 已部署
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 部署状态:
processing: 部署中
deployed: 已部署
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 服务器证书 ID, 默认证书ID, 或在 SSL 证书管理进行证书托管时自动生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书备注名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 证书类型:
default: 默认证书
upload:用户上传
managed:腾讯云托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 证书过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * 部署状态:
processing: 部署中
deployed: 已部署
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SERVERCERTINFO_H_
