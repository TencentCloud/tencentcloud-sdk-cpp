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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TOPICRULE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TOPICRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TopicRule结构
                */
                class TopicRule : public AbstractModel
                {
                public:
                    TopicRule();
                    ~TopicRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称。
                     * @return RuleName 规则名称。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称。
                     * @param _ruleName 规则名称。
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
                     * 获取规则的SQL语句，如： SELECT * FROM 'pid/dname/event'，然后对其进行base64编码，得：U0VMRUNUICogRlJPTSAncGlkL2RuYW1lL2V2ZW50Jw==
                     * @return Sql 规则的SQL语句，如： SELECT * FROM 'pid/dname/event'，然后对其进行base64编码，得：U0VMRUNUICogRlJPTSAncGlkL2RuYW1lL2V2ZW50Jw==
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置规则的SQL语句，如： SELECT * FROM 'pid/dname/event'，然后对其进行base64编码，得：U0VMRUNUICogRlJPTSAncGlkL2RuYW1lL2V2ZW50Jw==
                     * @param _sql 规则的SQL语句，如： SELECT * FROM 'pid/dname/event'，然后对其进行base64编码，得：U0VMRUNUICogRlJPTSAncGlkL2RuYW1lL2V2ZW50Jw==
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取规则描述。
                     * @return Description 规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述。
                     * @param _description 规则描述。
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
                     * 获取行为的JSON字符串。
                     * @return Actions 行为的JSON字符串。
                     * 
                     */
                    std::string GetActions() const;

                    /**
                     * 设置行为的JSON字符串。
                     * @param _actions 行为的JSON字符串。
                     * 
                     */
                    void SetActions(const std::string& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取是否禁用规则
                     * @return RuleDisabled 是否禁用规则
                     * 
                     */
                    bool GetRuleDisabled() const;

                    /**
                     * 设置是否禁用规则
                     * @param _ruleDisabled 是否禁用规则
                     * 
                     */
                    void SetRuleDisabled(const bool& _ruleDisabled);

                    /**
                     * 判断参数 RuleDisabled 是否已赋值
                     * @return RuleDisabled 是否已赋值
                     * 
                     */
                    bool RuleDisabledHasBeenSet() const;

                private:

                    /**
                     * 规则名称。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则的SQL语句，如： SELECT * FROM 'pid/dname/event'，然后对其进行base64编码，得：U0VMRUNUICogRlJPTSAncGlkL2RuYW1lL2V2ZW50Jw==
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 行为的JSON字符串。
                     */
                    std::string m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * 是否禁用规则
                     */
                    bool m_ruleDisabled;
                    bool m_ruleDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TOPICRULE_H_
