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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/DataPointView.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeJobMonitorData返回参数结构体
                */
                class DescribeJobMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeJobMonitorDataResponse();
                    ~DescribeJobMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监控数据粒度，单位:秒；时间粒度随着查询的时间范围变化，查询时间范围越小，时间粒度越小。
                     * @return Period 监控数据粒度，单位:秒；时间粒度随着查询的时间范围变化，查询时间范围越小，时间粒度越小。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取监控采集的数据。时间戳和对应的值一一对应；如果查询的任务重试，采集时间段涉及多个实例的话，某些时间段内的值为null, 表示对应时间点没有实例存在，也不存在对应的监控数据；相邻监控时间段之间的空值数量最多为10。
                     * @return DataPoints 监控采集的数据。时间戳和对应的值一一对应；如果查询的任务重试，采集时间段涉及多个实例的话，某些时间段内的值为null, 表示对应时间点没有实例存在，也不存在对应的监控数据；相邻监控时间段之间的空值数量最多为10。
                     * 
                     */
                    DataPointView GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * 监控数据粒度，单位:秒；时间粒度随着查询的时间范围变化，查询时间范围越小，时间粒度越小。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 监控采集的数据。时间戳和对应的值一一对应；如果查询的任务重试，采集时间段涉及多个实例的话，某些时间段内的值为null, 表示对应时间点没有实例存在，也不存在对应的监控数据；相邻监控时间段之间的空值数量最多为10。
                     */
                    DataPointView m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBEJOBMONITORDATARESPONSE_H_
