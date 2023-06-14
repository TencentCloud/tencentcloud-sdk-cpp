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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORMETRICSERIESDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORMETRICSERIESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MonitorMetric.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 单位时间间隔内的监控指标数据
                */
                class MonitorMetricSeriesData : public AbstractModel
                {
                public:
                    MonitorMetricSeriesData();
                    ~MonitorMetricSeriesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控指标。
                     * @return Series 监控指标。
                     * 
                     */
                    std::vector<MonitorMetric> GetSeries() const;

                    /**
                     * 设置监控指标。
                     * @param _series 监控指标。
                     * 
                     */
                    void SetSeries(const std::vector<MonitorMetric>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取监控指标对应的时间戳。
                     * @return Timestamp 监控指标对应的时间戳。
                     * 
                     */
                    std::vector<int64_t> GetTimestamp() const;

                    /**
                     * 设置监控指标对应的时间戳。
                     * @param _timestamp 监控指标对应的时间戳。
                     * 
                     */
                    void SetTimestamp(const std::vector<int64_t>& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 监控指标。
                     */
                    std::vector<MonitorMetric> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * 监控指标对应的时间戳。
                     */
                    std::vector<int64_t> m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONITORMETRICSERIESDATA_H_
