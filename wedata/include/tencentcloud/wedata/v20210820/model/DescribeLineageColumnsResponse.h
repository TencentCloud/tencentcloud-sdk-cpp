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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGECOLUMNSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGECOLUMNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ColumnLineageInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeLineageColumns返回参数结构体
                */
                class DescribeLineageColumnsResponse : public AbstractModel
                {
                public:
                    DescribeLineageColumnsResponse();
                    ~DescribeLineageColumnsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreType 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMetastoreType() const;

                    /**
                     * 判断参数 MetastoreType 是否已赋值
                     * @return MetastoreType 是否已赋值
                     * 
                     */
                    bool MetastoreTypeHasBeenSet() const;

                    /**
                     * 获取元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetastoreTypeName 元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetastoreTypeName() const;

                    /**
                     * 判断参数 MetastoreTypeName 是否已赋值
                     * @return MetastoreTypeName 是否已赋值
                     * 
                     */
                    bool MetastoreTypeNameHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnSet 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ColumnLineageInfo> GetColumnSet() const;

                    /**
                     * 判断参数 ColumnSet 是否已赋值
                     * @return ColumnSet 是否已赋值
                     * 
                     */
                    bool ColumnSetHasBeenSet() const;

                private:

                    /**
                     * 元数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_metastoreType;
                    bool m_metastoreTypeHasBeenSet;

                    /**
                     * 元数据类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metastoreTypeName;
                    bool m_metastoreTypeNameHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ColumnLineageInfo> m_columnSet;
                    bool m_columnSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELINEAGECOLUMNSRESPONSE_H_
