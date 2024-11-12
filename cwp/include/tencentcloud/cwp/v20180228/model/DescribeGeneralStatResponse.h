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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeGeneralStat返回参数结构体
                */
                class DescribeGeneralStatResponse : public AbstractModel
                {
                public:
                    DescribeGeneralStatResponse();
                    ~DescribeGeneralStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云主机总数
                     * @return MachinesAll 云主机总数
                     * 
                     */
                    uint64_t GetMachinesAll() const;

                    /**
                     * 判断参数 MachinesAll 是否已赋值
                     * @return MachinesAll 是否已赋值
                     * 
                     */
                    bool MachinesAllHasBeenSet() const;

                    /**
                     * 获取云主机没有安装主机安全客户端的总数
                     * @return MachinesUninstalled 云主机没有安装主机安全客户端的总数
                     * 
                     */
                    uint64_t GetMachinesUninstalled() const;

                    /**
                     * 判断参数 MachinesUninstalled 是否已赋值
                     * @return MachinesUninstalled 是否已赋值
                     * 
                     */
                    bool MachinesUninstalledHasBeenSet() const;

                    /**
                     * 获取主机安全客户端总数的总数
                     * @return AgentsAll 主机安全客户端总数的总数
                     * 
                     */
                    uint64_t GetAgentsAll() const;

                    /**
                     * 判断参数 AgentsAll 是否已赋值
                     * @return AgentsAll 是否已赋值
                     * 
                     */
                    bool AgentsAllHasBeenSet() const;

                    /**
                     * 获取主机安全客户端在线的总数
                     * @return AgentsOnline 主机安全客户端在线的总数
                     * 
                     */
                    uint64_t GetAgentsOnline() const;

                    /**
                     * 判断参数 AgentsOnline 是否已赋值
                     * @return AgentsOnline 是否已赋值
                     * 
                     */
                    bool AgentsOnlineHasBeenSet() const;

                    /**
                     * 获取主机安全客户端 离线+关机 的总数
                     * @return AgentsOffline 主机安全客户端 离线+关机 的总数
                     * 
                     */
                    uint64_t GetAgentsOffline() const;

                    /**
                     * 判断参数 AgentsOffline 是否已赋值
                     * @return AgentsOffline 是否已赋值
                     * 
                     */
                    bool AgentsOfflineHasBeenSet() const;

                    /**
                     * 获取主机安全客户端专业版的总数
                     * @return AgentsPro 主机安全客户端专业版的总数
                     * 
                     */
                    uint64_t GetAgentsPro() const;

                    /**
                     * 判断参数 AgentsPro 是否已赋值
                     * @return AgentsPro 是否已赋值
                     * 
                     */
                    bool AgentsProHasBeenSet() const;

                    /**
                     * 获取主机安全客户端基础版的总数
                     * @return AgentsBasic 主机安全客户端基础版的总数
                     * 
                     */
                    uint64_t GetAgentsBasic() const;

                    /**
                     * 判断参数 AgentsBasic 是否已赋值
                     * @return AgentsBasic 是否已赋值
                     * 
                     */
                    bool AgentsBasicHasBeenSet() const;

                    /**
                     * 获取7天内到期的预付费专业版总数
                     * @return AgentsProExpireWithInSevenDays 7天内到期的预付费专业版总数
                     * 
                     */
                    uint64_t GetAgentsProExpireWithInSevenDays() const;

                    /**
                     * 判断参数 AgentsProExpireWithInSevenDays 是否已赋值
                     * @return AgentsProExpireWithInSevenDays 是否已赋值
                     * 
                     */
                    bool AgentsProExpireWithInSevenDaysHasBeenSet() const;

                    /**
                     * 获取风险主机总数
                     * @return RiskMachine 风险主机总数
                     * 
                     */
                    uint64_t GetRiskMachine() const;

                    /**
                     * 判断参数 RiskMachine 是否已赋值
                     * @return RiskMachine 是否已赋值
                     * 
                     */
                    bool RiskMachineHasBeenSet() const;

                    /**
                     * 获取已关机总数
                     * @return Shutdown 已关机总数
                     * 
                     */
                    uint64_t GetShutdown() const;

                    /**
                     * 判断参数 Shutdown 是否已赋值
                     * @return Shutdown 是否已赋值
                     * 
                     */
                    bool ShutdownHasBeenSet() const;

                    /**
                     * 获取已离线总数
                     * @return Offline 已离线总数
                     * 
                     */
                    uint64_t GetOffline() const;

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取旗舰版主机数
                     * @return FlagshipMachineCnt 旗舰版主机数
                     * 
                     */
                    uint64_t GetFlagshipMachineCnt() const;

                    /**
                     * 判断参数 FlagshipMachineCnt 是否已赋值
                     * @return FlagshipMachineCnt 是否已赋值
                     * 
                     */
                    bool FlagshipMachineCntHasBeenSet() const;

                    /**
                     * 获取保护天数
                     * @return ProtectDays 保护天数
                     * 
                     */
                    uint64_t GetProtectDays() const;

                    /**
                     * 判断参数 ProtectDays 是否已赋值
                     * @return ProtectDays 是否已赋值
                     * 
                     */
                    bool ProtectDaysHasBeenSet() const;

                    /**
                     * 获取15天内新增的主机数
                     * @return AddedOnTheFifteen 15天内新增的主机数
                     * 
                     */
                    uint64_t GetAddedOnTheFifteen() const;

                    /**
                     * 判断参数 AddedOnTheFifteen 是否已赋值
                     * @return AddedOnTheFifteen 是否已赋值
                     * 
                     */
                    bool AddedOnTheFifteenHasBeenSet() const;

                private:

                    /**
                     * 云主机总数
                     */
                    uint64_t m_machinesAll;
                    bool m_machinesAllHasBeenSet;

                    /**
                     * 云主机没有安装主机安全客户端的总数
                     */
                    uint64_t m_machinesUninstalled;
                    bool m_machinesUninstalledHasBeenSet;

                    /**
                     * 主机安全客户端总数的总数
                     */
                    uint64_t m_agentsAll;
                    bool m_agentsAllHasBeenSet;

                    /**
                     * 主机安全客户端在线的总数
                     */
                    uint64_t m_agentsOnline;
                    bool m_agentsOnlineHasBeenSet;

                    /**
                     * 主机安全客户端 离线+关机 的总数
                     */
                    uint64_t m_agentsOffline;
                    bool m_agentsOfflineHasBeenSet;

                    /**
                     * 主机安全客户端专业版的总数
                     */
                    uint64_t m_agentsPro;
                    bool m_agentsProHasBeenSet;

                    /**
                     * 主机安全客户端基础版的总数
                     */
                    uint64_t m_agentsBasic;
                    bool m_agentsBasicHasBeenSet;

                    /**
                     * 7天内到期的预付费专业版总数
                     */
                    uint64_t m_agentsProExpireWithInSevenDays;
                    bool m_agentsProExpireWithInSevenDaysHasBeenSet;

                    /**
                     * 风险主机总数
                     */
                    uint64_t m_riskMachine;
                    bool m_riskMachineHasBeenSet;

                    /**
                     * 已关机总数
                     */
                    uint64_t m_shutdown;
                    bool m_shutdownHasBeenSet;

                    /**
                     * 已离线总数
                     */
                    uint64_t m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * 旗舰版主机数
                     */
                    uint64_t m_flagshipMachineCnt;
                    bool m_flagshipMachineCntHasBeenSet;

                    /**
                     * 保护天数
                     */
                    uint64_t m_protectDays;
                    bool m_protectDaysHasBeenSet;

                    /**
                     * 15天内新增的主机数
                     */
                    uint64_t m_addedOnTheFifteen;
                    bool m_addedOnTheFifteenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATRESPONSE_H_
