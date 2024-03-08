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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_

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
                * DescribeRocketMQPublicAccessMonitorData请求参数结构体
                */
                class DescribeRocketMQPublicAccessMonitorDataRequest : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessMonitorDataRequest();
                    ~DescribeRocketMQPublicAccessMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专享集群ID
                     * @return InstanceId 专享集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置专享集群ID
                     * @param _instanceId 专享集群ID
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
                     * 获取指标名称，仅支持单指标拉取。目前仅支持：ClientIntraffic; ClientOuttraffic
                     * @return MetricName 指标名称，仅支持单指标拉取。目前仅支持：ClientIntraffic; ClientOuttraffic
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称，仅支持单指标拉取。目前仅支持：ClientIntraffic; ClientOuttraffic
                     * @param _metricName 指标名称，仅支持单指标拉取。目前仅支持：ClientIntraffic; ClientOuttraffic
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
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
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
                     * 获取结束时间，默认为当前时间
                     * @return EndTime 结束时间，默认为当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，默认为当前时间
                     * @param _endTime 结束时间，默认为当前时间
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
                     * 获取监控统计周期，如60。默认为取值为300，单位为s。
                     * @return Period 监控统计周期，如60。默认为取值为300，单位为s。
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置监控统计周期，如60。默认为取值为300，单位为s。
                     * @param _period 监控统计周期，如60。默认为取值为300，单位为s。
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 专享集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指标名称，仅支持单指标拉取。目前仅支持：ClientIntraffic; ClientOuttraffic
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 监控统计周期，如60。默认为取值为300，单位为s。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATAREQUEST_H_
