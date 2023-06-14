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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeApplication返回参数结构体
                */
                class DescribeApplicationResponse : public AbstractModel
                {
                public:
                    DescribeApplicationResponse();
                    ~DescribeApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyId 密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取应用最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedDate 应用最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientId 客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取应用类型，即创建应用时所选择的应用模板类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationType 应用类型，即创建应用时所选择的应用模板类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedDate 应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取应用id，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用id，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取令牌有效时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenExpired 令牌有效时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTokenExpired() const;

                    /**
                     * 判断参数 TokenExpired 是否已赋值
                     * @return TokenExpired 是否已赋值
                     * 
                     */
                    bool TokenExpiredHasBeenSet() const;

                    /**
                     * 获取客户端secret。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientSecret 客户端secret。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                    /**
                     * 获取公钥信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicKey 公钥信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取授权地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorizeUrl 授权地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthorizeUrl() const;

                    /**
                     * 判断参数 AuthorizeUrl 是否已赋值
                     * @return AuthorizeUrl 是否已赋值
                     * 
                     */
                    bool AuthorizeUrlHasBeenSet() const;

                    /**
                     * 获取应用图标图片访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrl 应用图标图片访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取安全等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecureLevel 安全等级。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     * 
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppStatus 应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAppStatus() const;

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 密钥id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 应用展示名称，长度限制：64个字符。 默认与应用名字相同。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 应用最后修改时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * 客户端id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 应用类型，即创建应用时所选择的应用模板类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 应用创建时间，符合 ISO8601 标准。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 应用id，是应用的全局唯一标识。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 令牌有效时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tokenExpired;
                    bool m_tokenExpiredHasBeenSet;

                    /**
                     * 客户端secret。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * 公钥信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 授权地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorizeUrl;
                    bool m_authorizeUrlHasBeenSet;

                    /**
                     * 应用图标图片访问地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 安全等级。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * 应用状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_
