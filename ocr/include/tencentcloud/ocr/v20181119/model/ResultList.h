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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RESULTLIST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RESULTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Element.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 结果列表
                */
                class ResultList : public AbstractModel
                {
                public:
                    ResultList();
                    ~ResultList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>题干</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question <p>题干</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetQuestion() const;

                    /**
                     * 设置<p>题干</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question <p>题干</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuestion(const std::vector<Element>& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取<p>选项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Option <p>选项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetOption() const;

                    /**
                     * 设置<p>选项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _option <p>选项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOption(const std::vector<Element>& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                    /**
                     * 获取<p>插图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Figure <p>插图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetFigure() const;

                    /**
                     * 设置<p>插图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _figure <p>插图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFigure(const std::vector<Element>& _figure);

                    /**
                     * 判断参数 Figure 是否已赋值
                     * @return Figure 是否已赋值
                     * 
                     */
                    bool FigureHasBeenSet() const;

                    /**
                     * 获取<p>表格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table <p>表格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetTable() const;

                    /**
                     * 设置<p>表格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table <p>表格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTable(const std::vector<Element>& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取<p>答案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer <p>答案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetAnswer() const;

                    /**
                     * 设置<p>答案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer <p>答案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnswer(const std::vector<Element>& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取<p>解析</p>
                     * @return Parse <p>解析</p>
                     * 
                     */
                    std::vector<Element> GetParse() const;

                    /**
                     * 设置<p>解析</p>
                     * @param _parse <p>解析</p>
                     * 
                     */
                    void SetParse(const std::vector<Element>& _parse);

                    /**
                     * 判断参数 Parse 是否已赋值
                     * @return Parse 是否已赋值
                     * 
                     */
                    bool ParseHasBeenSet() const;

                    /**
                     * 获取<p>整题的坐标，多页单题跨页/单页单题跨栏场景下，存在一道题有多个坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coord <p>整题的坐标，多页单题跨页/单页单题跨栏场景下，存在一道题有多个坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Polygon> GetCoord() const;

                    /**
                     * 设置<p>整题的坐标，多页单题跨页/单页单题跨栏场景下，存在一道题有多个坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coord <p>整题的坐标，多页单题跨页/单页单题跨栏场景下，存在一道题有多个坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoord(const std::vector<Polygon>& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                    /**
                     * 获取<p>单题跨栏/跨页场景下：配合CoordPageIndex一起使用，支持多坐标显示在不同页，按顺序对齐</p><p>默认值：[]</p>
                     * @return CoordPageIndex <p>单题跨栏/跨页场景下：配合CoordPageIndex一起使用，支持多坐标显示在不同页，按顺序对齐</p><p>默认值：[]</p>
                     * 
                     */
                    std::vector<int64_t> GetCoordPageIndex() const;

                    /**
                     * 设置<p>单题跨栏/跨页场景下：配合CoordPageIndex一起使用，支持多坐标显示在不同页，按顺序对齐</p><p>默认值：[]</p>
                     * @param _coordPageIndex <p>单题跨栏/跨页场景下：配合CoordPageIndex一起使用，支持多坐标显示在不同页，按顺序对齐</p><p>默认值：[]</p>
                     * 
                     */
                    void SetCoordPageIndex(const std::vector<int64_t>& _coordPageIndex);

                    /**
                     * 判断参数 CoordPageIndex 是否已赋值
                     * @return CoordPageIndex 是否已赋值
                     * 
                     */
                    bool CoordPageIndexHasBeenSet() const;

                    /**
                     * 获取<p>【批改 API 专属特性】返回步骤批改场景下的正确答案内容</p>
                     * @return RightAnswer <p>【批改 API 专属特性】返回步骤批改场景下的正确答案内容</p>
                     * 
                     */
                    std::string GetRightAnswer() const;

                    /**
                     * 设置<p>【批改 API 专属特性】返回步骤批改场景下的正确答案内容</p>
                     * @param _rightAnswer <p>【批改 API 专属特性】返回步骤批改场景下的正确答案内容</p>
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
                     * 获取<p>学科（如语文、数学、英语）</p>
                     * @return Subject <p>学科（如语文、数学、英语）</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>学科（如语文、数学、英语）</p>
                     * @param _subject <p>学科（如语文、数学、英语）</p>
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取<p>返回题目的知识点内容</p>
                     * @return KnowledgePoints <p>返回题目的知识点内容</p>
                     * 
                     */
                    std::vector<std::string> GetKnowledgePoints() const;

                    /**
                     * 设置<p>返回题目的知识点内容</p>
                     * @param _knowledgePoints <p>返回题目的知识点内容</p>
                     * 
                     */
                    void SetKnowledgePoints(const std::vector<std::string>& _knowledgePoints);

                    /**
                     * 判断参数 KnowledgePoints 是否已赋值
                     * @return KnowledgePoints 是否已赋值
                     * 
                     */
                    bool KnowledgePointsHasBeenSet() const;

                    /**
                     * 获取<p>【批改 API 专属特性】</p><ol><li>当ModelType= yuanbao_correction_model 且快速模式下，通过该字段返回题目维度的答案解析</li><li>其他批改配置参数情况，该字段返回空，通过AnswerElement. AnswerAnalysis返回答案维度答案解析</li></ol>
                     * @return AnswerAnalysis <p>【批改 API 专属特性】</p><ol><li>当ModelType= yuanbao_correction_model 且快速模式下，通过该字段返回题目维度的答案解析</li><li>其他批改配置参数情况，该字段返回空，通过AnswerElement. AnswerAnalysis返回答案维度答案解析</li></ol>
                     * 
                     */
                    std::string GetAnswerAnalysis() const;

                    /**
                     * 设置<p>【批改 API 专属特性】</p><ol><li>当ModelType= yuanbao_correction_model 且快速模式下，通过该字段返回题目维度的答案解析</li><li>其他批改配置参数情况，该字段返回空，通过AnswerElement. AnswerAnalysis返回答案维度答案解析</li></ol>
                     * @param _answerAnalysis <p>【批改 API 专属特性】</p><ol><li>当ModelType= yuanbao_correction_model 且快速模式下，通过该字段返回题目维度的答案解析</li><li>其他批改配置参数情况，该字段返回空，通过AnswerElement. AnswerAnalysis返回答案维度答案解析</li></ol>
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
                     * 获取<p>年级：小学/初中/高中</p>
                     * @return Grade <p>年级：小学/初中/高中</p>
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置<p>年级：小学/初中/高中</p>
                     * @param _grade <p>年级：小学/初中/高中</p>
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取<p>【批改 API专属特性】返回题目维度的批改置信度（0-100）值越高表示答案准确度越高<br>备注：仅有ModelType=youtu_correction_model模型且非快速模式支持返回。</p>
                     * @return Confidence <p>【批改 API专属特性】返回题目维度的批改置信度（0-100）值越高表示答案准确度越高<br>备注：仅有ModelType=youtu_correction_model模型且非快速模式支持返回。</p>
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置<p>【批改 API专属特性】返回题目维度的批改置信度（0-100）值越高表示答案准确度越高<br>备注：仅有ModelType=youtu_correction_model模型且非快速模式支持返回。</p>
                     * @param _confidence <p>【批改 API专属特性】返回题目维度的批改置信度（0-100）值越高表示答案准确度越高<br>备注：仅有ModelType=youtu_correction_model模型且非快速模式支持返回。</p>
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * <p>题干</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>选项</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * <p>插图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_figure;
                    bool m_figureHasBeenSet;

                    /**
                     * <p>表格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * <p>答案</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>解析</p>
                     */
                    std::vector<Element> m_parse;
                    bool m_parseHasBeenSet;

                    /**
                     * <p>整题的坐标，多页单题跨页/单页单题跨栏场景下，存在一道题有多个坐标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Polygon> m_coord;
                    bool m_coordHasBeenSet;

                    /**
                     * <p>单题跨栏/跨页场景下：配合CoordPageIndex一起使用，支持多坐标显示在不同页，按顺序对齐</p><p>默认值：[]</p>
                     */
                    std::vector<int64_t> m_coordPageIndex;
                    bool m_coordPageIndexHasBeenSet;

                    /**
                     * <p>【批改 API 专属特性】返回步骤批改场景下的正确答案内容</p>
                     */
                    std::string m_rightAnswer;
                    bool m_rightAnswerHasBeenSet;

                    /**
                     * <p>学科（如语文、数学、英语）</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>返回题目的知识点内容</p>
                     */
                    std::vector<std::string> m_knowledgePoints;
                    bool m_knowledgePointsHasBeenSet;

                    /**
                     * <p>【批改 API 专属特性】</p><ol><li>当ModelType= yuanbao_correction_model 且快速模式下，通过该字段返回题目维度的答案解析</li><li>其他批改配置参数情况，该字段返回空，通过AnswerElement. AnswerAnalysis返回答案维度答案解析</li></ol>
                     */
                    std::string m_answerAnalysis;
                    bool m_answerAnalysisHasBeenSet;

                    /**
                     * <p>年级：小学/初中/高中</p>
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * <p>【批改 API专属特性】返回题目维度的批改置信度（0-100）值越高表示答案准确度越高<br>备注：仅有ModelType=youtu_correction_model模型且非快速模式支持返回。</p>
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RESULTLIST_H_
