/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>数据ID</p>
                     * @return Id <p>数据ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>数据ID</p>
                     * @param _id <p>数据ID</p>
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
                     * 获取<p>主机安全ID</p>
                     * @return Uuid <p>主机安全ID</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机安全ID</p>
                     * @param _uuid <p>主机安全ID</p>
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
                     * 获取<p>主机ID</p>
                     * @return Quuid <p>主机ID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机ID</p>
                     * @param _quuid <p>主机ID</p>
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
                     * 获取<p>主机内网IP</p>
                     * @return HostIp <p>主机内网IP</p>
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置<p>主机内网IP</p>
                     * @param _hostIp <p>主机内网IP</p>
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
                     * 获取<p>执行用户名</p>
                     * @return User <p>执行用户名</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>执行用户名</p>
                     * @param _user <p>执行用户名</p>
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
                     * 获取<p>平台类型</p>
                     * @return Platform <p>平台类型</p>
                     * 
                     */
                    uint64_t GetPlatform() const;

                    /**
                     * 设置<p>平台类型</p>
                     * @param _platform <p>平台类型</p>
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
                     * 获取<p>执行命令</p>
                     * @return BashCmd <p>执行命令</p>
                     * 
                     */
                    std::string GetBashCmd() const;

                    /**
                     * 设置<p>执行命令</p>
                     * @param _bashCmd <p>执行命令</p>
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
                     * 获取<p>规则ID</p>
                     * @return RuleId <p>规则ID</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _ruleId <p>规则ID</p>
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
                     * 获取<p>规则名称</p>
                     * @return RuleName <p>规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _ruleName <p>规则名称</p>
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
                     * 获取<p>规则等级：1-高 2-中 3-低</p>
                     * @return RuleLevel <p>规则等级：1-高 2-中 3-低</p>
                     * 
                     */
                    uint64_t GetRuleLevel() const;

                    /**
                     * 设置<p>规则等级：1-高 2-中 3-低</p>
                     * @param _ruleLevel <p>规则等级：1-高 2-中 3-低</p>
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
                     * 获取<p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略</p>
                     * @return Status <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略</p>
                     * @param _status <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略</p>
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
                     * 获取<p>发生时间</p>
                     * @return CreateTime <p>发生时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>发生时间</p>
                     * @param _createTime <p>发生时间</p>
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
                     * 获取<p>主机名</p>
                     * @return MachineName <p>主机名</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名</p>
                     * @param _machineName <p>主机名</p>
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
                     * 获取<p>0: bash日志 1: 实时监控(雷霆版)</p>
                     * @return DetectBy <p>0: bash日志 1: 实时监控(雷霆版)</p>
                     * 
                     */
                    uint64_t GetDetectBy() const;

                    /**
                     * 设置<p>0: bash日志 1: 实时监控(雷霆版)</p>
                     * @param _detectBy <p>0: bash日志 1: 实时监控(雷霆版)</p>
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
                     * 获取<p>进程id</p>
                     * @return Pid <p>进程id</p>
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置<p>进程id</p>
                     * @param _pid <p>进程id</p>
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
                     * 获取<p>进程名称</p>
                     * @return Exe <p>进程名称</p>
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置<p>进程名称</p>
                     * @param _exe <p>进程名称</p>
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
                     * 获取<p>处理时间</p>
                     * @return ModifyTime <p>处理时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>处理时间</p>
                     * @param _modifyTime <p>处理时间</p>
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
                     * 获取<p>规则类别  0=系统规则，1=用户规则</p>
                     * @return RuleCategory <p>规则类别  0=系统规则，1=用户规则</p>
                     * 
                     */
                    uint64_t GetRuleCategory() const;

                    /**
                     * 设置<p>规则类别  0=系统规则，1=用户规则</p>
                     * @param _ruleCategory <p>规则类别  0=系统规则，1=用户规则</p>
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
                     * 获取<p>转义后的正则表达式</p>
                     * @return RegexBashCmd <p>转义后的正则表达式</p>
                     * 
                     */
                    std::string GetRegexBashCmd() const;

                    /**
                     * 设置<p>转义后的正则表达式</p>
                     * @param _regexBashCmd <p>转义后的正则表达式</p>
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
                     * 获取<p>转义后的正则表达式</p>
                     * @return RegexExe <p>转义后的正则表达式</p>
                     * 
                     */
                    std::string GetRegexExe() const;

                    /**
                     * 设置<p>转义后的正则表达式</p>
                     * @param _regexExe <p>转义后的正则表达式</p>
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
                     * 获取<p>0:普通 1:专业版 2:旗舰版</p>
                     * @return MachineType <p>0:普通 1:专业版 2:旗舰版</p>
                     * 
                     */
                    int64_t GetMachineType() const;

                    /**
                     * 设置<p>0:普通 1:专业版 2:旗舰版</p>
                     * @param _machineType <p>0:普通 1:专业版 2:旗舰版</p>
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
                     * 获取<p>机器额外信息</p>
                     * @return MachineExtraInfo <p>机器额外信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>机器额外信息</p>
                     * @param _machineExtraInfo <p>机器额外信息</p>
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
                     * 获取<p>告警次数：同一聚合维度当天的告警命中次数，老数据为空</p>
                     * @return EventCount <p>告警次数：同一聚合维度当天的告警命中次数，老数据为空</p>
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置<p>告警次数：同一聚合维度当天的告警命中次数，老数据为空</p>
                     * @param _eventCount <p>告警次数：同一聚合维度当天的告警命中次数，老数据为空</p>
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
                     * 获取<p>首次发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * @return FirstDetectTime <p>首次发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>首次发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * @param _firstDetectTime <p>首次发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * @return LatestDetectTime <p>最近发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * 
                     */
                    std::string GetLatestDetectTime() const;

                    /**
                     * 设置<p>最近发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * @param _latestDetectTime <p>最近发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     * 
                     */
                    void SetLatestDetectTime(const std::string& _latestDetectTime);

                    /**
                     * 判断参数 LatestDetectTime 是否已赋值
                     * @return LatestDetectTime 是否已赋值
                     * 
                     */
                    bool LatestDetectTimeHasBeenSet() const;

                private:

                    /**
                     * <p>数据ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>主机安全ID</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>主机ID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>主机内网IP</p>
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * <p>执行用户名</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>平台类型</p>
                     */
                    uint64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>执行命令</p>
                     */
                    std::string m_bashCmd;
                    bool m_bashCmdHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则等级：1-高 2-中 3-低</p>
                     */
                    uint64_t m_ruleLevel;
                    bool m_ruleLevelHasBeenSet;

                    /**
                     * <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3 = 已忽略</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>发生时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>主机名</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>0: bash日志 1: 实时监控(雷霆版)</p>
                     */
                    uint64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     * <p>进程id</p>
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>进程名称</p>
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * <p>处理时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>规则类别  0=系统规则，1=用户规则</p>
                     */
                    uint64_t m_ruleCategory;
                    bool m_ruleCategoryHasBeenSet;

                    /**
                     * <p>转义后的正则表达式</p>
                     */
                    std::string m_regexBashCmd;
                    bool m_regexBashCmdHasBeenSet;

                    /**
                     * <p>转义后的正则表达式</p>
                     */
                    std::string m_regexExe;
                    bool m_regexExeHasBeenSet;

                    /**
                     * <p>0:普通 1:专业版 2:旗舰版</p>
                     */
                    int64_t m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>机器额外信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>告警次数：同一聚合维度当天的告警命中次数，老数据为空</p>
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>首次发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>最近发现时间（格式 yyyy-MM-dd HH:mm:ss）</p>
                     */
                    std::string m_latestDetectTime;
                    bool m_latestDetectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTNEW_H_
