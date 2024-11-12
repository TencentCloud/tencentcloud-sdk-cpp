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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_

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
                * 核心文件监控事件
                */
                class FileTamperEvent : public AbstractModel
                {
                public:
                    FileTamperEvent();
                    ~FileTamperEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器名称
                     * @return HostName 机器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置机器名称
                     * @param _hostName 机器名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取机器IP
                     * @return HostIp 机器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置机器IP
                     * @param _hostIp 机器IP
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
                     * 获取最近发生时间
                     * @return ModifyTime 最近发生时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最近发生时间
                     * @param _modifyTime 最近发生时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
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
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
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
                     * 获取cvm id
                     * @return Quuid cvm id
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm id
                     * @param _quuid cvm id
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
                     * 获取事件类型/动作  0 -- 告警
                     * @return Type 事件类型/动作  0 -- 告警
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置事件类型/动作  0 -- 告警
                     * @param _type 事件类型/动作  0 -- 告警
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取进程路径
                     * @return ProcessExe 进程路径
                     * 
                     */
                    std::string GetProcessExe() const;

                    /**
                     * 设置进程路径
                     * @param _processExe 进程路径
                     * 
                     */
                    void SetProcessExe(const std::string& _processExe);

                    /**
                     * 判断参数 ProcessExe 是否已赋值
                     * @return ProcessExe 是否已赋值
                     * 
                     */
                    bool ProcessExeHasBeenSet() const;

                    /**
                     * 获取进程参数
                     * @return ProcessArgv 进程参数
                     * 
                     */
                    std::string GetProcessArgv() const;

                    /**
                     * 设置进程参数
                     * @param _processArgv 进程参数
                     * 
                     */
                    void SetProcessArgv(const std::string& _processArgv);

                    /**
                     * 判断参数 ProcessArgv 是否已赋值
                     * @return ProcessArgv 是否已赋值
                     * 
                     */
                    bool ProcessArgvHasBeenSet() const;

                    /**
                     * 获取目标文件路径
                     * @return Target 目标文件路径
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标文件路径
                     * @param _target 目标文件路径
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略 4-已手动处理
                     * @return Status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略 4-已手动处理
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略 4-已手动处理
                     * @param _status 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略 4-已手动处理
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
                     * 获取事件产生次数
                     * @return EventCount 事件产生次数
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置事件产生次数
                     * @param _eventCount 事件产生次数
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则id
                     * @param _ruleId 规则id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取事件详情: json格式
                     * @return Pstree 事件详情: json格式
                     * 
                     */
                    std::string GetPstree() const;

                    /**
                     * 设置事件详情: json格式
                     * @param _pstree 事件详情: json格式
                     * 
                     */
                    void SetPstree(const std::string& _pstree);

                    /**
                     * 判断参数 Pstree 是否已赋值
                     * @return Pstree 是否已赋值
                     * 
                     */
                    bool PstreeHasBeenSet() const;

                    /**
                     * 获取规则类型 0系统规则 1自定义规则
                     * @return RuleCategory 规则类型 0系统规则 1自定义规则
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置规则类型 0系统规则 1自定义规则
                     * @param _ruleCategory 规则类型 0系统规则 1自定义规则
                     * 
                     */
                    void SetRuleCategory(const uint64_t& _ruleCategory);

                    /**
                     * 判断参数 RuleCategory 是否已赋值
                     * @return RuleCategory 是否已赋值
                     * 
                     */
                    bool RuleCategoryHasBeenSet() const;

                    /**
                     * 获取主机在线信息 ONLINE、OFFLINE
                     * @return MachineStatus 主机在线信息 ONLINE、OFFLINE
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机在线信息 ONLINE、OFFLINE
                     * @param _machineStatus 主机在线信息 ONLINE、OFFLINE
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
                     * 获取危害描述
                     * @return Description 危害描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置危害描述
                     * @param _description 危害描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修护建议
                     * @return Suggestion 修护建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置修护建议
                     * @param _suggestion 修护建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取内网ip
                     * @return PrivateIp 内网ip
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网ip
                     * @param _privateIp 内网ip
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取进程权限
                     * @return ExePermission 进程权限
                     * 
                     */
                    std::string GetExePermission() const;

                    /**
                     * 设置进程权限
                     * @param _exePermission 进程权限
                     * 
                     */
                    void SetExePermission(const std::string& _exePermission);

                    /**
                     * 判断参数 ExePermission 是否已赋值
                     * @return ExePermission 是否已赋值
                     * 
                     */
                    bool ExePermissionHasBeenSet() const;

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
                     * 获取进程名
                     * @return ExeMd5 进程名
                     * 
                     */
                    std::string GetExeMd5() const;

                    /**
                     * 设置进程名
                     * @param _exeMd5 进程名
                     * 
                     */
                    void SetExeMd5(const std::string& _exeMd5);

                    /**
                     * 判断参数 ExeMd5 是否已赋值
                     * @return ExeMd5 是否已赋值
                     * 
                     */
                    bool ExeMd5HasBeenSet() const;

                    /**
                     * 获取进程文件大小
                     * @return ExeSize 进程文件大小
                     * 
                     */
                    uint64_t GetExeSize() const;

                    /**
                     * 设置进程文件大小
                     * @param _exeSize 进程文件大小
                     * 
                     */
                    void SetExeSize(const uint64_t& _exeSize);

                    /**
                     * 判断参数 ExeSize 是否已赋值
                     * @return ExeSize 是否已赋值
                     * 
                     */
                    bool ExeSizeHasBeenSet() const;

                    /**
                     * 获取进程执行时长
                     * @return ExeTime 进程执行时长
                     * 
                     */
                    uint64_t GetExeTime() const;

                    /**
                     * 设置进程执行时长
                     * @param _exeTime 进程执行时长
                     * 
                     */
                    void SetExeTime(const uint64_t& _exeTime);

                    /**
                     * 判断参数 ExeTime 是否已赋值
                     * @return ExeTime 是否已赋值
                     * 
                     */
                    bool ExeTimeHasBeenSet() const;

                    /**
                     * 获取目标文件大小
                     * @return TargetSize 目标文件大小
                     * 
                     */
                    uint64_t GetTargetSize() const;

                    /**
                     * 设置目标文件大小
                     * @param _targetSize 目标文件大小
                     * 
                     */
                    void SetTargetSize(const uint64_t& _targetSize);

                    /**
                     * 判断参数 TargetSize 是否已赋值
                     * @return TargetSize 是否已赋值
                     * 
                     */
                    bool TargetSizeHasBeenSet() const;

                    /**
                     * 获取目标文件权限
                     * @return TargetPermission 目标文件权限
                     * 
                     */
                    std::string GetTargetPermission() const;

                    /**
                     * 设置目标文件权限
                     * @param _targetPermission 目标文件权限
                     * 
                     */
                    void SetTargetPermission(const std::string& _targetPermission);

                    /**
                     * 判断参数 TargetPermission 是否已赋值
                     * @return TargetPermission 是否已赋值
                     * 
                     */
                    bool TargetPermissionHasBeenSet() const;

                    /**
                     * 获取目标文件更新时间
                     * @return TargetModifyTime 目标文件更新时间
                     * 
                     */
                    std::string GetTargetModifyTime() const;

                    /**
                     * 设置目标文件更新时间
                     * @param _targetModifyTime 目标文件更新时间
                     * 
                     */
                    void SetTargetModifyTime(const std::string& _targetModifyTime);

                    /**
                     * 判断参数 TargetModifyTime 是否已赋值
                     * @return TargetModifyTime 是否已赋值
                     * 
                     */
                    bool TargetModifyTimeHasBeenSet() const;

                    /**
                     * 获取目标文件创建时间
                     * @return TargetCreatTime 目标文件创建时间
                     * 
                     */
                    std::string GetTargetCreatTime() const;

                    /**
                     * 设置目标文件创建时间
                     * @param _targetCreatTime 目标文件创建时间
                     * 
                     */
                    void SetTargetCreatTime(const std::string& _targetCreatTime);

                    /**
                     * 判断参数 TargetCreatTime 是否已赋值
                     * @return TargetCreatTime 是否已赋值
                     * 
                     */
                    bool TargetCreatTimeHasBeenSet() const;

                    /**
                     * 获取进程pid
                     * @return ExePid 进程pid
                     * 
                     */
                    uint64_t GetExePid() const;

                    /**
                     * 设置进程pid
                     * @param _exePid 进程pid
                     * 
                     */
                    void SetExePid(const uint64_t& _exePid);

                    /**
                     * 判断参数 ExePid 是否已赋值
                     * @return ExePid 是否已赋值
                     * 
                     */
                    bool ExePidHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return TargetName 文件名称
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置文件名称
                     * @param _targetName 文件名称
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return Reference 参考链接
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置参考链接
                     * @param _reference 参考链接
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @return Level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * @param _level 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取进程名称
                     * @return ExeName 进程名称
                     * 
                     */
                    std::string GetExeName() const;

                    /**
                     * 设置进程名称
                     * @param _exeName 进程名称
                     * 
                     */
                    void SetExeName(const std::string& _exeName);

                    /**
                     * 判断参数 ExeName 是否已赋值
                     * @return ExeName 是否已赋值
                     * 
                     */
                    bool ExeNameHasBeenSet() const;

                    /**
                     * 获取 主机额外信息
                     * @return MachineExtraInfo  主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置 主机额外信息
                     * @param _machineExtraInfo  主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取文件威胁行为
<li>read 读取文件</li>
<li>write 修改文件</li>
                     * @return FileAction 文件威胁行为
<li>read 读取文件</li>
<li>write 修改文件</li>
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置文件威胁行为
<li>read 读取文件</li>
<li>write 修改文件</li>
                     * @param _fileAction 文件威胁行为
<li>read 读取文件</li>
<li>write 修改文件</li>
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                private:

                    /**
                     * 机器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 机器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 发生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近发生时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * cvm id
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 事件类型/动作  0 -- 告警
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 进程路径
                     */
                    std::string m_processExe;
                    bool m_processExeHasBeenSet;

                    /**
                     * 进程参数
                     */
                    std::string m_processArgv;
                    bool m_processArgvHasBeenSet;

                    /**
                     * 目标文件路径
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 处理状态  0 -- 待处理 1 -- 已加白 2 -- 已删除 3 - 已忽略 4-已手动处理
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件产生次数
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 规则id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 事件详情: json格式
                     */
                    std::string m_pstree;
                    bool m_pstreeHasBeenSet;

                    /**
                     * 规则类型 0系统规则 1自定义规则
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * 主机在线信息 ONLINE、OFFLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 危害描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修护建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 内网ip
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 进程权限
                     */
                    std::string m_exePermission;
                    bool m_exePermissionHasBeenSet;

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
                     * 进程名
                     */
                    std::string m_exeMd5;
                    bool m_exeMd5HasBeenSet;

                    /**
                     * 进程文件大小
                     */
                    uint64_t m_exeSize;
                    bool m_exeSizeHasBeenSet;

                    /**
                     * 进程执行时长
                     */
                    uint64_t m_exeTime;
                    bool m_exeTimeHasBeenSet;

                    /**
                     * 目标文件大小
                     */
                    uint64_t m_targetSize;
                    bool m_targetSizeHasBeenSet;

                    /**
                     * 目标文件权限
                     */
                    std::string m_targetPermission;
                    bool m_targetPermissionHasBeenSet;

                    /**
                     * 目标文件更新时间
                     */
                    std::string m_targetModifyTime;
                    bool m_targetModifyTimeHasBeenSet;

                    /**
                     * 目标文件创建时间
                     */
                    std::string m_targetCreatTime;
                    bool m_targetCreatTimeHasBeenSet;

                    /**
                     * 进程pid
                     */
                    uint64_t m_exePid;
                    bool m_exePidHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 风险等级 0：无， 1: 高危， 2:中危， 3: 低危
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_exeName;
                    bool m_exeNameHasBeenSet;

                    /**
                     *  主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * 文件威胁行为
<li>read 读取文件</li>
<li>write 修改文件</li>
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_FILETAMPEREVENT_H_
