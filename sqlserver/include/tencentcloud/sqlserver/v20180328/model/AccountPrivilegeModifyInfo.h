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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilegeModifyInfo.h>
#include <tencentcloud/sqlserver/v20180328/model/SelectAllDB.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库账号权限变更信息
                */
                class AccountPrivilegeModifyInfo : public AbstractModel
                {
                public:
                    AccountPrivilegeModifyInfo();
                    ~AccountPrivilegeModifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库用户名
                     * @return UserName 数据库用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置数据库用户名
                     * @param _userName 数据库用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取账号权限变更信息。参数DBPrivileges和AccAllDB只能二选一
                     * @return DBPrivileges 账号权限变更信息。参数DBPrivileges和AccAllDB只能二选一
                     * 
                     */
                    std::vector<DBPrivilegeModifyInfo> GetDBPrivileges() const;

                    /**
                     * 设置账号权限变更信息。参数DBPrivileges和AccAllDB只能二选一
                     * @param _dBPrivileges 账号权限变更信息。参数DBPrivileges和AccAllDB只能二选一
                     * 
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilegeModifyInfo>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     * 
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取表示是否为管理员账户，当值为true，表示是 管理员。若实例 是 单节点，则管理员所在的 账号类型为超级权限账号 ，即AccountType=L0；若实例 是 双节点，则管理员所在的 账号类型为高级权限账号，即AccountType=L1；当值为false，表示 不是管理员，则账号类型为普通账号，即AccountType=L3
                     * @return IsAdmin 表示是否为管理员账户，当值为true，表示是 管理员。若实例 是 单节点，则管理员所在的 账号类型为超级权限账号 ，即AccountType=L0；若实例 是 双节点，则管理员所在的 账号类型为高级权限账号，即AccountType=L1；当值为false，表示 不是管理员，则账号类型为普通账号，即AccountType=L3
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置表示是否为管理员账户，当值为true，表示是 管理员。若实例 是 单节点，则管理员所在的 账号类型为超级权限账号 ，即AccountType=L0；若实例 是 双节点，则管理员所在的 账号类型为高级权限账号，即AccountType=L1；当值为false，表示 不是管理员，则账号类型为普通账号，即AccountType=L3
                     * @param _isAdmin 表示是否为管理员账户，当值为true，表示是 管理员。若实例 是 单节点，则管理员所在的 账号类型为超级权限账号 ，即AccountType=L0；若实例 是 双节点，则管理员所在的 账号类型为高级权限账号，即AccountType=L1；当值为false，表示 不是管理员，则账号类型为普通账号，即AccountType=L3
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取账号类型，IsAdmin字段的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * @return AccountType 账号类型，IsAdmin字段的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型，IsAdmin字段的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * @param _accountType 账号类型，IsAdmin字段的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取全量修改指定账号下的所有DB权限，只支持特殊权限账号和普通权限账号。参数DBPrivileges和AccAllDB只能二选一
                     * @return AccAllDB 全量修改指定账号下的所有DB权限，只支持特殊权限账号和普通权限账号。参数DBPrivileges和AccAllDB只能二选一
                     * 
                     */
                    SelectAllDB GetAccAllDB() const;

                    /**
                     * 设置全量修改指定账号下的所有DB权限，只支持特殊权限账号和普通权限账号。参数DBPrivileges和AccAllDB只能二选一
                     * @param _accAllDB 全量修改指定账号下的所有DB权限，只支持特殊权限账号和普通权限账号。参数DBPrivileges和AccAllDB只能二选一
                     * 
                     */
                    void SetAccAllDB(const SelectAllDB& _accAllDB);

                    /**
                     * 判断参数 AccAllDB 是否已赋值
                     * @return AccAllDB 是否已赋值
                     * 
                     */
                    bool AccAllDBHasBeenSet() const;

                private:

                    /**
                     * 数据库用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号权限变更信息。参数DBPrivileges和AccAllDB只能二选一
                     */
                    std::vector<DBPrivilegeModifyInfo> m_dBPrivileges;
                    bool m_dBPrivilegesHasBeenSet;

                    /**
                     * 表示是否为管理员账户，当值为true，表示是 管理员。若实例 是 单节点，则管理员所在的 账号类型为超级权限账号 ，即AccountType=L0；若实例 是 双节点，则管理员所在的 账号类型为高级权限账号，即AccountType=L1；当值为false，表示 不是管理员，则账号类型为普通账号，即AccountType=L3
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * 账号类型，IsAdmin字段的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 全量修改指定账号下的所有DB权限，只支持特殊权限账号和普通权限账号。参数DBPrivileges和AccAllDB只能二选一
                     */
                    SelectAllDB m_accAllDB;
                    bool m_accAllDBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
