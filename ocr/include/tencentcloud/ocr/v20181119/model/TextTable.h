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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 表格识别结果
                */
                class TextTable : public AbstractModel
                {
                public:
                    TextTable();
                    ~TextTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单元格左上角的列索引
                     * @return ColTl 单元格左上角的列索引
                     * 
                     */
                    int64_t GetColTl() const;

                    /**
                     * 设置单元格左上角的列索引
                     * @param _colTl 单元格左上角的列索引
                     * 
                     */
                    void SetColTl(const int64_t& _colTl);

                    /**
                     * 判断参数 ColTl 是否已赋值
                     * @return ColTl 是否已赋值
                     * 
                     */
                    bool ColTlHasBeenSet() const;

                    /**
                     * 获取单元格左上角的行索引
                     * @return RowTl 单元格左上角的行索引
                     * 
                     */
                    int64_t GetRowTl() const;

                    /**
                     * 设置单元格左上角的行索引
                     * @param _rowTl 单元格左上角的行索引
                     * 
                     */
                    void SetRowTl(const int64_t& _rowTl);

                    /**
                     * 判断参数 RowTl 是否已赋值
                     * @return RowTl 是否已赋值
                     * 
                     */
                    bool RowTlHasBeenSet() const;

                    /**
                     * 获取单元格右下角的列索引
                     * @return ColBr 单元格右下角的列索引
                     * 
                     */
                    int64_t GetColBr() const;

                    /**
                     * 设置单元格右下角的列索引
                     * @param _colBr 单元格右下角的列索引
                     * 
                     */
                    void SetColBr(const int64_t& _colBr);

                    /**
                     * 判断参数 ColBr 是否已赋值
                     * @return ColBr 是否已赋值
                     * 
                     */
                    bool ColBrHasBeenSet() const;

                    /**
                     * 获取单元格右下角的行索引
                     * @return RowBr 单元格右下角的行索引
                     * 
                     */
                    int64_t GetRowBr() const;

                    /**
                     * 设置单元格右下角的行索引
                     * @param _rowBr 单元格右下角的行索引
                     * 
                     */
                    void SetRowBr(const int64_t& _rowBr);

                    /**
                     * 判断参数 RowBr 是否已赋值
                     * @return RowBr 是否已赋值
                     * 
                     */
                    bool RowBrHasBeenSet() const;

                    /**
                     * 获取单元格文字
                     * @return Text 单元格文字
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置单元格文字
                     * @param _text 单元格文字
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
                     * 获取单元格类型，包含body（表格主体）、header（表头）、footer（表尾）三种
                     * @return Type 单元格类型，包含body（表格主体）、header（表头）、footer（表尾）三种
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置单元格类型，包含body（表格主体）、header（表头）、footer（表尾）三种
                     * @param _type 单元格类型，包含body（表格主体）、header（表头）、footer（表尾）三种
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取置信度 0 ~100
                     * @return Confidence 置信度 0 ~100
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置置信度 0 ~100
                     * @param _confidence 置信度 0 ~100
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取文本行坐标，以四个顶点坐标表示
                     * @return Polygon 文本行坐标，以四个顶点坐标表示
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置文本行坐标，以四个顶点坐标表示
                     * @param _polygon 文本行坐标，以四个顶点坐标表示
                     * 
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取此字段为扩展字段
                     * @return AdvancedInfo 此字段为扩展字段
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置此字段为扩展字段
                     * @param _advancedInfo 此字段为扩展字段
                     * 
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 单元格左上角的列索引
                     */
                    int64_t m_colTl;
                    bool m_colTlHasBeenSet;

                    /**
                     * 单元格左上角的行索引
                     */
                    int64_t m_rowTl;
                    bool m_rowTlHasBeenSet;

                    /**
                     * 单元格右下角的列索引
                     */
                    int64_t m_colBr;
                    bool m_colBrHasBeenSet;

                    /**
                     * 单元格右下角的行索引
                     */
                    int64_t m_rowBr;
                    bool m_rowBrHasBeenSet;

                    /**
                     * 单元格文字
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 单元格类型，包含body（表格主体）、header（表头）、footer（表尾）三种
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 置信度 0 ~100
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 文本行坐标，以四个顶点坐标表示
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 此字段为扩展字段
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTTABLE_H_
