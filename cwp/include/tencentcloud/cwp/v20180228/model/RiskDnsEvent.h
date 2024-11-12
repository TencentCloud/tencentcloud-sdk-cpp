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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_

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
                * 恶意请求事件
                */
                class RiskDnsEvent : public AbstractModel
                {
                public:
                    RiskDnsEvent();
                    ~RiskDnsEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件Id
                     * @return Id 事件Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置事件Id
                     * @param _id 事件Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取命中策略类型[-1:未知|0系统|1:用户]
                     * @return PolicyType 命中策略类型[-1:未知|0系统|1:用户]
                     * 
                     */
                    int64_t GetPolicyType() const;

                    /**
                     * 设置命中策略类型[-1:未知|0系统|1:用户]
                     * @param _policyType 命中策略类型[-1:未知|0系统|1:用户]
                     * 
                     */
                    void SetPolicyType(const int64_t& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取命中策略名称
                     * @return PolicyName 命中策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置命中策略名称
                     * @param _policyName 命中策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取保护级别[0:基础版|1:专业版|2:旗舰版]
                     * @return ProtectLevel 保护级别[0:基础版|1:专业版|2:旗舰版]
                     * 
                     */
                    int64_t GetProtectLevel() const;

                    /**
                     * 设置保护级别[0:基础版|1:专业版|2:旗舰版]
                     * @param _protectLevel 保护级别[0:基础版|1:专业版|2:旗舰版]
                     * 
                     */
                    void SetProtectLevel(const int64_t& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取主机ID
                     * @return HostId 主机ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机ID
                     * @param _hostId 主机ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
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
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
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
                     * 获取外网IP
                     * @return WanIp 外网IP
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网IP
                     * @param _wanIp 外网IP
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取客户端ID
                     * @return AgentId 客户端ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置客户端ID
                     * @param _agentId 客户端ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取访问域名
                     * @return Domain 访问域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置访问域名
                     * @param _domain 访问域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取标签特性
                     * @return Tags 标签特性
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签特性
                     * @param _tags 标签特性
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
                     * 获取访问次数
                     * @return AccessCount 访问次数
                     * 
                     */
                    int64_t GetAccessCount() const;

                    /**
                     * 设置访问次数
                     * @param _accessCount 访问次数
                     * 
                     */
                    void SetAccessCount(const int64_t& _accessCount);

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

                    /**
                     * 获取威胁描述
                     * @return ThreatDesc 威胁描述
                     * 
                     */
                    std::string GetThreatDesc() const;

                    /**
                     * 设置威胁描述
                     * @param _threatDesc 威胁描述
                     * 
                     */
                    void SetThreatDesc(const std::string& _threatDesc);

                    /**
                     * 判断参数 ThreatDesc 是否已赋值
                     * @return ThreatDesc 是否已赋值
                     * 
                     */
                    bool ThreatDescHasBeenSet() const;

                    /**
                     * 获取修复方案
                     * @return SuggestSolution 修复方案
                     * 
                     */
                    std::string GetSuggestSolution() const;

                    /**
                     * 设置修复方案
                     * @param _suggestSolution 修复方案
                     * 
                     */
                    void SetSuggestSolution(const std::string& _suggestSolution);

                    /**
                     * 判断参数 SuggestSolution 是否已赋值
                     * @return SuggestSolution 是否已赋值
                     * 
                     */
                    bool SuggestSolutionHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return ReferenceLink 参考链接
                     * 
                     */
                    std::string GetReferenceLink() const;

                    /**
                     * 设置参考链接
                     * @param _referenceLink 参考链接
                     * 
                     */
                    void SetReferenceLink(const std::string& _referenceLink);

                    /**
                     * 判断参数 ReferenceLink 是否已赋值
                     * @return ReferenceLink 是否已赋值
                     * 
                     */
                    bool ReferenceLinkHasBeenSet() const;

                    /**
                     * 获取处理状态；[0:待处理|2:已加白|3:非信任状态|4:已处理|5:已忽略]
                     * @return HandleStatus 处理状态；[0:待处理|2:已加白|3:非信任状态|4:已处理|5:已忽略]
                     * 
                     */
                    int64_t GetHandleStatus() const;

                    /**
                     * 设置处理状态；[0:待处理|2:已加白|3:非信任状态|4:已处理|5:已忽略]
                     * @param _handleStatus 处理状态；[0:待处理|2:已加白|3:非信任状态|4:已处理|5:已忽略]
                     * 
                     */
                    void SetHandleStatus(const int64_t& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     * 
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取进程ID
                     * @return Pid 进程ID
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置进程ID
                     * @param _pid 进程ID
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

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
                     * 获取进程MD5
                     * @return ProcessMd5 进程MD5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置进程MD5
                     * @param _processMd5 进程MD5
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取命令行
                     * @return CmdLine 命令行
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令行
                     * @param _cmdLine 命令行
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
                     * 获取首次访问时间
                     * @return FirstTime 首次访问时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次访问时间
                     * @param _firstTime 首次访问时间
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
                     * 获取最近访问时间
                     * @return LastTime 最近访问时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最近访问时间
                     * @param _lastTime 最近访问时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * @return HostStatus 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * 
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * @param _hostStatus 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * 
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     * 
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
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
                     * 获取[1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * @return OsType [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置[1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * @param _osType [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 事件Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 策略ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 命中策略类型[-1:未知|0系统|1:用户]
                     */
                    int64_t m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 命中策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 保护级别[0:基础版|1:专业版|2:旗舰版]
                     */
                    int64_t m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * 主机ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 外网IP
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 访问域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 标签特性
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 访问次数
                     */
                    int64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * 威胁描述
                     */
                    std::string m_threatDesc;
                    bool m_threatDescHasBeenSet;

                    /**
                     * 修复方案
                     */
                    std::string m_suggestSolution;
                    bool m_suggestSolutionHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_referenceLink;
                    bool m_referenceLinkHasBeenSet;

                    /**
                     * 处理状态；[0:待处理|2:已加白|3:非信任状态|4:已处理|5:已忽略]
                     */
                    int64_t m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 进程ID
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 进程名
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程MD5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 命令行
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 首次访问时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最近访问时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * [1:CentOS|2:Debian|3:Gentoo|4:Redhat|5:Ubuntu|6:Windows|7:TencentOS|8:CoreOS|9:FreeBSD|10:SUSE]
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSEVENT_H_
