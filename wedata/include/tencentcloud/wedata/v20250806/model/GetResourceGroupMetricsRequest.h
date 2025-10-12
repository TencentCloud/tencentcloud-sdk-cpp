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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetResourceGroupMetrics请求参数结构体
                */
                class GetResourceGroupMetricsRequest : public AbstractModel
                {
                public:
                    GetResourceGroupMetricsRequest();
                    ~GetResourceGroupMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行资源组id
                     * @return ResourceGroupId 执行资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置执行资源组id
                     * @param _resourceGroupId 执行资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取使用趋势开始时间(毫秒)，默认最近一小时
                     * @return StartTime 使用趋势开始时间(毫秒)，默认最近一小时
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置使用趋势开始时间(毫秒)，默认最近一小时
                     * @param _startTime 使用趋势开始时间(毫秒)，默认最近一小时
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取使用趋势结束时间(毫秒)，默认当前
                     * @return EndTime 使用趋势结束时间(毫秒)，默认当前
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置使用趋势结束时间(毫秒)，默认当前
                     * @param _endTime 使用趋势结束时间(毫秒)，默认当前
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指标维度

- all --- 全部
- task --- 任务指标
- system --- 系统指标
                     * @return MetricType 指标维度

- all --- 全部
- task --- 任务指标
- system --- 系统指标
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标维度

- all --- 全部
- task --- 任务指标
- system --- 系统指标
                     * @param _metricType 指标维度

- all --- 全部
- task --- 任务指标
- system --- 系统指标
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
                     * 获取指标采集粒度，单位分钟，默认 1分钟
                     * @return Granularity 指标采集粒度，单位分钟，默认 1分钟
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置指标采集粒度，单位分钟，默认 1分钟
                     * @param _granularity 指标采集粒度，单位分钟，默认 1分钟
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

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
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 使用趋势开始时间(毫秒)，默认最近一小时
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 使用趋势结束时间(毫秒)，默认当前
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指标维度

- all --- 全部
- task --- 任务指标
- system --- 系统指标
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 指标采集粒度，单位分钟，默认 1分钟
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_
