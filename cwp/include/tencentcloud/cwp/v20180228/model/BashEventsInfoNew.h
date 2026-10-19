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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFONEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFONEW_H_

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
                * 高危命令数据详情(新)
                */
                class BashEventsInfoNew : public AbstractModel
                {
                public:
                    BashEventsInfoNew();
                    ~BashEventsInfoNew() = default;
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
                     * 获取<p>规则ID,等于0表示已规则已被删除或生效范围已修改</p>
                     * @return RuleId <p>规则ID,等于0表示已规则已被删除或生效范围已修改</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>规则ID,等于0表示已规则已被删除或生效范围已修改</p>
                     * @param _ruleId <p>规则ID,等于0表示已规则已被删除或生效范围已修改</p>
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
                     * 获取<p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略</p>
                     * @return Status <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略</p>
                     * @param _status <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略</p>
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
                     * 获取<p>自动生成的正则表达式</p>
                     * @return RegexBashCmd <p>自动生成的正则表达式</p>
                     * 
                     */
                    std::string GetRegexBashCmd() const;

                    /**
                     * 设置<p>自动生成的正则表达式</p>
                     * @param _regexBashCmd <p>自动生成的正则表达式</p>
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
                     * 获取<p>进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源</p>
                     * @return PsTree <p>进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源</p>
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置<p>进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源</p>
                     * @param _psTree <p>进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源</p>
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
                     * 获取<p>建议方案</p>
                     * @return SuggestScheme <p>建议方案</p>
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置<p>建议方案</p>
                     * @param _suggestScheme <p>建议方案</p>
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
                     * 获取<p>描述</p>
                     * @return HarmDescribe <p>描述</p>
                     * 
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _harmDescribe <p>描述</p>
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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
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
                     * 获取<p>参考链接</p>
                     * @return References <p>参考链接</p>
                     * 
                     */
                    std::vector<std::string> GetReferences() const;

                    /**
                     * 设置<p>参考链接</p>
                     * @param _references <p>参考链接</p>
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
                     * 获取<p>主机外网ip</p>
                     * @return MachineWanIp <p>主机外网ip</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>主机外网ip</p>
                     * @param _machineWanIp <p>主机外网ip</p>
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
                     * 获取<p>主机在线状态 OFFLINE  ONLINE</p>
                     * @return MachineStatus <p>主机在线状态 OFFLINE  ONLINE</p>
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置<p>主机在线状态 OFFLINE  ONLINE</p>
                     * @param _machineStatus <p>主机在线状态 OFFLINE  ONLINE</p>
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
                     * 获取<p>登录用户</p>
                     * @return User <p>登录用户</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>登录用户</p>
                     * @param _user <p>登录用户</p>
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
                     * 获取<p>进程号</p>
                     * @return Pid <p>进程号</p>
                     * 
                     */
                    std::string GetPid() const;

                    /**
                     * 设置<p>进程号</p>
                     * @param _pid <p>进程号</p>
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
                     * 获取<p>检测来源 0:bash日志 1:实时监控</p>
                     * @return DetectBy <p>检测来源 0:bash日志 1:实时监控</p>
                     * 
                     */
                    int64_t GetDetectBy() const;

                    /**
                     * 设置<p>检测来源 0:bash日志 1:实时监控</p>
                     * @param _detectBy <p>检测来源 0:bash日志 1:实时监控</p>
                     * 
                     */
                    void SetDetectBy(const int64_t& _detectBy);

                    /**
                     * 判断参数 DetectBy 是否已赋值
                     * @return DetectBy 是否已赋值
                     * 
                     */
                    bool DetectByHasBeenSet() const;

                    /**
                     * 获取<p>执行命令(解码后)</p>
                     * @return BashCmdDecoded <p>执行命令(解码后)</p>
                     * 
                     */
                    std::string GetBashCmdDecoded() const;

                    /**
                     * 设置<p>执行命令(解码后)</p>
                     * @param _bashCmdDecoded <p>执行命令(解码后)</p>
                     * 
                     */
                    void SetBashCmdDecoded(const std::string& _bashCmdDecoded);

                    /**
                     * 判断参数 BashCmdDecoded 是否已赋值
                     * @return BashCmdDecoded 是否已赋值
                     * 
                     */
                    bool BashCmdDecodedHasBeenSet() const;

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

                    /**
                     * 获取<p>进程MD5（文件监控行为独有）</p>
                     * @return FileProcessMd5 <p>进程MD5（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileProcessMd5() const;

                    /**
                     * 设置<p>进程MD5（文件监控行为独有）</p>
                     * @param _fileProcessMd5 <p>进程MD5（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileProcessMd5(const std::string& _fileProcessMd5);

                    /**
                     * 判断参数 FileProcessMd5 是否已赋值
                     * @return FileProcessMd5 是否已赋值
                     * 
                     */
                    bool FileProcessMd5HasBeenSet() const;

                    /**
                     * 获取<p>动作：进程对文件的操作，如 读/写/重命名/删除/清空内容（文件监控行为独有）</p>
                     * @return FileAction <p>动作：进程对文件的操作，如 读/写/重命名/删除/清空内容（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileAction() const;

                    /**
                     * 设置<p>动作：进程对文件的操作，如 读/写/重命名/删除/清空内容（文件监控行为独有）</p>
                     * @param _fileAction <p>动作：进程对文件的操作，如 读/写/重命名/删除/清空内容（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileAction(const std::string& _fileAction);

                    /**
                     * 判断参数 FileAction 是否已赋值
                     * @return FileAction 是否已赋值
                     * 
                     */
                    bool FileActionHasBeenSet() const;

                    /**
                     * 获取<p>文件路径（文件监控行为独有）</p>
                     * @return FilePath <p>文件路径（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>文件路径（文件监控行为独有）</p>
                     * @param _filePath <p>文件路径（文件监控行为独有）</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>文件MD5（文件监控行为独有）</p>
                     * @return FileMd5 <p>文件MD5（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置<p>文件MD5（文件监控行为独有）</p>
                     * @param _fileMd5 <p>文件MD5（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取<p>文件名称（文件监控行为独有）</p>
                     * @return FileName <p>文件名称（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称（文件监控行为独有）</p>
                     * @param _fileName <p>文件名称（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件大小（文件监控行为独有）</p>
                     * @return FileSize <p>文件大小（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>文件大小（文件监控行为独有）</p>
                     * @param _fileSize <p>文件大小（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>文件修改时间（文件监控行为独有）</p>
                     * @return FileModifyTime <p>文件修改时间（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFileModifyTime() const;

                    /**
                     * 设置<p>文件修改时间（文件监控行为独有）</p>
                     * @param _fileModifyTime <p>文件修改时间（文件监控行为独有）</p>
                     * 
                     */
                    void SetFileModifyTime(const std::string& _fileModifyTime);

                    /**
                     * 判断参数 FileModifyTime 是否已赋值
                     * @return FileModifyTime 是否已赋值
                     * 
                     */
                    bool FileModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件权限（文件监控行为独有）</p>
                     * @return FilePermission <p>文件权限（文件监控行为独有）</p>
                     * 
                     */
                    std::string GetFilePermission() const;

                    /**
                     * 设置<p>文件权限（文件监控行为独有）</p>
                     * @param _filePermission <p>文件权限（文件监控行为独有）</p>
                     * 
                     */
                    void SetFilePermission(const std::string& _filePermission);

                    /**
                     * 判断参数 FilePermission 是否已赋值
                     * @return FilePermission 是否已赋值
                     * 
                     */
                    bool FilePermissionHasBeenSet() const;

                    /**
                     * 获取<p>文件访问时间</p>
                     * @return FileAccessTime <p>文件访问时间</p>
                     * 
                     */
                    std::string GetFileAccessTime() const;

                    /**
                     * 设置<p>文件访问时间</p>
                     * @param _fileAccessTime <p>文件访问时间</p>
                     * 
                     */
                    void SetFileAccessTime(const std::string& _fileAccessTime);

                    /**
                     * 判断参数 FileAccessTime 是否已赋值
                     * @return FileAccessTime 是否已赋值
                     * 
                     */
                    bool FileAccessTimeHasBeenSet() const;

                    /**
                     * 获取<p>高危命令事件类型</p><p>枚举值：</p><ul><li>filemon： 文件监控事件</li><li>connect： 外联行为事件</li><li>process： 进程启动事件</li></ul>
                     * @return BashType <p>高危命令事件类型</p><p>枚举值：</p><ul><li>filemon： 文件监控事件</li><li>connect： 外联行为事件</li><li>process： 进程启动事件</li></ul>
                     * 
                     */
                    std::string GetBashType() const;

                    /**
                     * 设置<p>高危命令事件类型</p><p>枚举值：</p><ul><li>filemon： 文件监控事件</li><li>connect： 外联行为事件</li><li>process： 进程启动事件</li></ul>
                     * @param _bashType <p>高危命令事件类型</p><p>枚举值：</p><ul><li>filemon： 文件监控事件</li><li>connect： 外联行为事件</li><li>process： 进程启动事件</li></ul>
                     * 
                     */
                    void SetBashType(const std::string& _bashType);

                    /**
                     * 判断参数 BashType 是否已赋值
                     * @return BashType 是否已赋值
                     * 
                     */
                    bool BashTypeHasBeenSet() const;

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
                     * <p>规则ID,等于0表示已规则已被删除或生效范围已修改</p>
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
                     * <p>处理状态： 0 = 待处理 1= 已处理, 2 = 已加白， 3= 已忽略</p>
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
                     * <p>自动生成的正则表达式</p>
                     */
                    std::string m_regexBashCmd;
                    bool m_regexBashCmdHasBeenSet;

                    /**
                     * <p>进程树 json  pid:进程id，exe:文件路径 ，account:进程所属用组和用户 ,cmdline:执行命令，ssh_service: SSH服务ip, ssh_soure:登录源</p>
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * <p>建议方案</p>
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>参考链接</p>
                     */
                    std::vector<std::string> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>主机外网ip</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>主机在线状态 OFFLINE  ONLINE</p>
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * <p>登录用户</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>进程号</p>
                     */
                    std::string m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>0:普通 1:专业版 2:旗舰版</p>
                     */
                    int64_t m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>检测来源 0:bash日志 1:实时监控</p>
                     */
                    int64_t m_detectBy;
                    bool m_detectByHasBeenSet;

                    /**
                     * <p>执行命令(解码后)</p>
                     */
                    std::string m_bashCmdDecoded;
                    bool m_bashCmdDecodedHasBeenSet;

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

                    /**
                     * <p>进程MD5（文件监控行为独有）</p>
                     */
                    std::string m_fileProcessMd5;
                    bool m_fileProcessMd5HasBeenSet;

                    /**
                     * <p>动作：进程对文件的操作，如 读/写/重命名/删除/清空内容（文件监控行为独有）</p>
                     */
                    std::string m_fileAction;
                    bool m_fileActionHasBeenSet;

                    /**
                     * <p>文件路径（文件监控行为独有）</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>文件MD5（文件监控行为独有）</p>
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * <p>文件名称（文件监控行为独有）</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件大小（文件监控行为独有）</p>
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件修改时间（文件监控行为独有）</p>
                     */
                    std::string m_fileModifyTime;
                    bool m_fileModifyTimeHasBeenSet;

                    /**
                     * <p>文件权限（文件监控行为独有）</p>
                     */
                    std::string m_filePermission;
                    bool m_filePermissionHasBeenSet;

                    /**
                     * <p>文件访问时间</p>
                     */
                    std::string m_fileAccessTime;
                    bool m_fileAccessTimeHasBeenSet;

                    /**
                     * <p>高危命令事件类型</p><p>枚举值：</p><ul><li>filemon： 文件监控事件</li><li>connect： 外联行为事件</li><li>process： 进程启动事件</li></ul>
                     */
                    std::string m_bashType;
                    bool m_bashTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASHEVENTSINFONEW_H_
