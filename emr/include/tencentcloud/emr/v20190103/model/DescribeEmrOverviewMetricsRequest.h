/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEmrOverviewMetrics请求参数结构体
                */
                class DescribeEmrOverviewMetricsRequest : public AbstractModel
                {
                public:
                    DescribeEmrOverviewMetricsRequest();
                    ~DescribeEmrOverviewMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取结束时间
                     * @return End 结束时间
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置结束时间
                     * @param _end 结束时间
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取指标名，NODE.CPU：节点平均CPU利用率和总核数；NODE.CPU.SLHBASE：Serverless实例平均CPU利用率和总核数；HDFS.NN.CAPACITY：存储使用率和总量
                     * @return Metric 指标名，NODE.CPU：节点平均CPU利用率和总核数；NODE.CPU.SLHBASE：Serverless实例平均CPU利用率和总核数；HDFS.NN.CAPACITY：存储使用率和总量
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名，NODE.CPU：节点平均CPU利用率和总核数；NODE.CPU.SLHBASE：Serverless实例平均CPU利用率和总核数；HDFS.NN.CAPACITY：存储使用率和总量
                     * @param _metric 指标名，NODE.CPU：节点平均CPU利用率和总核数；NODE.CPU.SLHBASE：Serverless实例平均CPU利用率和总核数；HDFS.NN.CAPACITY：存储使用率和总量
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取粒度 30s-max 1m-max 1h-max等
                     * @return Downsample 粒度 30s-max 1m-max 1h-max等
                     * 
                     */
                    std::string GetDownsample() const;

                    /**
                     * 设置粒度 30s-max 1m-max 1h-max等
                     * @param _downsample 粒度 30s-max 1m-max 1h-max等
                     * 
                     */
                    void SetDownsample(const std::string& _downsample);

                    /**
                     * 判断参数 Downsample 是否已赋值
                     * @return Downsample 是否已赋值
                     * 
                     */
                    bool DownsampleHasBeenSet() const;

                    /**
                     * 获取起始时间，画饼状图时不传
                     * @return Start 起始时间，画饼状图时不传
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置起始时间，画饼状图时不传
                     * @param _start 起始时间，画饼状图时不传
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取聚合方法，扩展用，这里目前不用传
                     * @return Aggregator 聚合方法，扩展用，这里目前不用传
                     * 
                     */
                    std::string GetAggregator() const;

                    /**
                     * 设置聚合方法，扩展用，这里目前不用传
                     * @param _aggregator 聚合方法，扩展用，这里目前不用传
                     * 
                     */
                    void SetAggregator(const std::string& _aggregator);

                    /**
                     * 判断参数 Aggregator 是否已赋值
                     * @return Aggregator 是否已赋值
                     * 
                     */
                    bool AggregatorHasBeenSet() const;

                    /**
                     * 获取指标要查询的具体type 如："{"type":"CapacityTotal|CapacityRemaining"}"
                     * @return Tags 指标要查询的具体type 如："{"type":"CapacityTotal|CapacityRemaining"}"
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置指标要查询的具体type 如："{"type":"CapacityTotal|CapacityRemaining"}"
                     * @param _tags 指标要查询的具体type 如："{"type":"CapacityTotal|CapacityRemaining"}"
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 结束时间
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 指标名，NODE.CPU：节点平均CPU利用率和总核数；NODE.CPU.SLHBASE：Serverless实例平均CPU利用率和总核数；HDFS.NN.CAPACITY：存储使用率和总量
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 粒度 30s-max 1m-max 1h-max等
                     */
                    std::string m_downsample;
                    bool m_downsampleHasBeenSet;

                    /**
                     * 起始时间，画饼状图时不传
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 聚合方法，扩展用，这里目前不用传
                     */
                    std::string m_aggregator;
                    bool m_aggregatorHasBeenSet;

                    /**
                     * 指标要查询的具体type 如："{"type":"CapacityTotal|CapacityRemaining"}"
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMROVERVIEWMETRICSREQUEST_H_
