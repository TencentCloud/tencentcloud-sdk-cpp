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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_

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
                * OIDC认证相关配置
                */
                class OIDCConfigAuthenticationOptions : public AbstractModel
                {
                public:
                    OIDCConfigAuthenticationOptions();
                    ~OIDCConfigAuthenticationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建身份提供商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateOIDCConfig 创建身份提供商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoCreateOIDCConfig() const;

                    /**
                     * 设置创建身份提供商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateOIDCConfig 创建身份提供商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCreateOIDCConfig(const bool& _autoCreateOIDCConfig);

                    /**
                     * 判断参数 AutoCreateOIDCConfig 是否已赋值
                     * @return AutoCreateOIDCConfig 是否已赋值
                     * 
                     */
                    bool AutoCreateOIDCConfigHasBeenSet() const;

                    /**
                     * 获取创建身份提供商的ClientId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateClientId 创建身份提供商的ClientId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAutoCreateClientId() const;

                    /**
                     * 设置创建身份提供商的ClientId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateClientId 创建身份提供商的ClientId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCreateClientId(const std::vector<std::string>& _autoCreateClientId);

                    /**
                     * 判断参数 AutoCreateClientId 是否已赋值
                     * @return AutoCreateClientId 是否已赋值
                     * 
                     */
                    bool AutoCreateClientIdHasBeenSet() const;

                    /**
                     * 获取创建PodIdentityWebhook组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoInstallPodIdentityWebhookAddon 创建PodIdentityWebhook组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoInstallPodIdentityWebhookAddon() const;

                    /**
                     * 设置创建PodIdentityWebhook组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoInstallPodIdentityWebhookAddon 创建PodIdentityWebhook组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoInstallPodIdentityWebhookAddon(const bool& _autoInstallPodIdentityWebhookAddon);

                    /**
                     * 判断参数 AutoInstallPodIdentityWebhookAddon 是否已赋值
                     * @return AutoInstallPodIdentityWebhookAddon 是否已赋值
                     * 
                     */
                    bool AutoInstallPodIdentityWebhookAddonHasBeenSet() const;

                private:

                    /**
                     * 创建身份提供商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoCreateOIDCConfig;
                    bool m_autoCreateOIDCConfigHasBeenSet;

                    /**
                     * 创建身份提供商的ClientId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_autoCreateClientId;
                    bool m_autoCreateClientIdHasBeenSet;

                    /**
                     * 创建PodIdentityWebhook组件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoInstallPodIdentityWebhookAddon;
                    bool m_autoInstallPodIdentityWebhookAddonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_
