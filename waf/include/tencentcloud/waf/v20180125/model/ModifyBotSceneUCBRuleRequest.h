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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSCENEUCBRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSCENEUCBRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/InOutputBotUCBRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyBotSceneUCBRule请求参数结构体
                */
                class ModifyBotSceneUCBRuleRequest : public AbstractModel
                {
                public:
                    ModifyBotSceneUCBRuleRequest();
                    ~ModifyBotSceneUCBRuleRequest() = default;
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
                     * 获取1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
                     * @return SceneId 1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
                     * @param _sceneId 1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
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
                     * 获取规则内容, 增加编码SceneId信息,1.BOT全局白名单处调用时，SceneId为"global", RuleType传10, Action为"permit";2.BOT场景配置时，SceneId为场景ID
                     * @return Rule 规则内容, 增加编码SceneId信息,1.BOT全局白名单处调用时，SceneId为"global", RuleType传10, Action为"permit";2.BOT场景配置时，SceneId为场景ID
                     * 
                     */
                    InOutputBotUCBRule GetRule() const;

                    /**
                     * 设置规则内容, 增加编码SceneId信息,1.BOT全局白名单处调用时，SceneId为"global", RuleType传10, Action为"permit";2.BOT场景配置时，SceneId为场景ID
                     * @param _rule 规则内容, 增加编码SceneId信息,1.BOT全局白名单处调用时，SceneId为"global", RuleType传10, Action为"permit";2.BOT场景配置时，SceneId为场景ID
                     * 
                     */
                    void SetRule(const InOutputBotUCBRule& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取530改批量操作
                     * @return BatchRules 530改批量操作
                     * 
                     */
                    std::vector<InOutputBotUCBRule> GetBatchRules() const;

                    /**
                     * 设置530改批量操作
                     * @param _batchRules 530改批量操作
                     * 
                     */
                    void SetBatchRules(const std::vector<InOutputBotUCBRule>& _batchRules);

                    /**
                     * 判断参数 BatchRules 是否已赋值
                     * @return BatchRules 是否已赋值
                     * 
                     */
                    bool BatchRulesHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 规则内容, 增加编码SceneId信息,1.BOT全局白名单处调用时，SceneId为"global", RuleType传10, Action为"permit";2.BOT场景配置时，SceneId为场景ID
                     */
                    InOutputBotUCBRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 530改批量操作
                     */
                    std::vector<InOutputBotUCBRule> m_batchRules;
                    bool m_batchRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTSCENEUCBRULEREQUEST_H_
