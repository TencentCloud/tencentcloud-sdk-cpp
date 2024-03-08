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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQDataPoint.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQPublicAccessMonitorData返回参数结构体
                */
                class DescribeRocketMQPublicAccessMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessMonitorDataResponse();
                    ~DescribeRocketMQPublicAccessMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取监控统计周期，如60。默认为取值为300，单位为s。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 监控统计周期，如60。默认为取值为300，单位为s。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取起始时间，如2018-09-22T19:51:23+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 起始时间，如2018-09-22T19:51:23+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取数据点数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataPoints 数据点数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQDataPoint> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                    /**
                     * 获取返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 监控统计周期，如60。默认为取值为300，单位为s。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 起始时间，如2018-09-22T19:51:23+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如2018-09-22T20:51:23+08:00，默认为当前时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据点数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQDataPoint> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                    /**
                     * 返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSMONITORDATARESPONSE_H_
