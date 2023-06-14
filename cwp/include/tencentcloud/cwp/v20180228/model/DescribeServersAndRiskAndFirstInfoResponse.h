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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_

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
                * DescribeServersAndRiskAndFirstInfo返回参数结构体
                */
                class DescribeServersAndRiskAndFirstInfoResponse : public AbstractModel
                {
                public:
                    DescribeServersAndRiskAndFirstInfoResponse();
                    ~DescribeServersAndRiskAndFirstInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险文件数
                     * @return RiskFileCount 风险文件数
                     * 
                     */
                    uint64_t GetRiskFileCount() const;

                    /**
                     * 判断参数 RiskFileCount 是否已赋值
                     * @return RiskFileCount 是否已赋值
                     * 
                     */
                    bool RiskFileCountHasBeenSet() const;

                    /**
                     * 获取今日新增风险文件数
                     * @return AddRiskFileCount 今日新增风险文件数
                     * 
                     */
                    uint64_t GetAddRiskFileCount() const;

                    /**
                     * 判断参数 AddRiskFileCount 是否已赋值
                     * @return AddRiskFileCount 是否已赋值
                     * 
                     */
                    bool AddRiskFileCountHasBeenSet() const;

                    /**
                     * 获取受影响服务器台数
                     * @return ServersCount 受影响服务器台数
                     * 
                     */
                    uint64_t GetServersCount() const;

                    /**
                     * 判断参数 ServersCount 是否已赋值
                     * @return ServersCount 是否已赋值
                     * 
                     */
                    bool ServersCountHasBeenSet() const;

                    /**
                     * 获取是否试用：true-是，false-否
                     * @return IsFirstCheck 是否试用：true-是，false-否
                     * 
                     */
                    bool GetIsFirstCheck() const;

                    /**
                     * 判断参数 IsFirstCheck 是否已赋值
                     * @return IsFirstCheck 是否已赋值
                     * 
                     */
                    bool IsFirstCheckHasBeenSet() const;

                    /**
                     * 获取木马最近检测时间
                     * @return ScanTime 木马最近检测时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * 风险文件数
                     */
                    uint64_t m_riskFileCount;
                    bool m_riskFileCountHasBeenSet;

                    /**
                     * 今日新增风险文件数
                     */
                    uint64_t m_addRiskFileCount;
                    bool m_addRiskFileCountHasBeenSet;

                    /**
                     * 受影响服务器台数
                     */
                    uint64_t m_serversCount;
                    bool m_serversCountHasBeenSet;

                    /**
                     * 是否试用：true-是，false-否
                     */
                    bool m_isFirstCheck;
                    bool m_isFirstCheckHasBeenSet;

                    /**
                     * 木马最近检测时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESERVERSANDRISKANDFIRSTINFORESPONSE_H_
