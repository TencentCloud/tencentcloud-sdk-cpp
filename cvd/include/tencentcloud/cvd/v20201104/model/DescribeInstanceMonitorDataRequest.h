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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATAREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Instance.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstanceMonitorData请求参数结构体
                */
                class DescribeInstanceMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeInstanceMonitorDataRequest();
                    ~DescribeInstanceMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例维度组合数组</p>
                     * @return Instances <p>实例维度组合数组</p>
                     * 
                     */
                    std::vector<Instance> GetInstances() const;

                    /**
                     * 设置<p>实例维度组合数组</p>
                     * @param _instances <p>实例维度组合数组</p>
                     * 
                     */
                    void SetInstances(const std::vector<Instance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取<p>命名空间。如QCE/CVM、QCE/BLOCK_STORAGE等</p>
                     * @return NameSpace <p>命名空间。如QCE/CVM、QCE/BLOCK_STORAGE等</p>
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置<p>命名空间。如QCE/CVM、QCE/BLOCK_STORAGE等</p>
                     * @param _nameSpace <p>命名空间。如QCE/CVM、QCE/BLOCK_STORAGE等</p>
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取<p>指标名</p>
                     * @return MetricName <p>指标名</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名</p>
                     * @param _metricName <p>指标名</p>
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
                     * 获取<p>统计周期(时间粒度), 单位s。</p>
                     * @return Period <p>统计周期(时间粒度), 单位s。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>统计周期(时间粒度), 单位s。</p>
                     * @param _period <p>统计周期(时间粒度), 单位s。</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>多种统计方式数据。avg, max, min (1,2,4)可以自由组合</p>
                     * @return SpecifyStatistics <p>多种统计方式数据。avg, max, min (1,2,4)可以自由组合</p>
                     * 
                     */
                    int64_t GetSpecifyStatistics() const;

                    /**
                     * 设置<p>多种统计方式数据。avg, max, min (1,2,4)可以自由组合</p>
                     * @param _specifyStatistics <p>多种统计方式数据。avg, max, min (1,2,4)可以自由组合</p>
                     * 
                     */
                    void SetSpecifyStatistics(const int64_t& _specifyStatistics);

                    /**
                     * 判断参数 SpecifyStatistics 是否已赋值
                     * @return SpecifyStatistics 是否已赋值
                     * 
                     */
                    bool SpecifyStatisticsHasBeenSet() const;

                private:

                    /**
                     * <p>实例维度组合数组</p>
                     */
                    std::vector<Instance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * <p>命名空间。如QCE/CVM、QCE/BLOCK_STORAGE等</p>
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * <p>指标名</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>统计周期(时间粒度), 单位s。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>多种统计方式数据。avg, max, min (1,2,4)可以自由组合</p>
                     */
                    int64_t m_specifyStatistics;
                    bool m_specifyStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEMONITORDATAREQUEST_H_
