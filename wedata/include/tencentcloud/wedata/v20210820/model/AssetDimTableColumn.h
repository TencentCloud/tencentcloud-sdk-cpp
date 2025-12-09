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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMTABLECOLUMN_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMTABLECOLUMN_H_

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
                * 资产维度关联数据表字段结构定义
                */
                class AssetDimTableColumn : public AbstractModel
                {
                public:
                    AssetDimTableColumn();
                    ~AssetDimTableColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName 表字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置表字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName 表字段名称
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
                     * 获取表字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnNameCn 表字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnNameCn() const;

                    /**
                     * 设置表字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnNameCn 表字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnNameCn(const std::string& _columnNameCn);

                    /**
                     * 判断参数 ColumnNameCn 是否已赋值
                     * @return ColumnNameCn 是否已赋值
                     * 
                     */
                    bool ColumnNameCnHasBeenSet() const;

                    /**
                     * 获取表字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 表字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置表字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 表字段类型
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

                    /**
                     * 获取表字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnDescription 表字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnDescription() const;

                    /**
                     * 设置表字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnDescription 表字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnDescription(const std::string& _columnDescription);

                    /**
                     * 判断参数 ColumnDescription 是否已赋值
                     * @return ColumnDescription 是否已赋值
                     * 
                     */
                    bool ColumnDescriptionHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGuid 表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGuid() const;

                    /**
                     * 设置表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGuid 表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGuid(const std::string& _tableGuid);

                    /**
                     * 判断参数 TableGuid 是否已赋值
                     * @return TableGuid 是否已赋值
                     * 
                     */
                    bool TableGuidHasBeenSet() const;

                    /**
                     * 获取表归属的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 表归属的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置表归属的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 表归属的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取表归属的Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 表归属的Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置表归属的Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 表归属的Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * 表字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 表字段中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnNameCn;
                    bool m_columnNameCnHasBeenSet;

                    /**
                     * 表字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                    /**
                     * 表字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnDescription;
                    bool m_columnDescriptionHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表GUID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGuid;
                    bool m_tableGuidHasBeenSet;

                    /**
                     * 表归属的数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表归属的Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIMTABLECOLUMN_H_
