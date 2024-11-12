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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFO_H_

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
                * 高危命令数据详情
                */
                class BashEventsInfo : public AbstractModel
                {
                public:
                    BashEventsInfo();
                    ~BashEventsInfo() = default;
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
                     * 获取主机ID
                     * @return Quuid 主机ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机ID
                     * @param _quuid 主机ID
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
                     * 获取平台类型
                     * @return Platform 平台类型
                     * 
                     */
                    uint64_t GetPlatform() const;

                    /**
                     * 设置平台类型
                     * @param _platform 平台类型
                     * 
                     */
                    void SetPlatform(const uint64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取执行命令
                     * @return BashCmd 执行命令
                     * 
                     */
                    std::string GetBashCmd() const;

                    /**
                     * 设置执行命令
                     * @param _bashCmd 执行命令
                     * 
                     */
                    void SetBashCmd(const std::string& _bashCmd);

                    /**
                     * 判断参数 BashCmd 是否已赋值
                     * @return BashCmd 是否已赋值
                     * 
                     */
                    bool BashCmdHasBeenSet() const;

                    /**
                     * 获取规则ID,等于0表示已规则已被删除或生效范围已修改
                     * @return RuleId 规则ID,等于0表示已规则已被删除或生效范围已修改
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID,等于0表示已规则已被删除或生效范围已修改
                     * @param _ruleId 规则ID,等于0表示已规则已被删除或生效范围已修改
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
                     * 获取规则等级：1-高 2-中 3-低
                     * @return RuleLevel 规则等级：1-高 2-中 3-低
                     * 
                     */
                    uint64_t GetRuleLevel() const;

                    /**
                     * 设置规则等级：1-高 2-中 3-低
                     * @param _ruleLevel 规则等级：1-高 2-中 3-低
                     * 
                     */
                    void SetRuleLevel(const uint64_t& _ruleLevel);

                    /**
                     * 判断参数 RuleLevel 是否已赋值
                     * @return RuleLevel 是否已赋值
                     * 
                     */
                    bool RuleLevelHasBeenSet() const;

                    /**
                     * 获取处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略
                     * @return Status 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略
                     * @param _status 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略
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
                     * 获取主机名
                     * @return MachineName 主机名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置主机名
                     * @param _machineName 主机名
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
                     * 获取进程名称
                     * @return Exe 进程名称
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置进程名称
                     * @param _exe 进程名称
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

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

                    /**
                     * 获取规则类别  0=系统规则，1=用户规则
                     * @return RuleCategory 规则类别  0=系统规则，1=用户规则
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置规则类别  0=系统规则，1=用户规则
                     * @param _ruleCategory 规则类别  0=系统规则，1=用户规则
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
                     * 获取自动生成的正则表达式
                     * @return RegexBashCmd 自动生成的正则表达式
                     * 
                     */
                    std::string GetRegexBashCmd() const;

                    /**
                     * 设置自动生成的正则表达式
                     * @param _regexBashCmd 自动生成的正则表达式
                     * 
                     */
                    void SetRegexBashCmd(const std::string& _regexBashCmd);

                    /**
                     * 判断参数 RegexBashCmd 是否已赋值
                     * @return RegexBashCmd 是否已赋值
                     * 
                     */
                    bool RegexBashCmdHasBeenSet() const;

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
                     * 获取描述
                     * @return HarmDescribe 描述
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置描述
                     * @param _harmDescribe 描述
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
                     * 获取登录用户
                     * @return User 登录用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置登录用户
                     * @param _user 登录用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取进程号
                     * @return Pid 进程号
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程号
                     * @param _pid 进程号
                     * 
                     */
                    void SetPid(const std::string& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取数据来源
                     * @return DetectBy 数据来源
                     * 
                     */
                    std::string GetDetectBy() const;

                    /**
                     * 设置数据来源
                     * @param _detectBy 数据来源
                     * 
                     */
                    void SetDetectBy(const std::string& _detectBy);

                    /**
                     * 判断参数 DetectBy 是否已赋值
                     * @return DetectBy 是否已赋值
                     * 
                     */
                    bool DetectByHasBeenSet() const;

                private:

                    /**
                     * 数据ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机uuid
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
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 平台类型
                     */
                    uint64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 执行命令
                     */
                    std::string m_bashCmd;
                    bool m_bashCmdHasBeenSet;

                    /**
                     * 规则ID,等于0表示已规则已被删除或生效范围已修改
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则等级：1-高 2-中 3-低
                     */
                    uint64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发生时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 主机名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 进程名称
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * 处理时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 规则类别  0=系统规则，1=用户规则
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * 自动生成的正则表达式
                     */
                    std::string m_regexBashCmd;
                    bool m_regexBashCmdHasBeenSet;

                    /**
                     * 进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * 建议方案
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * 描述
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
                     * 主机在线状态 OFFLINE  ONLINE
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 登录用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 进程号
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 数据来源
                     */
                    std::string m_detectBy;
                    bool m_detectByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFO_H_
