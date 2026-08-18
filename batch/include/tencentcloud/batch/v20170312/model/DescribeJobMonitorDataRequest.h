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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Dimension.h>


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
                     * 获取<p>作业ID；JobId详见<a href="https://cloud.tencent.com/document/product/599/15909">作业列表</a></p>
                     * @return JobId <p>作业ID；JobId详见<a href="https://cloud.tencent.com/document/product/599/15909">作业列表</a></p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业ID；JobId详见<a href="https://cloud.tencent.com/document/product/599/15909">作业列表</a></p>
                     * @param _jobId <p>作业ID；JobId详见<a href="https://cloud.tencent.com/document/product/599/15909">作业列表</a></p>
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
                     * 获取<p>作业的Task名称，详见<a href="https://cloud.tencent.com/document/product/599/15904">作业详情</a>。</p>
                     * @return TaskName <p>作业的Task名称，详见<a href="https://cloud.tencent.com/document/product/599/15904">作业详情</a>。</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>作业的Task名称，详见<a href="https://cloud.tencent.com/document/product/599/15904">作业详情</a>。</p>
                     * @param _taskName <p>作业的Task名称，详见<a href="https://cloud.tencent.com/document/product/599/15904">作业详情</a>。</p>
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
                     * 获取<p>作业任务实例的序号，详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a></p>
                     * @return TaskInstanceIndex <p>作业任务实例的序号，详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a></p>
                     * 
                     */
                    int64_t GetTaskInstanceIndex() const;

                    /**
                     * 设置<p>作业任务实例的序号，详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a></p>
                     * @param _taskInstanceIndex <p>作业任务实例的序号，详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a></p>
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
                     * 获取<p>支持查询的指标；当前支持查询的任务指标；</p><ul><li>CpuUsage：cpu利用率，单位：%</li><li>MemUsage：内存利用率，单位：%</li><li>LanOuttraffic：内网出带宽，单位：Bytes/s</li><li>LanIntraffic：内网入带宽，单位：Bytes/s</li><li>MaxDiskUsage：所有磁盘中的使用率最高的磁盘使用率，单位：%</li><li>TargetDiskUsage：指定磁盘的使用率，单位：%；配合Dimensions参数使用</li></ul>
                     * @return MetricName <p>支持查询的指标；当前支持查询的任务指标；</p><ul><li>CpuUsage：cpu利用率，单位：%</li><li>MemUsage：内存利用率，单位：%</li><li>LanOuttraffic：内网出带宽，单位：Bytes/s</li><li>LanIntraffic：内网入带宽，单位：Bytes/s</li><li>MaxDiskUsage：所有磁盘中的使用率最高的磁盘使用率，单位：%</li><li>TargetDiskUsage：指定磁盘的使用率，单位：%；配合Dimensions参数使用</li></ul>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>支持查询的指标；当前支持查询的任务指标；</p><ul><li>CpuUsage：cpu利用率，单位：%</li><li>MemUsage：内存利用率，单位：%</li><li>LanOuttraffic：内网出带宽，单位：Bytes/s</li><li>LanIntraffic：内网入带宽，单位：Bytes/s</li><li>MaxDiskUsage：所有磁盘中的使用率最高的磁盘使用率，单位：%</li><li>TargetDiskUsage：指定磁盘的使用率，单位：%；配合Dimensions参数使用</li></ul>
                     * @param _metricName <p>支持查询的指标；当前支持查询的任务指标；</p><ul><li>CpuUsage：cpu利用率，单位：%</li><li>MemUsage：内存利用率，单位：%</li><li>LanOuttraffic：内网出带宽，单位：Bytes/s</li><li>LanIntraffic：内网入带宽，单位：Bytes/s</li><li>MaxDiskUsage：所有磁盘中的使用率最高的磁盘使用率，单位：%</li><li>TargetDiskUsage：指定磁盘的使用率，单位：%；配合Dimensions参数使用</li></ul>
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
                     * 获取<p>查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。</p>
                     * @return StartTime <p>查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。</p>
                     * @param _startTime <p>查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。</p>
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
                     * 获取<p>查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。</p>
                     * @return EndTime <p>查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。</p>
                     * @param _endTime <p>查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询指标的扩展参数；当前只支持TargetDiskUsage;</p><ul><li>TargetDiskUsage<br>  -支持的查询维度diskname, 维度值为磁盘挂载名，例如vdb；如果不传此参数，默认查询vdb磁盘的使用率。<br>  样例：[{&quot;Name&quot;:&quot;diskname&quot;, &quot;Value&quot;:&quot;vdb&quot;}]</li></ul>
                     * @return Dimensions <p>查询指标的扩展参数；当前只支持TargetDiskUsage;</p><ul><li>TargetDiskUsage<br>  -支持的查询维度diskname, 维度值为磁盘挂载名，例如vdb；如果不传此参数，默认查询vdb磁盘的使用率。<br>  样例：[{&quot;Name&quot;:&quot;diskname&quot;, &quot;Value&quot;:&quot;vdb&quot;}]</li></ul>
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置<p>查询指标的扩展参数；当前只支持TargetDiskUsage;</p><ul><li>TargetDiskUsage<br>  -支持的查询维度diskname, 维度值为磁盘挂载名，例如vdb；如果不传此参数，默认查询vdb磁盘的使用率。<br>  样例：[{&quot;Name&quot;:&quot;diskname&quot;, &quot;Value&quot;:&quot;vdb&quot;}]</li></ul>
                     * @param _dimensions <p>查询指标的扩展参数；当前只支持TargetDiskUsage;</p><ul><li>TargetDiskUsage<br>  -支持的查询维度diskname, 维度值为磁盘挂载名，例如vdb；如果不传此参数，默认查询vdb磁盘的使用率。<br>  样例：[{&quot;Name&quot;:&quot;diskname&quot;, &quot;Value&quot;:&quot;vdb&quot;}]</li></ul>
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * <p>作业ID；JobId详见<a href="https://cloud.tencent.com/document/product/599/15909">作业列表</a></p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>作业的Task名称，详见<a href="https://cloud.tencent.com/document/product/599/15904">作业详情</a>。</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>作业任务实例的序号，详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a></p>
                     */
                    int64_t m_taskInstanceIndex;
                    bool m_taskInstanceIndexHasBeenSet;

                    /**
                     * <p>支持查询的指标；当前支持查询的任务指标；</p><ul><li>CpuUsage：cpu利用率，单位：%</li><li>MemUsage：内存利用率，单位：%</li><li>LanOuttraffic：内网出带宽，单位：Bytes/s</li><li>LanIntraffic：内网入带宽，单位：Bytes/s</li><li>MaxDiskUsage：所有磁盘中的使用率最高的磁盘使用率，单位：%</li><li>TargetDiskUsage：指定磁盘的使用率，单位：%；配合Dimensions参数使用</li></ul>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>查询任务实例的起始时间；如果未传入查询起始时间或传入的时间小于任务实例的创建时间（任务实例创建时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），会自动将查询时间调整到任务实例的创建时间。传入时间格式只支持零时区格式。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询任务实例的终止时间；如果未传入查询终止时间或传入的时间大于任务实例的终止时间（任务实例终止时间详见<a href="https://cloud.tencent.com/document/product/599/15905">任务详情</a>），并且任务实例已经结束，会自动将查询终止时间调整到任务实例的终止时间；如果任务实例未结束，会自动将查询终止时间调整到当前时间。传入时间格式只支持零时区格式。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询指标的扩展参数；当前只支持TargetDiskUsage;</p><ul><li>TargetDiskUsage<br>  -支持的查询维度diskname, 维度值为磁盘挂载名，例如vdb；如果不传此参数，默认查询vdb磁盘的使用率。<br>  样例：[{&quot;Name&quot;:&quot;diskname&quot;, &quot;Value&quot;:&quot;vdb&quot;}]</li></ul>
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATAREQUEST_H_
