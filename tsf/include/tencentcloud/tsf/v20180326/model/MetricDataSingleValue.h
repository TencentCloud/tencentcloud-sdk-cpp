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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 单值指标
                */
                class MetricDataSingleValue : public AbstractModel
                {
                public:
                    MetricDataSingleValue();
                    ~MetricDataSingleValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标
                     * @return MetricName 指标
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标
                     * @param _metricName 指标
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
                     * 获取统计方式
                     * @return MetricFunction 统计方式
                     * 
                     */
                    std::string GetMetricFunction() const;

                    /**
                     * 设置统计方式
                     * @param _metricFunction 统计方式
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
                     * 获取指标值
                     * @return MetricDataValue 指标值
                     * 
                     */
                    std::string GetMetricDataValue() const;

                    /**
                     * 设置指标值
                     * @param _metricDataValue 指标值
                     * 
                     */
                    void SetMetricDataValue(const std::string& _metricDataValue);

                    /**
                     * 判断参数 MetricDataValue 是否已赋值
                     * @return MetricDataValue 是否已赋值
                     * 
                     */
                    bool MetricDataValueHasBeenSet() const;

                    /**
                     * 获取日环比
                     * @return DailyPercent 日环比
                     * 
                     */
                    double GetDailyPercent() const;

                    /**
                     * 设置日环比
                     * @param _dailyPercent 日环比
                     * 
                     */
                    void SetDailyPercent(const double& _dailyPercent);

                    /**
                     * 判断参数 DailyPercent 是否已赋值
                     * @return DailyPercent 是否已赋值
                     * 
                     */
                    bool DailyPercentHasBeenSet() const;

                private:

                    /**
                     * 指标
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计方式
                     */
                    std::string m_metricFunction;
                    bool m_metricFunctionHasBeenSet;

                    /**
                     * 指标值
                     */
                    std::string m_metricDataValue;
                    bool m_metricDataValueHasBeenSet;

                    /**
                     * 日环比
                     */
                    double m_dailyPercent;
                    bool m_dailyPercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_METRICDATASINGLEVALUE_H_
