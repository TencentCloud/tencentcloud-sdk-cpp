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
#include <tencentcloud/teo/v20220106/model/IntelligenceRule.h>


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
                     * 获取开关。
1. on 开启
2. off 关闭
                     * @return Switch 开关。
1. on 开启
2. off 关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关。
1. on 开启
2. off 关闭
                     * @param Switch 开关。
1. on 开启
2. off 关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取通用详细基础规则。
                     * @return ManagedRule 通用详细基础规则。
                     */
                    BotManagedRule GetManagedRule() const;

                    /**
                     * 设置通用详细基础规则。
                     * @param ManagedRule 通用详细基础规则。
                     */
                    void SetManagedRule(const BotManagedRule& _managedRule);

                    /**
                     * 判断参数 ManagedRule 是否已赋值
                     * @return ManagedRule 是否已赋值
                     */
                    bool ManagedRuleHasBeenSet() const;

                    /**
                     * 获取ua基础规则。
                     * @return UaBotRule ua基础规则。
                     */
                    BotManagedRule GetUaBotRule() const;

                    /**
                     * 设置ua基础规则。
                     * @param UaBotRule ua基础规则。
                     */
                    void SetUaBotRule(const BotManagedRule& _uaBotRule);

                    /**
                     * 判断参数 UaBotRule 是否已赋值
                     * @return UaBotRule 是否已赋值
                     */
                    bool UaBotRuleHasBeenSet() const;

                    /**
                     * 获取isp基础规则。
                     * @return IspBotRule isp基础规则。
                     */
                    BotManagedRule GetIspBotRule() const;

                    /**
                     * 设置isp基础规则。
                     * @param IspBotRule isp基础规则。
                     */
                    void SetIspBotRule(const BotManagedRule& _ispBotRule);

                    /**
                     * 判断参数 IspBotRule 是否已赋值
                     * @return IspBotRule 是否已赋值
                     */
                    bool IspBotRuleHasBeenSet() const;

                    /**
                     * 获取用户画像规则。
                     * @return PortraitRule 用户画像规则。
                     */
                    BotPortraitRule GetPortraitRule() const;

                    /**
                     * 设置用户画像规则。
                     * @param PortraitRule 用户画像规则。
                     */
                    void SetPortraitRule(const BotPortraitRule& _portraitRule);

                    /**
                     * 判断参数 PortraitRule 是否已赋值
                     * @return PortraitRule 是否已赋值
                     */
                    bool PortraitRuleHasBeenSet() const;

                    /**
                     * 获取Bot智能分析。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntelligenceRule Bot智能分析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntelligenceRule GetIntelligenceRule() const;

                    /**
                     * 设置Bot智能分析。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntelligenceRule Bot智能分析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntelligenceRule(const IntelligenceRule& _intelligenceRule);

                    /**
                     * 判断参数 IntelligenceRule 是否已赋值
                     * @return IntelligenceRule 是否已赋值
                     */
                    bool IntelligenceRuleHasBeenSet() const;

                private:

                    /**
                     * 开关。
1. on 开启
2. off 关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 通用详细基础规则。
                     */
                    BotManagedRule m_managedRule;
                    bool m_managedRuleHasBeenSet;

                    /**
                     * ua基础规则。
                     */
                    BotManagedRule m_uaBotRule;
                    bool m_uaBotRuleHasBeenSet;

                    /**
                     * isp基础规则。
                     */
                    BotManagedRule m_ispBotRule;
                    bool m_ispBotRuleHasBeenSet;

                    /**
                     * 用户画像规则。
                     */
                    BotPortraitRule m_portraitRule;
                    bool m_portraitRuleHasBeenSet;

                    /**
                     * Bot智能分析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntelligenceRule m_intelligenceRule;
                    bool m_intelligenceRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTCONFIG_H_
