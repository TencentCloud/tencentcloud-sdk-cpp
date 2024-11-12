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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 本地提权数据
                */
                class PrivilegeEventInfo : public AbstractModel
                {
                public:
                    PrivilegeEventInfo();
                    ~PrivilegeEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据ID
                     * @return Id 数据ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置数据ID
                     * @param _id 数据ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机安全uuid
                     * @return Uuid 主机安全uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全uuid
                     * @param _uuid 主机安全uuid
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
                     * 获取主机uuid
                     * @return Quuid 主机uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机uuid
                     * @param _quuid 主机uuid
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
                     * 获取主机内网IP
                     * @return HostIp 主机内网IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机内网IP
                     * @param _hostIp 主机内网IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取进程名
                     * @return ProcessName 进程名
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名
                     * @param _processName 进程名
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return FullPath 进程路径
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置进程路径
                     * @param _fullPath 进程路径
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                    /**
                     * 获取执行命令
                     * @return CmdLine 执行命令
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置执行命令
                     * @param _cmdLine 执行命令
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取用户组
                     * @return UserGroup 用户组
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置用户组
                     * @param _userGroup 用户组
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取进程文件权限
                     * @return ProcFilePrivilege 进程文件权限
                     * 
                     */
                    std::string GetProcFilePrivilege() const;

                    /**
                     * 设置进程文件权限
                     * @param _procFilePrivilege 进程文件权限
                     * 
                     */
                    void SetProcFilePrivilege(const std::string& _procFilePrivilege);

                    /**
                     * 判断参数 ProcFilePrivilege 是否已赋值
                     * @return ProcFilePrivilege 是否已赋值
                     * 
                     */
                    bool ProcFilePrivilegeHasBeenSet() const;

                    /**
                     * 获取父进程名
                     * @return ParentProcName 父进程名
                     * 
                     */
                    std::string GetParentProcName() const;

                    /**
                     * 设置父进程名
                     * @param _parentProcName 父进程名
                     * 
                     */
                    void SetParentProcName(const std::string& _parentProcName);

                    /**
                     * 判断参数 ParentProcName 是否已赋值
                     * @return ParentProcName 是否已赋值
                     * 
                     */
                    bool ParentProcNameHasBeenSet() const;

                    /**
                     * 获取父进程用户名
                     * @return ParentProcUser 父进程用户名
                     * 
                     */
                    std::string GetParentProcUser() const;

                    /**
                     * 设置父进程用户名
                     * @param _parentProcUser 父进程用户名
                     * 
                     */
                    void SetParentProcUser(const std::string& _parentProcUser);

                    /**
                     * 判断参数 ParentProcUser 是否已赋值
                     * @return ParentProcUser 是否已赋值
                     * 
                     */
                    bool ParentProcUserHasBeenSet() const;

                    /**
                     * 获取父进程用户组
                     * @return ParentProcGroup 父进程用户组
                     * 
                     */
                    std::string GetParentProcGroup() const;

                    /**
                     * 设置父进程用户组
                     * @param _parentProcGroup 父进程用户组
                     * 
                     */
                    void SetParentProcGroup(const std::string& _parentProcGroup);

                    /**
                     * 判断参数 ParentProcGroup 是否已赋值
                     * @return ParentProcGroup 是否已赋值
                     * 
                     */
                    bool ParentProcGroupHasBeenSet() const;

                    /**
                     * 获取父进程路径
                     * @return ParentProcPath 父进程路径
                     * 
                     */
                    std::string GetParentProcPath() const;

                    /**
                     * 设置父进程路径
                     * @param _parentProcPath 父进程路径
                     * 
                     */
                    void SetParentProcPath(const std::string& _parentProcPath);

                    /**
                     * 判断参数 ParentProcPath 是否已赋值
                     * @return ParentProcPath 是否已赋值
                     * 
                     */
                    bool ParentProcPathHasBeenSet() const;

                    /**
                     * 获取进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     * @return PsTree 进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     * @param _psTree 进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     * 
                     */
                    void SetPsTree(const std::string& _psTree);

                    /**
                     * 判断参数 PsTree 是否已赋值
                     * @return PsTree 是否已赋值
                     * 
                     */
                    bool PsTreeHasBeenSet() const;

                    /**
                     * 获取处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     * @return Status 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     * @param _status 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
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
                     * 获取发生时间
                     * @return CreateTime 发生时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置发生时间
                     * @param _createTime 发生时间
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
                     * 获取机器名
                     * @return MachineName 机器名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名
                     * @param _machineName 机器名
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
                     * 获取建议方案
                     * @return SuggestScheme 建议方案
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置建议方案
                     * @param _suggestScheme 建议方案
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取危害描述信息
                     * @return HarmDescribe 危害描述信息
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置危害描述信息
                     * @param _harmDescribe 危害描述信息
                     * 
                     */
                    void SetHarmDescribe(const std::string& _harmDescribe);

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     * 
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return References 参考链接
                     * 
                     */
                    std::vector<std::string> GetReferences() const;

                    /**
                     * 设置参考链接
                     * @param _references 参考链接
                     * 
                     */
                    void SetReferences(const std::vector<std::string>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取主机外网ip
                     * @return MachineWanIp 主机外网ip
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机外网ip
                     * @param _machineWanIp 主机外网ip
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
                     * 获取权限列表|隔开
                     * @return NewCaps 权限列表|隔开
                     * 
                     */
                    std::string GetNewCaps() const;

                    /**
                     * 设置权限列表|隔开
                     * @param _newCaps 权限列表|隔开
                     * 
                     */
                    void SetNewCaps(const std::string& _newCaps);

                    /**
                     * 判断参数 NewCaps 是否已赋值
                     * @return NewCaps 是否已赋值
                     * 
                     */
                    bool NewCapsHasBeenSet() const;

                    /**
                     * 获取主机在线状态 OFFLINE  ONLINE
                     * @return MachineStatus 主机在线状态 OFFLINE  ONLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机在线状态 OFFLINE  ONLINE
                     * @param _machineStatus 主机在线状态 OFFLINE  ONLINE
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取处理时间
                     * @return ModifyTime 处理时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置处理时间
                     * @param _modifyTime 处理时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 数据ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机安全uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机内网IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 进程名
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                    /**
                     * 执行命令
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户组
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 进程文件权限
                     */
                    std::string m_procFilePrivilege;
                    bool m_procFilePrivilegeHasBeenSet;

                    /**
                     * 父进程名
                     */
                    std::string m_parentProcName;
                    bool m_parentProcNameHasBeenSet;

                    /**
                     * 父进程用户名
                     */
                    std::string m_parentProcUser;
                    bool m_parentProcUserHasBeenSet;

                    /**
                     * 父进程用户组
                     */
                    std::string m_parentProcGroup;
                    bool m_parentProcGroupHasBeenSet;

                    /**
                     * 父进程路径
                     */
                    std::string m_parentProcPath;
                    bool m_parentProcPathHasBeenSet;

                    /**
                     * 进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 机器名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 建议方案
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * 危害描述信息
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::vector<std::string> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 主机外网ip
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 权限列表|隔开
                     */
                    std::string m_newCaps;
                    bool m_newCapsHasBeenSet;

                    /**
                     * 主机在线状态 OFFLINE  ONLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 处理时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PRIVILEGEEVENTINFO_H_
