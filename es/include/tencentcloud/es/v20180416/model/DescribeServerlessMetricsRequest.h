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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessMetrics请求参数结构体
                */
                class DescribeServerlessMetricsRequest : public AbstractModel
                {
                public:
                    DescribeServerlessMetricsRequest();
                    ~DescribeServerlessMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取space空间id
                     * @return SpaceId space空间id
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置space空间id
                     * @param _spaceId space空间id
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取index索引id
                     * @return IndexId index索引id
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置index索引id
                     * @param _indexId index索引id
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取指标类型，暂时只支持Storage(存储大小),AllMetric(所有存储指标：索引流量、存储大小、文档数量、读请求和写请求)
                     * @return MetricType 指标类型，暂时只支持Storage(存储大小),AllMetric(所有存储指标：索引流量、存储大小、文档数量、读请求和写请求)
                     * 
                     */
                    std::vector<std::string> GetMetricType() const;

                    /**
                     * 设置指标类型，暂时只支持Storage(存储大小),AllMetric(所有存储指标：索引流量、存储大小、文档数量、读请求和写请求)
                     * @param _metricType 指标类型，暂时只支持Storage(存储大小),AllMetric(所有存储指标：索引流量、存储大小、文档数量、读请求和写请求)
                     * 
                     */
                    void SetMetricType(const std::vector<std::string>& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取时间长度类型DurationType(1: 3小时, 2: 昨天1天,3: 今日0点到现在)
                     * @return DurationType 时间长度类型DurationType(1: 3小时, 2: 昨天1天,3: 今日0点到现在)
                     * 
                     */
                    int64_t GetDurationType() const;

                    /**
                     * 设置时间长度类型DurationType(1: 3小时, 2: 昨天1天,3: 今日0点到现在)
                     * @param _durationType 时间长度类型DurationType(1: 3小时, 2: 昨天1天,3: 今日0点到现在)
                     * 
                     */
                    void SetDurationType(const int64_t& _durationType);

                    /**
                     * 判断参数 DurationType 是否已赋值
                     * @return DurationType 是否已赋值
                     * 
                     */
                    bool DurationTypeHasBeenSet() const;

                    /**
                     * 获取索引数据
                     * @return BatchIndexList 索引数据
                     * 
                     */
                    std::vector<std::string> GetBatchIndexList() const;

                    /**
                     * 设置索引数据
                     * @param _batchIndexList 索引数据
                     * 
                     */
                    void SetBatchIndexList(const std::vector<std::string>& _batchIndexList);

                    /**
                     * 判断参数 BatchIndexList 是否已赋值
                     * @return BatchIndexList 是否已赋值
                     * 
                     */
                    bool BatchIndexListHasBeenSet() const;

                private:

                    /**
                     * space空间id
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * index索引id
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * 指标类型，暂时只支持Storage(存储大小),AllMetric(所有存储指标：索引流量、存储大小、文档数量、读请求和写请求)
                     */
                    std::vector<std::string> m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 时间长度类型DurationType(1: 3小时, 2: 昨天1天,3: 今日0点到现在)
                     */
                    int64_t m_durationType;
                    bool m_durationTypeHasBeenSet;

                    /**
                     * 索引数据
                     */
                    std::vector<std::string> m_batchIndexList;
                    bool m_batchIndexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSREQUEST_H_
