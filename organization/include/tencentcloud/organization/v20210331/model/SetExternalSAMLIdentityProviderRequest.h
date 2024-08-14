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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SetExternalSAMLIdentityProvider请求参数结构体
                */
                class SetExternalSAMLIdentityProviderRequest : public AbstractModel
                {
                public:
                    SetExternalSAMLIdentityProviderRequest();
                    ~SetExternalSAMLIdentityProviderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。
                     * @return ZoneId 空间ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。
                     * @param _zoneId 空间ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取IdP 元数据文档（Base64 编码）。  由支持 SAML 2.0 协议的 IdP 提供。
                     * @return EncodedMetadataDocument IdP 元数据文档（Base64 编码）。  由支持 SAML 2.0 协议的 IdP 提供。
                     * 
                     */
                    std::string GetEncodedMetadataDocument() const;

                    /**
                     * 设置IdP 元数据文档（Base64 编码）。  由支持 SAML 2.0 协议的 IdP 提供。
                     * @param _encodedMetadataDocument IdP 元数据文档（Base64 编码）。  由支持 SAML 2.0 协议的 IdP 提供。
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
                     * 获取PEM 格式的 X509 证书。指定该参数会替换所有已经存在的证书。
                     * @return X509Certificate PEM 格式的 X509 证书。指定该参数会替换所有已经存在的证书。
                     * 
                     */
                    std::string GetX509Certificate() const;

                    /**
                     * 设置PEM 格式的 X509 证书。指定该参数会替换所有已经存在的证书。
                     * @param _x509Certificate PEM 格式的 X509 证书。指定该参数会替换所有已经存在的证书。
                     * 
                     */
                    void SetX509Certificate(const std::string& _x509Certificate);

                    /**
                     * 判断参数 X509Certificate 是否已赋值
                     * @return X509Certificate 是否已赋值
                     * 
                     */
                    bool X509CertificateHasBeenSet() const;

                private:

                    /**
                     * 空间ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IdP 元数据文档（Base64 编码）。  由支持 SAML 2.0 协议的 IdP 提供。
                     */
                    std::string m_encodedMetadataDocument;
                    bool m_encodedMetadataDocumentHasBeenSet;

                    /**
                     * SSO 登录的启用状态。取值：  Enabled：启用。 Disabled（默认值）：禁用。
                     */
                    std::string m_sSOStatus;
                    bool m_sSOStatusHasBeenSet;

                    /**
                     * IdP 标识。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * IdP 的登录地址。
                     */
                    std::string m_loginUrl;
                    bool m_loginUrlHasBeenSet;

                    /**
                     * PEM 格式的 X509 证书。指定该参数会替换所有已经存在的证书。
                     */
                    std::string m_x509Certificate;
                    bool m_x509CertificateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_SETEXTERNALSAMLIDENTITYPROVIDERREQUEST_H_
