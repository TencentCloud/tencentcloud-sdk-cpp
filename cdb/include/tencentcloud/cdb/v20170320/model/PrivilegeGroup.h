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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PRIVILEGEGROUP_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PRIVILEGEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/DatabasePrivilege.h>
#include <tencentcloud/cdb/v20170320/model/TablePrivilege.h>
#include <tencentcloud/cdb/v20170320/model/ColumnPrivilege.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 权限组
                */
                class PrivilegeGroup : public AbstractModel
                {
                public:
                    PrivilegeGroup();
                    ~PrivilegeGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全局权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GlobalPrivileges 全局权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置全局权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _globalPrivileges 全局权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobalPrivileges(const std::vector<std::string>& _globalPrivileges);

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabasePrivileges 数据库权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatabasePrivilege> GetDatabasePrivileges() const;

                    /**
                     * 设置数据库权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databasePrivileges 数据库权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabasePrivileges(const std::vector<DatabasePrivilege>& _databasePrivileges);

                    /**
                     * 判断参数 DatabasePrivileges 是否已赋值
                     * @return DatabasePrivileges 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesHasBeenSet() const;

                    /**
                     * 获取表权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePrivileges 表权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TablePrivilege> GetTablePrivileges() const;

                    /**
                     * 设置表权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tablePrivileges 表权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTablePrivileges(const std::vector<TablePrivilege>& _tablePrivileges);

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                    /**
                     * 获取列权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnPrivileges 列权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 设置列权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnPrivileges 列权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnPrivileges(const std::vector<ColumnPrivilege>& _columnPrivileges);

                    /**
                     * 判断参数 ColumnPrivileges 是否已赋值
                     * @return ColumnPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 全局权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatabasePrivilege> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 表权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * 列权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PRIVILEGEGROUP_H_
