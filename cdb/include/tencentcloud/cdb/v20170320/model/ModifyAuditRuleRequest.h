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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITRULEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditFilter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAuditRule请求参数结构体
                */
                class ModifyAuditRuleRequest : public AbstractModel
                {
                public:
                    ModifyAuditRuleRequest();
                    ~ModifyAuditRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取审计规则 ID。
                     * @return RuleId 审计规则 ID。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置审计规则 ID。
                     * @param _ruleId 审计规则 ID。
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
                     * 获取审计规则名称。
                     * @return RuleName 审计规则名称。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置审计规则名称。
                     * @param _ruleName 审计规则名称。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取审计规则描述。
                     * @return Description 审计规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置审计规则描述。
                     * @param _description 审计规则描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取审计规则过滤条件。若设置了过滤条件，则不会开启全审计。
                     * @return RuleFilters 审计规则过滤条件。若设置了过滤条件，则不会开启全审计。
                     * 
                     */
                    std::vector<AuditFilter> GetRuleFilters() const;

                    /**
                     * 设置审计规则过滤条件。若设置了过滤条件，则不会开启全审计。
                     * @param _ruleFilters 审计规则过滤条件。若设置了过滤条件，则不会开启全审计。
                     * 
                     */
                    void SetRuleFilters(const std::vector<AuditFilter>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取是否开启全审计。支持值包括：false – 不开启全审计，true – 开启全审计。用户未设置审计规则过滤条件时，默认开启全审计。
                     * @return AuditAll 是否开启全审计。支持值包括：false – 不开启全审计，true – 开启全审计。用户未设置审计规则过滤条件时，默认开启全审计。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置是否开启全审计。支持值包括：false – 不开启全审计，true – 开启全审计。用户未设置审计规则过滤条件时，默认开启全审计。
                     * @param _auditAll 是否开启全审计。支持值包括：false – 不开启全审计，true – 开启全审计。用户未设置审计规则过滤条件时，默认开启全审计。
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                private:

                    /**
                     * 审计规则 ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 审计规则名称。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 审计规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 审计规则过滤条件。若设置了过滤条件，则不会开启全审计。
                     */
                    std::vector<AuditFilter> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 是否开启全审计。支持值包括：false – 不开启全审计，true – 开启全审计。用户未设置审计规则过滤条件时，默认开启全审计。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITRULEREQUEST_H_
