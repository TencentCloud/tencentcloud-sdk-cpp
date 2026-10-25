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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEPERCENTILEPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEPERCENTILEPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 大模型对话分位时间桶
                */
                class TDEMSSEPercentilePoint : public AbstractModel
                {
                public:
                    TDEMSSEPercentilePoint();
                    ~TDEMSSEPercentilePoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间桶起点，Unix 毫秒。</p>
                     * @return Time <p>时间桶起点，Unix 毫秒。</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>时间桶起点，Unix 毫秒。</p>
                     * @param _time <p>时间桶起点，Unix 毫秒。</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>该桶算术平均值。没有样本的桶不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Average <p>该桶算术平均值。没有样本的桶不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 设置<p>该桶算术平均值。没有样本的桶不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _average <p>该桶算术平均值。没有样本的桶不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAverage(const double& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                    /**
                     * 获取<p>50 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P50 <p>50 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP50() const;

                    /**
                     * 设置<p>50 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p50 <p>50 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP50(const double& _p50);

                    /**
                     * 判断参数 P50 是否已赋值
                     * @return P50 是否已赋值
                     * 
                     */
                    bool P50HasBeenSet() const;

                    /**
                     * 获取<p>75 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P75 <p>75 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP75() const;

                    /**
                     * 设置<p>75 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p75 <p>75 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP75(const double& _p75);

                    /**
                     * 判断参数 P75 是否已赋值
                     * @return P75 是否已赋值
                     * 
                     */
                    bool P75HasBeenSet() const;

                    /**
                     * 获取<p>95 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P95 <p>95 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP95() const;

                    /**
                     * 设置<p>95 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p95 <p>95 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP95(const double& _p95);

                    /**
                     * 判断参数 P95 是否已赋值
                     * @return P95 是否已赋值
                     * 
                     */
                    bool P95HasBeenSet() const;

                    /**
                     * 获取<p>99 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P99 <p>99 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetP99() const;

                    /**
                     * 设置<p>99 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p99 <p>99 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP99(const double& _p99);

                    /**
                     * 判断参数 P99 是否已赋值
                     * @return P99 是否已赋值
                     * 
                     */
                    bool P99HasBeenSet() const;

                private:

                    /**
                     * <p>时间桶起点，Unix 毫秒。</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>该桶算术平均值。没有样本的桶不返回。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                    /**
                     * <p>50 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p50;
                    bool m_p50HasBeenSet;

                    /**
                     * <p>75 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p75;
                    bool m_p75HasBeenSet;

                    /**
                     * <p>95 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p95;
                    bool m_p95HasBeenSet;

                    /**
                     * <p>99 分位。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_p99;
                    bool m_p99HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEPERCENTILEPOINT_H_
