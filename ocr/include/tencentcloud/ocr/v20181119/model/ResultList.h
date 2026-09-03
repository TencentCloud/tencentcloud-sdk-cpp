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
                     * 获取<p>多坐标返回，显示坐标所在页</p><p>默认值：[]</p>
                     * @return CoordPageIndex <p>多坐标返回，显示坐标所在页</p><p>默认值：[]</p>
                     * 
                     */
                    std::vector<int64_t> GetCoordPageIndex() const;

                    /**
                     * 设置<p>多坐标返回，显示坐标所在页</p><p>默认值：[]</p>
                     * @param _coordPageIndex <p>多坐标返回，显示坐标所在页</p><p>默认值：[]</p>
                     * 
                     */
                    void SetCoordPageIndex(const std::vector<int64_t>& _coordPageIndex);

                    /**
                     * 判断参数 CoordPageIndex 是否已赋值
                     * @return CoordPageIndex 是否已赋值
                     * 
                     */
                    bool CoordPageIndexHasBeenSet() const;

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
                     * <p>多坐标返回，显示坐标所在页</p><p>默认值：[]</p>
                     */
                    std::vector<int64_t> m_coordPageIndex;
                    bool m_coordPageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RESULTLIST_H_
