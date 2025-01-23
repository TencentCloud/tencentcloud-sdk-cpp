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
                     * 获取元素内容，当type为figure时该字段内容为图片的位置
                     * @return Text 元素内容，当type为figure时该字段内容为图片的位置
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置元素内容，当type为figure时该字段内容为图片的位置
                     * @param _text 元素内容，当type为figure时该字段内容为图片的位置
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
                     * 获取元素坐标
                     * @return Coord 元素坐标
                     * 
                     */
                    Polygon GetCoord() const;

                    /**
                     * 设置元素坐标
                     * @param _coord 元素坐标
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
                     * 获取元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)
                     * @return GroupType 元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)
                     * @param _groupType 元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)
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
                     * 获取结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultList 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultList> GetResultList() const;

                    /**
                     * 设置结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultList 结果列表
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
                     * 获取元素索引
                     * @return Index 元素索引
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置元素索引
                     * @param _index 元素索引
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 元素内容，当type为figure时该字段内容为图片的位置
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 元素坐标
                     */
                    Polygon m_coord;
                    bool m_coordHasBeenSet;

                    /**
                     * 元素group类型，包括multiple-choice(选择题)、fill-in-the-blank(填空题)、problem-solving(解答题)、arithmetic(算术题)
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultList> m_resultList;
                    bool m_resultListHasBeenSet;

                    /**
                     * 元素索引
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ELEMENT_H_
