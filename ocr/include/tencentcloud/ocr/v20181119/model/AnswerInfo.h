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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 单题所有答案区域批改信息
                */
                class AnswerInfo : public AbstractModel
                {
                public:
                    AnswerInfo();
                    ~AnswerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手写答案内容，比如选择题的手写的选项、填空题的手写内容
                     * @return HandwriteInfo 手写答案内容，比如选择题的手写的选项、填空题的手写内容
                     * 
                     */
                    std::string GetHandwriteInfo() const;

                    /**
                     * 设置手写答案内容，比如选择题的手写的选项、填空题的手写内容
                     * @param _handwriteInfo 手写答案内容，比如选择题的手写的选项、填空题的手写内容
                     * 
                     */
                    void SetHandwriteInfo(const std::string& _handwriteInfo);

                    /**
                     * 判断参数 HandwriteInfo 是否已赋值
                     * @return HandwriteInfo 是否已赋值
                     * 
                     */
                    bool HandwriteInfoHasBeenSet() const;

                    /**
                     * 获取答案是否正确
                     * @return IsCorrect 答案是否正确
                     * 
                     */
                    bool GetIsCorrect() const;

                    /**
                     * 设置答案是否正确
                     * @param _isCorrect 答案是否正确
                     * 
                     */
                    void SetIsCorrect(const bool& _isCorrect);

                    /**
                     * 判断参数 IsCorrect 是否已赋值
                     * @return IsCorrect 是否已赋值
                     * 
                     */
                    bool IsCorrectHasBeenSet() const;

                    /**
                     * 获取答案分析结果

                     * @return AnswerAnalysis 答案分析结果

                     * 
                     */
                    std::string GetAnswerAnalysis() const;

                    /**
                     * 设置答案分析结果

                     * @param _answerAnalysis 答案分析结果

                     * 
                     */
                    void SetAnswerAnalysis(const std::string& _answerAnalysis);

                    /**
                     * 判断参数 AnswerAnalysis 是否已赋值
                     * @return AnswerAnalysis 是否已赋值
                     * 
                     */
                    bool AnswerAnalysisHasBeenSet() const;

                    /**
                     * 获取答案区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HandwriteInfoPositions 答案区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetHandwriteInfoPositions() const;

                    /**
                     * 设置答案区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _handwriteInfoPositions 答案区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHandwriteInfoPositions(const std::vector<int64_t>& _handwriteInfoPositions);

                    /**
                     * 判断参数 HandwriteInfoPositions 是否已赋值
                     * @return HandwriteInfoPositions 是否已赋值
                     * 
                     */
                    bool HandwriteInfoPositionsHasBeenSet() const;

                    /**
                     * 获取返回正确答案内容

QuestionConfigMap配置了（“TrueAnswer”：1）才生效返回
                     * @return RightAnswer 返回正确答案内容

QuestionConfigMap配置了（“TrueAnswer”：1）才生效返回
                     * 
                     */
                    std::string GetRightAnswer() const;

                    /**
                     * 设置返回正确答案内容

QuestionConfigMap配置了（“TrueAnswer”：1）才生效返回
                     * @param _rightAnswer 返回正确答案内容

QuestionConfigMap配置了（“TrueAnswer”：1）才生效返回
                     * 
                     */
                    void SetRightAnswer(const std::string& _rightAnswer);

                    /**
                     * 判断参数 RightAnswer 是否已赋值
                     * @return RightAnswer 是否已赋值
                     * 
                     */
                    bool RightAnswerHasBeenSet() const;

                    /**
                     * 获取返回题目的知识点内容

QuestionConfigMap配置了（“KnowledgePoints”：1）才生效返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgePoints 返回题目的知识点内容

QuestionConfigMap配置了（“KnowledgePoints”：1）才生效返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKnowledgePoints() const;

                    /**
                     * 设置返回题目的知识点内容

QuestionConfigMap配置了（“KnowledgePoints”：1）才生效返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledgePoints 返回题目的知识点内容

QuestionConfigMap配置了（“KnowledgePoints”：1）才生效返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledgePoints(const std::vector<std::string>& _knowledgePoints);

                    /**
                     * 判断参数 KnowledgePoints 是否已赋值
                     * @return KnowledgePoints 是否已赋值
                     * 
                     */
                    bool KnowledgePointsHasBeenSet() const;

                private:

                    /**
                     * 手写答案内容，比如选择题的手写的选项、填空题的手写内容
                     */
                    std::string m_handwriteInfo;
                    bool m_handwriteInfoHasBeenSet;

                    /**
                     * 答案是否正确
                     */
                    bool m_isCorrect;
                    bool m_isCorrectHasBeenSet;

                    /**
                     * 答案分析结果

                     */
                    std::string m_answerAnalysis;
                    bool m_answerAnalysisHasBeenSet;

                    /**
                     * 答案区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_handwriteInfoPositions;
                    bool m_handwriteInfoPositionsHasBeenSet;

                    /**
                     * 返回正确答案内容

QuestionConfigMap配置了（“TrueAnswer”：1）才生效返回
                     */
                    std::string m_rightAnswer;
                    bool m_rightAnswerHasBeenSet;

                    /**
                     * 返回题目的知识点内容

QuestionConfigMap配置了（“KnowledgePoints”：1）才生效返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_knowledgePoints;
                    bool m_knowledgePointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERINFO_H_
