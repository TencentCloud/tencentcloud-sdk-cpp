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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPRULEENGINEITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPRULEENGINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleBranch.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 七层加速规则，执行顺序由数组顺序决定。
                */
                class ConfigGroupRuleEngineItem : public AbstractModel
                {
                public:
                    ConfigGroupRuleEngineItem();
                    ~ConfigGroupRuleEngineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * @return RuleName <p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称。名称长度限制不超过 255 个字符。</p>
                     * @param _ruleName <p>规则名称。名称长度限制不超过 255 个字符。</p>
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
                     * 获取<p>规则注释。可以填写多个注释。</p>
                     * @return Description <p>规则注释。可以填写多个注释。</p>
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置<p>规则注释。可以填写多个注释。</p>
                     * @param _description <p>规则注释。可以填写多个注释。</p>
                     * 
                     */
                    void SetDescription(const std::vector<std::string>& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Branches <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置<p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _branches <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBranches(const std::vector<RuleBranch>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                private:

                    /**
                     * <p>规则名称。名称长度限制不超过 255 个字符。</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则注释。可以填写多个注释。</p>
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>子规则分支。此列表当前只支持填写一项规则，多填无效。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPRULEENGINEITEM_H_
