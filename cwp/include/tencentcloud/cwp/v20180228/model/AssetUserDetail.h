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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetUserKeyInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资源管理账号基本信息
                */
                class AssetUserDetail : public AbstractModel
                {
                public:
                    AssetUserDetail();
                    ~AssetUserDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机内网IP
                     * @return MachineIp 主机内网IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置主机内网IP
                     * @param _machineIp 主机内网IP
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return MachineName 主机名称
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名称
                     * @param _machineName 主机名称
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取主机Uuid
                     * @return Uuid 主机Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
                     * @param _uuid 主机Uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取账号UID
                     * @return Uid 账号UID
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置账号UID
                     * @param _uid 账号UID
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取账号GID
                     * @return Gid 账号GID
                     * 
                     */
                    std::string GetGid() const;

                    /**
                     * 设置账号GID
                     * @param _gid 账号GID
                     * 
                     */
                    void SetGid(const std::string& _gid);

                    /**
                     * 判断参数 Gid 是否已赋值
                     * @return Gid 是否已赋值
                     * 
                     */
                    bool GidHasBeenSet() const;

                    /**
                     * 获取账号状态：0-禁用；1-启用
                     * @return Status 账号状态：0-禁用；1-启用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置账号状态：0-禁用；1-启用
                     * @param _status 账号状态：0-禁用；1-启用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否有root权限：0-否；1是，999为空: 仅linux
                     * @return IsRoot 是否有root权限：0-否；1是，999为空: 仅linux
                     * 
                     */
                    uint64_t GetIsRoot() const;

                    /**
                     * 设置是否有root权限：0-否；1是，999为空: 仅linux
                     * @param _isRoot 是否有root权限：0-否；1是，999为空: 仅linux
                     * 
                     */
                    void SetIsRoot(const uint64_t& _isRoot);

                    /**
                     * 判断参数 IsRoot 是否已赋值
                     * @return IsRoot 是否已赋值
                     * 
                     */
                    bool IsRootHasBeenSet() const;

                    /**
                     * 获取上次登录时间
                     * @return LastLoginTime 上次登录时间
                     * 
                     */
                    std::string GetLastLoginTime() const;

                    /**
                     * 设置上次登录时间
                     * @param _lastLoginTime 上次登录时间
                     * 
                     */
                    void SetLastLoginTime(const std::string& _lastLoginTime);

                    /**
                     * 判断参数 LastLoginTime 是否已赋值
                     * @return LastLoginTime 是否已赋值
                     * 
                     */
                    bool LastLoginTimeHasBeenSet() const;

                    /**
                     * 获取账号名称
                     * @return Name 账号名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号名称
                     * @param _name 账号名称
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
                     * 获取账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     * @return UserType 账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     * @param _userType 账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取是否域账号：0否， 1是, 999为空  仅Windows
                     * @return IsDomain 是否域账号：0否， 1是, 999为空  仅Windows
                     * 
                     */
                    uint64_t GetIsDomain() const;

                    /**
                     * 设置是否域账号：0否， 1是, 999为空  仅Windows
                     * @param _isDomain 是否域账号：0否， 1是, 999为空  仅Windows
                     * 
                     */
                    void SetIsDomain(const uint64_t& _isDomain);

                    /**
                     * 判断参数 IsDomain 是否已赋值
                     * @return IsDomain 是否已赋值
                     * 
                     */
                    bool IsDomainHasBeenSet() const;

                    /**
                     * 获取是否允许ssh登录，1是，0否, 999为空, 仅linux
                     * @return IsSshLogin 是否允许ssh登录，1是，0否, 999为空, 仅linux
                     * 
                     */
                    uint64_t GetIsSshLogin() const;

                    /**
                     * 设置是否允许ssh登录，1是，0否, 999为空, 仅linux
                     * @param _isSshLogin 是否允许ssh登录，1是，0否, 999为空, 仅linux
                     * 
                     */
                    void SetIsSshLogin(const uint64_t& _isSshLogin);

                    /**
                     * 判断参数 IsSshLogin 是否已赋值
                     * @return IsSshLogin 是否已赋值
                     * 
                     */
                    bool IsSshLoginHasBeenSet() const;

                    /**
                     * 获取Home目录
                     * @return HomePath Home目录
                     * 
                     */
                    std::string GetHomePath() const;

                    /**
                     * 设置Home目录
                     * @param _homePath Home目录
                     * 
                     */
                    void SetHomePath(const std::string& _homePath);

                    /**
                     * 判断参数 HomePath 是否已赋值
                     * @return HomePath 是否已赋值
                     * 
                     */
                    bool HomePathHasBeenSet() const;

                    /**
                     * 获取Shell路径  仅linux
                     * @return Shell Shell路径  仅linux
                     * 
                     */
                    std::string GetShell() const;

                    /**
                     * 设置Shell路径  仅linux
                     * @param _shell Shell路径  仅linux
                     * 
                     */
                    void SetShell(const std::string& _shell);

                    /**
                     * 判断参数 Shell 是否已赋值
                     * @return Shell 是否已赋值
                     * 
                     */
                    bool ShellHasBeenSet() const;

                    /**
                     * 获取是否shell登录性，0不是；1是 仅linux
                     * @return ShellLoginStatus 是否shell登录性，0不是；1是 仅linux
                     * 
                     */
                    uint64_t GetShellLoginStatus() const;

                    /**
                     * 设置是否shell登录性，0不是；1是 仅linux
                     * @param _shellLoginStatus 是否shell登录性，0不是；1是 仅linux
                     * 
                     */
                    void SetShellLoginStatus(const uint64_t& _shellLoginStatus);

                    /**
                     * 判断参数 ShellLoginStatus 是否已赋值
                     * @return ShellLoginStatus 是否已赋值
                     * 
                     */
                    bool ShellLoginStatusHasBeenSet() const;

                    /**
                     * 获取密码修改时间
                     * @return PasswordChangeTime 密码修改时间
                     * 
                     */
                    std::string GetPasswordChangeTime() const;

                    /**
                     * 设置密码修改时间
                     * @param _passwordChangeTime 密码修改时间
                     * 
                     */
                    void SetPasswordChangeTime(const std::string& _passwordChangeTime);

                    /**
                     * 判断参数 PasswordChangeTime 是否已赋值
                     * @return PasswordChangeTime 是否已赋值
                     * 
                     */
                    bool PasswordChangeTimeHasBeenSet() const;

                    /**
                     * 获取密码过期时间  仅linux
                     * @return PasswordDueTime 密码过期时间  仅linux
                     * 
                     */
                    std::string GetPasswordDueTime() const;

                    /**
                     * 设置密码过期时间  仅linux
                     * @param _passwordDueTime 密码过期时间  仅linux
                     * 
                     */
                    void SetPasswordDueTime(const std::string& _passwordDueTime);

                    /**
                     * 判断参数 PasswordDueTime 是否已赋值
                     * @return PasswordDueTime 是否已赋值
                     * 
                     */
                    bool PasswordDueTimeHasBeenSet() const;

                    /**
                     * 获取密码锁定时间：单位天, -1为永不锁定 999为空，仅linux
                     * @return PasswordLockDays 密码锁定时间：单位天, -1为永不锁定 999为空，仅linux
                     * 
                     */
                    int64_t GetPasswordLockDays() const;

                    /**
                     * 设置密码锁定时间：单位天, -1为永不锁定 999为空，仅linux
                     * @param _passwordLockDays 密码锁定时间：单位天, -1为永不锁定 999为空，仅linux
                     * 
                     */
                    void SetPasswordLockDays(const int64_t& _passwordLockDays);

                    /**
                     * 判断参数 PasswordLockDays 是否已赋值
                     * @return PasswordLockDays 是否已赋值
                     * 
                     */
                    bool PasswordLockDaysHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取用户组名
                     * @return GroupName 用户组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组名
                     * @param _groupName 用户组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取账号到期时间
                     * @return DisableTime 账号到期时间
                     * 
                     */
                    std::string GetDisableTime() const;

                    /**
                     * 设置账号到期时间
                     * @param _disableTime 账号到期时间
                     * 
                     */
                    void SetDisableTime(const std::string& _disableTime);

                    /**
                     * 判断参数 DisableTime 是否已赋值
                     * @return DisableTime 是否已赋值
                     * 
                     */
                    bool DisableTimeHasBeenSet() const;

                    /**
                     * 获取最近登录终端
                     * @return LastLoginTerminal 最近登录终端
                     * 
                     */
                    std::string GetLastLoginTerminal() const;

                    /**
                     * 设置最近登录终端
                     * @param _lastLoginTerminal 最近登录终端
                     * 
                     */
                    void SetLastLoginTerminal(const std::string& _lastLoginTerminal);

                    /**
                     * 判断参数 LastLoginTerminal 是否已赋值
                     * @return LastLoginTerminal 是否已赋值
                     * 
                     */
                    bool LastLoginTerminalHasBeenSet() const;

                    /**
                     * 获取最近登录位置
                     * @return LastLoginLoc 最近登录位置
                     * 
                     */
                    std::string GetLastLoginLoc() const;

                    /**
                     * 设置最近登录位置
                     * @param _lastLoginLoc 最近登录位置
                     * 
                     */
                    void SetLastLoginLoc(const std::string& _lastLoginLoc);

                    /**
                     * 判断参数 LastLoginLoc 是否已赋值
                     * @return LastLoginLoc 是否已赋值
                     * 
                     */
                    bool LastLoginLocHasBeenSet() const;

                    /**
                     * 获取最近登录IP
                     * @return LastLoginIp 最近登录IP
                     * 
                     */
                    std::string GetLastLoginIp() const;

                    /**
                     * 设置最近登录IP
                     * @param _lastLoginIp 最近登录IP
                     * 
                     */
                    void SetLastLoginIp(const std::string& _lastLoginIp);

                    /**
                     * 判断参数 LastLoginIp 是否已赋值
                     * @return LastLoginIp 是否已赋值
                     * 
                     */
                    bool LastLoginIpHasBeenSet() const;

                    /**
                     * 获取密码过期提醒：单位天
                     * @return PasswordWarnDays 密码过期提醒：单位天
                     * 
                     */
                    uint64_t GetPasswordWarnDays() const;

                    /**
                     * 设置密码过期提醒：单位天
                     * @param _passwordWarnDays 密码过期提醒：单位天
                     * 
                     */
                    void SetPasswordWarnDays(const uint64_t& _passwordWarnDays);

                    /**
                     * 判断参数 PasswordWarnDays 是否已赋值
                     * @return PasswordWarnDays 是否已赋值
                     * 
                     */
                    bool PasswordWarnDaysHasBeenSet() const;

                    /**
                     * 获取密码修改设置：0-不可修改，1-可修改
                     * @return PasswordChangeType 密码修改设置：0-不可修改，1-可修改
                     * 
                     */
                    uint64_t GetPasswordChangeType() const;

                    /**
                     * 设置密码修改设置：0-不可修改，1-可修改
                     * @param _passwordChangeType 密码修改设置：0-不可修改，1-可修改
                     * 
                     */
                    void SetPasswordChangeType(const uint64_t& _passwordChangeType);

                    /**
                     * 判断参数 PasswordChangeType 是否已赋值
                     * @return PasswordChangeType 是否已赋值
                     * 
                     */
                    bool PasswordChangeTypeHasBeenSet() const;

                    /**
                     * 获取用户公钥列表
                     * @return Keys 用户公钥列表
                     * 
                     */
                    std::vector<AssetUserKeyInfo> GetKeys() const;

                    /**
                     * 设置用户公钥列表
                     * @param _keys 用户公钥列表
                     * 
                     */
                    void SetKeys(const std::vector<AssetUserKeyInfo>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 主机内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 主机Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 账号UID
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 账号GID
                     */
                    std::string m_gid;
                    bool m_gidHasBeenSet;

                    /**
                     * 账号状态：0-禁用；1-启用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否有root权限：0-否；1是，999为空: 仅linux
                     */
                    uint64_t m_isRoot;
                    bool m_isRootHasBeenSet;

                    /**
                     * 上次登录时间
                     */
                    std::string m_lastLoginTime;
                    bool m_lastLoginTimeHasBeenSet;

                    /**
                     * 账号名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 是否域账号：0否， 1是, 999为空  仅Windows
                     */
                    uint64_t m_isDomain;
                    bool m_isDomainHasBeenSet;

                    /**
                     * 是否允许ssh登录，1是，0否, 999为空, 仅linux
                     */
                    uint64_t m_isSshLogin;
                    bool m_isSshLoginHasBeenSet;

                    /**
                     * Home目录
                     */
                    std::string m_homePath;
                    bool m_homePathHasBeenSet;

                    /**
                     * Shell路径  仅linux
                     */
                    std::string m_shell;
                    bool m_shellHasBeenSet;

                    /**
                     * 是否shell登录性，0不是；1是 仅linux
                     */
                    uint64_t m_shellLoginStatus;
                    bool m_shellLoginStatusHasBeenSet;

                    /**
                     * 密码修改时间
                     */
                    std::string m_passwordChangeTime;
                    bool m_passwordChangeTimeHasBeenSet;

                    /**
                     * 密码过期时间  仅linux
                     */
                    std::string m_passwordDueTime;
                    bool m_passwordDueTimeHasBeenSet;

                    /**
                     * 密码锁定时间：单位天, -1为永不锁定 999为空，仅linux
                     */
                    int64_t m_passwordLockDays;
                    bool m_passwordLockDaysHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 用户组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 账号到期时间
                     */
                    std::string m_disableTime;
                    bool m_disableTimeHasBeenSet;

                    /**
                     * 最近登录终端
                     */
                    std::string m_lastLoginTerminal;
                    bool m_lastLoginTerminalHasBeenSet;

                    /**
                     * 最近登录位置
                     */
                    std::string m_lastLoginLoc;
                    bool m_lastLoginLocHasBeenSet;

                    /**
                     * 最近登录IP
                     */
                    std::string m_lastLoginIp;
                    bool m_lastLoginIpHasBeenSet;

                    /**
                     * 密码过期提醒：单位天
                     */
                    uint64_t m_passwordWarnDays;
                    bool m_passwordWarnDaysHasBeenSet;

                    /**
                     * 密码修改设置：0-不可修改，1-可修改
                     */
                    uint64_t m_passwordChangeType;
                    bool m_passwordChangeTypeHasBeenSet;

                    /**
                     * 用户公钥列表
                     */
                    std::vector<AssetUserKeyInfo> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERDETAIL_H_
