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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerScheduleStatus.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TriggerStatus
                */
                class TriggerStatus : public AbstractModel
                {
                public:
                    TriggerStatus();
                    ~TriggerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>定时器状态</p>
                     * @return ScheduledStatus <p>定时器状态</p>
                     * 
                     */
                    AppTriggerScheduleStatus GetScheduledStatus() const;

                    /**
                     * 设置<p>定时器状态</p>
                     * @param _scheduledStatus <p>定时器状态</p>
                     * 
                     */
                    void SetScheduledStatus(const AppTriggerScheduleStatus& _scheduledStatus);

                    /**
                     * 判断参数 ScheduledStatus 是否已赋值
                     * @return ScheduledStatus 是否已赋值
                     * 
                     */
                    bool ScheduledStatusHasBeenSet() const;

                    /**
                     * 获取<p>Webhook状态</p>
                     * @return WebhookStatus <p>Webhook状态</p>
                     * 
                     */
                    AppTriggerWebhookStatus GetWebhookStatus() const;

                    /**
                     * 设置<p>Webhook状态</p>
                     * @param _webhookStatus <p>Webhook状态</p>
                     * 
                     */
                    void SetWebhookStatus(const AppTriggerWebhookStatus& _webhookStatus);

                    /**
                     * 判断参数 WebhookStatus 是否已赋值
                     * @return WebhookStatus 是否已赋值
                     * 
                     */
                    bool WebhookStatusHasBeenSet() const;

                private:

                    /**
                     * <p>定时器状态</p>
                     */
                    AppTriggerScheduleStatus m_scheduledStatus;
                    bool m_scheduledStatusHasBeenSet;

                    /**
                     * <p>Webhook状态</p>
                     */
                    AppTriggerWebhookStatus m_webhookStatus;
                    bool m_webhookStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_
