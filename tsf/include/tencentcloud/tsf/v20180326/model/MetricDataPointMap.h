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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATAPOINTMAP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATAPOINTMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDataPoint.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 监控统计数据点Map集合（单元化网关使用）
                */
                class MetricDataPointMap : public AbstractModel
                {
                public:
                    MetricDataPointMap();
                    ~MetricDataPointMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总调用次数监控数据点集合
                     * @return SumReqAmount 总调用次数监控数据点集合
                     * 
                     */
                    std::vector<MetricDataPoint> GetSumReqAmount() const;

                    /**
                     * 设置总调用次数监控数据点集合
                     * @param _sumReqAmount 总调用次数监控数据点集合
                     * 
                     */
                    void SetSumReqAmount(const std::vector<MetricDataPoint>& _sumReqAmount);

                    /**
                     * 判断参数 SumReqAmount 是否已赋值
                     * @return SumReqAmount 是否已赋值
                     * 
                     */
                    bool SumReqAmountHasBeenSet() const;

                    /**
                     * 获取平均错误率监控数据点集合
                     * @return AvgFailureRate 平均错误率监控数据点集合
                     * 
                     */
                    std::vector<MetricDataPoint> GetAvgFailureRate() const;

                    /**
                     * 设置平均错误率监控数据点集合
                     * @param _avgFailureRate 平均错误率监控数据点集合
                     * 
                     */
                    void SetAvgFailureRate(const std::vector<MetricDataPoint>& _avgFailureRate);

                    /**
                     * 判断参数 AvgFailureRate 是否已赋值
                     * @return AvgFailureRate 是否已赋值
                     * 
                     */
                    bool AvgFailureRateHasBeenSet() const;

                    /**
                     * 获取平均响应时间监控数据点集合
                     * @return AvgTimeCost 平均响应时间监控数据点集合
                     * 
                     */
                    std::vector<MetricDataPoint> GetAvgTimeCost() const;

                    /**
                     * 设置平均响应时间监控数据点集合
                     * @param _avgTimeCost 平均响应时间监控数据点集合
                     * 
                     */
                    void SetAvgTimeCost(const std::vector<MetricDataPoint>& _avgTimeCost);

                    /**
                     * 判断参数 AvgTimeCost 是否已赋值
                     * @return AvgTimeCost 是否已赋值
                     * 
                     */
                    bool AvgTimeCostHasBeenSet() const;

                private:

                    /**
                     * 总调用次数监控数据点集合
                     */
                    std::vector<MetricDataPoint> m_sumReqAmount;
                    bool m_sumReqAmountHasBeenSet;

                    /**
                     * 平均错误率监控数据点集合
                     */
                    std::vector<MetricDataPoint> m_avgFailureRate;
                    bool m_avgFailureRateHasBeenSet;

                    /**
                     * 平均响应时间监控数据点集合
                     */
                    std::vector<MetricDataPoint> m_avgTimeCost;
                    bool m_avgTimeCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATAPOINTMAP_H_
