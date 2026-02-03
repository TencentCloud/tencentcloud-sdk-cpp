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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateDBItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 同步数据对象
                */
                class MigrateObject : public AbstractModel
                {
                public:
                    MigrateObject();
                    ~MigrateObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateDBMode 数据库迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMigrateDBMode() const;

                    /**
                     * 设置数据库迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrateDBMode 数据库迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrateDBMode(const std::string& _migrateDBMode);

                    /**
                     * 判断参数 MigrateDBMode 是否已赋值
                     * @return MigrateDBMode 是否已赋值
                     * 
                     */
                    bool MigrateDBModeHasBeenSet() const;

                    /**
                     * 获取数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Databases 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MigrateDBItem> GetDatabases() const;

                    /**
                     * 设置数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databases 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabases(const std::vector<MigrateDBItem>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                private:

                    /**
                     * 数据库迁移模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_migrateDBMode;
                    bool m_migrateDBModeHasBeenSet;

                    /**
                     * 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MigrateDBItem> m_databases;
                    bool m_databasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MIGRATEOBJECT_H_
