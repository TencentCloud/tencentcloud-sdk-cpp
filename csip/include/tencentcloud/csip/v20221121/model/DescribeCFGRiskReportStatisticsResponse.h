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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKREPORTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKREPORTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCFGRiskReportStatistics返回参数结构体
                */
                class DescribeCFGRiskReportStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeCFGRiskReportStatisticsResponse();
                    ~DescribeCFGRiskReportStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>规则数量</p>
                     * @return TotalRuleCount <p>规则数量</p>
                     * 
                     */
                    uint64_t GetTotalRuleCount() const;

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                    /**
                     * 获取<p>资产数量</p>
                     * @return TotalAssetCount <p>资产数量</p>
                     * 
                     */
                    uint64_t GetTotalAssetCount() const;

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>风险数量</p>
                     * @return TotalRiskCount <p>风险数量</p>
                     * 
                     */
                    uint64_t GetTotalRiskCount() const;

                    /**
                     * 判断参数 TotalRiskCount 是否已赋值
                     * @return TotalRiskCount 是否已赋值
                     * 
                     */
                    bool TotalRiskCountHasBeenSet() const;

                private:

                    /**
                     * <p>规则数量</p>
                     */
                    uint64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                    /**
                     * <p>资产数量</p>
                     */
                    uint64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>风险数量</p>
                     */
                    uint64_t m_totalRiskCount;
                    bool m_totalRiskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECFGRISKREPORTSTATISTICSRESPONSE_H_
