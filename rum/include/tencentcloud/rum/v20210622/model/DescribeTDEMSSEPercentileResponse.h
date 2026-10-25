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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEPERCENTILERESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEPERCENTILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/TDEMSSEPercentilePoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSSEPercentile返回参数结构体
                */
                class DescribeTDEMSSEPercentileResponse : public AbstractModel
                {
                public:
                    DescribeTDEMSSEPercentileResponse();
                    ~DescribeTDEMSSEPercentileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>时间桶宽度，单位秒，与趋势查询使用同一套分桶。</p>
                     * @return IntervalSec <p>时间桶宽度，单位秒，与趋势查询使用同一套分桶。</p>
                     * 
                     */
                    int64_t GetIntervalSec() const;

                    /**
                     * 判断参数 IntervalSec 是否已赋值
                     * @return IntervalSec 是否已赋值
                     * 
                     */
                    bool IntervalSecHasBeenSet() const;

                    /**
                     * 获取<p>整个时间窗的算术平均。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Average <p>整个时间窗的算术平均。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                    /**
                     * 获取<p>整个时间窗的 50 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P50 <p>整个时间窗的 50 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP50() const;

                    /**
                     * 判断参数 P50 是否已赋值
                     * @return P50 是否已赋值
                     * 
                     */
                    bool P50HasBeenSet() const;

                    /**
                     * 获取<p>整个时间窗的 75 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P75 <p>整个时间窗的 75 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP75() const;

                    /**
                     * 判断参数 P75 是否已赋值
                     * @return P75 是否已赋值
                     * 
                     */
                    bool P75HasBeenSet() const;

                    /**
                     * 获取<p>整个时间窗的 95 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P95 <p>整个时间窗的 95 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP95() const;

                    /**
                     * 判断参数 P95 是否已赋值
                     * @return P95 是否已赋值
                     * 
                     */
                    bool P95HasBeenSet() const;

                    /**
                     * 获取<p>整个时间窗的 99 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P99 <p>整个时间窗的 99 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP99() const;

                    /**
                     * 判断参数 P99 是否已赋值
                     * @return P99 是否已赋值
                     * 
                     */
                    bool P99HasBeenSet() const;

                    /**
                     * 获取<p>各时间桶的平均值和分位。没有样本的桶不返回，全部没有样本时为空数组。</p>
                     * @return Points <p>各时间桶的平均值和分位。没有样本的桶不返回，全部没有样本时为空数组。</p>
                     * 
                     */
                    std::vector<TDEMSSEPercentilePoint> GetPoints() const;

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

                private:

                    /**
                     * <p>时间桶宽度，单位秒，与趋势查询使用同一套分桶。</p>
                     */
                    int64_t m_intervalSec;
                    bool m_intervalSecHasBeenSet;

                    /**
                     * <p>整个时间窗的算术平均。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                    /**
                     * <p>整个时间窗的 50 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p50;
                    bool m_p50HasBeenSet;

                    /**
                     * <p>整个时间窗的 75 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p75;
                    bool m_p75HasBeenSet;

                    /**
                     * <p>整个时间窗的 95 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p95;
                    bool m_p95HasBeenSet;

                    /**
                     * <p>整个时间窗的 99 分位。没有有效样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p99;
                    bool m_p99HasBeenSet;

                    /**
                     * <p>各时间桶的平均值和分位。没有样本的桶不返回，全部没有样本时为空数组。</p>
                     */
                    std::vector<TDEMSSEPercentilePoint> m_points;
                    bool m_pointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSEPERCENTILERESPONSE_H_
