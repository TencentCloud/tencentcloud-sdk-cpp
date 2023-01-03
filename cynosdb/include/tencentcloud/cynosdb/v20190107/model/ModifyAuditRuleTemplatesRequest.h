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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyAuditRuleTemplates请求参数结构体
                */
                class ModifyAuditRuleTemplatesRequest : public AbstractModel
                {
                public:
                    ModifyAuditRuleTemplatesRequest();
                    ~ModifyAuditRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审计规则模版ID。
                     * @return RuleTemplateIds 审计规则模版ID。
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置审计规则模版ID。
                     * @param RuleTemplateIds 审计规则模版ID。
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取修改后的审计规则。
                     * @return RuleFilters 修改后的审计规则。
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置修改后的审计规则。
                     * @param RuleFilters 修改后的审计规则。
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取修改后的规则模版名称。
                     * @return RuleTemplateName 修改后的规则模版名称。
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置修改后的规则模版名称。
                     * @param RuleTemplateName 修改后的规则模版名称。
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取修改后的规则模版描述。
                     * @return Description 修改后的规则模版描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置修改后的规则模版描述。
                     * @param Description 修改后的规则模版描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 审计规则模版ID。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * 修改后的审计规则。
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 修改后的规则模版名称。
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * 修改后的规则模版描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_
