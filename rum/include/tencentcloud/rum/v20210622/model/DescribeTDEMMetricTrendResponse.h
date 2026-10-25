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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICTRENDRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/MetricTrendPoint.h>
#include <tencentcloud/rum/v20210622/model/MetricTrendBatchItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMMetricTrend返回参数结构体
                */
                class DescribeTDEMMetricTrendResponse : public AbstractModel
                {
                public:
                    DescribeTDEMMetricTrendResponse();
                    ~DescribeTDEMMetricTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实际生效粒度</p>
                     * @return Granularity <p>实际生效粒度</p>
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取<p>单查时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series <p>单查时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricTrendPoint> GetSeries() const;

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取<p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results <p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricTrendBatchItem> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * <p>实际生效粒度</p>
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * <p>单查时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricTrendPoint> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * <p>批量结果，Queries 非空时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricTrendBatchItem> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMMETRICTRENDRESPONSE_H_
