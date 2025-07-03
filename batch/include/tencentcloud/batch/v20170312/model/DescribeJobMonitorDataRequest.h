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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJobMonitorData请求参数结构体
                */
                class DescribeJobMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeJobMonitorDataRequest();
                    ~DescribeJobMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @return JobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * @param _jobId 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业的Task名称，详见[作业详情](https://cloud.tencent.com/document/product/599/15904)。
                     * @return TaskName 作业的Task名称，详见[作业详情](https://cloud.tencent.com/document/product/599/15904)。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置作业的Task名称，详见[作业详情](https://cloud.tencent.com/document/product/599/15904)。
                     * @param _taskName 作业的Task名称，详见[作业详情](https://cloud.tencent.com/document/product/599/15904)。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取作业任务实例的序号，详见[任务详情](https://cloud.tencent.com/document/product/599/15905)
                     * @return TaskInstanceIndex 作业任务实例的序号，详见[任务详情](https://cloud.tencent.com/document/product/599/15905)
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置作业任务实例的序号，详见[任务详情](https://cloud.tencent.com/document/product/599/15905)
                     * @param _taskInstanceIndex 作业任务实例的序号，详见[任务详情](https://cloud.tencent.com/document/product/599/15905)
                     * 
                     */
                    void SetTaskInstanceIndex(const int64_t& _taskInstanceIndex);

                    /**
                     * 判断参数 TaskInstanceIndex 是否已赋值
                     * @return TaskInstanceIndex 是否已赋值
                     * 
                     */
                    bool TaskInstanceIndexHasBeenSet() const;

                    /**
                     * 获取支持查询的指标；当前支持查询的任务指标；

- CpuUsage：cpu利用率，单位：%
- MemUsage：内存利用率，单位：%
- LanOuttraffic：内网出带宽，单位：Bytes/s
- LanIntraffic：内网入带宽，单位：Bytes/s
                     * @return MetricName 支持查询的指标；当前支持查询的任务指标；

- CpuUsage：cpu利用率，单位：%
- MemUsage：内存利用率，单位：%
- LanOuttraffic：内网出带宽，单位：Bytes/s
- LanIntraffic：内网入带宽，单位：Bytes/s
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置支持查询的指标；当前支持查询的任务指标；

- CpuUsage：cpu利用率，单位：%
- MemUsage：内存利用率，单位：%
- LanOuttraffic：内网出带宽，单位：Bytes/s
- LanIntraffic：内网入带宽，单位：Bytes/s
                     * @param _metricName 支持查询的指标；当前支持查询的任务指标；

- CpuUsage：cpu利用率，单位：%
- MemUsage：内存利用率，单位：%
- LanOuttraffic：内网出带宽，单位：Bytes/s
- LanIntraffic：内网入带宽，单位：Bytes/s
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
                     * 获取查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。
                     * @return StartTime 查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。
                     * @param _startTime 查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。
                     * @return EndTime 查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。
                     * @param _endTime 查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 作业ID；JobId详见[作业列表](https://cloud.tencent.com/document/product/599/15909)
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业的Task名称，详见[作业详情](https://cloud.tencent.com/document/product/599/15904)。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 作业任务实例的序号，详见[任务详情](https://cloud.tencent.com/document/product/599/15905)
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * 支持查询的指标；当前支持查询的任务指标；

- CpuUsage：cpu利用率，单位：%
- MemUsage：内存利用率，单位：%
- LanOuttraffic：内网出带宽，单位：Bytes/s
- LanIntraffic：内网入带宽，单位：Bytes/s
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见[任务详情](https://cloud.tencent.com/document/product/599/15905)），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
