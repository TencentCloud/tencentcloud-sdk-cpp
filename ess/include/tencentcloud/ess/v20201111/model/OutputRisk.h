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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTRISK_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/PositionInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查任务识别出的风险结果信息
                */
                class OutputRisk : public AbstractModel
                {
                public:
                    OutputRisk();
                    ~OutputRisk() = default;
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
                     * 获取风险等级别名。

等级描述如下：
<ul>
    <li>**HIGH** - 高风险</li> 
    <li>**NORMAL** - 风险</li>   
</ul>
                     * @return RiskLevel 风险等级别名。

等级描述如下：
<ul>
    <li>**HIGH** - 高风险</li> 
    <li>**NORMAL** - 风险</li>   
</ul>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级别名。

等级描述如下：
<ul>
    <li>**HIGH** - 高风险</li> 
    <li>**NORMAL** - 风险</li>   
</ul>
                     * @param _riskLevel 风险等级别名。

等级描述如下：
<ul>
    <li>**HIGH** - 高风险</li> 
    <li>**NORMAL** - 风险</li>   
</ul>
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
                     * 获取风险建议
                     * @return RiskAdvice 风险建议
                     * 
                     */
                    std::string GetRiskAdvice() const;

                    /**
                     * 设置风险建议
                     * @param _riskAdvice 风险建议
                     * 
                     */
                    void SetRiskAdvice(const std::string& _riskAdvice);

                    /**
                     * 判断参数 RiskAdvice 是否已赋值
                     * @return RiskAdvice 是否已赋值
                     * 
                     */
                    bool RiskAdviceHasBeenSet() const;

                    /**
                     * 获取风险评估
                     * @return RiskPresentation 风险评估
                     * 
                     */
                    std::vector<std::string> GetRiskPresentation() const;

                    /**
                     * 设置风险评估
                     * @param _riskPresentation 风险评估
                     * 
                     */
                    void SetRiskPresentation(const std::vector<std::string>& _riskPresentation);

                    /**
                     * 判断参数 RiskPresentation 是否已赋值
                     * @return RiskPresentation 是否已赋值
                     * 
                     */
                    bool RiskPresentationHasBeenSet() const;

                    /**
                     * 获取PDF风险原文内容
                     * @return Content PDF风险原文内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置PDF风险原文内容
                     * @param _content PDF风险原文内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取审查出的PDF段落位置信息
                     * @return Positions 审查出的PDF段落位置信息
                     * 
                     */
                    std::vector<PositionInfo> GetPositions() const;

                    /**
                     * 设置审查出的PDF段落位置信息
                     * @param _positions 审查出的PDF段落位置信息
                     * 
                     */
                    void SetPositions(const std::vector<PositionInfo>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

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
                     * 获取风险等级id。1 为最高风险等级，0 为最低风险等级，从[2,n]数字越大风险等级逐渐降低。
                     * @return RiskLevelId 风险等级id。1 为最高风险等级，0 为最低风险等级，从[2,n]数字越大风险等级逐渐降低。
                     * 
                     */
                    int64_t GetRiskLevelId() const;

                    /**
                     * 设置风险等级id。1 为最高风险等级，0 为最低风险等级，从[2,n]数字越大风险等级逐渐降低。
                     * @param _riskLevelId 风险等级id。1 为最高风险等级，0 为最低风险等级，从[2,n]数字越大风险等级逐渐降低。
                     * 
                     */
                    void SetRiskLevelId(const int64_t& _riskLevelId);

                    /**
                     * 判断参数 RiskLevelId 是否已赋值
                     * @return RiskLevelId 是否已赋值
                     * 
                     */
                    bool RiskLevelIdHasBeenSet() const;

                    /**
                     * 获取风险标签
                     * @return RiskLabels 风险标签
                     * 
                     */
                    std::vector<std::string> GetRiskLabels() const;

                    /**
                     * 设置风险标签
                     * @param _riskLabels 风险标签
                     * 
                     */
                    void SetRiskLabels(const std::vector<std::string>& _riskLabels);

                    /**
                     * 判断参数 RiskLabels 是否已赋值
                     * @return RiskLabels 是否已赋值
                     * 
                     */
                    bool RiskLabelsHasBeenSet() const;

                    /**
                     * 获取风险来源 0:模型标注的风险 1:人工标注的风险
                     * @return RiskOrigin 风险来源 0:模型标注的风险 1:人工标注的风险
                     * 
                     */
                    int64_t GetRiskOrigin() const;

                    /**
                     * 设置风险来源 0:模型标注的风险 1:人工标注的风险
                     * @param _riskOrigin 风险来源 0:模型标注的风险 1:人工标注的风险
                     * 
                     */
                    void SetRiskOrigin(const int64_t& _riskOrigin);

                    /**
                     * 判断参数 RiskOrigin 是否已赋值
                     * @return RiskOrigin 是否已赋值
                     * 
                     */
                    bool RiskOriginHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建人ID
                     * @return CreatorId 创建人ID
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建人ID
                     * @param _creatorId 创建人ID
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置创建时间
                     * @param _createdOn 创建时间
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

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
                     * 风险等级别名。

等级描述如下：
<ul>
    <li>**HIGH** - 高风险</li> 
    <li>**NORMAL** - 风险</li>   
</ul>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险建议
                     */
                    std::string m_riskAdvice;
                    bool m_riskAdviceHasBeenSet;

                    /**
                     * 风险评估
                     */
                    std::vector<std::string> m_riskPresentation;
                    bool m_riskPresentationHasBeenSet;

                    /**
                     * PDF风险原文内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 审查出的PDF段落位置信息
                     */
                    std::vector<PositionInfo> m_positions;
                    bool m_positionsHasBeenSet;

                    /**
                     * 审查依据
                     */
                    std::string m_riskBasis;
                    bool m_riskBasisHasBeenSet;

                    /**
                     * 风险等级id。1 为最高风险等级，0 为最低风险等级，从[2,n]数字越大风险等级逐渐降低。
                     */
                    int64_t m_riskLevelId;
                    bool m_riskLevelIdHasBeenSet;

                    /**
                     * 风险标签
                     */
                    std::vector<std::string> m_riskLabels;
                    bool m_riskLabelsHasBeenSet;

                    /**
                     * 风险来源 0:模型标注的风险 1:人工标注的风险
                     */
                    int64_t m_riskOrigin;
                    bool m_riskOriginHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建人ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_OUTPUTRISK_H_
