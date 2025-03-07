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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATACURVE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATACURVE_H_

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
                * 指标监控数据曲线
                */
                class MetricDataCurve : public AbstractModel
                {
                public:
                    MetricDataCurve();
                    ~MetricDataCurve() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param _metricName 指标名称
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
                     * 获取指标计算方式
                     * @return MetricFunction 指标计算方式
                     * 
                     */
                    std::string GetMetricFunction() const;

                    /**
                     * 设置指标计算方式
                     * @param _metricFunction 指标计算方式
                     * 
                     */
                    void SetMetricFunction(const std::string& _metricFunction);

                    /**
                     * 判断参数 MetricFunction 是否已赋值
                     * @return MetricFunction 是否已赋值
                     * 
                     */
                    bool MetricFunctionHasBeenSet() const;

                    /**
                     * 获取指标数据点集合
                     * @return MetricDataPoints 指标数据点集合
                     * 
                     */
                    std::vector<MetricDataPoint> GetMetricDataPoints() const;

                    /**
                     * 设置指标数据点集合
                     * @param _metricDataPoints 指标数据点集合
                     * 
                     */
                    void SetMetricDataPoints(const std::vector<MetricDataPoint>& _metricDataPoints);

                    /**
                     * 判断参数 MetricDataPoints 是否已赋值
                     * @return MetricDataPoints 是否已赋值
                     * 
                     */
                    bool MetricDataPointsHasBeenSet() const;

                private:

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标计算方式
                     */
                    std::string m_metricFunction;
                    bool m_metricFunctionHasBeenSet;

                    /**
                     * 指标数据点集合
                     */
                    std::vector<MetricDataPoint> m_metricDataPoints;
                    bool m_metricDataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATACURVE_H_
