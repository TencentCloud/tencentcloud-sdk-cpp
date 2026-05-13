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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetCount.h>
#include <tencentcloud/csip/v20221121/model/DspmIpCount.h>
#include <tencentcloud/csip/v20221121/model/DspmAccountCount.h>
#include <tencentcloud/csip/v20221121/model/DspmRiskCount.h>
#include <tencentcloud/csip/v20221121/model/DspmSecurityAnalyseStatusCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmStatistics返回参数结构体
                */
                class DescribeDspmStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeDspmStatisticsResponse();
                    ~DescribeDspmStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产统计信息
                     * @return AssetCount 资产统计信息
                     * 
                     */
                    DspmAssetCount GetAssetCount() const;

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取访问Ip统计信息
                     * @return IpCount 访问Ip统计信息
                     * 
                     */
                    DspmIpCount GetIpCount() const;

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取用户账号统计信息
                     * @return UserCount 用户账号统计信息
                     * 
                     */
                    DspmAccountCount GetUserCount() const;

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取风险统计信息
                     * @return RiskCount 风险统计信息
                     * 
                     */
                    DspmRiskCount GetRiskCount() const;

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取资产安全分析统计信息
                     * @return AnalyseAssetStatusCount 资产安全分析统计信息
                     * 
                     */
                    DspmSecurityAnalyseStatusCount GetAnalyseAssetStatusCount() const;

                    /**
                     * 判断参数 AnalyseAssetStatusCount 是否已赋值
                     * @return AnalyseAssetStatusCount 是否已赋值
                     * 
                     */
                    bool AnalyseAssetStatusCountHasBeenSet() const;

                private:

                    /**
                     * 资产统计信息
                     */
                    DspmAssetCount m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 访问Ip统计信息
                     */
                    DspmIpCount m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 用户账号统计信息
                     */
                    DspmAccountCount m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * 风险统计信息
                     */
                    DspmRiskCount m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 资产安全分析统计信息
                     */
                    DspmSecurityAnalyseStatusCount m_analyseAssetStatusCount;
                    bool m_analyseAssetStatusCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMSTATISTICSRESPONSE_H_
