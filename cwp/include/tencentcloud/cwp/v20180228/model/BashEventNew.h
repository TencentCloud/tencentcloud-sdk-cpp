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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTNEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTNEW_H_

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
                * 高危命令数据(新)
                */
                class BashEventNew : public AbstractModel
                {
                public:
                    BashEventNew();
                    ~BashEventNew() = default;
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
                     * 获取主机安全ID
                     * @return Uuid 主机安全ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全ID
                     * @param _uuid 主机安全ID
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
                     * 获取执行用户名
                     * @return User 执行用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置执行用户名
                     * @param _user 执行用户名
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
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
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
                     * 获取处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略
                     * @return Status 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略
                     * @param _status 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略
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
                     * 获取0: bash日志 1: 实时监控(雷霆版)
                     * @return DetectBy 0: bash日志 1: 实时监控(雷霆版)
                     * 
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置0: bash日志 1: 实时监控(雷霆版)
                     * @param _detectBy 0: bash日志 1: 实时监控(雷霆版)
                     * 
                     */
                    void SetDetectBy(const uint64_t& _detectBy);

                    /**
                     * 判断参数 DetectBy 是否已赋值
                     * @return DetectBy 是否已赋值
                     * 
                     */
                    bool DetectByHasBeenSet() const;

                    /**
                     * 获取进程id
                     * @return Pid 进程id
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置进程id
                     * @param _pid 进程id
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
                     * 获取转义后的正则表达式
                     * @return RegexBashCmd 转义后的正则表达式
                     * 
                     */
                    std::string GetRegexBashCmd() const;

                    /**
                     * 设置转义后的正则表达式
                     * @param _regexBashCmd 转义后的正则表达式
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
                     * 获取转义后的正则表达式
                     * @return RegexExe 转义后的正则表达式
                     * 
                     */
                    std::string GetRegexExe() const;

                    /**
                     * 设置转义后的正则表达式
                     * @param _regexExe 转义后的正则表达式
                     * 
                     */
                    void SetRegexExe(const std::string& _regexExe);

                    /**
                     * 判断参数 RegexExe 是否已赋值
                     * @return RegexExe 是否已赋值
                     * 
                     */
                    bool RegexExeHasBeenSet() const;

                    /**
                     * 获取0:普通 1:专业版 2:旗舰版
                     * @return MachineType 0:普通 1:专业版 2:旗舰版
                     * 
                     */
                    int64_t GetMachineType() const;

                    /**
                     * 设置0:普通 1:专业版 2:旗舰版
                     * @param _machineType 0:普通 1:专业版 2:旗舰版
                     * 
                     */
                    void SetMachineType(const int64_t& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取机器额外信息
                     * @return MachineExtraInfo 机器额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置机器额外信息
                     * @param _machineExtraInfo 机器额外信息
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
                     * 数据ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机安全ID
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
                     * 执行用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

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
                     * 规则ID
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
                     * 处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略
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
                     * 0: bash日志 1: 实时监控(雷霆版)
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     * 进程id
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

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
                     * 转义后的正则表达式
                     */
                    std::string m_regexBashCmd;
                    bool m_regexBashCmdHasBeenSet;

                    /**
                     * 转义后的正则表达式
                     */
                    std::string m_regexExe;
                    bool m_regexExeHasBeenSet;

                    /**
                     * 0:普通 1:专业版 2:旗舰版
                     */
                    int64_t m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTNEW_H_
