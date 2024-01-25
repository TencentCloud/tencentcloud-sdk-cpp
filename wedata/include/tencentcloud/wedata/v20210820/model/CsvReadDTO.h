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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVREADDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVREADDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RowColumn.h>
#include <tencentcloud/wedata/v20210820/model/CsvRow.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CSV读取结果
                */
                class CsvReadDTO : public AbstractModel
                {
                public:
                    CsvReadDTO();
                    ~CsvReadDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowCount 行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRowCount() const;

                    /**
                     * 设置行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowCount 行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowCount(const uint64_t& _rowCount);

                    /**
                     * 判断参数 RowCount 是否已赋值
                     * @return RowCount 是否已赋值
                     * 
                     */
                    bool RowCountHasBeenSet() const;

                    /**
                     * 获取首行是否为列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsHeadLineSchema 首行是否为列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsHeadLineSchema() const;

                    /**
                     * 设置首行是否为列名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isHeadLineSchema 首行是否为列名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsHeadLineSchema(const bool& _isHeadLineSchema);

                    /**
                     * 判断参数 IsHeadLineSchema 是否已赋值
                     * @return IsHeadLineSchema 是否已赋值
                     * 
                     */
                    bool IsHeadLineSchemaHasBeenSet() const;

                    /**
                     * 获取列总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnCount 列总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColumnCount() const;

                    /**
                     * 设置列总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnCount 列总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnCount(const uint64_t& _columnCount);

                    /**
                     * 判断参数 ColumnCount 是否已赋值
                     * @return ColumnCount 是否已赋值
                     * 
                     */
                    bool ColumnCountHasBeenSet() const;

                    /**
                     * 获取列 Schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 列 Schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RowColumn> GetColumns() const;

                    /**
                     * 设置列 Schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 列 Schema
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<RowColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取Csv 全部行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows Csv 全部行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CsvRow> GetRows() const;

                    /**
                     * 设置Csv 全部行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows Csv 全部行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::vector<CsvRow>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                private:

                    /**
                     * 行总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rowCount;
                    bool m_rowCountHasBeenSet;

                    /**
                     * 首行是否为列名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isHeadLineSchema;
                    bool m_isHeadLineSchemaHasBeenSet;

                    /**
                     * 列总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_columnCount;
                    bool m_columnCountHasBeenSet;

                    /**
                     * 列 Schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * Csv 全部行数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CsvRow> m_rows;
                    bool m_rowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVREADDTO_H_
