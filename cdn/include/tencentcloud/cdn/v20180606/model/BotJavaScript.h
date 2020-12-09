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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BOTJAVASCRIPT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BOTJAVASCRIPT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Bot js策略
                */
                class BotJavaScript : public AbstractModel
                {
                public:
                    BotJavaScript();
                    ~BotJavaScript() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取on|off
                     * @return Switch on|off
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置on|off
                     * @param Switch on|off
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取规则类型，当前只有file
                     * @return RuleType 规则类型，当前只有file
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型，当前只有file
                     * @param RuleType 规则类型，当前只有file
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取规则值，['html', 'htm']
                     * @return RuleValue 规则值，['html', 'htm']
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置规则值，['html', 'htm']
                     * @param RuleValue 规则值，['html', 'htm']
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取执行动作，monitor|intercept|redirect|captcha
                     * @return Action 执行动作，monitor|intercept|redirect|captcha
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作，monitor|intercept|redirect|captcha
                     * @param Action 执行动作，monitor|intercept|redirect|captcha
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取重定向时设置的重定向页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectUrl 重定向时设置的重定向页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向时设置的重定向页面
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RedirectUrl 重定向时设置的重定向页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * on|off
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 规则类型，当前只有file
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 规则值，['html', 'htm']
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * 执行动作，monitor|intercept|redirect|captcha
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 重定向时设置的重定向页面
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BOTJAVASCRIPT_H_
