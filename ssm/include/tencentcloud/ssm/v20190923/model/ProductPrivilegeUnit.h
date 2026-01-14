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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * 凭据关联产品时被赋予的权限
                */
                class ProductPrivilegeUnit : public AbstractModel
                {
                public:
                    ProductPrivilegeUnit();
                    ~ProductPrivilegeUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限名称，当前可选：
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

当权限为DatabasePrivileges时，必须通过参数Database指定数据库名；

当权限为TablePrivileges时，必须通过参数Database和TableName指定数据库名以及数据库中的表名；

当权限为ColumnPrivileges时，必须通过参数Database、TableName和CoulmnName指定数据库、数据库中的表名以及表中的列名。
                     * @return PrivilegeName 权限名称，当前可选：
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

当权限为DatabasePrivileges时，必须通过参数Database指定数据库名；

当权限为TablePrivileges时，必须通过参数Database和TableName指定数据库名以及数据库中的表名；

当权限为ColumnPrivileges时，必须通过参数Database、TableName和CoulmnName指定数据库、数据库中的表名以及表中的列名。
                     * 
                     */
                    std::string GetPrivilegeName() const;

                    /**
                     * 设置权限名称，当前可选：
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

当权限为DatabasePrivileges时，必须通过参数Database指定数据库名；

当权限为TablePrivileges时，必须通过参数Database和TableName指定数据库名以及数据库中的表名；

当权限为ColumnPrivileges时，必须通过参数Database、TableName和CoulmnName指定数据库、数据库中的表名以及表中的列名。
                     * @param _privilegeName 权限名称，当前可选：
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

当权限为DatabasePrivileges时，必须通过参数Database指定数据库名；

当权限为TablePrivileges时，必须通过参数Database和TableName指定数据库名以及数据库中的表名；

当权限为ColumnPrivileges时，必须通过参数Database、TableName和CoulmnName指定数据库、数据库中的表名以及表中的列名。
                     * 
                     */
                    void SetPrivilegeName(const std::string& _privilegeName);

                    /**
                     * 判断参数 PrivilegeName 是否已赋值
                     * @return PrivilegeName 是否已赋值
                     * 
                     */
                    bool PrivilegeNameHasBeenSet() const;

                    /**
                     * 获取权限列表。
对于Mysql产品来说，可选权限值为：

1. GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

2. DatabasePrivileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

3. TablePrivileges 权限的可选值为：权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示清除该权限。

4. ColumnPrivileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示清除该权限。
                     * @return Privileges 权限列表。
对于Mysql产品来说，可选权限值为：

1. GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

2. DatabasePrivileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

3. TablePrivileges 权限的可选值为：权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示清除该权限。

4. ColumnPrivileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示清除该权限。
                     * 
                     */
                    std::vector<std::string> GetPrivileges() const;

                    /**
                     * 设置权限列表。
对于Mysql产品来说，可选权限值为：

1. GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

2. DatabasePrivileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

3. TablePrivileges 权限的可选值为：权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示清除该权限。

4. ColumnPrivileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示清除该权限。
                     * @param _privileges 权限列表。
对于Mysql产品来说，可选权限值为：

1. GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

2. DatabasePrivileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

3. TablePrivileges 权限的可选值为：权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示清除该权限。

4. ColumnPrivileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示清除该权限。
                     * 
                     */
                    void SetPrivileges(const std::vector<std::string>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为DatabasePrivileges时这个值才有效。
                     * @return Database 仅当PrivilegeName为DatabasePrivileges时这个值才有效。
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置仅当PrivilegeName为DatabasePrivileges时这个值才有效。
                     * @param _database 仅当PrivilegeName为DatabasePrivileges时这个值才有效。
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为TablePrivileges时这个值才有效，并且此时需要填充Database显式指明所在的数据库实例。
                     * @return TableName 仅当PrivilegeName为TablePrivileges时这个值才有效，并且此时需要填充Database显式指明所在的数据库实例。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置仅当PrivilegeName为TablePrivileges时这个值才有效，并且此时需要填充Database显式指明所在的数据库实例。
                     * @param _tableName 仅当PrivilegeName为TablePrivileges时这个值才有效，并且此时需要填充Database显式指明所在的数据库实例。
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
                     * 获取仅当PrivilegeName为ColumnPrivileges时这个值才生效，并且此时必须填充：
Database - 显式指明所在的数据库实例。
TableName - 显式指明所在表
                     * @return ColumnName 仅当PrivilegeName为ColumnPrivileges时这个值才生效，并且此时必须填充：
Database - 显式指明所在的数据库实例。
TableName - 显式指明所在表
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置仅当PrivilegeName为ColumnPrivileges时这个值才生效，并且此时必须填充：
Database - 显式指明所在的数据库实例。
TableName - 显式指明所在表
                     * @param _columnName 仅当PrivilegeName为ColumnPrivileges时这个值才生效，并且此时必须填充：
Database - 显式指明所在的数据库实例。
TableName - 显式指明所在表
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
                     * 获取仅当PrivilegeName为SchemaPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return SchemaName 仅当PrivilegeName为SchemaPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置仅当PrivilegeName为SchemaPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _schemaName 仅当PrivilegeName为SchemaPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为SequencePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return SequenceName 仅当PrivilegeName为SequencePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetSequenceName() const;

                    /**
                     * 设置仅当PrivilegeName为SequencePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _sequenceName 仅当PrivilegeName为SequencePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetSequenceName(const std::string& _sequenceName);

                    /**
                     * 判断参数 SequenceName 是否已赋值
                     * @return SequenceName 是否已赋值
                     * 
                     */
                    bool SequenceNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为ProcedurePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return ProcedureName 仅当PrivilegeName为ProcedurePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置仅当PrivilegeName为ProcedurePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _procedureName 仅当PrivilegeName为ProcedurePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetProcedureName(const std::string& _procedureName);

                    /**
                     * 判断参数 ProcedureName 是否已赋值
                     * @return ProcedureName 是否已赋值
                     * 
                     */
                    bool ProcedureNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为TypePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return TypeName 仅当PrivilegeName为TypePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置仅当PrivilegeName为TypePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _typeName 仅当PrivilegeName为TypePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为FunctionPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return FunctionName 仅当PrivilegeName为FunctionPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置仅当PrivilegeName为FunctionPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _functionName 仅当PrivilegeName为FunctionPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为ViewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return ViewName 仅当PrivilegeName为ViewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置仅当PrivilegeName为ViewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _viewName 仅当PrivilegeName为ViewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取仅当PrivilegeName为MatviewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @return MatviewName 仅当PrivilegeName为MatviewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    std::string GetMatviewName() const;

                    /**
                     * 设置仅当PrivilegeName为MatviewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * @param _matviewName 仅当PrivilegeName为MatviewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     * 
                     */
                    void SetMatviewName(const std::string& _matviewName);

                    /**
                     * 判断参数 MatviewName 是否已赋值
                     * @return MatviewName 是否已赋值
                     * 
                     */
                    bool MatviewNameHasBeenSet() const;

                private:

                    /**
                     * 权限名称，当前可选：
GlobalPrivileges
DatabasePrivileges
TablePrivileges
ColumnPrivileges

当权限为DatabasePrivileges时，必须通过参数Database指定数据库名；

当权限为TablePrivileges时，必须通过参数Database和TableName指定数据库名以及数据库中的表名；

当权限为ColumnPrivileges时，必须通过参数Database、TableName和CoulmnName指定数据库、数据库中的表名以及表中的列名。
                     */
                    std::string m_privilegeName;
                    bool m_privilegeNameHasBeenSet;

                    /**
                     * 权限列表。
对于Mysql产品来说，可选权限值为：

1. GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

2. DatabasePrivileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示清除该权限。

3. TablePrivileges 权限的可选值为：权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示清除该权限。

4. ColumnPrivileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示清除该权限。
                     */
                    std::vector<std::string> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * 仅当PrivilegeName为DatabasePrivileges时这个值才有效。
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 仅当PrivilegeName为TablePrivileges时这个值才有效，并且此时需要填充Database显式指明所在的数据库实例。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为ColumnPrivileges时这个值才生效，并且此时必须填充：
Database - 显式指明所在的数据库实例。
TableName - 显式指明所在表
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为SchemaPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为SequencePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_sequenceName;
                    bool m_sequenceNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为ProcedurePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为TypePrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为FunctionPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为ViewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 仅当PrivilegeName为MatviewPrivileges时这个值才生效，并且此时必须填充：
目前仅postgresSQL需要
                     */
                    std::string m_matviewName;
                    bool m_matviewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_PRODUCTPRIVILEGEUNIT_H_
