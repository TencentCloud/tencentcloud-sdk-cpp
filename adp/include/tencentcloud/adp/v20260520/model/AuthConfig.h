/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ApiKeyAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/CamAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/OAuthConfig.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyAuthConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 插件授权配置
                */
                class AuthConfig : public AbstractModel
                {
                public:
                    AuthConfig();
                    ~AuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>授权方式。</p><p>枚举值：</p><ul><li>0：无鉴权</li><li>1：API Key 鉴权</li><li>2：CAM 授权</li><li>3：OAuth 2.0 授权</li></ul>
                     * @return AuthType <p>授权方式。</p><p>枚举值：</p><ul><li>0：无鉴权</li><li>1：API Key 鉴权</li><li>2：CAM 授权</li><li>3：OAuth 2.0 授权</li></ul>
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置<p>授权方式。</p><p>枚举值：</p><ul><li>0：无鉴权</li><li>1：API Key 鉴权</li><li>2：CAM 授权</li><li>3：OAuth 2.0 授权</li></ul>
                     * @param _authType <p>授权方式。</p><p>枚举值：</p><ul><li>0：无鉴权</li><li>1：API Key 鉴权</li><li>2：CAM 授权</li><li>3：OAuth 2.0 授权</li></ul>
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>API Key授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKeyAuthConfig <p>API Key授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ApiKeyAuthConfig GetApiKeyAuthConfig() const;

                    /**
                     * 设置<p>API Key授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiKeyAuthConfig <p>API Key授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiKeyAuthConfig(const ApiKeyAuthConfig& _apiKeyAuthConfig);

                    /**
                     * 判断参数 ApiKeyAuthConfig 是否已赋值
                     * @return ApiKeyAuthConfig 是否已赋值
                     * 
                     */
                    bool ApiKeyAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>CAM授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CamAuthConfig <p>CAM授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CamAuthConfig GetCamAuthConfig() const;

                    /**
                     * 设置<p>CAM授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _camAuthConfig <p>CAM授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCamAuthConfig(const CamAuthConfig& _camAuthConfig);

                    /**
                     * 判断参数 CamAuthConfig 是否已赋值
                     * @return CamAuthConfig 是否已赋值
                     * 
                     */
                    bool CamAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>OAuth2.0授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OAuthConfig <p>OAuth2.0授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OAuthConfig GetOAuthConfig() const;

                    /**
                     * 设置<p>OAuth2.0授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oAuthConfig <p>OAuth2.0授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOAuthConfig(const OAuthConfig& _oAuthConfig);

                    /**
                     * 判断参数 OAuthConfig 是否已赋值
                     * @return OAuthConfig 是否已赋值
                     * 
                     */
                    bool OAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>AccessKey授权配置</p>
                     * @return AccessKeyAuthConfig <p>AccessKey授权配置</p>
                     * 
                     */
                    AccessKeyAuthConfig GetAccessKeyAuthConfig() const;

                    /**
                     * 设置<p>AccessKey授权配置</p>
                     * @param _accessKeyAuthConfig <p>AccessKey授权配置</p>
                     * 
                     */
                    void SetAccessKeyAuthConfig(const AccessKeyAuthConfig& _accessKeyAuthConfig);

                    /**
                     * 判断参数 AccessKeyAuthConfig 是否已赋值
                     * @return AccessKeyAuthConfig 是否已赋值
                     * 
                     */
                    bool AccessKeyAuthConfigHasBeenSet() const;

                private:

                    /**
                     * <p>授权方式。</p><p>枚举值：</p><ul><li>0：无鉴权</li><li>1：API Key 鉴权</li><li>2：CAM 授权</li><li>3：OAuth 2.0 授权</li></ul>
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>API Key授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApiKeyAuthConfig m_apiKeyAuthConfig;
                    bool m_apiKeyAuthConfigHasBeenSet;

                    /**
                     * <p>CAM授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CamAuthConfig m_camAuthConfig;
                    bool m_camAuthConfigHasBeenSet;

                    /**
                     * <p>OAuth2.0授权配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OAuthConfig m_oAuthConfig;
                    bool m_oAuthConfigHasBeenSet;

                    /**
                     * <p>AccessKey授权配置</p>
                     */
                    AccessKeyAuthConfig m_accessKeyAuthConfig;
                    bool m_accessKeyAuthConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AUTHCONFIG_H_
