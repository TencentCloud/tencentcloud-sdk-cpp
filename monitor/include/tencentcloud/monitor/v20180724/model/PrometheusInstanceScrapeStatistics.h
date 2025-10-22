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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESCRAPESTATISTICS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESCRAPESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusClusterScrapeStatistics.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 实例抓取指标统计
                */
                class PrometheusInstanceScrapeStatistics : public AbstractModel
                {
                public:
                    PrometheusInstanceScrapeStatistics();
                    ~PrometheusInstanceScrapeStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取集群指标列表
                     * @return Clusters 集群指标列表
                     * 
                     */
                    std::vector<PrometheusClusterScrapeStatistics> GetClusters() const;

                    /**
                     * 设置集群指标列表
                     * @param _clusters 集群指标列表
                     * 
                     */
                    void SetClusters(const std::vector<PrometheusClusterScrapeStatistics>& _clusters);

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                    /**
                     * 获取非容器指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Global 非容器指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusClusterScrapeStatistics> GetGlobal() const;

                    /**
                     * 设置非容器指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _global 非容器指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGlobal(const std::vector<PrometheusClusterScrapeStatistics>& _global);

                    /**
                     * 判断参数 Global 是否已赋值
                     * @return Global 是否已赋值
                     * 
                     */
                    bool GlobalHasBeenSet() const;

                    /**
                     * 获取过滤前的指标采集速率
                     * @return SamplesRate 过滤前的指标采集速率
                     * 
                     */
                    double GetSamplesRate() const;

                    /**
                     * 设置过滤前的指标采集速率
                     * @param _samplesRate 过滤前的指标采集速率
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 被采集的点数
                     */
                    double m_scrapedRate;
                    bool m_scrapedRateHasBeenSet;

                    /**
                     * 集群指标列表
                     */
                    std::vector<PrometheusClusterScrapeStatistics> m_clusters;
                    bool m_clustersHasBeenSet;

                    /**
                     * 非容器指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusClusterScrapeStatistics> m_global;
                    bool m_globalHasBeenSet;

                    /**
                     * 过滤前的指标采集速率
                     */
                    double m_samplesRate;
                    bool m_samplesRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESCRAPESTATISTICS_H_
