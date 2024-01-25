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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVROW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RowColumn.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Csv 读取行数据
                */
                class CsvRow : public AbstractModel
                {
                public:
                    CsvRow();
                    ~CsvRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowNumber 行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRowNumber() const;

                    /**
                     * 设置行号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rowNumber 行号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRowNumber(const uint64_t& _rowNumber);

                    /**
                     * 判断参数 RowNumber 是否已赋值
                     * @return RowNumber 是否已赋值
                     * 
                     */
                    bool RowNumberHasBeenSet() const;

                    /**
                     * 获取列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnValues 列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RowColumn> GetColumnValues() const;

                    /**
                     * 设置列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnValues 列数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnValues(const std::vector<RowColumn>& _columnValues);

                    /**
                     * 判断参数 ColumnValues 是否已赋值
                     * @return ColumnValues 是否已赋值
                     * 
                     */
                    bool ColumnValuesHasBeenSet() const;

                private:

                    /**
                     * 行号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_rowNumber;
                    bool m_rowNumberHasBeenSet;

                    /**
                     * 列数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RowColumn> m_columnValues;
                    bool m_columnValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CSVROW_H_
