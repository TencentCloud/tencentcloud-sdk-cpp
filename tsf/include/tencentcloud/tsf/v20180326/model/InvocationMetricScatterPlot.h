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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONMETRICSCATTERPLOT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONMETRICSCATTERPLOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MultiValueDataPoints.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 监控数据散点图
                */
                class InvocationMetricScatterPlot : public AbstractModel
                {
                public:
                    InvocationMetricScatterPlot();
                    ~InvocationMetricScatterPlot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间轴截止时间，GMT，精确到毫秒
                     * @return EndTime 时间轴截止时间，GMT，精确到毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置时间轴截止时间，GMT，精确到毫秒
                     * @param _endTime 时间轴截止时间，GMT，精确到毫秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取时间粒度
                     * @return StartTime 时间粒度
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置时间粒度
                     * @param _startTime 时间粒度
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取时间轴开始时间，GMT，精确到毫秒
                     * @return Period 时间轴开始时间，GMT，精确到毫秒
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置时间轴开始时间，GMT，精确到毫秒
                     * @param _period 时间轴开始时间，GMT，精确到毫秒
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取多值数据点集合
                     * @return DataPoints 多值数据点集合
                     * 
                     */
                    std::vector<MultiValueDataPoints> GetDataPoints() const;

                    /**
                     * 设置多值数据点集合
                     * @param _dataPoints 多值数据点集合
                     * 
                     */
                    void SetDataPoints(const std::vector<MultiValueDataPoints>& _dataPoints);

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     * 
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * 时间轴截止时间，GMT，精确到毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 时间粒度
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 时间轴开始时间，GMT，精确到毫秒
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 多值数据点集合
                     */
                    std::vector<MultiValueDataPoints> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INVOCATIONMETRICSCATTERPLOT_H_
