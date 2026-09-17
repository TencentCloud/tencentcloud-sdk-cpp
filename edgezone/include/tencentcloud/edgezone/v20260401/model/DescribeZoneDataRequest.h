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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeZoneData请求参数结构体
                */
                class DescribeZoneDataRequest : public AbstractModel
                {
                public:
                    DescribeZoneDataRequest();
                    ~DescribeZoneDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取区id
                     * @return Zone 区id
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区id
                     * @param _zone 区id
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取指标名(inbw:入带宽，outbw:出带宽)
                     * @return MetricName 指标名(inbw:入带宽，outbw:出带宽)
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名(inbw:入带宽，outbw:出带宽)
                     * @param _metricName 指标名(inbw:入带宽，outbw:出带宽)
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
                     * 获取开始时间（UTC时间:0时区）
                     * @return StartTime 开始时间（UTC时间:0时区）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（UTC时间:0时区）
                     * @param _startTime 开始时间（UTC时间:0时区）
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
                     * 获取结束时间（UTC时间:0时区）,最多查询2天时间
                     * @return EndTime 结束时间（UTC时间:0时区）,最多查询2天时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（UTC时间:0时区）,最多查询2天时间
                     * @param _endTime 结束时间（UTC时间:0时区）,最多查询2天时间
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
                     * 区id
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 指标名(inbw:入带宽，outbw:出带宽)
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 开始时间（UTC时间:0时区）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（UTC时间:0时区）,最多查询2天时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_
