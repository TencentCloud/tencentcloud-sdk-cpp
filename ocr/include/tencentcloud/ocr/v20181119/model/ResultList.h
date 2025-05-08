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
                     * 获取题干
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 题干
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetQuestion() const;

                    /**
                     * 设置题干
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question 题干
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
                     * 获取选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Option 选项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetOption() const;

                    /**
                     * 设置选项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _option 选项
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
                     * 获取插图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Figure 插图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetFigure() const;

                    /**
                     * 设置插图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _figure 插图
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
                     * 获取表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table 表格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetTable() const;

                    /**
                     * 设置表格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table 表格
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
                     * 获取答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer 答案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Element> GetAnswer() const;

                    /**
                     * 设置答案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer 答案
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
                     * 获取解析
                     * @return Parse 解析
                     * 
                     */
                    std::vector<Element> GetParse() const;

                    /**
                     * 设置解析
                     * @param _parse 解析
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
                     * 获取整题的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coord 整题的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Polygon> GetCoord() const;

                    /**
                     * 设置整题的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coord 整题的坐标
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

                private:

                    /**
                     * 题干
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 选项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_option;
                    bool m_optionHasBeenSet;

                    /**
                     * 插图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_figure;
                    bool m_figureHasBeenSet;

                    /**
                     * 表格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * 答案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Element> m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 解析
                     */
                    std::vector<Element> m_parse;
                    bool m_parseHasBeenSet;

                    /**
                     * 整题的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Polygon> m_coord;
                    bool m_coordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RESULTLIST_H_
