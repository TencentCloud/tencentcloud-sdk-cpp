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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESULTCOLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESULTCOLUMNINFO_H_

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
                * 查询结果字段信息
                */
                class ResultColumnInfo : public AbstractModel
                {
                public:
                    ResultColumnInfo();
                    ~ResultColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取字段类型，如 int、string、bigint 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 字段类型，如 int、string、bigint 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置字段类型，如 int、string、bigint 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 字段类型，如 int、string、bigint 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                private:

                    /**
                     * 字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 字段类型，如 int、string、bigint 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESULTCOLUMNINFO_H_
