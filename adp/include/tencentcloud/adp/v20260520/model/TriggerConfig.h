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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerScheduleConfig.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TriggerConfig
                */
                class TriggerConfig : public AbstractModel
                {
                public:
                    TriggerConfig();
                    ~TriggerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定时器配置</p>
                     * @return ScheduledConfig <p>定时器配置</p>
                     * 
                     */
                    AppTriggerScheduleConfig GetScheduledConfig() const;

                    /**
                     * 设置<p>定时器配置</p>
                     * @param _scheduledConfig <p>定时器配置</p>
                     * 
                     */
                    void SetScheduledConfig(const AppTriggerScheduleConfig& _scheduledConfig);

                    /**
                     * 判断参数 ScheduledConfig 是否已赋值
                     * @return ScheduledConfig 是否已赋值
                     * 
                     */
                    bool ScheduledConfigHasBeenSet() const;

                    /**
                     * 获取<p>Webhook配置</p>
                     * @return WebhookConfig <p>Webhook配置</p>
                     * 
                     */
                    AppTriggerWebhookConfig GetWebhookConfig() const;

                    /**
                     * 设置<p>Webhook配置</p>
                     * @param _webhookConfig <p>Webhook配置</p>
                     * 
                     */
                    void SetWebhookConfig(const AppTriggerWebhookConfig& _webhookConfig);

                    /**
                     * 判断参数 WebhookConfig 是否已赋值
                     * @return WebhookConfig 是否已赋值
                     * 
                     */
                    bool WebhookConfigHasBeenSet() const;

                private:

                    /**
                     * <p>定时器配置</p>
                     */
                    AppTriggerScheduleConfig m_scheduledConfig;
                    bool m_scheduledConfigHasBeenSet;

                    /**
                     * <p>Webhook配置</p>
                     */
                    AppTriggerWebhookConfig m_webhookConfig;
                    bool m_webhookConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERCONFIG_H_
