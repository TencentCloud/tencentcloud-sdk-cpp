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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TABLEDETECTINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TABLEDETECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TableCell.h>
#include <tencentcloud/ocr/v20181119/model/TableTitle.h>
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
                * 表格内容检测
                */
                class TableDetectInfo : public AbstractModel
                {
                public:
                    TableDetectInfo();
                    ~TableDetectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单元格内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cells 单元格内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableCell> GetCells() const;

                    /**
                     * 设置单元格内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cells 单元格内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCells(const std::vector<TableCell>& _cells);

                    /**
                     * 判断参数 Cells 是否已赋值
                     * @return Cells 是否已赋值
                     * 
                     */
                    bool CellsHasBeenSet() const;

                    /**
                     * 获取表格标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Titles 表格标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableTitle> GetTitles() const;

                    /**
                     * 设置表格标题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _titles 表格标题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitles(const std::vector<TableTitle>& _titles);

                    /**
                     * 判断参数 Titles 是否已赋值
                     * @return Titles 是否已赋值
                     * 
                     */
                    bool TitlesHasBeenSet() const;

                    /**
                     * 获取图像中的文本块类型，0 为非表格文本，
1 为有线表格，2 为无线表格
（接口暂不支持日文无线表格识别，若传入日文无线表格，返回0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 图像中的文本块类型，0 为非表格文本，
1 为有线表格，2 为无线表格
（接口暂不支持日文无线表格识别，若传入日文无线表格，返回0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置图像中的文本块类型，0 为非表格文本，
1 为有线表格，2 为无线表格
（接口暂不支持日文无线表格识别，若传入日文无线表格，返回0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 图像中的文本块类型，0 为非表格文本，
1 为有线表格，2 为无线表格
（接口暂不支持日文无线表格识别，若传入日文无线表格，返回0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取表格主体四个顶点坐标（依次为左上角，
右上角，右下角，左下角）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableCoordPoint 表格主体四个顶点坐标（依次为左上角，
右上角，右下角，左下角）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetTableCoordPoint() const;

                    /**
                     * 设置表格主体四个顶点坐标（依次为左上角，
右上角，右下角，左下角）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableCoordPoint 表格主体四个顶点坐标（依次为左上角，
右上角，右下角，左下角）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableCoordPoint(const std::vector<Coord>& _tableCoordPoint);

                    /**
                     * 判断参数 TableCoordPoint 是否已赋值
                     * @return TableCoordPoint 是否已赋值
                     * 
                     */
                    bool TableCoordPointHasBeenSet() const;

                private:

                    /**
                     * 单元格内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableCell> m_cells;
                    bool m_cellsHasBeenSet;

                    /**
                     * 表格标题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableTitle> m_titles;
                    bool m_titlesHasBeenSet;

                    /**
                     * 图像中的文本块类型，0 为非表格文本，
1 为有线表格，2 为无线表格
（接口暂不支持日文无线表格识别，若传入日文无线表格，返回0）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 表格主体四个顶点坐标（依次为左上角，
右上角，右下角，左下角）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_tableCoordPoint;
                    bool m_tableCoordPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TABLEDETECTINFO_H_
