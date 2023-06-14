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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_

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
                * 单元格数据
                */
                class TableCellInfo : public AbstractModel
                {
                public:
                    TableCellInfo();
                    ~TableCellInfo() = default;
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
                     * 获取单元格内识别出的字符串文本，若文本存在多行，以换行符"\n"隔开
                     * @return Text 单元格内识别出的字符串文本，若文本存在多行，以换行符"\n"隔开
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置单元格内识别出的字符串文本，若文本存在多行，以换行符"\n"隔开
                     * @param _text 单元格内识别出的字符串文本，若文本存在多行，以换行符"\n"隔开
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
                     * 获取单元格类型
                     * @return Type 单元格类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置单元格类型
                     * @param _type 单元格类型
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
                     * 获取单元格置信度
                     * @return Confidence 单元格置信度
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置单元格置信度
                     * @param _confidence 单元格置信度
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取单元格在图像中的四点坐标
                     * @return Polygon 单元格在图像中的四点坐标
                     * 
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置单元格在图像中的四点坐标
                     * @param _polygon 单元格在图像中的四点坐标
                     * 
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

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
                     * 单元格内识别出的字符串文本，若文本存在多行，以换行符"\n"隔开
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 单元格类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 单元格置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 单元格在图像中的四点坐标
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TABLECELLINFO_H_
