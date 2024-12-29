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
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置实例用户名
                     * @param _userName 实例用户名
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
                     * 获取实例密码
                     * @return Password 实例密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例密码
                     * @param _password 实例密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取DB权限列表
                     * @return DBPrivileges DB权限列表
                     * 
                     */
                    std::vector<DBPrivilege> GetDBPrivileges() const;

                    /**
                     * 设置DB权限列表
                     * @param _dBPrivileges DB权限列表
                     * 
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilege>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     * 
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取账号备注信息
                     * @return Remark 账号备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账号备注信息
                     * @param _remark 账号备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否为管理员账户，当值为true 等价于单节点AccountType=L0，双节点AccountType=L1，当值为false，等价于AccountType=L3
                     * @return IsAdmin 是否为管理员账户，当值为true 等价于单节点AccountType=L0，双节点AccountType=L1，当值为false，等价于AccountType=L3
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员账户，当值为true 等价于单节点AccountType=L0，双节点AccountType=L1，当值为false，等价于AccountType=L3
                     * @param _isAdmin 是否为管理员账户，当值为true 等价于单节点AccountType=L0，双节点AccountType=L1，当值为false，等价于AccountType=L3
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
                     * 获取win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * @return Authentication win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * @param _authentication win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     * 
                     */
                    void SetAuthentication(const std::string& _authentication);

                    /**
                     * 判断参数 Authentication 是否已赋值
                     * @return Authentication 是否已赋值
                     * 
                     */
                    bool AuthenticationHasBeenSet() const;

                    /**
                     * 获取账号类型，IsAdmin的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * @return AccountType 账号类型，IsAdmin的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型，IsAdmin的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     * @param _accountType 账号类型，IsAdmin的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
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
                     * 获取是否开启CAM验证
                     * @return IsCam 是否开启CAM验证
                     * 
                     */
                    bool GetIsCam() const;

                    /**
                     * 设置是否开启CAM验证
                     * @param _isCam 是否开启CAM验证
                     * 
                     */
                    void SetIsCam(const bool& _isCam);

                    /**
                     * 判断参数 IsCam 是否已赋值
                     * @return IsCam 是否已赋值
                     * 
                     */
                    bool IsCamHasBeenSet() const;

                    /**
                     * 获取加密密钥版本号，0表示不使用加密
                     * @return EncryptedVersion 加密密钥版本号，0表示不使用加密
                     * 
                     */
                    int64_t GetEncryptedVersion() const;

                    /**
                     * 设置加密密钥版本号，0表示不使用加密
                     * @param _encryptedVersion 加密密钥版本号，0表示不使用加密
                     * 
                     */
                    void SetEncryptedVersion(const int64_t& _encryptedVersion);

                    /**
                     * 判断参数 EncryptedVersion 是否已赋值
                     * @return EncryptedVersion 是否已赋值
                     * 
                     */
                    bool EncryptedVersionHasBeenSet() const;

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
                     * 是否为管理员账户，当值为true 等价于单节点AccountType=L0，双节点AccountType=L1，当值为false，等价于AccountType=L3
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * win-windows鉴权,sql-sqlserver鉴权，不填默认值为sql-sqlserver鉴权
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * 账号类型，IsAdmin的扩展字段。 L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限，默认L3
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 是否开启CAM验证
                     */
                    bool m_isCam;
                    bool m_isCamHasBeenSet;

                    /**
                     * 加密密钥版本号，0表示不使用加密
                     */
                    int64_t m_encryptedVersion;
                    bool m_encryptedVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTCREATEINFO_H_
