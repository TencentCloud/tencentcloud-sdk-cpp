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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/EventStat.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityEventStat返回参数结构体
                */
                class DescribeSecurityEventStatResponse : public AbstractModel
                {
                public:
                    DescribeSecurityEventStatResponse();
                    ~DescribeSecurityEventStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取木马事件统计
                     * @return MalwareStat 木马事件统计
                     * 
                     */
                    EventStat GetMalwareStat() const;

                    /**
                     * 判断参数 MalwareStat 是否已赋值
                     * @return MalwareStat 是否已赋值
                     * 
                     */
                    bool MalwareStatHasBeenSet() const;

                    /**
                     * 获取异地事件统计
                     * @return HostLoginStat 异地事件统计
                     * 
                     */
                    EventStat GetHostLoginStat() const;

                    /**
                     * 判断参数 HostLoginStat 是否已赋值
                     * @return HostLoginStat 是否已赋值
                     * 
                     */
                    bool HostLoginStatHasBeenSet() const;

                    /**
                     * 获取爆破事件统计
                     * @return BruteAttackStat 爆破事件统计
                     * 
                     */
                    EventStat GetBruteAttackStat() const;

                    /**
                     * 判断参数 BruteAttackStat 是否已赋值
                     * @return BruteAttackStat 是否已赋值
                     * 
                     */
                    bool BruteAttackStatHasBeenSet() const;

                    /**
                     * 获取恶意请求事件统计
                     * @return MaliciousRequestStat 恶意请求事件统计
                     * 
                     */
                    EventStat GetMaliciousRequestStat() const;

                    /**
                     * 判断参数 MaliciousRequestStat 是否已赋值
                     * @return MaliciousRequestStat 是否已赋值
                     * 
                     */
                    bool MaliciousRequestStatHasBeenSet() const;

                    /**
                     * 获取本地提权事件统计
                     * @return PrivilegeStat 本地提权事件统计
                     * 
                     */
                    EventStat GetPrivilegeStat() const;

                    /**
                     * 判断参数 PrivilegeStat 是否已赋值
                     * @return PrivilegeStat 是否已赋值
                     * 
                     */
                    bool PrivilegeStatHasBeenSet() const;

                    /**
                     * 获取反弹Shell事件统计
                     * @return ReverseShellStat 反弹Shell事件统计
                     * 
                     */
                    EventStat GetReverseShellStat() const;

                    /**
                     * 判断参数 ReverseShellStat 是否已赋值
                     * @return ReverseShellStat 是否已赋值
                     * 
                     */
                    bool ReverseShellStatHasBeenSet() const;

                    /**
                     * 获取高危命令事件统计
                     * @return HighRiskBashStat 高危命令事件统计
                     * 
                     */
                    EventStat GetHighRiskBashStat() const;

                    /**
                     * 判断参数 HighRiskBashStat 是否已赋值
                     * @return HighRiskBashStat 是否已赋值
                     * 
                     */
                    bool HighRiskBashStatHasBeenSet() const;

                    /**
                     * 获取网络攻击事件统计
                     * @return AttackLogsStat 网络攻击事件统计
                     * 
                     */
                    EventStat GetAttackLogsStat() const;

                    /**
                     * 判断参数 AttackLogsStat 是否已赋值
                     * @return AttackLogsStat 是否已赋值
                     * 
                     */
                    bool AttackLogsStatHasBeenSet() const;

                    /**
                     * 获取高危漏洞事件统计
                     * @return VulHighStat 高危漏洞事件统计
                     * 
                     */
                    EventStat GetVulHighStat() const;

                    /**
                     * 判断参数 VulHighStat 是否已赋值
                     * @return VulHighStat 是否已赋值
                     * 
                     */
                    bool VulHighStatHasBeenSet() const;

                    /**
                     * 获取中危漏洞事件统计
                     * @return VulNormalStat 中危漏洞事件统计
                     * 
                     */
                    EventStat GetVulNormalStat() const;

                    /**
                     * 判断参数 VulNormalStat 是否已赋值
                     * @return VulNormalStat 是否已赋值
                     * 
                     */
                    bool VulNormalStatHasBeenSet() const;

                    /**
                     * 获取低危漏洞事件统计
                     * @return VulLowStat 低危漏洞事件统计
                     * 
                     */
                    EventStat GetVulLowStat() const;

                    /**
                     * 判断参数 VulLowStat 是否已赋值
                     * @return VulLowStat 是否已赋值
                     * 
                     */
                    bool VulLowStatHasBeenSet() const;

                    /**
                     * 获取高危基线漏洞事件统计
                     * @return BaselineHighStat 高危基线漏洞事件统计
                     * 
                     */
                    EventStat GetBaselineHighStat() const;

                    /**
                     * 判断参数 BaselineHighStat 是否已赋值
                     * @return BaselineHighStat 是否已赋值
                     * 
                     */
                    bool BaselineHighStatHasBeenSet() const;

                    /**
                     * 获取中危基线漏事件统计
                     * @return BaselineNormalStat 中危基线漏事件统计
                     * 
                     */
                    EventStat GetBaselineNormalStat() const;

                    /**
                     * 判断参数 BaselineNormalStat 是否已赋值
                     * @return BaselineNormalStat 是否已赋值
                     * 
                     */
                    bool BaselineNormalStatHasBeenSet() const;

                    /**
                     * 获取低危基线漏事件统计
                     * @return BaselineLowStat 低危基线漏事件统计
                     * 
                     */
                    EventStat GetBaselineLowStat() const;

                    /**
                     * 判断参数 BaselineLowStat 是否已赋值
                     * @return BaselineLowStat 是否已赋值
                     * 
                     */
                    bool BaselineLowStatHasBeenSet() const;

                    /**
                     * 获取有未处理安全事件的机器总数
                     * @return MachineTotalAffectNum 有未处理安全事件的机器总数
                     * 
                     */
                    uint64_t GetMachineTotalAffectNum() const;

                    /**
                     * 判断参数 MachineTotalAffectNum 是否已赋值
                     * @return MachineTotalAffectNum 是否已赋值
                     * 
                     */
                    bool MachineTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取有未处理入侵安全事件的机器总数
                     * @return InvasionTotalAffectNum 有未处理入侵安全事件的机器总数
                     * 
                     */
                    uint64_t GetInvasionTotalAffectNum() const;

                    /**
                     * 判断参数 InvasionTotalAffectNum 是否已赋值
                     * @return InvasionTotalAffectNum 是否已赋值
                     * 
                     */
                    bool InvasionTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取有未处理漏洞安全事件的机器总数
                     * @return VulTotalAffectNum 有未处理漏洞安全事件的机器总数
                     * 
                     */
                    uint64_t GetVulTotalAffectNum() const;

                    /**
                     * 判断参数 VulTotalAffectNum 是否已赋值
                     * @return VulTotalAffectNum 是否已赋值
                     * 
                     */
                    bool VulTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取有未处理基线安全事件的机器总数
                     * @return BaseLineTotalAffectNum 有未处理基线安全事件的机器总数
                     * 
                     */
                    uint64_t GetBaseLineTotalAffectNum() const;

                    /**
                     * 判断参数 BaseLineTotalAffectNum 是否已赋值
                     * @return BaseLineTotalAffectNum 是否已赋值
                     * 
                     */
                    bool BaseLineTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取有未处理网络攻击安全事件的机器总数
                     * @return CyberAttackTotalAffectNum 有未处理网络攻击安全事件的机器总数
                     * 
                     */
                    uint64_t GetCyberAttackTotalAffectNum() const;

                    /**
                     * 判断参数 CyberAttackTotalAffectNum 是否已赋值
                     * @return CyberAttackTotalAffectNum 是否已赋值
                     * 
                     */
                    bool CyberAttackTotalAffectNumHasBeenSet() const;

                    /**
                     * 获取严重漏洞事件统计
                     * @return VulRiskStat 严重漏洞事件统计
                     * 
                     */
                    EventStat GetVulRiskStat() const;

                    /**
                     * 判断参数 VulRiskStat 是否已赋值
                     * @return VulRiskStat 是否已赋值
                     * 
                     */
                    bool VulRiskStatHasBeenSet() const;

                    /**
                     * 获取严重基线漏洞事件统计
                     * @return BaselineRiskStat 严重基线漏洞事件统计
                     * 
                     */
                    EventStat GetBaselineRiskStat() const;

                    /**
                     * 判断参数 BaselineRiskStat 是否已赋值
                     * @return BaselineRiskStat 是否已赋值
                     * 
                     */
                    bool BaselineRiskStatHasBeenSet() const;

                    /**
                     * 获取漏洞数统计
                     * @return VulStat 漏洞数统计
                     * 
                     */
                    EventStat GetVulStat() const;

                    /**
                     * 判断参数 VulStat 是否已赋值
                     * @return VulStat 是否已赋值
                     * 
                     */
                    bool VulStatHasBeenSet() const;

                    /**
                     * 获取安全得分
                     * @return Score 安全得分
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 木马事件统计
                     */
                    EventStat m_malwareStat;
                    bool m_malwareStatHasBeenSet;

                    /**
                     * 异地事件统计
                     */
                    EventStat m_hostLoginStat;
                    bool m_hostLoginStatHasBeenSet;

                    /**
                     * 爆破事件统计
                     */
                    EventStat m_bruteAttackStat;
                    bool m_bruteAttackStatHasBeenSet;

                    /**
                     * 恶意请求事件统计
                     */
                    EventStat m_maliciousRequestStat;
                    bool m_maliciousRequestStatHasBeenSet;

                    /**
                     * 本地提权事件统计
                     */
                    EventStat m_privilegeStat;
                    bool m_privilegeStatHasBeenSet;

                    /**
                     * 反弹Shell事件统计
                     */
                    EventStat m_reverseShellStat;
                    bool m_reverseShellStatHasBeenSet;

                    /**
                     * 高危命令事件统计
                     */
                    EventStat m_highRiskBashStat;
                    bool m_highRiskBashStatHasBeenSet;

                    /**
                     * 网络攻击事件统计
                     */
                    EventStat m_attackLogsStat;
                    bool m_attackLogsStatHasBeenSet;

                    /**
                     * 高危漏洞事件统计
                     */
                    EventStat m_vulHighStat;
                    bool m_vulHighStatHasBeenSet;

                    /**
                     * 中危漏洞事件统计
                     */
                    EventStat m_vulNormalStat;
                    bool m_vulNormalStatHasBeenSet;

                    /**
                     * 低危漏洞事件统计
                     */
                    EventStat m_vulLowStat;
                    bool m_vulLowStatHasBeenSet;

                    /**
                     * 高危基线漏洞事件统计
                     */
                    EventStat m_baselineHighStat;
                    bool m_baselineHighStatHasBeenSet;

                    /**
                     * 中危基线漏事件统计
                     */
                    EventStat m_baselineNormalStat;
                    bool m_baselineNormalStatHasBeenSet;

                    /**
                     * 低危基线漏事件统计
                     */
                    EventStat m_baselineLowStat;
                    bool m_baselineLowStatHasBeenSet;

                    /**
                     * 有未处理安全事件的机器总数
                     */
                    uint64_t m_machineTotalAffectNum;
                    bool m_machineTotalAffectNumHasBeenSet;

                    /**
                     * 有未处理入侵安全事件的机器总数
                     */
                    uint64_t m_invasionTotalAffectNum;
                    bool m_invasionTotalAffectNumHasBeenSet;

                    /**
                     * 有未处理漏洞安全事件的机器总数
                     */
                    uint64_t m_vulTotalAffectNum;
                    bool m_vulTotalAffectNumHasBeenSet;

                    /**
                     * 有未处理基线安全事件的机器总数
                     */
                    uint64_t m_baseLineTotalAffectNum;
                    bool m_baseLineTotalAffectNumHasBeenSet;

                    /**
                     * 有未处理网络攻击安全事件的机器总数
                     */
                    uint64_t m_cyberAttackTotalAffectNum;
                    bool m_cyberAttackTotalAffectNumHasBeenSet;

                    /**
                     * 严重漏洞事件统计
                     */
                    EventStat m_vulRiskStat;
                    bool m_vulRiskStatHasBeenSet;

                    /**
                     * 严重基线漏洞事件统计
                     */
                    EventStat m_baselineRiskStat;
                    bool m_baselineRiskStatHasBeenSet;

                    /**
                     * 漏洞数统计
                     */
                    EventStat m_vulStat;
                    bool m_vulStatHasBeenSet;

                    /**
                     * 安全得分
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYEVENTSTATRESPONSE_H_
