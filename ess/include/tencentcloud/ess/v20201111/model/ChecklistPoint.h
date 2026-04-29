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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTPOINT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查清单检查点
                */
                class ChecklistPoint : public AbstractModel
                {
                public:
                    ChecklistPoint();
                    ~ChecklistPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同风险审查清单检查点名称</p>
                     * @return Summary <p>合同风险审查清单检查点名称</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>合同风险审查清单检查点名称</p>
                     * @param _summary <p>合同风险审查清单检查点名称</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点详细描述，说明具体风险信息</p>
                     * @return Explanation <p>合同风险审查清单检查点详细描述，说明具体风险信息</p>
                     * 
                     */
                    std::string GetExplanation() const;

                    /**
                     * 设置<p>合同风险审查清单检查点详细描述，说明具体风险信息</p>
                     * @param _explanation <p>合同风险审查清单检查点详细描述，说明具体风险信息</p>
                     * 
                     */
                    void SetExplanation(const std::string& _explanation);

                    /**
                     * 判断参数 Explanation 是否已赋值
                     * @return Explanation 是否已赋值
                     * 
                     */
                    bool ExplanationHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点对应的风险等级，一般分为 高风险、中风险、一般风险</p>
                     * @return RiskLevel <p>合同风险审查清单检查点对应的风险等级，一般分为 高风险、中风险、一般风险</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>合同风险审查清单检查点对应的风险等级，一般分为 高风险、中风险、一般风险</p>
                     * @param _riskLevel <p>合同风险审查清单检查点对应的风险等级，一般分为 高风险、中风险、一般风险</p>
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
                     * 获取<p>合同风险审查清单检查点ID，创建清单时无需填写</p>
                     * @return Id <p>合同风险审查清单检查点ID，创建清单时无需填写</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>合同风险审查清单检查点ID，创建清单时无需填写</p>
                     * @param _id <p>合同风险审查清单检查点ID，创建清单时无需填写</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点是否不可缺失，若为true，相关条款未出现在内容中，视作风险</p>
                     * @return IsIndispensable <p>合同风险审查清单检查点是否不可缺失，若为true，相关条款未出现在内容中，视作风险</p>
                     * 
                     */
                    bool GetIsIndispensable() const;

                    /**
                     * 设置<p>合同风险审查清单检查点是否不可缺失，若为true，相关条款未出现在内容中，视作风险</p>
                     * @param _isIndispensable <p>合同风险审查清单检查点是否不可缺失，若为true，相关条款未出现在内容中，视作风险</p>
                     * 
                     */
                    void SetIsIndispensable(const bool& _isIndispensable);

                    /**
                     * 判断参数 IsIndispensable 是否已赋值
                     * @return IsIndispensable 是否已赋值
                     * 
                     */
                    bool IsIndispensableHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点是否要求和参考条款一致</p>
                     * @return IsConsistentWithReferenceItem <p>合同风险审查清单检查点是否要求和参考条款一致</p>
                     * 
                     */
                    bool GetIsConsistentWithReferenceItem() const;

                    /**
                     * 设置<p>合同风险审查清单检查点是否要求和参考条款一致</p>
                     * @param _isConsistentWithReferenceItem <p>合同风险审查清单检查点是否要求和参考条款一致</p>
                     * 
                     */
                    void SetIsConsistentWithReferenceItem(const bool& _isConsistentWithReferenceItem);

                    /**
                     * 判断参数 IsConsistentWithReferenceItem 是否已赋值
                     * @return IsConsistentWithReferenceItem 是否已赋值
                     * 
                     */
                    bool IsConsistentWithReferenceItemHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点参考条款，用于辅助审查</p>
                     * @return ReferenceItem <p>合同风险审查清单检查点参考条款，用于辅助审查</p>
                     * 
                     */
                    std::string GetReferenceItem() const;

                    /**
                     * 设置<p>合同风险审查清单检查点参考条款，用于辅助审查</p>
                     * @param _referenceItem <p>合同风险审查清单检查点参考条款，用于辅助审查</p>
                     * 
                     */
                    void SetReferenceItem(const std::string& _referenceItem);

                    /**
                     * 判断参数 ReferenceItem 是否已赋值
                     * @return ReferenceItem 是否已赋值
                     * 
                     */
                    bool ReferenceItemHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点固定修改建议，优先级高于AiSuggestion</p>
                     * @return Suggestion <p>合同风险审查清单检查点固定修改建议，优先级高于AiSuggestion</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>合同风险审查清单检查点固定修改建议，优先级高于AiSuggestion</p>
                     * @param _suggestion <p>合同风险审查清单检查点固定修改建议，优先级高于AiSuggestion</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点AI修改建议提示，会参考该配置生成对应的修改建议</p>
                     * @return AiSuggestion <p>合同风险审查清单检查点AI修改建议提示，会参考该配置生成对应的修改建议</p>
                     * 
                     */
                    std::string GetAiSuggestion() const;

                    /**
                     * 设置<p>合同风险审查清单检查点AI修改建议提示，会参考该配置生成对应的修改建议</p>
                     * @param _aiSuggestion <p>合同风险审查清单检查点AI修改建议提示，会参考该配置生成对应的修改建议</p>
                     * 
                     */
                    void SetAiSuggestion(const std::string& _aiSuggestion);

                    /**
                     * 判断参数 AiSuggestion 是否已赋值
                     * @return AiSuggestion 是否已赋值
                     * 
                     */
                    bool AiSuggestionHasBeenSet() const;

                    /**
                     * 获取<p>合同风险审查清单检查点表现标签，用于自定义不同的风险类型</p>
                     * @return RiskPresentation <p>合同风险审查清单检查点表现标签，用于自定义不同的风险类型</p>
                     * 
                     */
                    std::vector<std::string> GetRiskPresentation() const;

                    /**
                     * 设置<p>合同风险审查清单检查点表现标签，用于自定义不同的风险类型</p>
                     * @param _riskPresentation <p>合同风险审查清单检查点表现标签，用于自定义不同的风险类型</p>
                     * 
                     */
                    void SetRiskPresentation(const std::vector<std::string>& _riskPresentation);

                    /**
                     * 判断参数 RiskPresentation 是否已赋值
                     * @return RiskPresentation 是否已赋值
                     * 
                     */
                    bool RiskPresentationHasBeenSet() const;

                private:

                    /**
                     * <p>合同风险审查清单检查点名称</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点详细描述，说明具体风险信息</p>
                     */
                    std::string m_explanation;
                    bool m_explanationHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点对应的风险等级，一般分为 高风险、中风险、一般风险</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点ID，创建清单时无需填写</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点是否不可缺失，若为true，相关条款未出现在内容中，视作风险</p>
                     */
                    bool m_isIndispensable;
                    bool m_isIndispensableHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点是否要求和参考条款一致</p>
                     */
                    bool m_isConsistentWithReferenceItem;
                    bool m_isConsistentWithReferenceItemHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点参考条款，用于辅助审查</p>
                     */
                    std::string m_referenceItem;
                    bool m_referenceItemHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点固定修改建议，优先级高于AiSuggestion</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点AI修改建议提示，会参考该配置生成对应的修改建议</p>
                     */
                    std::string m_aiSuggestion;
                    bool m_aiSuggestionHasBeenSet;

                    /**
                     * <p>合同风险审查清单检查点表现标签，用于自定义不同的风险类型</p>
                     */
                    std::vector<std::string> m_riskPresentation;
                    bool m_riskPresentationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLISTPOINT_H_
