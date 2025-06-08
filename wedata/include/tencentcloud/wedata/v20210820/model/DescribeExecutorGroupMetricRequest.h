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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTORGROUPMETRICREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTORGROUPMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeExecutorGroupMetric请求参数结构体
                */
                class DescribeExecutorGroupMetricRequest : public AbstractModel
                {
                public:
                    DescribeExecutorGroupMetricRequest();
                    ~DescribeExecutorGroupMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源组id
                     * @return ExecutorGroupId 执行资源组id
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param _executorGroupId 执行资源组id
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取使用趋势开始时间(毫秒)
                     * @return TrendStartTime 使用趋势开始时间(毫秒)
                     * 
                     */
                    int64_t GetTrendStartTime() const;

                    /**
                     * 设置使用趋势开始时间(毫秒)
                     * @param _trendStartTime 使用趋势开始时间(毫秒)
                     * 
                     */
                    void SetTrendStartTime(const int64_t& _trendStartTime);

                    /**
                     * 判断参数 TrendStartTime 是否已赋值
                     * @return TrendStartTime 是否已赋值
                     * 
                     */
                    bool TrendStartTimeHasBeenSet() const;

                    /**
                     * 获取使用趋势结束时间(毫秒)
                     * @return TrendEndTime 使用趋势结束时间(毫秒)
                     * 
                     */
                    int64_t GetTrendEndTime() const;

                    /**
                     * 设置使用趋势结束时间(毫秒)
                     * @param _trendEndTime 使用趋势结束时间(毫秒)
                     * 
                     */
                    void SetTrendEndTime(const int64_t& _trendEndTime);

                    /**
                     * 判断参数 TrendEndTime 是否已赋值
                     * @return TrendEndTime 是否已赋值
                     * 
                     */
                    bool TrendEndTimeHasBeenSet() const;

                    /**
                     * 获取执行资源组类型
                     * @return ExecutorGroupType 执行资源组类型
                     * 
                     */
                    std::string GetExecutorGroupType() const;

                    /**
                     * 设置执行资源组类型
                     * @param _executorGroupType 执行资源组类型
                     * 
                     */
                    void SetExecutorGroupType(const std::string& _executorGroupType);

                    /**
                     * 判断参数 ExecutorGroupType 是否已赋值
                     * @return ExecutorGroupType 是否已赋值
                     * 
                     */
                    bool ExecutorGroupTypeHasBeenSet() const;

                    /**
                     * 获取执行资源类型
                     * @return ExecutorResourceType 执行资源类型
                     * 
                     */
                    std::string GetExecutorResourceType() const;

                    /**
                     * 设置执行资源类型
                     * @param _executorResourceType 执行资源类型
                     * 
                     */
                    void SetExecutorResourceType(const std::string& _executorResourceType);

                    /**
                     * 判断参数 ExecutorResourceType 是否已赋值
                     * @return ExecutorResourceType 是否已赋值
                     * 
                     */
                    bool ExecutorResourceTypeHasBeenSet() const;

                    /**
                     * 获取执行机ID
                     * @return LoaderId 执行机ID
                     * 
                     */
                    std::string GetLoaderId() const;

                    /**
                     * 设置执行机ID
                     * @param _loaderId 执行机ID
                     * 
                     */
                    void SetLoaderId(const std::string& _loaderId);

                    /**
                     * 判断参数 LoaderId 是否已赋值
                     * @return LoaderId 是否已赋值
                     * 
                     */
                    bool LoaderIdHasBeenSet() const;

                    /**
                     * 获取指标维度
                     * @return MetricType 指标维度
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标维度
                     * @param _metricType 指标维度
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取指标采集粒度
                     * @return Granularity 指标采集粒度
                     * 
                     */
                    int64_t GetGranularity() const;

                    /**
                     * 设置指标采集粒度
                     * @param _granularity 指标采集粒度
                     * 
                     */
                    void SetGranularity(const int64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * 执行资源组id
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 使用趋势开始时间(毫秒)
                     */
                    int64_t m_trendStartTime;
                    bool m_trendStartTimeHasBeenSet;

                    /**
                     * 使用趋势结束时间(毫秒)
                     */
                    int64_t m_trendEndTime;
                    bool m_trendEndTimeHasBeenSet;

                    /**
                     * 执行资源组类型
                     */
                    std::string m_executorGroupType;
                    bool m_executorGroupTypeHasBeenSet;

                    /**
                     * 执行资源类型
                     */
                    std::string m_executorResourceType;
                    bool m_executorResourceTypeHasBeenSet;

                    /**
                     * 执行机ID
                     */
                    std::string m_loaderId;
                    bool m_loaderIdHasBeenSet;

                    /**
                     * 指标维度
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 指标采集粒度
                     */
                    int64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTORGROUPMETRICREQUEST_H_
