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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/TriggerType.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateConfigRule请求参数结构体
                */
                class UpdateConfigRuleRequest : public AbstractModel
                {
                public:
                    UpdateConfigRuleRequest();
                    ~UpdateConfigRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取触发类型，最多支持两种
                     * @return TriggerType 触发类型，最多支持两种
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置触发类型，最多支持两种
                     * @param _triggerType 触发类型，最多支持两种
                     * 
                     */
                    void SetTriggerType(const std::vector<TriggerType>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取风险等级
1：高风险。
2：中风险。
3：低风险。
                     * @return RiskLevel 风险等级
1：高风险。
2：中风险。
3：低风险。
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
1：高风险。
2：中风险。
3：低风险。
                     * @param _riskLevel 风险等级
1：高风险。
2：中风险。
3：低风险。
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
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
                     * 获取入参
                     * @return InputParameter 入参
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置入参
                     * @param _inputParameter 入参
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameter>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取规则评估地域范围，规则仅对指定地域中的资源生效。
支持的地域范围config:ListResourceRegions返回的地域
                     * @return RegionsScope 规则评估地域范围，规则仅对指定地域中的资源生效。
支持的地域范围config:ListResourceRegions返回的地域
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置规则评估地域范围，规则仅对指定地域中的资源生效。
支持的地域范围config:ListResourceRegions返回的地域
                     * @param _regionsScope 规则评估地域范围，规则仅对指定地域中的资源生效。
支持的地域范围config:ListResourceRegions返回的地域
                     * 
                     */
                    void SetRegionsScope(const std::vector<std::string>& _regionsScope);

                    /**
                     * 判断参数 RegionsScope 是否已赋值
                     * @return RegionsScope 是否已赋值
                     * 
                     */
                    bool RegionsScopeHasBeenSet() const;

                    /**
                     * 获取规则评估标签范围，规则仅对绑定指定标签的资源生效。
                     * @return TagsScope 规则评估标签范围，规则仅对绑定指定标签的资源生效。
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置规则评估标签范围，规则仅对绑定指定标签的资源生效。
                     * @param _tagsScope 规则评估标签范围，规则仅对绑定指定标签的资源生效。
                     * 
                     */
                    void SetTagsScope(const std::vector<Tag>& _tagsScope);

                    /**
                     * 判断参数 TagsScope 是否已赋值
                     * @return TagsScope 是否已赋值
                     * 
                     */
                    bool TagsScopeHasBeenSet() const;

                    /**
                     * 获取规则对指定资源ID无效，即不对该资源执行评估。
                     * @return ExcludeResourceIdsScope 规则对指定资源ID无效，即不对该资源执行评估。
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置规则对指定资源ID无效，即不对该资源执行评估。
                     * @param _excludeResourceIdsScope 规则对指定资源ID无效，即不对该资源执行评估。
                     * 
                     */
                    void SetExcludeResourceIdsScope(const std::vector<std::string>& _excludeResourceIdsScope);

                    /**
                     * 判断参数 ExcludeResourceIdsScope 是否已赋值
                     * @return ExcludeResourceIdsScope 是否已赋值
                     * 
                     */
                    bool ExcludeResourceIdsScopeHasBeenSet() const;

                private:

                    /**
                     * 触发类型，最多支持两种
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 风险等级
1：高风险。
2：中风险。
3：低风险。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 入参
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则评估地域范围，规则仅对指定地域中的资源生效。
支持的地域范围config:ListResourceRegions返回的地域
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * 规则评估标签范围，规则仅对绑定指定标签的资源生效。
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     * 规则对指定资源ID无效，即不对该资源执行评估。
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_
