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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBOTSCENEUCBRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBOTSCENEUCBRULEREQUEST_H_

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
                * DeleteBotSceneUCBRule请求参数结构体
                */
                class DeleteBotSceneUCBRuleRequest : public AbstractModel
                {
                public:
                    DeleteBotSceneUCBRuleRequest();
                    ~DeleteBotSceneUCBRuleRequest() = default;
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
                     * 获取自定义规则ID
                     * @return RuleId 自定义规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置自定义规则ID
                     * @param _ruleId 自定义规则ID
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

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 自定义规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 1.BOT全局白名单处调用时，传"global";2.BOT场景配置时，传具体的场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEBOTSCENEUCBRULEREQUEST_H_
