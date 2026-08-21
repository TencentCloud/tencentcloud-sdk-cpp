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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYRISKTRENDRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYRISKTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DimensionTrendData.h>
#include <tencentcloud/csip/v20221121/model/RiskTrendItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSecurityRiskTrend返回参数结构体
                */
                class DescribeSecurityRiskTrendResponse : public AbstractModel
                {
                public:
                    DescribeSecurityRiskTrendResponse();
                    ~DescribeSecurityRiskTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>按维度分组的趋势数据</p>
                     * @return TrendData <p>按维度分组的趋势数据</p>
                     * 
                     */
                    std::vector<DimensionTrendData> GetTrendData() const;

                    /**
                     * 判断参数 TrendData 是否已赋值
                     * @return TrendData 是否已赋值
                     * 
                     */
                    bool TrendDataHasBeenSet() const;

                    /**
                     * 获取<p>最后一天风险摘要（告警 + 适用漏洞项）</p>
                     * @return RiskItems <p>最后一天风险摘要（告警 + 适用漏洞项）</p>
                     * 
                     */
                    std::vector<RiskTrendItem> GetRiskItems() const;

                    /**
                     * 判断参数 RiskItems 是否已赋值
                     * @return RiskItems 是否已赋值
                     * 
                     */
                    bool RiskItemsHasBeenSet() const;

                private:

                    /**
                     * <p>按维度分组的趋势数据</p>
                     */
                    std::vector<DimensionTrendData> m_trendData;
                    bool m_trendDataHasBeenSet;

                    /**
                     * <p>最后一天风险摘要（告警 + 适用漏洞项）</p>
                     */
                    std::vector<RiskTrendItem> m_riskItems;
                    bool m_riskItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYRISKTRENDRESPONSE_H_
