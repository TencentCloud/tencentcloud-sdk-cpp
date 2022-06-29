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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_

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
                * 反弹Shell数据
                */
                class ReverseShell : public AbstractModel
                {
                public:
                    ReverseShell();
                    ~ReverseShell() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID 主键
                     * @return Id ID 主键
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID 主键
                     * @param Id ID 主键
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云镜UUID
                     * @return Uuid 云镜UUID
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜UUID
                     * @param Uuid 云镜UUID
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return Quuid 主机ID
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机ID
                     * @param Quuid 主机ID
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机内网IP
                     * @return Hostip 主机内网IP
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置主机内网IP
                     * @param Hostip 主机内网IP
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取目标IP
                     * @return DstIp 目标IP
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP
                     * @param DstIp 目标IP
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DstPort 目标端口
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置目标端口
                     * @param DstPort 目标端口
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取进程名
                     * @return ProcessName 进程名
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名
                     * @param ProcessName 进程名
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return FullPath 进程路径
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置进程路径
                     * @param FullPath 进程路径
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     */
                    bool FullPathHasBeenSet() const;

                    /**
                     * 获取命令详情
                     * @return CmdLine 命令详情
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令详情
                     * @param CmdLine 命令详情
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取执行用户
                     * @return UserName 执行用户
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置执行用户
                     * @param UserName 执行用户
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取执行用户组
                     * @return UserGroup 执行用户组
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置执行用户组
                     * @param UserGroup 执行用户组
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取父进程名
                     * @return ParentProcName 父进程名
                     */
                    std::string GetParentProcName() const;

                    /**
                     * 设置父进程名
                     * @param ParentProcName 父进程名
                     */
                    void SetParentProcName(const std::string& _parentProcName);

                    /**
                     * 判断参数 ParentProcName 是否已赋值
                     * @return ParentProcName 是否已赋值
                     */
                    bool ParentProcNameHasBeenSet() const;

                    /**
                     * 获取父进程用户
                     * @return ParentProcUser 父进程用户
                     */
                    std::string GetParentProcUser() const;

                    /**
                     * 设置父进程用户
                     * @param ParentProcUser 父进程用户
                     */
                    void SetParentProcUser(const std::string& _parentProcUser);

                    /**
                     * 判断参数 ParentProcUser 是否已赋值
                     * @return ParentProcUser 是否已赋值
                     */
                    bool ParentProcUserHasBeenSet() const;

                    /**
                     * 获取父进程用户组
                     * @return ParentProcGroup 父进程用户组
                     */
                    std::string GetParentProcGroup() const;

                    /**
                     * 设置父进程用户组
                     * @param ParentProcGroup 父进程用户组
                     */
                    void SetParentProcGroup(const std::string& _parentProcGroup);

                    /**
                     * 判断参数 ParentProcGroup 是否已赋值
                     * @return ParentProcGroup 是否已赋值
                     */
                    bool ParentProcGroupHasBeenSet() const;

                    /**
                     * 获取父进程路径
                     * @return ParentProcPath 父进程路径
                     */
                    std::string GetParentProcPath() const;

                    /**
                     * 设置父进程路径
                     * @param ParentProcPath 父进程路径
                     */
                    void SetParentProcPath(const std::string& _parentProcPath);

                    /**
                     * 判断参数 ParentProcPath 是否已赋值
                     * @return ParentProcPath 是否已赋值
                     */
                    bool ParentProcPathHasBeenSet() const;

                    /**
                     * 获取处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     * @return Status 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     * @param Status 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取产生时间
                     * @return CreateTime 产生时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置产生时间
                     * @param CreateTime 产生时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取主机名
                     * @return MachineName 主机名
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
                     * @param MachineName 主机名
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取进程树
                     * @return ProcTree 进程树
                     */
                    std::string GetProcTree() const;

                    /**
                     * 设置进程树
                     * @param ProcTree 进程树
                     */
                    void SetProcTree(const std::string& _procTree);

                    /**
                     * 判断参数 ProcTree 是否已赋值
                     * @return ProcTree 是否已赋值
                     */
                    bool ProcTreeHasBeenSet() const;

                    /**
                     * 获取检测方法
                     * @return DetectBy 检测方法
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置检测方法
                     * @param DetectBy 检测方法
                     */
                    void SetDetectBy(const uint64_t& _detectBy);

                    /**
                     * 判断参数 DetectBy 是否已赋值
                     * @return DetectBy 是否已赋值
                     */
                    bool DetectByHasBeenSet() const;

                private:

                    /**
                     * ID 主键
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云镜UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机内网IP
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * 目标IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

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
                     * 命令详情
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 执行用户
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 执行用户组
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 父进程名
                     */
                    std::string m_parentProcName;
                    bool m_parentProcNameHasBeenSet;

                    /**
                     * 父进程用户
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
                     * 处理状态：0-待处理 2-白名单 3-已处理 4-已忽略
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 产生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 进程树
                     */
                    std::string m_procTree;
                    bool m_procTreeHasBeenSet;

                    /**
                     * 检测方法
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_REVERSESHELL_H_
