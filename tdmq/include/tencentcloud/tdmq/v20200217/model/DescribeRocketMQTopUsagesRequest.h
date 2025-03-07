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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQTopUsages请求参数结构体
                */
                class DescribeRocketMQTopUsagesRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQTopUsagesRequest();
                    ~DescribeRocketMQTopUsagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取指标名称，支持以下：
consumeLag，消费组堆积数量
deadLetterCount，死信数量
topicRateIn,   Topic生产速率
topicRateOut，Topic消费速率
topicStorageSize，Topic存储空间
topicApiCalls，Topic API调用次数
                     * @return MetricName 指标名称，支持以下：
consumeLag，消费组堆积数量
deadLetterCount，死信数量
topicRateIn,   Topic生产速率
topicRateOut，Topic消费速率
topicStorageSize，Topic存储空间
topicApiCalls，Topic API调用次数
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称，支持以下：
consumeLag，消费组堆积数量
deadLetterCount，死信数量
topicRateIn,   Topic生产速率
topicRateOut，Topic消费速率
topicStorageSize，Topic存储空间
topicApiCalls，Topic API调用次数
                     * @param _metricName 指标名称，支持以下：
consumeLag，消费组堆积数量
deadLetterCount，死信数量
topicRateIn,   Topic生产速率
topicRateOut，Topic消费速率
topicStorageSize，Topic存储空间
topicApiCalls，Topic API调用次数
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
                     * 获取排序数量，最大20
                     * @return Limit 排序数量，最大20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置排序数量，最大20
                     * @param _limit 排序数量，最大20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 指标名称，支持以下：
consumeLag，消费组堆积数量
deadLetterCount，死信数量
topicRateIn,   Topic生产速率
topicRateOut，Topic消费速率
topicStorageSize，Topic存储空间
topicApiCalls，Topic API调用次数
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 排序数量，最大20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQTOPUSAGESREQUEST_H_
