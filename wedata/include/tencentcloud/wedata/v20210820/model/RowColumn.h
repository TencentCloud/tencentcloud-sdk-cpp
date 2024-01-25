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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROWCOLUMN_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROWCOLUMN_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Csv 每一行的列元数据
                */
                class RowColumn : public AbstractModel
                {
                public:
                    RowColumn();
                    ~RowColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNumber 列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetColumnNumber() const;

                    /**
                     * 设置列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnNumber 列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnNumber(const uint64_t& _columnNumber);

                    /**
                     * 判断参数 ColumnNumber 是否已赋值
                     * @return ColumnNumber 是否已赋值
                     * 
                     */
                    bool ColumnNumberHasBeenSet() const;

                    /**
                     * 获取column 值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value column 值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置column 值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value column 值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_columnNumber;
                    bool m_columnNumberHasBeenSet;

                    /**
                     * column 值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROWCOLUMN_H_
