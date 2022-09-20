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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则组详情
                */
                class WafGroupDetail : public AbstractModel
                {
                public:
                    WafGroupDetail();
                    ~WafGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型ID。
                     * @return RuleTypeId 规则类型ID。
                     */
                    int64_t GetRuleTypeId() const;

                    /**
                     * 设置规则类型ID。
                     * @param RuleTypeId 规则类型ID。
                     */
                    void SetRuleTypeId(const int64_t& _ruleTypeId);

                    /**
                     * 判断参数 RuleTypeId 是否已赋值
                     * @return RuleTypeId 是否已赋值
                     */
                    bool RuleTypeIdHasBeenSet() const;

                    /**
                     * 获取规则类型名称。
                     * @return RuleTypeName 规则类型名称。
                     */
                    std::string GetRuleTypeName() const;

                    /**
                     * 设置规则类型名称。
                     * @param RuleTypeName 规则类型名称。
                     */
                    void SetRuleTypeName(const std::string& _ruleTypeName);

                    /**
                     * 判断参数 RuleTypeName 是否已赋值
                     * @return RuleTypeName 是否已赋值
                     */
                    bool RuleTypeNameHasBeenSet() const;

                    /**
                     * 获取规则类型描述。
                     * @return RuleTypeDesc 规则类型描述。
                     */
                    std::string GetRuleTypeDesc() const;

                    /**
                     * 设置规则类型描述。
                     * @param RuleTypeDesc 规则类型描述。
                     */
                    void SetRuleTypeDesc(const std::string& _ruleTypeDesc);

                    /**
                     * 判断参数 RuleTypeDesc 是否已赋值
                     * @return RuleTypeDesc 是否已赋值
                     */
                    bool RuleTypeDescHasBeenSet() const;

                    /**
                     * 获取规则列表。
                     * @return WafGroupRules 规则列表。
                     */
                    std::vector<WafGroupRule> GetWafGroupRules() const;

                    /**
                     * 设置规则列表。
                     * @param WafGroupRules 规则列表。
                     */
                    void SetWafGroupRules(const std::vector<WafGroupRule>& _wafGroupRules);

                    /**
                     * 判断参数 WafGroupRules 是否已赋值
                     * @return WafGroupRules 是否已赋值
                     */
                    bool WafGroupRulesHasBeenSet() const;

                    /**
                     * 获取规则等级。
                     * @return Level 规则等级。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置规则等级。
                     * @param Level 规则等级。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取动作。
                     * @return Action 动作。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作。
                     * @param Action 动作。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 规则类型ID。
                     */
                    int64_t m_ruleTypeId;
                    bool m_ruleTypeIdHasBeenSet;

                    /**
                     * 规则类型名称。
                     */
                    std::string m_ruleTypeName;
                    bool m_ruleTypeNameHasBeenSet;

                    /**
                     * 规则类型描述。
                     */
                    std::string m_ruleTypeDesc;
                    bool m_ruleTypeDescHasBeenSet;

                    /**
                     * 规则列表。
                     */
                    std::vector<WafGroupRule> m_wafGroupRules;
                    bool m_wafGroupRulesHasBeenSet;

                    /**
                     * 规则等级。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 动作。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPDETAIL_H_
