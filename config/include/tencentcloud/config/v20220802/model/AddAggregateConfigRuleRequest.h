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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_

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
                * AddAggregateConfigRule请求参数结构体
                */
                class AddAggregateConfigRuleRequest : public AbstractModel
                {
                public:
                    AddAggregateConfigRuleRequest();
                    ~AddAggregateConfigRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）
                     * @return Identifier 规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）
                     * @param _identifier 规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取规则模板类型，SYSTEM, CUSTOMIZE
                     * @return IdentifierType 规则模板类型，SYSTEM, CUSTOMIZE
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置规则模板类型，SYSTEM, CUSTOMIZE
                     * @param _identifierType 规则模板类型，SYSTEM, CUSTOMIZE
                     * 
                     */
                    void SetIdentifierType(const std::string& _identifierType);

                    /**
                     * 判断参数 IdentifierType 是否已赋值
                     * @return IdentifierType 是否已赋值
                     * 
                     */
                    bool IdentifierTypeHasBeenSet() const;

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
                     * 获取规则支持的资源
                     * @return ResourceType 规则支持的资源
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置规则支持的资源
                     * @param _resourceType 规则支持的资源
                     * 
                     */
                    void SetResourceType(const std::vector<std::string>& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

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
                     * 获取账号组Id
                     * @return AccountGroupId 账号组Id
                     * 
                     */
                    std::string GetAccountGroupId() const;

                    /**
                     * 设置账号组Id
                     * @param _accountGroupId 账号组Id
                     * 
                     */
                    void SetAccountGroupId(const std::string& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

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
                     * 获取关联地域
                     * @return RegionScope 关联地域
                     * 
                     */
                    std::vector<std::string> GetRegionScope() const;

                    /**
                     * 设置关联地域
                     * @param _regionScope 关联地域
                     * 
                     */
                    void SetRegionScope(const std::vector<std::string>& _regionScope);

                    /**
                     * 判断参数 RegionScope 是否已赋值
                     * @return RegionScope 是否已赋值
                     * 
                     */
                    bool RegionScopeHasBeenSet() const;

                    /**
                     * 获取关联标签
                     * @return TagsScope 关联标签
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置关联标签
                     * @param _tagsScope 关联标签
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
                     * 获取排除的资源ID
                     * @return ExcludeResourceIdsScope 排除的资源ID
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置排除的资源ID
                     * @param _excludeResourceIdsScope 排除的资源ID
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
                     * 规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 规则模板类型，SYSTEM, CUSTOMIZE
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则支持的资源
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

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
                     * 账号组Id
                     */
                    std::string m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

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
                     * 关联地域
                     */
                    std::vector<std::string> m_regionScope;
                    bool m_regionScopeHasBeenSet;

                    /**
                     * 关联标签
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     * 排除的资源ID
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDAGGREGATECONFIGRULEREQUEST_H_
