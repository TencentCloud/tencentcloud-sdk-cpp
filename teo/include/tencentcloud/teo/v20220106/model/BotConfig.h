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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/BotManagedRule.h>
#include <tencentcloud/teo/v20220106/model/BotPortraitRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 安全Bot配置
                */
                class BotConfig : public AbstractModel
                {
                public:
                    BotConfig();
                    ~BotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取bot开关
                     * @return Switch bot开关
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置bot开关
                     * @param Switch bot开关
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取预置规则
                     * @return ManagedRule 预置规则
                     */
                    BotManagedRule GetManagedRule() const;

                    /**
                     * 设置预置规则
                     * @param ManagedRule 预置规则
                     */
                    void SetManagedRule(const BotManagedRule& _managedRule);

                    /**
                     * 判断参数 ManagedRule 是否已赋值
                     * @return ManagedRule 是否已赋值
                     */
                    bool ManagedRuleHasBeenSet() const;

                    /**
                     * 获取保留
                     * @return UaBotRule 保留
                     */
                    BotManagedRule GetUaBotRule() const;

                    /**
                     * 设置保留
                     * @param UaBotRule 保留
                     */
                    void SetUaBotRule(const BotManagedRule& _uaBotRule);

                    /**
                     * 判断参数 UaBotRule 是否已赋值
                     * @return UaBotRule 是否已赋值
                     */
                    bool UaBotRuleHasBeenSet() const;

                    /**
                     * 获取保留
                     * @return IspBotRule 保留
                     */
                    BotManagedRule GetIspBotRule() const;

                    /**
                     * 设置保留
                     * @param IspBotRule 保留
                     */
                    void SetIspBotRule(const BotManagedRule& _ispBotRule);

                    /**
                     * 判断参数 IspBotRule 是否已赋值
                     * @return IspBotRule 是否已赋值
                     */
                    bool IspBotRuleHasBeenSet() const;

                    /**
                     * 获取用户画像规则
                     * @return PortraitRule 用户画像规则
                     */
                    BotPortraitRule GetPortraitRule() const;

                    /**
                     * 设置用户画像规则
                     * @param PortraitRule 用户画像规则
                     */
                    void SetPortraitRule(const BotPortraitRule& _portraitRule);

                    /**
                     * 判断参数 PortraitRule 是否已赋值
                     * @return PortraitRule 是否已赋值
                     */
                    bool PortraitRuleHasBeenSet() const;

                private:

                    /**
                     * bot开关
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 预置规则
                     */
                    BotManagedRule m_managedRule;
                    bool m_managedRuleHasBeenSet;

                    /**
                     * 保留
                     */
                    BotManagedRule m_uaBotRule;
                    bool m_uaBotRuleHasBeenSet;

                    /**
                     * 保留
                     */
                    BotManagedRule m_ispBotRule;
                    bool m_ispBotRuleHasBeenSet;

                    /**
                     * 用户画像规则
                     */
                    BotPortraitRule m_portraitRule;
                    bool m_portraitRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_
