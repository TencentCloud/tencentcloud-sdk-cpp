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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEDBITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEDBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateTableItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 同步库表对象
                */
                class MigrateDBItem : public AbstractModel
                {
                public:
                    MigrateDBItem();
                    ~MigrateDBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取数据表迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateTableMode 数据表迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMigrateTableMode() const;

                    /**
                     * 设置数据表迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrateTableMode 数据表迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrateTableMode(const std::string& _migrateTableMode);

                    /**
                     * 判断参数 MigrateTableMode 是否已赋值
                     * @return MigrateTableMode 是否已赋值
                     * 
                     */
                    bool MigrateTableModeHasBeenSet() const;

                    /**
                     * 获取数据表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables 数据表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MigrateTableItem> GetTables() const;

                    /**
                     * 设置数据表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tables 数据表信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTables(const std::vector<MigrateTableItem>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 数据表迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_migrateTableMode;
                    bool m_migrateTableModeHasBeenSet;

                    /**
                     * 数据表信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MigrateTableItem> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEDBITEM_H_
