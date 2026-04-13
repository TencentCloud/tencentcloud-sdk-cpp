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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCONFIGRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCONFIGRULEREQUEST_H_

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
                * AddConfigRule请求参数结构体
                */
                class AddConfigRuleRequest : public AbstractModel
                {
                public:
                    AddConfigRuleRequest();
                    ~AddConfigRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）</p>
                     * @return Identifier <p>规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）</p>
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置<p>规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）</p>
                     * @param _identifier <p>规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）</p>
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
                     * 获取<p>规则模板类型，SYSTEM, CUSTOMIZE</p>
                     * @return IdentifierType <p>规则模板类型，SYSTEM, CUSTOMIZE</p>
                     * 
                     */
                    std::string GetIdentifierType() const;

                    /**
                     * 设置<p>规则模板类型，SYSTEM, CUSTOMIZE</p>
                     * @param _identifierType <p>规则模板类型，SYSTEM, CUSTOMIZE</p>
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
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>规则支持的资源</p>
                     * @return ResourceType <p>规则支持的资源</p>
                     * 
                     */
                    std::vector<std::string> GetResourceType() const;

                    /**
                     * 设置<p>规则支持的资源</p>
                     * @param _resourceType <p>规则支持的资源</p>
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
                     * 获取<p>触发类型，最多支持两种</p>
                     * @return TriggerType <p>触发类型，最多支持两种</p>
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置<p>触发类型，最多支持两种</p>
                     * @param _triggerType <p>触发类型，最多支持两种</p>
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
                     * 获取<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @return RiskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     * @param _riskLevel <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
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
                     * 获取<p>入参</p>
                     * @return InputParameter <p>入参</p>
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置<p>入参</p>
                     * @param _inputParameter <p>入参</p>
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
                     * 获取<p>规则描述。长度范围0~1024字符</p>
                     * @return Description <p>规则描述。长度范围0~1024字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述。长度范围0~1024字符</p>
                     * @param _description <p>规则描述。长度范围0~1024字符</p>
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
                     * 获取<p>规则评估地域范围，规则仅对指定地域中的资源生效。<br>支持的地域范围config:ListResourceRegions返回的地域</p>
                     * @return RegionsScope <p>规则评估地域范围，规则仅对指定地域中的资源生效。<br>支持的地域范围config:ListResourceRegions返回的地域</p>
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置<p>规则评估地域范围，规则仅对指定地域中的资源生效。<br>支持的地域范围config:ListResourceRegions返回的地域</p>
                     * @param _regionsScope <p>规则评估地域范围，规则仅对指定地域中的资源生效。<br>支持的地域范围config:ListResourceRegions返回的地域</p>
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
                     * 获取<p>规则评估标签范围，规则仅对绑定指定标签的资源生效。</p>
                     * @return TagsScope <p>规则评估标签范围，规则仅对绑定指定标签的资源生效。</p>
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置<p>规则评估标签范围，规则仅对绑定指定标签的资源生效。</p>
                     * @param _tagsScope <p>规则评估标签范围，规则仅对绑定指定标签的资源生效。</p>
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
                     * 获取<p>规则对指定资源ID无效，即不对该资源执行评估。</p>
                     * @return ExcludeResourceIdsScope <p>规则对指定资源ID无效，即不对该资源执行评估。</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置<p>规则对指定资源ID无效，即不对该资源执行评估。</p>
                     * @param _excludeResourceIdsScope <p>规则对指定资源ID无效，即不对该资源执行评估。</p>
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
                     * <p>规则模板标识，预设规则模板为Identifier, 自定义规则为云函数arn（region:functionName）</p>
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * <p>规则模板类型，SYSTEM, CUSTOMIZE</p>
                     */
                    std::string m_identifierType;
                    bool m_identifierTypeHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则支持的资源</p>
                     */
                    std::vector<std::string> m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>触发类型，最多支持两种</p>
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>风险等级<br>1：高风险。<br>2：中风险。<br>3：低风险。</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>入参</p>
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * <p>规则描述。长度范围0~1024字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>规则评估地域范围，规则仅对指定地域中的资源生效。<br>支持的地域范围config:ListResourceRegions返回的地域</p>
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * <p>规则评估标签范围，规则仅对绑定指定标签的资源生效。</p>
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     * <p>规则对指定资源ID无效，即不对该资源执行评估。</p>
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_ADDCONFIGRULEREQUEST_H_
