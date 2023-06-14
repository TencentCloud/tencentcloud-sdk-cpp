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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 审计规则
                */
                class AuditRule : public AbstractModel
                {
                public:
                    AuditRule();
                    ~AuditRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审计规则 Id。
                     * @return RuleId 审计规则 Id。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置审计规则 Id。
                     * @param _ruleId 审计规则 Id。
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
                     * 获取审计规则创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @return CreateTime 审计规则创建时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置审计规则创建时间。格式为 : "2019-03-20 17:09:13"。
                     * @param _createTime 审计规则创建时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审计规则最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * @return ModifyTime 审计规则最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置审计规则最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * @param _modifyTime 审计规则最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取审计规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 审计规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置审计规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 审计规则名称。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 审计规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置审计规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 审计规则描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取审计规则过滤条件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleFilters 审计规则过滤条件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuditFilter> GetRuleFilters() const;

                    /**
                     * 设置审计规则过滤条件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleFilters 审计规则过滤条件。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否开启全审计。
                     * @return AuditAll 是否开启全审计。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置是否开启全审计。
                     * @param _auditAll 是否开启全审计。
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
                     * 审计规则 Id。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 审计规则创建时间。格式为 : "2019-03-20 17:09:13"。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审计规则最后修改时间。格式为 : "2019-03-20 17:09:13"。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 审计规则名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 审计规则描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 审计规则过滤条件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuditFilter> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 是否开启全审计。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_
