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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * saml 身份提供商配置信息。
                */
                class SAMLIdentityProviderConfiguration : public AbstractModel
                {
                public:
                    SAMLIdentityProviderConfiguration();
                    ~SAMLIdentityProviderConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IdP 标识。
                     * @return EntityId IdP 标识。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置IdP 标识。
                     * @param _entityId IdP 标识。
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     * @return SSOStatus SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     * 
                     */
                    std::string GetSSOStatus() const;

                    /**
                     * 设置SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     * @param _sSOStatus SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     * 
                     */
                    void SetSSOStatus(const std::string& _sSOStatus);

                    /**
                     * 判断参数 SSOStatus 是否已赋值
                     * @return SSOStatus 是否已赋值
                     * 
                     */
                    bool SSOStatusHasBeenSet() const;

                    /**
                     * 获取IdP 元数据文档（Base64 编码）。
                     * @return EncodedMetadataDocument IdP 元数据文档（Base64 编码）。
                     * 
                     */
                    std::string GetEncodedMetadataDocument() const;

                    /**
                     * 设置IdP 元数据文档（Base64 编码）。
                     * @param _encodedMetadataDocument IdP 元数据文档（Base64 编码）。
                     * 
                     */
                    void SetEncodedMetadataDocument(const std::string& _encodedMetadataDocument);

                    /**
                     * 判断参数 EncodedMetadataDocument 是否已赋值
                     * @return EncodedMetadataDocument 是否已赋值
                     * 
                     */
                    bool EncodedMetadataDocumentHasBeenSet() const;

                    /**
                     * 获取X509证书ID。
                     * @return CertificateIds X509证书ID。
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置X509证书ID。
                     * @param _certificateIds X509证书ID。
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取IdP 的登录地址。
                     * @return LoginUrl IdP 的登录地址。
                     * 
                     */
                    std::string GetLoginUrl() const;

                    /**
                     * 设置IdP 的登录地址。
                     * @param _loginUrl IdP 的登录地址。
                     * 
                     */
                    void SetLoginUrl(const std::string& _loginUrl);

                    /**
                     * 判断参数 LoginUrl 是否已赋值
                     * @return LoginUrl 是否已赋值
                     * 
                     */
                    bool LoginUrlHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * IdP 标识。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     */
                    std::string m_sSOStatus;
                    bool m_sSOStatusHasBeenSet;

                    /**
                     * IdP 元数据文档（Base64 编码）。
                     */
                    std::string m_encodedMetadataDocument;
                    bool m_encodedMetadataDocumentHasBeenSet;

                    /**
                     * X509证书ID。
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * IdP 的登录地址。
                     */
                    std::string m_loginUrl;
                    bool m_loginUrlHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SAMLIDENTITYPROVIDERCONFIGURATION_H_
