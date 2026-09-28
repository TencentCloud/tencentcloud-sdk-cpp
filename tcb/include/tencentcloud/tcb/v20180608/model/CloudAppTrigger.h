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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPTRIGGER_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudAppWebHook.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云应用触发器
                */
                class CloudAppTrigger : public AbstractModel
                {
                public:
                    CloudAppTrigger();
                    ~CloudAppTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>webhook 配置</p>
                     * @return Webhook <p>webhook 配置</p>
                     * 
                     */
                    CloudAppWebHook GetWebhook() const;

                    /**
                     * 设置<p>webhook 配置</p>
                     * @param _webhook <p>webhook 配置</p>
                     * 
                     */
                    void SetWebhook(const CloudAppWebHook& _webhook);

                    /**
                     * 判断参数 Webhook 是否已赋值
                     * @return Webhook 是否已赋值
                     * 
                     */
                    bool WebhookHasBeenSet() const;

                private:

                    /**
                     * <p>webhook 配置</p>
                     */
                    CloudAppWebHook m_webhook;
                    bool m_webhookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPTRIGGER_H_
