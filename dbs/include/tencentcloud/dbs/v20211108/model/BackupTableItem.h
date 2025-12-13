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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPTABLEITEM_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPTABLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupColumnItem.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份表对象
                */
                class BackupTableItem : public AbstractModel
                {
                public:
                    BackupTableItem();
                    ~BackupTableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名。
                     * @return TableName 表名。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名。
                     * @param _tableName 表名。
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
                     * 获取重命名后的表名。
                     * @return NewTableName 重命名后的表名。
                     * 
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置重命名后的表名。
                     * @param _newTableName 重命名后的表名。
                     * 
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     * 
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取列对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 列对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackupColumnItem> GetColumns() const;

                    /**
                     * 设置列对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 列对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<BackupColumnItem>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                private:

                    /**
                     * 表名。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 重命名后的表名。
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * 列对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackupColumnItem> m_columns;
                    bool m_columnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPTABLEITEM_H_
