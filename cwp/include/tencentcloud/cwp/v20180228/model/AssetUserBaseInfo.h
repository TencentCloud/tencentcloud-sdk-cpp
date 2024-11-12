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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


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
                class AssetUserBaseInfo : public AbstractModel
                {
                public:
                    AssetUserBaseInfo();
                    ~AssetUserBaseInfo() = default;
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
                     * 获取主机外网IP
                     * @return MachineWanIp 主机外网IP
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网IP
                     * @param _machineWanIp 主机外网IP
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

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
                     * 获取操作系统信息
                     * @return OsInfo 操作系统信息
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置操作系统信息
                     * @param _osInfo 操作系统信息
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

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
                     * 获取登录方式：0-不可登录；1-只允许key登录；2只允许密码登录；3-允许key和密码，999为空，仅linux
                     * @return LoginType 登录方式：0-不可登录；1-只允许key登录；2只允许密码登录；3-允许key和密码，999为空，仅linux
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置登录方式：0-不可登录；1-只允许key登录；2只允许密码登录；3-允许key和密码，999为空，仅linux
                     * @param _loginType 登录方式：0-不可登录；1-只允许key登录；2只允许密码登录；3-允许key和密码，999为空，仅linux
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

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
                     * 获取主机业务组ID
                     * @return ProjectId 主机业务组ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置主机业务组ID
                     * @param _projectId 主机业务组ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取是否域账号：0否， 1是，2否, 999为空  仅Windows
                     * @return IsDomain 是否域账号：0否， 1是，2否, 999为空  仅Windows
                     * 
                     */
                    uint64_t GetIsDomain() const;

                    /**
                     * 设置是否域账号：0否， 1是，2否, 999为空  仅Windows
                     * @param _isDomain 是否域账号：0否， 1是，2否, 999为空  仅Windows
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
                     * 获取是否有sudo权限，1是，0否, 999为空, 仅linux
                     * @return IsSudo 是否有sudo权限，1是，0否, 999为空, 仅linux
                     * 
                     */
                    uint64_t GetIsSudo() const;

                    /**
                     * 设置是否有sudo权限，1是，0否, 999为空, 仅linux
                     * @param _isSudo 是否有sudo权限，1是，0否, 999为空, 仅linux
                     * 
                     */
                    void SetIsSudo(const uint64_t& _isSudo);

                    /**
                     * 判断参数 IsSudo 是否已赋值
                     * @return IsSudo 是否已赋值
                     * 
                     */
                    bool IsSudoHasBeenSet() const;

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
                     * 获取密码状态：1正常 2即将过期 3已过期 4已锁定 999为空 仅linux
                     * @return PasswordStatus 密码状态：1正常 2即将过期 3已过期 4已锁定 999为空 仅linux
                     * 
                     */
                    int64_t GetPasswordStatus() const;

                    /**
                     * 设置密码状态：1正常 2即将过期 3已过期 4已锁定 999为空 仅linux
                     * @param _passwordStatus 密码状态：1正常 2即将过期 3已过期 4已锁定 999为空 仅linux
                     * 
                     */
                    void SetPasswordStatus(const int64_t& _passwordStatus);

                    /**
                     * 判断参数 PasswordStatus 是否已赋值
                     * @return PasswordStatus 是否已赋值
                     * 
                     */
                    bool PasswordStatusHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取首次采集时间
                     * @return FirstTime 首次采集时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次采集时间
                     * @param _firstTime 首次采集时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取是否新增[0:否|1:是]
                     * @return IsNew 是否新增[0:否|1:是]
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置是否新增[0:否|1:是]
                     * @param _isNew 是否新增[0:否|1:是]
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取
 附加信息
                     * @return MachineExtraInfo 
 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置
 附加信息
                     * @param _machineExtraInfo 
 附加信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 主机内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 主机外网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 操作系统信息
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

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
                     * 登录方式：0-不可登录；1-只允许key登录；2只允许密码登录；3-允许key和密码，999为空，仅linux
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

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
                     * 主机业务组ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 账号类型：0访客用户，1标准用户，2管理员用户 ,999为空,仅Windows
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 是否域账号：0否， 1是，2否, 999为空  仅Windows
                     */
                    uint64_t m_isDomain;
                    bool m_isDomainHasBeenSet;

                    /**
                     * 是否有sudo权限，1是，0否, 999为空, 仅linux
                     */
                    uint64_t m_isSudo;
                    bool m_isSudoHasBeenSet;

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
                     * 密码状态：1正常 2即将过期 3已过期 4已锁定 999为空 仅linux
                     */
                    int64_t m_passwordStatus;
                    bool m_passwordStatusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 首次采集时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 是否新增[0:否|1:是]
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 
 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETUSERBASEINFO_H_
