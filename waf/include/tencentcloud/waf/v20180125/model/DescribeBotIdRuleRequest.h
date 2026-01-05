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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBotIdRule请求参数结构体
                */
                class DescribeBotIdRuleRequest : public AbstractModel
                {
                public:
                    DescribeBotIdRuleRequest();
                    ~DescribeBotIdRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

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
                     * 获取风险等级筛选
                     * @return Level 风险等级筛选
                     * 
                     */
                    std::vector<int64_t> GetLevel() const;

                    /**
                     * 设置风险等级筛选
                     * @param _level 风险等级筛选
                     * 
                     */
                    void SetLevel(const std::vector<int64_t>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取规则类型筛选
                     * @return BotIdType 规则类型筛选
                     * 
                     */
                    std::vector<std::string> GetBotIdType() const;

                    /**
                     * 设置规则类型筛选
                     * @param _botIdType 规则类型筛选
                     * 
                     */
                    void SetBotIdType(const std::vector<std::string>& _botIdType);

                    /**
                     * 判断参数 BotIdType 是否已赋值
                     * @return BotIdType 是否已赋值
                     * 
                     */
                    bool BotIdTypeHasBeenSet() const;

                    /**
                     * 获取规则开关-用于筛选: 0-全部 1-关闭 2-开启
                     * @return Status 规则开关-用于筛选: 0-全部 1-关闭 2-开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关-用于筛选: 0-全部 1-关闭 2-开启
                     * @param _status 规则开关-用于筛选: 0-全部 1-关闭 2-开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取动作类型-用于筛选
                     * @return RuleAction 动作类型-用于筛选
                     * 
                     */
                    std::vector<std::string> GetRuleAction() const;

                    /**
                     * 设置动作类型-用于筛选
                     * @param _ruleAction 动作类型-用于筛选
                     * 
                     */
                    void SetRuleAction(const std::vector<std::string>& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 风险等级筛选
                     */
                    std::vector<int64_t> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 规则类型筛选
                     */
                    std::vector<std::string> m_botIdType;
                    bool m_botIdTypeHasBeenSet;

                    /**
                     * 规则开关-用于筛选: 0-全部 1-关闭 2-开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 动作类型-用于筛选
                     */
                    std::vector<std::string> m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULEREQUEST_H_
