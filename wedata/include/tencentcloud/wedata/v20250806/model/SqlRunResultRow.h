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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULTROW_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULTROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 查询结果的单行数据。云API 数据结构不支持二维数组，故将一行数据包装为对象。
                */
                class SqlRunResultRow : public AbstractModel
                {
                public:
                    SqlRunResultRow();
                    ~SqlRunResultRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该行各单元格取值，顺序与 Columns 一致。均为字符串：底层预览结果为 CSV 格式不携带类型信息，字段真实类型参见 Columns[].ColumnType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 该行各单元格取值，顺序与 Columns 一致。均为字符串：底层预览结果为 CSV 格式不携带类型信息，字段真实类型参见 Columns[].ColumnType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置该行各单元格取值，顺序与 Columns 一致。均为字符串：底层预览结果为 CSV 格式不携带类型信息，字段真实类型参见 Columns[].ColumnType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values 该行各单元格取值，顺序与 Columns 一致。均为字符串：底层预览结果为 CSV 格式不携带类型信息，字段真实类型参见 Columns[].ColumnType
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 该行各单元格取值，顺序与 Columns 一致。均为字符串：底层预览结果为 CSV 格式不携带类型信息，字段真实类型参见 Columns[].ColumnType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_SQLRUNRESULTROW_H_
