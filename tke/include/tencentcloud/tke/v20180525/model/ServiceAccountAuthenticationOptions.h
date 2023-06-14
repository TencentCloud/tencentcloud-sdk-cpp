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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ServiceAccount认证相关配置
                */
                class ServiceAccountAuthenticationOptions : public AbstractModel
                {
                public:
                    ServiceAccountAuthenticationOptions();
                    ~ServiceAccountAuthenticationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用TKE默认issuer和jwksuri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseTKEDefault 使用TKE默认issuer和jwksuri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUseTKEDefault() const;

                    /**
                     * 设置使用TKE默认issuer和jwksuri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useTKEDefault 使用TKE默认issuer和jwksuri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseTKEDefault(const bool& _useTKEDefault);

                    /**
                     * 判断参数 UseTKEDefault 是否已赋值
                     * @return UseTKEDefault 是否已赋值
                     * 
                     */
                    bool UseTKEDefaultHasBeenSet() const;

                    /**
                     * 获取service-account-issuer
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Issuer service-account-issuer
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置service-account-issuer
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _issuer service-account-issuer
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取service-account-jwks-uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JWKSURI service-account-jwks-uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJWKSURI() const;

                    /**
                     * 设置service-account-jwks-uri
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jWKSURI service-account-jwks-uri
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJWKSURI(const std::string& _jWKSURI);

                    /**
                     * 判断参数 JWKSURI 是否已赋值
                     * @return JWKSURI 是否已赋值
                     * 
                     */
                    bool JWKSURIHasBeenSet() const;

                    /**
                     * 获取如果为true，则会自动创建允许匿名用户访问'/.well-known/openid-configuration'和/openid/v1/jwks的rbac规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateDiscoveryAnonymousAuth 如果为true，则会自动创建允许匿名用户访问'/.well-known/openid-configuration'和/openid/v1/jwks的rbac规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoCreateDiscoveryAnonymousAuth() const;

                    /**
                     * 设置如果为true，则会自动创建允许匿名用户访问'/.well-known/openid-configuration'和/openid/v1/jwks的rbac规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateDiscoveryAnonymousAuth 如果为true，则会自动创建允许匿名用户访问'/.well-known/openid-configuration'和/openid/v1/jwks的rbac规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCreateDiscoveryAnonymousAuth(const bool& _autoCreateDiscoveryAnonymousAuth);

                    /**
                     * 判断参数 AutoCreateDiscoveryAnonymousAuth 是否已赋值
                     * @return AutoCreateDiscoveryAnonymousAuth 是否已赋值
                     * 
                     */
                    bool AutoCreateDiscoveryAnonymousAuthHasBeenSet() const;

                private:

                    /**
                     * 使用TKE默认issuer和jwksuri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_useTKEDefault;
                    bool m_useTKEDefaultHasBeenSet;

                    /**
                     * service-account-issuer
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * service-account-jwks-uri
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jWKSURI;
                    bool m_jWKSURIHasBeenSet;

                    /**
                     * 如果为true，则会自动创建允许匿名用户访问'/.well-known/openid-configuration'和/openid/v1/jwks的rbac规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoCreateDiscoveryAnonymousAuth;
                    bool m_autoCreateDiscoveryAnonymousAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SERVICEACCOUNTAUTHENTICATIONOPTIONS_H_
