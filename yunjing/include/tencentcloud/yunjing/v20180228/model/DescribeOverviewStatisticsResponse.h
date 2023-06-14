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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_

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
                * DescribeOverviewStatistics返回参数结构体
                */
                class DescribeOverviewStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeOverviewStatisticsResponse();
                    ~DescribeOverviewStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器在线数。
                     * @return OnlineMachineNum 服务器在线数。
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
                     * 获取专业服务器数。
                     * @return ProVersionMachineNum 专业服务器数。
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
                     * 获取木马文件数。
                     * @return MalwareNum 木马文件数。
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
                     * 获取暴力破解成功数。
                     * @return BruteAttackSuccessNum 暴力破解成功数。
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
                     * 获取安全基线数。
                     * @return BaseLineNum 安全基线数。
                     * 
                     */
                    uint64_t GetBaseLineNum() const;

                    /**
                     * 判断参数 BaseLineNum 是否已赋值
                     * @return BaseLineNum 是否已赋值
                     * 
                     */
                    bool BaseLineNumHasBeenSet() const;

                private:

                    /**
                     * 服务器在线数。
                     */
                    uint64_t m_onlineMachineNum;
                    bool m_onlineMachineNumHasBeenSet;

                    /**
                     * 专业服务器数。
                     */
                    uint64_t m_proVersionMachineNum;
                    bool m_proVersionMachineNumHasBeenSet;

                    /**
                     * 木马文件数。
                     */
                    uint64_t m_malwareNum;
                    bool m_malwareNumHasBeenSet;

                    /**
                     * 异地登录数。
                     */
                    uint64_t m_nonlocalLoginNum;
                    bool m_nonlocalLoginNumHasBeenSet;

                    /**
                     * 暴力破解成功数。
                     */
                    uint64_t m_bruteAttackSuccessNum;
                    bool m_bruteAttackSuccessNumHasBeenSet;

                    /**
                     * 漏洞数。
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 安全基线数。
                     */
                    uint64_t m_baseLineNum;
                    bool m_baseLineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEOVERVIEWSTATISTICSRESPONSE_H_
