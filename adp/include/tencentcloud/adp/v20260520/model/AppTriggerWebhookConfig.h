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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookParamSchemaConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerWebhookConfig
                */
                class AppTriggerWebhookConfig : public AbstractModel
                {
                public:
                    AppTriggerWebhookConfig();
                    ~AppTriggerWebhookConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发器webhook参数配置</p>
                     * @return ParamSchemaConfig <p>触发器webhook参数配置</p>
                     * 
                     */
                    AppTriggerWebhookParamSchemaConfig GetParamSchemaConfig() const;

                    /**
                     * 设置<p>触发器webhook参数配置</p>
                     * @param _paramSchemaConfig <p>触发器webhook参数配置</p>
                     * 
                     */
                    void SetParamSchemaConfig(const AppTriggerWebhookParamSchemaConfig& _paramSchemaConfig);

                    /**
                     * 判断参数 ParamSchemaConfig 是否已赋值
                     * @return ParamSchemaConfig 是否已赋值
                     * 
                     */
                    bool ParamSchemaConfigHasBeenSet() const;

                    /**
                     * 获取<p>webhook的key</p>
                     * @return WebhookKey <p>webhook的key</p>
                     * 
                     */
                    std::string GetWebhookKey() const;

                    /**
                     * 设置<p>webhook的key</p>
                     * @param _webhookKey <p>webhook的key</p>
                     * 
                     */
                    void SetWebhookKey(const std::string& _webhookKey);

                    /**
                     * 判断参数 WebhookKey 是否已赋值
                     * @return WebhookKey 是否已赋值
                     * 
                     */
                    bool WebhookKeyHasBeenSet() const;

                    /**
                     * 获取<p>webhook的密钥</p>
                     * @return WebhookToken <p>webhook的密钥</p>
                     * 
                     */
                    std::string GetWebhookToken() const;

                    /**
                     * 设置<p>webhook的密钥</p>
                     * @param _webhookToken <p>webhook的密钥</p>
                     * 
                     */
                    void SetWebhookToken(const std::string& _webhookToken);

                    /**
                     * 判断参数 WebhookToken 是否已赋值
                     * @return WebhookToken 是否已赋值
                     * 
                     */
                    bool WebhookTokenHasBeenSet() const;

                    /**
                     * 获取<p>webhook的地址</p>
                     * @return WebhookUrl <p>webhook的地址</p>
                     * 
                     */
                    std::string GetWebhookUrl() const;

                    /**
                     * 设置<p>webhook的地址</p>
                     * @param _webhookUrl <p>webhook的地址</p>
                     * 
                     */
                    void SetWebhookUrl(const std::string& _webhookUrl);

                    /**
                     * 判断参数 WebhookUrl 是否已赋值
                     * @return WebhookUrl 是否已赋值
                     * 
                     */
                    bool WebhookUrlHasBeenSet() const;

                private:

                    /**
                     * <p>触发器webhook参数配置</p>
                     */
                    AppTriggerWebhookParamSchemaConfig m_paramSchemaConfig;
                    bool m_paramSchemaConfigHasBeenSet;

                    /**
                     * <p>webhook的key</p>
                     */
                    std::string m_webhookKey;
                    bool m_webhookKeyHasBeenSet;

                    /**
                     * <p>webhook的密钥</p>
                     */
                    std::string m_webhookToken;
                    bool m_webhookTokenHasBeenSet;

                    /**
                     * <p>webhook的地址</p>
                     */
                    std::string m_webhookUrl;
                    bool m_webhookUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERWEBHOOKCONFIG_H_
