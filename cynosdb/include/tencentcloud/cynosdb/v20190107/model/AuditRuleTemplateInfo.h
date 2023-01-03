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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 审计规则模版的详情
                */
                class AuditRuleTemplateInfo : public AbstractModel
                {
                public:
                    AuditRuleTemplateInfo();
                    ~AuditRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则模版ID。
                     * @return RuleTemplateId 规则模版ID。
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置规则模版ID。
                     * @param RuleTemplateId 规则模版ID。
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模版名称。
                     * @return RuleTemplateName 规则模版名称。
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置规则模版名称。
                     * @param RuleTemplateName 规则模版名称。
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取规则模版的过滤条件
                     * @return RuleFilters 规则模版的过滤条件
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置规则模版的过滤条件
                     * @param RuleFilters 规则模版的过滤条件
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取规则模版描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则模版描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则模版描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 规则模版描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则模版创建时间。
                     * @return CreateAt 规则模版创建时间。
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置规则模版创建时间。
                     * @param CreateAt 规则模版创建时间。
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     */
                    bool CreateAtHasBeenSet() const;

                private:

                    /**
                     * 规则模版ID。
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则模版名称。
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * 规则模版的过滤条件
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * 规则模版描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则模版创建时间。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
