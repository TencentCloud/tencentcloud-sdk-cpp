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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Account.h>
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
                * ModifyAccountPrivileges请求参数结构体
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
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
                     * 获取<p>数据库的账号，包括用户名和域名。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * @return Accounts <p>数据库的账号，包括用户名和域名。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置<p>数据库的账号，包括用户名和域名。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * @param _accounts <p>数据库的账号，包括用户名和域名。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
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
                     * 获取<p>全局权限。其中，GlobalPrivileges 中权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;, &quot;PROCESS&quot;, &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;SHOW DATABASES&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;,&quot;CREATE USER&quot;,&quot;RELOAD&quot;,&quot;REPLICATION CLIENT&quot;,&quot;REPLICATION SLAVE&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @return GlobalPrivileges <p>全局权限。其中，GlobalPrivileges 中权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;, &quot;PROCESS&quot;, &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;SHOW DATABASES&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;,&quot;CREATE USER&quot;,&quot;RELOAD&quot;,&quot;REPLICATION CLIENT&quot;,&quot;REPLICATION SLAVE&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置<p>全局权限。其中，GlobalPrivileges 中权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;, &quot;PROCESS&quot;, &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;SHOW DATABASES&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;,&quot;CREATE USER&quot;,&quot;RELOAD&quot;,&quot;REPLICATION CLIENT&quot;,&quot;REPLICATION SLAVE&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @param _globalPrivileges <p>全局权限。其中，GlobalPrivileges 中权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;, &quot;PROCESS&quot;, &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;SHOW DATABASES&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;,&quot;CREATE USER&quot;,&quot;RELOAD&quot;,&quot;REPLICATION CLIENT&quot;,&quot;REPLICATION SLAVE&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
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
                     * 获取<p>数据库的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @return DatabasePrivileges <p>数据库的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * 
                     */
                    std::vector<DatabasePrivilege> GetDatabasePrivileges() const;

                    /**
                     * 设置<p>数据库的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @param _databasePrivileges <p>数据库的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
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
                     * 获取<p>数据库中表的权限。Privileges 权限的可选值为：权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;, &quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @return TablePrivileges <p>数据库中表的权限。Privileges 权限的可选值为：权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;, &quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * 
                     */
                    std::vector<TablePrivilege> GetTablePrivileges() const;

                    /**
                     * 设置<p>数据库中表的权限。Privileges 权限的可选值为：权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;, &quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @param _tablePrivileges <p>数据库中表的权限。Privileges 权限的可选值为：权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;, &quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
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
                     * 获取<p>数据库表中列的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;REFERENCES&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @return ColumnPrivileges <p>数据库表中列的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;REFERENCES&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * 
                     */
                    std::vector<ColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 设置<p>数据库表中列的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;REFERENCES&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     * @param _columnPrivileges <p>数据库表中列的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;REFERENCES&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
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
                     * 获取<p>该参数不为空时，为批量修改权限。可选值为：grant - 授予权限，revoke - 回收权限。</p>
                     * @return ModifyAction <p>该参数不为空时，为批量修改权限。可选值为：grant - 授予权限，revoke - 回收权限。</p>
                     * 
                     */
                    std::string GetModifyAction() const;

                    /**
                     * 设置<p>该参数不为空时，为批量修改权限。可选值为：grant - 授予权限，revoke - 回收权限。</p>
                     * @param _modifyAction <p>该参数不为空时，为批量修改权限。可选值为：grant - 授予权限，revoke - 回收权限。</p>
                     * 
                     */
                    void SetModifyAction(const std::string& _modifyAction);

                    /**
                     * 判断参数 ModifyAction 是否已赋值
                     * @return ModifyAction 是否已赋值
                     * 
                     */
                    bool ModifyActionHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库的账号，包括用户名和域名。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>全局权限。其中，GlobalPrivileges 中权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;, &quot;PROCESS&quot;, &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;SHOW DATABASES&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;,&quot;CREATE USER&quot;,&quot;RELOAD&quot;,&quot;REPLICATION CLIENT&quot;,&quot;REPLICATION SLAVE&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * <p>数据库的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE TEMPORARY TABLES&quot;,&quot;LOCK TABLES&quot;,&quot;EXECUTE&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;,&quot;CREATE ROUTINE&quot;,&quot;ALTER ROUTINE&quot;,&quot;EVENT&quot;,&quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     */
                    std::vector<DatabasePrivilege> m_databasePrivileges;
                    bool m_databasePrivilegesHasBeenSet;

                    /**
                     * <p>数据库中表的权限。Privileges 权限的可选值为：权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;DELETE&quot;,&quot;CREATE&quot;,    &quot;DROP&quot;,&quot;REFERENCES&quot;,&quot;INDEX&quot;,&quot;ALTER&quot;,&quot;CREATE VIEW&quot;,&quot;SHOW VIEW&quot;, &quot;TRIGGER&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     */
                    std::vector<TablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * <p>数据库表中列的权限。Privileges 权限的可选值为：&quot;SELECT&quot;,&quot;INSERT&quot;,&quot;UPDATE&quot;,&quot;REFERENCES&quot;。<br>注意，ModifyAction为空时，不传该参数表示清除该权限。</p>
                     */
                    std::vector<ColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                    /**
                     * <p>该参数不为空时，为批量修改权限。可选值为：grant - 授予权限，revoke - 回收权限。</p>
                     */
                    std::string m_modifyAction;
                    bool m_modifyActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
