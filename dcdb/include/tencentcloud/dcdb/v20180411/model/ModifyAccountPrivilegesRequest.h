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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/Account.h>
#include <tencentcloud/dcdb/v20180411/model/DatabasePrivilege.h>
#include <tencentcloud/dcdb/v20180411/model/TablePrivilege.h>
#include <tencentcloud/dcdb/v20180411/model/ColumnPrivilege.h>
#include <tencentcloud/dcdb/v20180411/model/ViewPrivileges.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivileges请求参数结构体
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库的账号，包括用户名和域名。
                     * @return Accounts 数据库的账号，包括用户名和域名。
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置数据库的账号，包括用户名和域名。
                     * @param _accounts 数据库的账号，包括用户名和域名。
                     * 
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取全局权限。其中，GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，该字段传空数组。
                     * @return GlobalPrivileges 全局权限。其中，GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，该字段传空数组。
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置全局权限。其中，GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，该字段传空数组。
                     * @param _globalPrivileges 全局权限。其中，GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，该字段传空数组。
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
                     * 获取数据库的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @return DatabasePrivileges 数据库的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    std::vector<DatabasePrivilege> GetDatabasePrivileges() const;

                    /**
                     * 设置数据库的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @param _databasePrivileges 数据库的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
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
                     * 获取数据库中表的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @return TablePrivileges 数据库中表的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    std::vector<TablePrivilege> GetTablePrivileges() const;

                    /**
                     * 设置数据库中表的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @param _tablePrivileges 数据库中表的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
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
                     * 获取数据库表中列的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @return ColumnPrivileges 数据库表中列的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    std::vector<ColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 设置数据库表中列的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @param _columnPrivileges 数据库表中列的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    void SetColumnPrivileges(const std::vector<ColumnPrivilege>& _columnPrivileges);

                    /**
                     * 判断参数 ColumnPrivileges 是否已赋值
                     * @return ColumnPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnPrivilegesHasBeenSet() const;

                    /**
                     * 获取数据库视图的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @return ViewPrivileges 数据库视图的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    std::vector<ViewPrivileges> GetViewPrivileges() const;

                    /**
                     * 设置数据库视图的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * @param _viewPrivileges 数据库视图的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     * 
                     */
                    void SetViewPrivileges(const std::vector<ViewPrivileges>& _viewPrivileges);

                    /**
                     * 判断参数 ViewPrivileges 是否已赋值
                     * @return ViewPrivileges 是否已赋值
                     * 
                     */
                    bool ViewPrivilegesHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：tdsql-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库的账号，包括用户名和域名。
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 全局权限。其中，GlobalPrivileges 中权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "PROCESS", "DROP","REFERENCES","INDEX","ALTER","SHOW DATABASES","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，该字段传空数组。
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * 数据库的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE TEMPORARY TABLES","LOCK TABLES","EXECUTE","CREATE VIEW","SHOW VIEW","CREATE ROUTINE","ALTER ROUTINE","EVENT","TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     */
                    std::vector<DatabasePrivilege> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * 数据库中表的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     */
                    std::vector<TablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * 数据库表中列的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","REFERENCES"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     */
                    std::vector<ColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                    /**
                     * 数据库视图的权限。Privileges 权限的可选值为："SELECT","INSERT","UPDATE","DELETE","CREATE", "DROP","REFERENCES","INDEX","ALTER","CREATE VIEW","SHOW VIEW", "TRIGGER"。
注意，不传该参数表示保留现有权限，如需清除，请在复杂类型Privileges字段传空数组。
                     */
                    std::vector<ViewPrivileges> m_viewPrivileges;
                    bool m_viewPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
