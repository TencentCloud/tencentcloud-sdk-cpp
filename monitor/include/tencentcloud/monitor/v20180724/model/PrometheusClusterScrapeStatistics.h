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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERSCRAPESTATISTICS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERSCRAPESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusJobScrapeStatistics.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 集群指标抓取统计
                */
                class PrometheusClusterScrapeStatistics : public AbstractModel
                {
                public:
                    PrometheusClusterScrapeStatistics();
                    ~PrometheusClusterScrapeStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

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
                     * 获取Job列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Jobs Job列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusJobScrapeStatistics> GetJobs() const;

                    /**
                     * 设置Job列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobs Job列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobs(const std::vector<PrometheusJobScrapeStatistics>& _jobs);

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                    /**
                     * 获取过滤前的指标采集速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SamplesRate 过滤前的指标采集速率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSamplesRate() const;

                    /**
                     * 设置过滤前的指标采集速率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _samplesRate 过滤前的指标采集速率
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

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 被采集的点数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_scrapedRate;
                    bool m_scrapedRateHasBeenSet;

                    /**
                     * Job列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusJobScrapeStatistics> m_jobs;
                    bool m_jobsHasBeenSet;

                    /**
                     * 过滤前的指标采集速率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_samplesRate;
                    bool m_samplesRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSCLUSTERSCRAPESTATISTICS_H_
