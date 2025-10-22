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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSMETRICSCRAPESTATISTICS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSMETRICSCRAPESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 指标抓取统计
                */
                class PrometheusMetricScrapeStatistics : public AbstractModel
                {
                public:
                    PrometheusMetricScrapeStatistics();
                    ~PrometheusMetricScrapeStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取原始数据中的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SamplesRate 原始数据中的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSamplesRate() const;

                    /**
                     * 设置原始数据中的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _samplesRate 原始数据中的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSamplesRate(const double& _samplesRate);

                    /**
                     * 判断参数 SamplesRate 是否已赋值
                     * @return SamplesRate 是否已赋值
                     * 
                     */
                    bool SamplesRateHasBeenSet() const;

                    /**
                     * 获取被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScrapedRate 被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScrapedRate() const;

                    /**
                     * 设置被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scrapedRate 被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScrapedRate(const double& _scrapedRate);

                    /**
                     * 判断参数 ScrapedRate 是否已赋值
                     * @return ScrapedRate 是否已赋值
                     * 
                     */
                    bool ScrapedRateHasBeenSet() const;

                    /**
                     * 获取是否推荐采集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRecommended 是否推荐采集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsRecommended() const;

                    /**
                     * 设置是否推荐采集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRecommended 是否推荐采集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsRecommended(const bool& _isRecommended);

                    /**
                     * 判断参数 IsRecommended 是否已赋值
                     * @return IsRecommended 是否已赋值
                     * 
                     */
                    bool IsRecommendedHasBeenSet() const;

                private:

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 原始数据中的点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_samplesRate;
                    bool m_samplesRateHasBeenSet;

                    /**
                     * 被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_scrapedRate;
                    bool m_scrapedRateHasBeenSet;

                    /**
                     * 是否推荐采集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isRecommended;
                    bool m_isRecommendedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSMETRICSCRAPESTATISTICS_H_
