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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotRatings.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot 智能分析的具体配置。
                */
                class BotIntelligence : public AbstractModel
                {
                public:
                    BotIntelligence();
                    ~BotIntelligence() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基于客户端和请求特征，将请求来源分为人类来源请求、合法 Bot 请求、疑似 Bot 请求和高风险 Bot 请求，并提供请求处置选项。
                     * @return BotRatings 基于客户端和请求特征，将请求来源分为人类来源请求、合法 Bot 请求、疑似 Bot 请求和高风险 Bot 请求，并提供请求处置选项。
                     * 
                     */
                    BotRatings GetBotRatings() const;

                    /**
                     * 设置基于客户端和请求特征，将请求来源分为人类来源请求、合法 Bot 请求、疑似 Bot 请求和高风险 Bot 请求，并提供请求处置选项。
                     * @param _botRatings 基于客户端和请求特征，将请求来源分为人类来源请求、合法 Bot 请求、疑似 Bot 请求和高风险 Bot 请求，并提供请求处置选项。
                     * 
                     */
                    void SetBotRatings(const BotRatings& _botRatings);

                    /**
                     * 判断参数 BotRatings 是否已赋值
                     * @return BotRatings 是否已赋值
                     * 
                     */
                    bool BotRatingsHasBeenSet() const;

                    /**
                     * 获取Bot 智能分析的具体配置开关。取值有：

on：开启；
off：关闭。
                     * @return Enabled Bot 智能分析的具体配置开关。取值有：

on：开启；
off：关闭。
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Bot 智能分析的具体配置开关。取值有：

on：开启；
off：关闭。
                     * @param _enabled Bot 智能分析的具体配置开关。取值有：

on：开启；
off：关闭。
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 基于客户端和请求特征，将请求来源分为人类来源请求、合法 Bot 请求、疑似 Bot 请求和高风险 Bot 请求，并提供请求处置选项。
                     */
                    BotRatings m_botRatings;
                    bool m_botRatingsHasBeenSet;

                    /**
                     * Bot 智能分析的具体配置开关。取值有：

on：开启；
off：关闭。
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTINTELLIGENCE_H_
