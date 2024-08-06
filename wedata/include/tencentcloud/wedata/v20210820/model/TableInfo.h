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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_

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
                * 元数据表详细信息
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

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
                     * 获取表类型，view/table
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableType 表类型，view/table
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableType() const;

                    /**
                     * 设置表类型，view/table
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableType 表类型，view/table
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableType(const std::string& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                    /**
                     * 获取表databaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginDatabaseName 表databaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginDatabaseName() const;

                    /**
                     * 设置表databaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originDatabaseName 表databaseName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginDatabaseName(const std::string& _originDatabaseName);

                    /**
                     * 判断参数 OriginDatabaseName 是否已赋值
                     * @return OriginDatabaseName 是否已赋值
                     * 
                     */
                    bool OriginDatabaseNameHasBeenSet() const;

                    /**
                     * 获取表schemaName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginSchemaName 表schemaName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginSchemaName() const;

                    /**
                     * 设置表schemaName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originSchemaName 表schemaName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginSchemaName(const std::string& _originSchemaName);

                    /**
                     * 判断参数 OriginSchemaName 是否已赋值
                     * @return OriginSchemaName 是否已赋值
                     * 
                     */
                    bool OriginSchemaNameHasBeenSet() const;

                private:

                    /**
                     * 表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表类型，view/table
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableType;
                    bool m_tableTypeHasBeenSet;

                    /**
                     * 表databaseName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originDatabaseName;
                    bool m_originDatabaseNameHasBeenSet;

                    /**
                     * 表schemaName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originSchemaName;
                    bool m_originSchemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEINFO_H_
