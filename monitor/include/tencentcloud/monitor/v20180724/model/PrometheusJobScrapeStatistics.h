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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSJOBSCRAPESTATISTICS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSJOBSCRAPESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusMetricScrapeStatistics.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Job抓取统计
                */
                class PrometheusJobScrapeStatistics : public AbstractModel
                {
                public:
                    PrometheusJobScrapeStatistics();
                    ~PrometheusJobScrapeStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job 名
                     * @return JobName Job 名
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Job 名
                     * @param _jobName Job 名
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取被采集的点数
                     * @return ScrapedRate 被采集的点数
                     * 
                     */
                    double GetScrapedRate() const;

                    /**
                     * 设置被采集的点数
                     * @param _scrapedRate 被采集的点数
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
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusMetricScrapeStatistics> GetMetrics() const;

                    /**
                     * 设置指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetrics(const std::vector<PrometheusMetricScrapeStatistics>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Job 类型
                     * @return JobType Job 类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Job 类型
                     * @param _jobType Job 类型
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                private:

                    /**
                     * Job 名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 被采集的点数
                     */
                    double m_scrapedRate;
                    bool m_scrapedRateHasBeenSet;

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusMetricScrapeStatistics> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Job 类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSJOBSCRAPESTATISTICS_H_
