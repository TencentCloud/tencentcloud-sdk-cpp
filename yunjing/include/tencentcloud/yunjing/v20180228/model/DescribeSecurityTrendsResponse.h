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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/SecurityTrend.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityTrends返回参数结构体
                */
                class DescribeSecurityTrendsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityTrendsResponse();
                    ~DescribeSecurityTrendsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取木马事件统计数据数组。
                     * @return Malwares 木马事件统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetMalwares() const;

                    /**
                     * 判断参数 Malwares 是否已赋值
                     * @return Malwares 是否已赋值
                     * 
                     */
                    bool MalwaresHasBeenSet() const;

                    /**
                     * 获取异地登录事件统计数据数组。
                     * @return NonLocalLoginPlaces 异地登录事件统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetNonLocalLoginPlaces() const;

                    /**
                     * 判断参数 NonLocalLoginPlaces 是否已赋值
                     * @return NonLocalLoginPlaces 是否已赋值
                     * 
                     */
                    bool NonLocalLoginPlacesHasBeenSet() const;

                    /**
                     * 获取密码破解事件统计数据数组。
                     * @return BruteAttacks 密码破解事件统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetBruteAttacks() const;

                    /**
                     * 判断参数 BruteAttacks 是否已赋值
                     * @return BruteAttacks 是否已赋值
                     * 
                     */
                    bool BruteAttacksHasBeenSet() const;

                    /**
                     * 获取漏洞统计数据数组。
                     * @return Vuls 漏洞统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetVuls() const;

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     * 
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取基线统计数据数组。
                     * @return BaseLines 基线统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetBaseLines() const;

                    /**
                     * 判断参数 BaseLines 是否已赋值
                     * @return BaseLines 是否已赋值
                     * 
                     */
                    bool BaseLinesHasBeenSet() const;

                    /**
                     * 获取恶意请求统计数据数组。
                     * @return MaliciousRequests 恶意请求统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetMaliciousRequests() const;

                    /**
                     * 判断参数 MaliciousRequests 是否已赋值
                     * @return MaliciousRequests 是否已赋值
                     * 
                     */
                    bool MaliciousRequestsHasBeenSet() const;

                    /**
                     * 获取高危命令统计数据数组。
                     * @return HighRiskBashs 高危命令统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetHighRiskBashs() const;

                    /**
                     * 判断参数 HighRiskBashs 是否已赋值
                     * @return HighRiskBashs 是否已赋值
                     * 
                     */
                    bool HighRiskBashsHasBeenSet() const;

                    /**
                     * 获取反弹shell统计数据数组。
                     * @return ReverseShells 反弹shell统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetReverseShells() const;

                    /**
                     * 判断参数 ReverseShells 是否已赋值
                     * @return ReverseShells 是否已赋值
                     * 
                     */
                    bool ReverseShellsHasBeenSet() const;

                    /**
                     * 获取本地提权统计数据数组。
                     * @return PrivilegeEscalations 本地提权统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetPrivilegeEscalations() const;

                    /**
                     * 判断参数 PrivilegeEscalations 是否已赋值
                     * @return PrivilegeEscalations 是否已赋值
                     * 
                     */
                    bool PrivilegeEscalationsHasBeenSet() const;

                    /**
                     * 获取网络攻击统计数据数组。
                     * @return CyberAttacks 网络攻击统计数据数组。
                     * 
                     */
                    std::vector<SecurityTrend> GetCyberAttacks() const;

                    /**
                     * 判断参数 CyberAttacks 是否已赋值
                     * @return CyberAttacks 是否已赋值
                     * 
                     */
                    bool CyberAttacksHasBeenSet() const;

                private:

                    /**
                     * 木马事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_malwares;
                    bool m_malwaresHasBeenSet;

                    /**
                     * 异地登录事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_nonLocalLoginPlaces;
                    bool m_nonLocalLoginPlacesHasBeenSet;

                    /**
                     * 密码破解事件统计数据数组。
                     */
                    std::vector<SecurityTrend> m_bruteAttacks;
                    bool m_bruteAttacksHasBeenSet;

                    /**
                     * 漏洞统计数据数组。
                     */
                    std::vector<SecurityTrend> m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * 基线统计数据数组。
                     */
                    std::vector<SecurityTrend> m_baseLines;
                    bool m_baseLinesHasBeenSet;

                    /**
                     * 恶意请求统计数据数组。
                     */
                    std::vector<SecurityTrend> m_maliciousRequests;
                    bool m_maliciousRequestsHasBeenSet;

                    /**
                     * 高危命令统计数据数组。
                     */
                    std::vector<SecurityTrend> m_highRiskBashs;
                    bool m_highRiskBashsHasBeenSet;

                    /**
                     * 反弹shell统计数据数组。
                     */
                    std::vector<SecurityTrend> m_reverseShells;
                    bool m_reverseShellsHasBeenSet;

                    /**
                     * 本地提权统计数据数组。
                     */
                    std::vector<SecurityTrend> m_privilegeEscalations;
                    bool m_privilegeEscalationsHasBeenSet;

                    /**
                     * 网络攻击统计数据数组。
                     */
                    std::vector<SecurityTrend> m_cyberAttacks;
                    bool m_cyberAttacksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBESECURITYTRENDSRESPONSE_H_
