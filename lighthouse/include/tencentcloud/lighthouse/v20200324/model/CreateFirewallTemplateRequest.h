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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateFirewallTemplate请求参数结构体
                */
                class CreateFirewallTemplateRequest : public AbstractModel
                {
                public:
                    CreateFirewallTemplateRequest();
                    ~CreateFirewallTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取防火墙规则列表。
                     * @return TemplateRules 防火墙规则列表。
                     * 
                     */
                    std::vector<FirewallRule> GetTemplateRules() const;

                    /**
                     * 设置防火墙规则列表。
                     * @param _templateRules 防火墙规则列表。
                     * 
                     */
                    void SetTemplateRules(const std::vector<FirewallRule>& _templateRules);

                    /**
                     * 判断参数 TemplateRules 是否已赋值
                     * @return TemplateRules 是否已赋值
                     * 
                     */
                    bool TemplateRulesHasBeenSet() const;

                private:

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 防火墙规则列表。
                     */
                    std::vector<FirewallRule> m_templateRules;
                    bool m_templateRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEFIREWALLTEMPLATEREQUEST_H_
