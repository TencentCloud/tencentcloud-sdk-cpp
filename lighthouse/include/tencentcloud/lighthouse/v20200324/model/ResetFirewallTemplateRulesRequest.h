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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETFIREWALLTEMPLATERULESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETFIREWALLTEMPLATERULESREQUEST_H_

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
                * ResetFirewallTemplateRules请求参数结构体
                */
                class ResetFirewallTemplateRulesRequest : public AbstractModel
                {
                public:
                    ResetFirewallTemplateRulesRequest();
                    ~ResetFirewallTemplateRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙模板ID。可通过 [DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874) 接口返回值中的 TemplateId	获取。
                     * @return TemplateId 防火墙模板ID。可通过 [DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874) 接口返回值中的 TemplateId	获取。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置防火墙模板ID。可通过 [DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874) 接口返回值中的 TemplateId	获取。
                     * @param _templateId 防火墙模板ID。可通过 [DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874) 接口返回值中的 TemplateId	获取。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取重置后的防火墙模板规则列表。每次请求批量防火墙规则的上限为 100。
                     * @return TemplateRules 重置后的防火墙模板规则列表。每次请求批量防火墙规则的上限为 100。
                     * 
                     */
                    std::vector<FirewallRule> GetTemplateRules() const;

                    /**
                     * 设置重置后的防火墙模板规则列表。每次请求批量防火墙规则的上限为 100。
                     * @param _templateRules 重置后的防火墙模板规则列表。每次请求批量防火墙规则的上限为 100。
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
                     * 防火墙模板ID。可通过 [DescribeFirewallTemplates](https://cloud.tencent.com/document/product/1207/96874) 接口返回值中的 TemplateId	获取。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 重置后的防火墙模板规则列表。每次请求批量防火墙规则的上限为 100。
                     */
                    std::vector<FirewallRule> m_templateRules;
                    bool m_templateRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RESETFIREWALLTEMPLATERULESREQUEST_H_
