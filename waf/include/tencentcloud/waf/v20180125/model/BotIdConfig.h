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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDCONFIG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * BOT-ID规则信息
                */
                class BotIdConfig : public AbstractModel
                {
                public:
                    BotIdConfig();
                    ~BotIdConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则开关
                     * @return Status 规则开关
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置规则开关
                     * @param _status 规则开关
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取动作配置
                     * @return Action 动作配置
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作配置
                     * @param _action 动作配置
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return BotId 规则名称
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置规则名称
                     * @param _botId 规则名称
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取重定向路径
                     * @return Redirect 重定向路径
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置重定向路径
                     * @param _redirect 重定向路径
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则开关
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 动作配置
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 重定向路径
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDCONFIG_H_
