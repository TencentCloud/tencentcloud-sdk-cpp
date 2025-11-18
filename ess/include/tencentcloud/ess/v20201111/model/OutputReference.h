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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTREFERENCE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ReferenceExcerpt.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 审查通过项对应的引文信息
                */
                class OutputReference : public AbstractModel
                {
                public:
                    OutputReference();
                    ~OutputReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同审查风险结果ID
                     * @return RiskId 合同审查风险结果ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置合同审查风险结果ID
                     * @param _riskId 合同审查风险结果ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取风险名称
                     * @return RiskName 风险名称
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置风险名称
                     * @param _riskName 风险名称
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险描述
                     * @return RiskDescription 风险描述
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置风险描述
                     * @param _riskDescription 风险描述
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取风险要点分类名称
                     * @return CategoryName 风险要点分类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置风险要点分类名称
                     * @param _categoryName 风险要点分类名称
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取审查依据
                     * @return RiskBasis 审查依据
                     * 
                     */
                    std::string GetRiskBasis() const;

                    /**
                     * 设置审查依据
                     * @param _riskBasis 审查依据
                     * 
                     */
                    void SetRiskBasis(const std::string& _riskBasis);

                    /**
                     * 判断参数 RiskBasis 是否已赋值
                     * @return RiskBasis 是否已赋值
                     * 
                     */
                    bool RiskBasisHasBeenSet() const;

                    /**
                     * 获取引文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Excerpts 引文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReferenceExcerpt> GetExcerpts() const;

                    /**
                     * 设置引文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excerpts 引文内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcerpts(const std::vector<ReferenceExcerpt>& _excerpts);

                    /**
                     * 判断参数 Excerpts 是否已赋值
                     * @return Excerpts 是否已赋值
                     * 
                     */
                    bool ExcerptsHasBeenSet() const;

                private:

                    /**
                     * 合同审查风险结果ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 风险要点分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 审查依据
                     */
                    std::string m_riskBasis;
                    bool m_riskBasisHasBeenSet;

                    /**
                     * 引文内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReferenceExcerpt> m_excerpts;
                    bool m_excerptsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTREFERENCE_H_
