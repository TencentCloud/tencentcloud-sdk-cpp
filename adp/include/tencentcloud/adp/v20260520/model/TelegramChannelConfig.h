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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TELEGRAMCHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TELEGRAMCHANNELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Telegram渠道配置
                */
                class TelegramChannelConfig : public AbstractModel
                {
                public:
                    TelegramChannelConfig();
                    ~TelegramChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Telegram Bot Token</p>
                     * @return BotToken <p>Telegram Bot Token</p>
                     * 
                     */
                    std::string GetBotToken() const;

                    /**
                     * 设置<p>Telegram Bot Token</p>
                     * @param _botToken <p>Telegram Bot Token</p>
                     * 
                     */
                    void SetBotToken(const std::string& _botToken);

                    /**
                     * 判断参数 BotToken 是否已赋值
                     * @return BotToken 是否已赋值
                     * 
                     */
                    bool BotTokenHasBeenSet() const;

                private:

                    /**
                     * <p>Telegram Bot Token</p>
                     */
                    std::string m_botToken;
                    bool m_botTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TELEGRAMCHANNELCONFIG_H_
