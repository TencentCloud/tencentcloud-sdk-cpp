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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Tag.h>
#include <tencentcloud/config/v20220802/model/Annotation.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 配置规则资源评估结果
                */
                class ConfigRuleResourceEvaluationResult : public AbstractModel
                {
                public:
                    ConfigRuleResourceEvaluationResult();
                    ~ConfigRuleResourceEvaluationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取规则身份标识
                     * @return RuleIdentifier 规则身份标识
                     * 
                     */
                    std::string GetRuleIdentifier() const;

                    /**
                     * 设置规则身份标识
                     * @param _ruleIdentifier 规则身份标识
                     * 
                     */
                    void SetRuleIdentifier(const std::string& _ruleIdentifier);

                    /**
                     * 判断参数 RuleIdentifier 是否已赋值
                     * @return RuleIdentifier 是否已赋值
                     * 
                     */
                    bool RuleIdentifierHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return RuleDescription 规则描述
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 设置规则描述
                     * @param _ruleDescription 规则描述
                     * 
                     */
                    void SetRuleDescription(const std::string& _ruleDescription);

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取规则归属账号
                     * @return RuleOwnerId 规则归属账号
                     * 
                     */
                    int64_t GetRuleOwnerId() const;

                    /**
                     * 设置规则归属账号
                     * @param _ruleOwnerId 规则归属账号
                     * 
                     */
                    void SetRuleOwnerId(const int64_t& _ruleOwnerId);

                    /**
                     * 判断参数 RuleOwnerId 是否已赋值
                     * @return RuleOwnerId 是否已赋值
                     * 
                     */
                    bool RuleOwnerIdHasBeenSet() const;

                    /**
                     * 获取规则风险等级
                     * @return RuleRiskLevel 规则风险等级
                     * 
                     */
                    int64_t GetRuleRiskLevel() const;

                    /**
                     * 设置规则风险等级
                     * @param _ruleRiskLevel 规则风险等级
                     * 
                     */
                    void SetRuleRiskLevel(const int64_t& _ruleRiskLevel);

                    /**
                     * 判断参数 RuleRiskLevel 是否已赋值
                     * @return RuleRiskLevel 是否已赋值
                     * 
                     */
                    bool RuleRiskLevelHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源标签
                     * @return ResourceTags 资源标签
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置资源标签
                     * @param _resourceTags 资源标签
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取合规详情
                     * @return Annotation 合规详情
                     * 
                     */
                    Annotation GetAnnotation() const;

                    /**
                     * 设置合规详情
                     * @param _annotation 合规详情
                     * 
                     */
                    void SetAnnotation(const Annotation& _annotation);

                    /**
                     * 判断参数 Annotation 是否已赋值
                     * @return Annotation 是否已赋值
                     * 
                     */
                    bool AnnotationHasBeenSet() const;

                private:

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
                     * 规则身份标识
                     */
                    std::string m_ruleIdentifier;
                    bool m_ruleIdentifierHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * 规则归属账号
                     */
                    int64_t m_ruleOwnerId;
                    bool m_ruleOwnerIdHasBeenSet;

                    /**
                     * 规则风险等级
                     */
                    int64_t m_ruleRiskLevel;
                    bool m_ruleRiskLevelHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 合规详情
                     */
                    Annotation m_annotation;
                    bool m_annotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRULERESOURCEEVALUATIONRESULT_H_
