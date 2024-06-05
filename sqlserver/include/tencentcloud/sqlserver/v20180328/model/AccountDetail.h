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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_

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
                * 账号信息详情
                */
                class AccountDetail : public AbstractModel
                {
                public:
                    AccountDetail();
                    ~AccountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户名
                     * @return Name 账户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账户名
                     * @param _name 账户名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取账户备注
                     * @return Remark 账户备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账户备注
                     * @param _remark 账户备注
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
                     * 获取账户创建时间
                     * @return CreateTime 账户创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账户创建时间
                     * @param _createTime 账户创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @return Status 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * @param _status 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取账户更新时间
                     * @return UpdateTime 账户更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置账户更新时间
                     * @param _updateTime 账户更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取密码更新时间
                     * @return PassTime 密码更新时间
                     * 
                     */
                    std::string GetPassTime() const;

                    /**
                     * 设置密码更新时间
                     * @param _passTime 密码更新时间
                     * 
                     */
                    void SetPassTime(const std::string& _passTime);

                    /**
                     * 判断参数 PassTime 是否已赋值
                     * @return PassTime 是否已赋值
                     * 
                     */
                    bool PassTimeHasBeenSet() const;

                    /**
                     * 获取账户内部状态，正常为enable
                     * @return InternalStatus 账户内部状态，正常为enable
                     * 
                     */
                    std::string GetInternalStatus() const;

                    /**
                     * 设置账户内部状态，正常为enable
                     * @param _internalStatus 账户内部状态，正常为enable
                     * 
                     */
                    void SetInternalStatus(const std::string& _internalStatus);

                    /**
                     * 判断参数 InternalStatus 是否已赋值
                     * @return InternalStatus 是否已赋值
                     * 
                     */
                    bool InternalStatusHasBeenSet() const;

                    /**
                     * 获取该账户对相关db的读写权限信息
                     * @return Dbs 该账户对相关db的读写权限信息
                     * 
                     */
                    std::vector<DBPrivilege> GetDbs() const;

                    /**
                     * 设置该账户对相关db的读写权限信息
                     * @param _dbs 该账户对相关db的读写权限信息
                     * 
                     */
                    void SetDbs(const std::vector<DBPrivilege>& _dbs);

                    /**
                     * 判断参数 Dbs 是否已赋值
                     * @return Dbs 是否已赋值
                     * 
                     */
                    bool DbsHasBeenSet() const;

                    /**
                     * 获取是否为管理员账户
                     * @return IsAdmin 是否为管理员账户
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员账户
                     * @param _isAdmin 是否为管理员账户
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
                     * 获取是否为cam托管账户
                     * @return IsCam 是否为cam托管账户
                     * 
                     */
                    bool GetIsCam() const;

                    /**
                     * 设置是否为cam托管账户
                     * @param _isCam 是否为cam托管账户
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
                     * 获取win-windows鉴权,sql-sqlserver鉴权
                     * @return Authentication win-windows鉴权,sql-sqlserver鉴权
                     * 
                     */
                    std::string GetAuthentication() const;

                    /**
                     * 设置win-windows鉴权,sql-sqlserver鉴权
                     * @param _authentication win-windows鉴权,sql-sqlserver鉴权
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
                     * 获取win-windows鉴权账户需要host
                     * @return Host win-windows鉴权账户需要host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置win-windows鉴权账户需要host
                     * @param _host win-windows鉴权账户需要host
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取账号类型。L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * @return AccountType 账号类型。L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * 
                     */
                    std::string GetAccountType() const;

                    /**
                     * 设置账号类型。L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     * @param _accountType 账号类型。L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
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
                     * 账户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账户备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 账户创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 账户状态，1-创建中，2-正常，3-修改中，4-密码重置中，-1-删除中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 账户更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 密码更新时间
                     */
                    std::string m_passTime;
                    bool m_passTimeHasBeenSet;

                    /**
                     * 账户内部状态，正常为enable
                     */
                    std::string m_internalStatus;
                    bool m_internalStatusHasBeenSet;

                    /**
                     * 该账户对相关db的读写权限信息
                     */
                    std::vector<DBPrivilege> m_dbs;
                    bool m_dbsHasBeenSet;

                    /**
                     * 是否为管理员账户
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * 是否为cam托管账户
                     */
                    bool m_isCam;
                    bool m_isCamHasBeenSet;

                    /**
                     * win-windows鉴权,sql-sqlserver鉴权
                     */
                    std::string m_authentication;
                    bool m_authenticationHasBeenSet;

                    /**
                     * win-windows鉴权账户需要host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 账号类型。L0-超级权限(基础版独有),L1-高级权限,L2-特殊权限,L3-普通权限
                     */
                    std::string m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTDETAIL_H_
