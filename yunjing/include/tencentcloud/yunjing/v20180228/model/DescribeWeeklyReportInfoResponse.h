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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWeeklyReportInfo返回参数结构体
                */
                class DescribeWeeklyReportInfoResponse : public AbstractModel
                {
                public:
                    DescribeWeeklyReportInfoResponse();
                    ~DescribeWeeklyReportInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号所属公司或个人名称。
                     * @return CompanyName 账号所属公司或个人名称。
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取机器总数。
                     * @return MachineNum 机器总数。
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                    /**
                     * 获取云镜客户端在线数。
                     * @return OnlineMachineNum 云镜客户端在线数。
                     * 
                     */
                    uint64_t GetOnlineMachineNum() const;

                    /**
                     * 判断参数 OnlineMachineNum 是否已赋值
                     * @return OnlineMachineNum 是否已赋值
                     * 
                     */
                    bool OnlineMachineNumHasBeenSet() const;

                    /**
                     * 获取云镜客户端离线数。
                     * @return OfflineMachineNum 云镜客户端离线数。
                     * 
                     */
                    uint64_t GetOfflineMachineNum() const;

                    /**
                     * 判断参数 OfflineMachineNum 是否已赋值
                     * @return OfflineMachineNum 是否已赋值
                     * 
                     */
                    bool OfflineMachineNumHasBeenSet() const;

                    /**
                     * 获取开通云镜专业版数量。
                     * @return ProVersionMachineNum 开通云镜专业版数量。
                     * 
                     */
                    uint64_t GetProVersionMachineNum() const;

                    /**
                     * 判断参数 ProVersionMachineNum 是否已赋值
                     * @return ProVersionMachineNum 是否已赋值
                     * 
                     */
                    bool ProVersionMachineNumHasBeenSet() const;

                    /**
                     * 获取周报开始时间。
                     * @return BeginDate 周报开始时间。
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取周报结束时间。
                     * @return EndDate 周报结束时间。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取安全等级。
<li>HIGH：高</li>
<li>MIDDLE：中</li>
<li>LOW：低</li>
                     * @return Level 安全等级。
<li>HIGH：高</li>
<li>MIDDLE：中</li>
<li>LOW：低</li>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取木马记录数。
                     * @return MalwareNum 木马记录数。
                     * 
                     */
                    uint64_t GetMalwareNum() const;

                    /**
                     * 判断参数 MalwareNum 是否已赋值
                     * @return MalwareNum 是否已赋值
                     * 
                     */
                    bool MalwareNumHasBeenSet() const;

                    /**
                     * 获取异地登录数。
                     * @return NonlocalLoginNum 异地登录数。
                     * 
                     */
                    uint64_t GetNonlocalLoginNum() const;

                    /**
                     * 判断参数 NonlocalLoginNum 是否已赋值
                     * @return NonlocalLoginNum 是否已赋值
                     * 
                     */
                    bool NonlocalLoginNumHasBeenSet() const;

                    /**
                     * 获取密码破解成功数。
                     * @return BruteAttackSuccessNum 密码破解成功数。
                     * 
                     */
                    uint64_t GetBruteAttackSuccessNum() const;

                    /**
                     * 判断参数 BruteAttackSuccessNum 是否已赋值
                     * @return BruteAttackSuccessNum 是否已赋值
                     * 
                     */
                    bool BruteAttackSuccessNumHasBeenSet() const;

                    /**
                     * 获取漏洞数。
                     * @return VulNum 漏洞数。
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取导出文件下载地址。
                     * @return DownloadUrl 导出文件下载地址。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 账号所属公司或个人名称。
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 机器总数。
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                    /**
                     * 云镜客户端在线数。
                     */
                    uint64_t m_onlineMachineNum;
                    bool m_onlineMachineNumHasBeenSet;

                    /**
                     * 云镜客户端离线数。
                     */
                    uint64_t m_offlineMachineNum;
                    bool m_offlineMachineNumHasBeenSet;

                    /**
                     * 开通云镜专业版数量。
                     */
                    uint64_t m_proVersionMachineNum;
                    bool m_proVersionMachineNumHasBeenSet;

                    /**
                     * 周报开始时间。
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 周报结束时间。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 安全等级。
<li>HIGH：高</li>
<li>MIDDLE：中</li>
<li>LOW：低</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 木马记录数。
                     */
                    uint64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * 异地登录数。
                     */
                    uint64_t m_nonlocalLoginNum;
                    bool m_nonlocalLoginNumHasBeenSet;

                    /**
                     * 密码破解成功数。
                     */
                    uint64_t m_bruteAttackSuccessNum;
                    bool m_bruteAttackSuccessNumHasBeenSet;

                    /**
                     * 漏洞数。
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 导出文件下载地址。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFORESPONSE_H_
