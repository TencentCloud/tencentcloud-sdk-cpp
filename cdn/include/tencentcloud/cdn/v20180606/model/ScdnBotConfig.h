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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/BotCookie.h>
#include <tencentcloud/cdn/v20180606/model/BotJavaScript.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * bot配置类型
                */
                class ScdnBotConfig : public AbstractModel
                {
                public:
                    ScdnBotConfig();
                    ~ScdnBotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scdn bot配置开关，取值有：
on：开启
off：关闭
                     * @return Switch Scdn bot配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Scdn bot配置开关，取值有：
on：开启
off：关闭
                     * @param _switch Scdn bot配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Bot cookie策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotCookie Bot cookie策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BotCookie> GetBotCookie() const;

                    /**
                     * 设置Bot cookie策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _botCookie Bot cookie策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBotCookie(const std::vector<BotCookie>& _botCookie);

                    /**
                     * 判断参数 BotCookie 是否已赋值
                     * @return BotCookie 是否已赋值
                     * 
                     */
                    bool BotCookieHasBeenSet() const;

                    /**
                     * 获取Bot Js策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotJavaScript Bot Js策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BotJavaScript> GetBotJavaScript() const;

                    /**
                     * 设置Bot Js策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _botJavaScript Bot Js策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBotJavaScript(const std::vector<BotJavaScript>& _botJavaScript);

                    /**
                     * 判断参数 BotJavaScript 是否已赋值
                     * @return BotJavaScript 是否已赋值
                     * 
                     */
                    bool BotJavaScriptHasBeenSet() const;

                private:

                    /**
                     * Scdn bot配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Bot cookie策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BotCookie> m_botCookie;
                    bool m_botCookieHasBeenSet;

                    /**
                     * Bot Js策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BotJavaScript> m_botJavaScript;
                    bool m_botJavaScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNBOTCONFIG_H_
