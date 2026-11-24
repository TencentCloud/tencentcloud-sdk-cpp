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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIGEXT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIGEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookCredential.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerGongfengWebhookConfig.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerTAPDWebhookConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Webhook 来源扩展配置。
                */
                class AppTriggerWebhookConfigExt : public AbstractModel
                {
                public:
                    AppTriggerWebhookConfigExt();
                    ~AppTriggerWebhookConfigExt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问外部平台的 OAuth 凭证 ID，不能为空。
                     * @return CredentialId 访问外部平台的 OAuth 凭证 ID，不能为空。
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置访问外部平台的 OAuth 凭证 ID，不能为空。
                     * @param _credentialId 访问外部平台的 OAuth 凭证 ID，不能为空。
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定凭证的只读摘要；创建和修改时忽略</p>
                     * @return Credential <p>绑定凭证的只读摘要；创建和修改时忽略</p>
                     * 
                     */
                    AppTriggerWebhookCredential GetCredential() const;

                    /**
                     * 设置<p>绑定凭证的只读摘要；创建和修改时忽略</p>
                     * @param _credential <p>绑定凭证的只读摘要；创建和修改时忽略</p>
                     * 
                     */
                    void SetCredential(const AppTriggerWebhookCredential& _credential);

                    /**
                     * 判断参数 Credential 是否已赋值
                     * @return Credential 是否已赋值
                     * 
                     */
                    bool CredentialHasBeenSet() const;

                    /**
                     * 获取工蜂配置，仅 WebhookProvider=1 时使用，与 TAPDConfig 互斥。
                     * @return GongfengConfig 工蜂配置，仅 WebhookProvider=1 时使用，与 TAPDConfig 互斥。
                     * 
                     */
                    AppTriggerGongfengWebhookConfig GetGongfengConfig() const;

                    /**
                     * 设置工蜂配置，仅 WebhookProvider=1 时使用，与 TAPDConfig 互斥。
                     * @param _gongfengConfig 工蜂配置，仅 WebhookProvider=1 时使用，与 TAPDConfig 互斥。
                     * 
                     */
                    void SetGongfengConfig(const AppTriggerGongfengWebhookConfig& _gongfengConfig);

                    /**
                     * 判断参数 GongfengConfig 是否已赋值
                     * @return GongfengConfig 是否已赋值
                     * 
                     */
                    bool GongfengConfigHasBeenSet() const;

                    /**
                     * 获取TAPD 配置，仅 WebhookProvider=2 时使用，与 GongfengConfig 互斥。
                     * @return TAPDConfig TAPD 配置，仅 WebhookProvider=2 时使用，与 GongfengConfig 互斥。
                     * 
                     */
                    AppTriggerTAPDWebhookConfig GetTAPDConfig() const;

                    /**
                     * 设置TAPD 配置，仅 WebhookProvider=2 时使用，与 GongfengConfig 互斥。
                     * @param _tAPDConfig TAPD 配置，仅 WebhookProvider=2 时使用，与 GongfengConfig 互斥。
                     * 
                     */
                    void SetTAPDConfig(const AppTriggerTAPDWebhookConfig& _tAPDConfig);

                    /**
                     * 判断参数 TAPDConfig 是否已赋值
                     * @return TAPDConfig 是否已赋值
                     * 
                     */
                    bool TAPDConfigHasBeenSet() const;

                private:

                    /**
                     * 访问外部平台的 OAuth 凭证 ID，不能为空。
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * <p>绑定凭证的只读摘要；创建和修改时忽略</p>
                     */
                    AppTriggerWebhookCredential m_credential;
                    bool m_credentialHasBeenSet;

                    /**
                     * 工蜂配置，仅 WebhookProvider=1 时使用，与 TAPDConfig 互斥。
                     */
                    AppTriggerGongfengWebhookConfig m_gongfengConfig;
                    bool m_gongfengConfigHasBeenSet;

                    /**
                     * TAPD 配置，仅 WebhookProvider=2 时使用，与 GongfengConfig 互斥。
                     */
                    AppTriggerTAPDWebhookConfig m_tAPDConfig;
                    bool m_tAPDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIGEXT_H_
