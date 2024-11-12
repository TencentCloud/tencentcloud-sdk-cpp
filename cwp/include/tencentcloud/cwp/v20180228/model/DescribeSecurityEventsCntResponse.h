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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/SecurityEventInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityEventsCnt返回参数结构体
                */
                class DescribeSecurityEventsCntResponse : public AbstractModel
                {
                public:
                    DescribeSecurityEventsCntResponse();
                    ~DescribeSecurityEventsCntResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取木马文件相关风险事件
                     * @return Malware 木马文件相关风险事件
                     * 
                     */
                    SecurityEventInfo GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                    /**
                     * 获取登录审计相关风险事件
                     * @return HostLogin 登录审计相关风险事件
                     * 
                     */
                    SecurityEventInfo GetHostLogin() const;

                    /**
                     * 判断参数 HostLogin 是否已赋值
                     * @return HostLogin 是否已赋值
                     * 
                     */
                    bool HostLoginHasBeenSet() const;

                    /**
                     * 获取密码破解相关风险事件
                     * @return BruteAttack 密码破解相关风险事件
                     * 
                     */
                    SecurityEventInfo GetBruteAttack() const;

                    /**
                     * 判断参数 BruteAttack 是否已赋值
                     * @return BruteAttack 是否已赋值
                     * 
                     */
                    bool BruteAttackHasBeenSet() const;

                    /**
                     * 获取恶意请求相关风险事件
                     * @return RiskDns 恶意请求相关风险事件
                     * 
                     */
                    SecurityEventInfo GetRiskDns() const;

                    /**
                     * 判断参数 RiskDns 是否已赋值
                     * @return RiskDns 是否已赋值
                     * 
                     */
                    bool RiskDnsHasBeenSet() const;

                    /**
                     * 获取高危命令相关风险事件
                     * @return Bash 高危命令相关风险事件
                     * 
                     */
                    SecurityEventInfo GetBash() const;

                    /**
                     * 判断参数 Bash 是否已赋值
                     * @return Bash 是否已赋值
                     * 
                     */
                    bool BashHasBeenSet() const;

                    /**
                     * 获取本地提权相关风险事件
                     * @return PrivilegeRules 本地提权相关风险事件
                     * 
                     */
                    SecurityEventInfo GetPrivilegeRules() const;

                    /**
                     * 判断参数 PrivilegeRules 是否已赋值
                     * @return PrivilegeRules 是否已赋值
                     * 
                     */
                    bool PrivilegeRulesHasBeenSet() const;

                    /**
                     * 获取反弹Shell相关风险事件
                     * @return ReverseShell 反弹Shell相关风险事件
                     * 
                     */
                    SecurityEventInfo GetReverseShell() const;

                    /**
                     * 判断参数 ReverseShell 是否已赋值
                     * @return ReverseShell 是否已赋值
                     * 
                     */
                    bool ReverseShellHasBeenSet() const;

                    /**
                     * 获取应用漏洞风险事件
                     * @return SysVul 应用漏洞风险事件
                     * 
                     */
                    SecurityEventInfo GetSysVul() const;

                    /**
                     * 判断参数 SysVul 是否已赋值
                     * @return SysVul 是否已赋值
                     * 
                     */
                    bool SysVulHasBeenSet() const;

                    /**
                     * 获取Web应用漏洞相关风险事件
                     * @return WebVul Web应用漏洞相关风险事件
                     * 
                     */
                    SecurityEventInfo GetWebVul() const;

                    /**
                     * 判断参数 WebVul 是否已赋值
                     * @return WebVul 是否已赋值
                     * 
                     */
                    bool WebVulHasBeenSet() const;

                    /**
                     * 获取应急漏洞相关风险事件
                     * @return EmergencyVul 应急漏洞相关风险事件
                     * 
                     */
                    SecurityEventInfo GetEmergencyVul() const;

                    /**
                     * 判断参数 EmergencyVul 是否已赋值
                     * @return EmergencyVul 是否已赋值
                     * 
                     */
                    bool EmergencyVulHasBeenSet() const;

                    /**
                     * 获取安全基线相关风险事件
                     * @return BaseLine 安全基线相关风险事件
                     * 
                     */
                    SecurityEventInfo GetBaseLine() const;

                    /**
                     * 判断参数 BaseLine 是否已赋值
                     * @return BaseLine 是否已赋值
                     * 
                     */
                    bool BaseLineHasBeenSet() const;

                    /**
                     * 获取攻击检测相关风险事件
                     * @return AttackLogs 攻击检测相关风险事件
                     * 
                     */
                    SecurityEventInfo GetAttackLogs() const;

                    /**
                     * 判断参数 AttackLogs 是否已赋值
                     * @return AttackLogs 是否已赋值
                     * 
                     */
                    bool AttackLogsHasBeenSet() const;

                    /**
                     * 获取受影响机器数
                     * @return EffectMachineCount 受影响机器数
                     * 
                     */
                    uint64_t GetEffectMachineCount() const;

                    /**
                     * 判断参数 EffectMachineCount 是否已赋值
                     * @return EffectMachineCount 是否已赋值
                     * 
                     */
                    bool EffectMachineCountHasBeenSet() const;

                    /**
                     * 获取所有事件总数
                     * @return EventsCount 所有事件总数
                     * 
                     */
                    uint64_t GetEventsCount() const;

                    /**
                     * 判断参数 EventsCount 是否已赋值
                     * @return EventsCount 是否已赋值
                     * 
                     */
                    bool EventsCountHasBeenSet() const;

                    /**
                     * 获取window 系统漏洞事件总数
                     * @return WindowVul window 系统漏洞事件总数
                     * 
                     */
                    SecurityEventInfo GetWindowVul() const;

                    /**
                     * 判断参数 WindowVul 是否已赋值
                     * @return WindowVul 是否已赋值
                     * 
                     */
                    bool WindowVulHasBeenSet() const;

                    /**
                     * 获取linux系统漏洞事件总数
                     * @return LinuxVul linux系统漏洞事件总数
                     * 
                     */
                    SecurityEventInfo GetLinuxVul() const;

                    /**
                     * 判断参数 LinuxVul 是否已赋值
                     * @return LinuxVul 是否已赋值
                     * 
                     */
                    bool LinuxVulHasBeenSet() const;

                private:

                    /**
                     * 木马文件相关风险事件
                     */
                    SecurityEventInfo m_malware;
                    bool m_malwareHasBeenSet;

                    /**
                     * 登录审计相关风险事件
                     */
                    SecurityEventInfo m_hostLogin;
                    bool m_hostLoginHasBeenSet;

                    /**
                     * 密码破解相关风险事件
                     */
                    SecurityEventInfo m_bruteAttack;
                    bool m_bruteAttackHasBeenSet;

                    /**
                     * 恶意请求相关风险事件
                     */
                    SecurityEventInfo m_riskDns;
                    bool m_riskDnsHasBeenSet;

                    /**
                     * 高危命令相关风险事件
                     */
                    SecurityEventInfo m_bash;
                    bool m_bashHasBeenSet;

                    /**
                     * 本地提权相关风险事件
                     */
                    SecurityEventInfo m_privilegeRules;
                    bool m_privilegeRulesHasBeenSet;

                    /**
                     * 反弹Shell相关风险事件
                     */
                    SecurityEventInfo m_reverseShell;
                    bool m_reverseShellHasBeenSet;

                    /**
                     * 应用漏洞风险事件
                     */
                    SecurityEventInfo m_sysVul;
                    bool m_sysVulHasBeenSet;

                    /**
                     * Web应用漏洞相关风险事件
                     */
                    SecurityEventInfo m_webVul;
                    bool m_webVulHasBeenSet;

                    /**
                     * 应急漏洞相关风险事件
                     */
                    SecurityEventInfo m_emergencyVul;
                    bool m_emergencyVulHasBeenSet;

                    /**
                     * 安全基线相关风险事件
                     */
                    SecurityEventInfo m_baseLine;
                    bool m_baseLineHasBeenSet;

                    /**
                     * 攻击检测相关风险事件
                     */
                    SecurityEventInfo m_attackLogs;
                    bool m_attackLogsHasBeenSet;

                    /**
                     * 受影响机器数
                     */
                    uint64_t m_effectMachineCount;
                    bool m_effectMachineCountHasBeenSet;

                    /**
                     * 所有事件总数
                     */
                    uint64_t m_eventsCount;
                    bool m_eventsCountHasBeenSet;

                    /**
                     * window 系统漏洞事件总数
                     */
                    SecurityEventInfo m_windowVul;
                    bool m_windowVulHasBeenSet;

                    /**
                     * linux系统漏洞事件总数
                     */
                    SecurityEventInfo m_linuxVul;
                    bool m_linuxVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSCNTRESPONSE_H_
