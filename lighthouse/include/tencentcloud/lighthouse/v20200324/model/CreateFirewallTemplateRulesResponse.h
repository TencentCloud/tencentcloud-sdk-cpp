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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATERULESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATERULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateFirewallTemplateRules返回参数结构体
                */
                class CreateFirewallTemplateRulesResponse : public AbstractModel
                {
                public:
                    CreateFirewallTemplateRulesResponse();
                    ~CreateFirewallTemplateRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID列表。
                     * @return TemplateRuleIdSet 规则ID列表。
                     * 
                     */
                    std::vector<std::string> GetTemplateRuleIdSet() const;

                    /**
                     * 判断参数 TemplateRuleIdSet 是否已赋值
                     * @return TemplateRuleIdSet 是否已赋值
                     * 
                     */
                    bool TemplateRuleIdSetHasBeenSet() const;

                private:

                    /**
                     * 规则ID列表。
                     */
                    std::vector<std::string> m_templateRuleIdSet;
                    bool m_templateRuleIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATERULESRESPONSE_H_
