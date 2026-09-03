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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ELEMENT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>
#include <tencentcloud/ocr/v20181119/model/ResultList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 试题识别结果-元素内容
                */
                class Element : public AbstractModel
                {
                public:
                    Element();
                    ~Element() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>元素内容，当type为figure时该字段内容为图片的位置</p>
                     * @return Text <p>元素内容，当type为figure时该字段内容为图片的位置</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>元素内容，当type为figure时该字段内容为图片的位置</p>
                     * @param _text <p>元素内容，当type为figure时该字段内容为图片的位置</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>元素坐标</p>
                     * @return Coord <p>元素坐标</p>
                     * 
                     */
                    Polygon GetCoord() const;

                    /**
                     * 设置<p>元素坐标</p>
                     * @param _coord <p>元素坐标</p>
                     * 
                     */
                    void SetCoord(const Polygon& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                    /**
                     * 获取<p>元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)</p>
                     * @return GroupType <p>元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)</p>
                     * @param _groupType <p>元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultList <p>结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultList> GetResultList() const;

                    /**
                     * 设置<p>结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultList <p>结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultList(const std::vector<ResultList>& _resultList);

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                    /**
                     * 获取<p>元素索引</p>
                     * @return Index <p>元素索引</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>元素索引</p>
                     * @param _index <p>元素索引</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>元素所在页</p><p>单位：页</p><p>默认值：1</p>
                     * @return PageIndex <p>元素所在页</p><p>单位：页</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>元素所在页</p><p>单位：页</p><p>默认值：1</p>
                     * @param _pageIndex <p>元素所在页</p><p>单位：页</p><p>默认值：1</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                private:

                    /**
                     * <p>元素内容，当type为figure时该字段内容为图片的位置</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>元素坐标</p>
                     */
                    Polygon m_coord;
                    bool m_coordHasBeenSet;

                    /**
                     * <p>元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>结果列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultList> m_resultList;
                    bool m_resultListHasBeenSet;

                    /**
                     * <p>元素索引</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>元素所在页</p><p>单位：页</p><p>默认值：1</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELEMENT_H_
