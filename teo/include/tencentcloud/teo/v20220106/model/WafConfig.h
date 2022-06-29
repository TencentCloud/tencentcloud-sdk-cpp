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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/WafRule.h>
#include <tencentcloud/teo/v20220106/model/AiRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 门神配置
                */
                class WafConfig : public AbstractModel
                {
                public:
                    WafConfig();
                    ~WafConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开关
                     * @return Switch 开关
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关
                     * @param Switch 开关
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取防护级别，loose/normal/strict/stricter/custom
                     * @return Level 防护级别，loose/normal/strict/stricter/custom
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置防护级别，loose/normal/strict/stricter/custom
                     * @param Level 防护级别，loose/normal/strict/stricter/custom
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取模式 block-阻断；observe-观察模式；close-关闭
                     * @return Mode 模式 block-阻断；observe-观察模式；close-关闭
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式 block-阻断；observe-观察模式；close-关闭
                     * @param Mode 模式 block-阻断；observe-观察模式；close-关闭
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取门神黑白名单
                     * @return WafRules 门神黑白名单
                     */
                    WafRule GetWafRules() const;

                    /**
                     * 设置门神黑白名单
                     * @param WafRules 门神黑白名单
                     */
                    void SetWafRules(const WafRule& _wafRules);

                    /**
                     * 判断参数 WafRules 是否已赋值
                     * @return WafRules 是否已赋值
                     */
                    bool WafRulesHasBeenSet() const;

                    /**
                     * 获取AI规则引擎防护
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiRule AI规则引擎防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRule GetAiRule() const;

                    /**
                     * 设置AI规则引擎防护
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AiRule AI规则引擎防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAiRule(const AiRule& _aiRule);

                    /**
                     * 判断参数 AiRule 是否已赋值
                     * @return AiRule 是否已赋值
                     */
                    bool AiRuleHasBeenSet() const;

                private:

                    /**
                     * 开关
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 防护级别，loose/normal/strict/stricter/custom
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 模式 block-阻断；observe-观察模式；close-关闭
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 门神黑白名单
                     */
                    WafRule m_wafRules;
                    bool m_wafRulesHasBeenSet;

                    /**
                     * AI规则引擎防护
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRule m_aiRule;
                    bool m_aiRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_WAFCONFIG_H_
