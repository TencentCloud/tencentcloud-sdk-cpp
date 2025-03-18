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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则详情
                */
                class ManagedRuleDetail : public AbstractModel
                {
                public:
                    ManagedRuleDetail();
                    ~ManagedRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则Id。
                     * @return RuleId 托管规则Id。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置托管规则Id。
                     * @param _ruleId 托管规则Id。
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
                     * 获取托管规则的防护级别。取值有：<li>low：低风险，此规则风险较低，适用于非常严格控制环境下的访问场景，该等级规则可能造成较多的误报；</li><li>medium：中风险，表示此条规则风险正常，适用较为严格的防护场景；</li><li>high：高风险，表示此条规则风险较高，大多数场景不会产生误报；</li><li>extreme：超高风险，表示此条规则风险极高，基本不会产生误报；</li>
                     * @return RiskLevel 托管规则的防护级别。取值有：<li>low：低风险，此规则风险较低，适用于非常严格控制环境下的访问场景，该等级规则可能造成较多的误报；</li><li>medium：中风险，表示此条规则风险正常，适用较为严格的防护场景；</li><li>high：高风险，表示此条规则风险较高，大多数场景不会产生误报；</li><li>extreme：超高风险，表示此条规则风险极高，基本不会产生误报；</li>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置托管规则的防护级别。取值有：<li>low：低风险，此规则风险较低，适用于非常严格控制环境下的访问场景，该等级规则可能造成较多的误报；</li><li>medium：中风险，表示此条规则风险正常，适用较为严格的防护场景；</li><li>high：高风险，表示此条规则风险较高，大多数场景不会产生误报；</li><li>extreme：超高风险，表示此条规则风险极高，基本不会产生误报；</li>
                     * @param _riskLevel 托管规则的防护级别。取值有：<li>low：低风险，此规则风险较低，适用于非常严格控制环境下的访问场景，该等级规则可能造成较多的误报；</li><li>medium：中风险，表示此条规则风险正常，适用较为严格的防护场景；</li><li>high：高风险，表示此条规则风险较高，大多数场景不会产生误报；</li><li>extreme：超高风险，表示此条规则风险极高，基本不会产生误报；</li>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

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
                     * 获取规则标签。部分类型的规则不存在标签。
                     * @return Tags 规则标签。部分类型的规则不存在标签。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置规则标签。部分类型的规则不存在标签。
                     * @param _tags 规则标签。部分类型的规则不存在标签。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取规则所属版本。
                     * @return RuleVersion 规则所属版本。
                     * 
                     */
                    std::string GetRuleVersion() const;

                    /**
                     * 设置规则所属版本。
                     * @param _ruleVersion 规则所属版本。
                     * 
                     */
                    void SetRuleVersion(const std::string& _ruleVersion);

                    /**
                     * 判断参数 RuleVersion 是否已赋值
                     * @return RuleVersion 是否已赋值
                     * 
                     */
                    bool RuleVersionHasBeenSet() const;

                private:

                    /**
                     * 托管规则Id。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 托管规则的防护级别。取值有：<li>low：低风险，此规则风险较低，适用于非常严格控制环境下的访问场景，该等级规则可能造成较多的误报；</li><li>medium：中风险，表示此条规则风险正常，适用较为严格的防护场景；</li><li>high：高风险，表示此条规则风险较高，大多数场景不会产生误报；</li><li>extreme：超高风险，表示此条规则风险极高，基本不会产生误报；</li>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则标签。部分类型的规则不存在标签。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 规则所属版本。
                     */
                    std::string m_ruleVersion;
                    bool m_ruleVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_
