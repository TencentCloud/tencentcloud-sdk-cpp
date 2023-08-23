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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATERULE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallRule.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 防火墙模板规则信息
                */
                class FirewallTemplateRule : public AbstractModel
                {
                public:
                    FirewallTemplateRule();
                    ~FirewallTemplateRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙模板规则ID。
                     * @return TemplateRuleId 防火墙模板规则ID。
                     * 
                     */
                    std::string GetTemplateRuleId() const;

                    /**
                     * 设置防火墙模板规则ID。
                     * @param _templateRuleId 防火墙模板规则ID。
                     * 
                     */
                    void SetTemplateRuleId(const std::string& _templateRuleId);

                    /**
                     * 判断参数 TemplateRuleId 是否已赋值
                     * @return TemplateRuleId 是否已赋值
                     * 
                     */
                    bool TemplateRuleIdHasBeenSet() const;

                    /**
                     * 获取防火墙规则。
                     * @return FirewallRule 防火墙规则。
                     * 
                     */
                    FirewallRule GetFirewallRule() const;

                    /**
                     * 设置防火墙规则。
                     * @param _firewallRule 防火墙规则。
                     * 
                     */
                    void SetFirewallRule(const FirewallRule& _firewallRule);

                    /**
                     * 判断参数 FirewallRule 是否已赋值
                     * @return FirewallRule 是否已赋值
                     * 
                     */
                    bool FirewallRuleHasBeenSet() const;

                private:

                    /**
                     * 防火墙模板规则ID。
                     */
                    std::string m_templateRuleId;
                    bool m_templateRuleIdHasBeenSet;

                    /**
                     * 防火墙规则。
                     */
                    FirewallRule m_firewallRule;
                    bool m_firewallRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATERULE_H_
