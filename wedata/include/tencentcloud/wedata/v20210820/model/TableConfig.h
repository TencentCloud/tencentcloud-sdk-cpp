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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FieldConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则表变量替换
                */
                class TableConfig : public AbstractModel
                {
                public:
                    TableConfig();
                    ~TableConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
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
                     * 获取表Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableKey 表Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableKey() const;

                    /**
                     * 设置表Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableKey 表Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableKey(const std::string& _tableKey);

                    /**
                     * 判断参数 TableKey 是否已赋值
                     * @return TableKey 是否已赋值
                     * 
                     */
                    bool TableKeyHasBeenSet() const;

                    /**
                     * 获取字段变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldConfig 字段变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FieldConfig> GetFieldConfig() const;

                    /**
                     * 设置字段变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldConfig 字段变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldConfig(const std::vector<FieldConfig>& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     * 
                     */
                    bool FieldConfigHasBeenSet() const;

                private:

                    /**
                     * 数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

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
                     * 表Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableKey;
                    bool m_tableKeyHasBeenSet;

                    /**
                     * 字段变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FieldConfig> m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLECONFIG_H_
