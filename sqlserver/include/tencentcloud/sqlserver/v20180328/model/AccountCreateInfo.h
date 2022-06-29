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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilege.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 账号创建信息
                */
                class AccountCreateInfo : public AbstractModel
                {
                public:
                    AccountCreateInfo();
                    ~AccountCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例用户名
                     * @return UserName 实例用户名
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例用户名
                     * @param UserName 实例用户名
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取实例密码
                     * @return Password 实例密码
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码
                     * @param Password 实例密码
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取DB权限列表
                     * @return DBPrivileges DB权限列表
                     */
                    std::vector<DBPrivilege> GetDBPrivileges() const;

                    /**
                     * 设置DB权限列表
                     * @param DBPrivileges DB权限列表
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilege>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取账号备注信息
                     * @return Remark 账号备注信息
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账号备注信息
                     * @param Remark 账号备注信息
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否为管理员账户，默认为否
                     * @return IsAdmin 是否为管理员账户，默认为否
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员账户，默认为否
                     * @param IsAdmin 是否为管理员账户，默认为否
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * @return Authentication win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * @param Authentication win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     */
                    void SetAuthentication(const std::string& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     */
                    bool AuthenticationHasBeenSet() const;

                private:

                    /**
                     * 实例用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 实例密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * DB权限列表
                     */
                    std::vector<DBPrivilege> m_dBPrivileges;
                    bool m_dBPrivilegesHasBeenSet;

                    /**
                     * 账号备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否为管理员账户，默认为否
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_
