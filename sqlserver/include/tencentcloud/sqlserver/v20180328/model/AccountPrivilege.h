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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库账号权限信息。创建数据库时设置
                */
                class AccountPrivilege : public AbstractModel
                {
                public:
                    AccountPrivilege();
                    ~AccountPrivilege() = default;
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
                     * 获取数据库权限。ReadWrite表示可读写，ReadOnly表示只读,Delete表示删除DB对该账户的权限，DBOwner所有者
                     * @return Privilege 数据库权限。ReadWrite表示可读写，ReadOnly表示只读,Delete表示删除DB对该账户的权限，DBOwner所有者
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置数据库权限。ReadWrite表示可读写，ReadOnly表示只读,Delete表示删除DB对该账户的权限，DBOwner所有者
                     * @param _privilege 数据库权限。ReadWrite表示可读写，ReadOnly表示只读,Delete表示删除DB对该账户的权限，DBOwner所有者
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取账户名称，L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * @return AccountType 账户名称，L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账户名称，L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * @param _accountType 账户名称，L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * 
                     */
                    void SetAccountType(const std::string& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 数据库用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 数据库权限。ReadWrite表示可读写，ReadOnly表示只读,Delete表示删除DB对该账户的权限，DBOwner所有者
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 账户名称，L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGE_H_
