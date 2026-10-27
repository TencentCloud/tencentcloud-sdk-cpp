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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DATAPOINT_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Dimension.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 监控数据
                */
                class DataPoint : public AbstractModel
                {
                public:
                    DataPoint();
                    ~DataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例对象维度组合</p>
                     * @return Dimensions <p>实例对象维度组合</p>
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置<p>实例对象维度组合</p>
                     * @param _dimensions <p>实例对象维度组合</p>
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取<p>时间戳数组</p>
                     * @return Timestamps <p>时间戳数组</p>
                     * 
                     */
                    std::vector<double> GetTimestamps() const;

                    /**
                     * 设置<p>时间戳数组</p>
                     * @param _timestamps <p>时间戳数组</p>
                     * 
                     */
                    void SetTimestamps(const std::vector<double>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取<p>监控值数组，与Timestamps一一对应</p>
                     * @return Values <p>监控值数组，与Timestamps一一对应</p>
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置<p>监控值数组，与Timestamps一一对应</p>
                     * @param _values <p>监控值数组，与Timestamps一一对应</p>
                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>MaxValues 最大值数组，与Timestamps一一对应</p>
                     * @return MaxValues <p>MaxValues 最大值数组，与Timestamps一一对应</p>
                     * 
                     */
                    std::vector<double> GetMaxValues() const;

                    /**
                     * 设置<p>MaxValues 最大值数组，与Timestamps一一对应</p>
                     * @param _maxValues <p>MaxValues 最大值数组，与Timestamps一一对应</p>
                     * 
                     */
                    void SetMaxValues(const std::vector<double>& _maxValues);

                    /**
                     * 判断参数 MaxValues 是否已赋值
                     * @return MaxValues 是否已赋值
                     * 
                     */
                    bool MaxValuesHasBeenSet() const;

                    /**
                     * 获取<p>MinValues 最小值数组，与Timestamps一一对应</p>
                     * @return MinValues <p>MinValues 最小值数组，与Timestamps一一对应</p>
                     * 
                     */
                    std::vector<double> GetMinValues() const;

                    /**
                     * 设置<p>MinValues 最小值数组，与Timestamps一一对应</p>
                     * @param _minValues <p>MinValues 最小值数组，与Timestamps一一对应</p>
                     * 
                     */
                    void SetMinValues(const std::vector<double>& _minValues);

                    /**
                     * 判断参数 MinValues 是否已赋值
                     * @return MinValues 是否已赋值
                     * 
                     */
                    bool MinValuesHasBeenSet() const;

                    /**
                     * 获取<p>AvgValues 平均值数组，与Timestamps一一对应</p>
                     * @return AvgValues <p>AvgValues 平均值数组，与Timestamps一一对应</p>
                     * 
                     */
                    std::vector<double> GetAvgValues() const;

                    /**
                     * 设置<p>AvgValues 平均值数组，与Timestamps一一对应</p>
                     * @param _avgValues <p>AvgValues 平均值数组，与Timestamps一一对应</p>
                     * 
                     */
                    void SetAvgValues(const std::vector<double>& _avgValues);

                    /**
                     * 判断参数 AvgValues 是否已赋值
                     * @return AvgValues 是否已赋值
                     * 
                     */
                    bool AvgValuesHasBeenSet() const;

                private:

                    /**
                     * <p>实例对象维度组合</p>
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>时间戳数组</p>
                     */
                    std::vector<double> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * <p>监控值数组，与Timestamps一一对应</p>
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>MaxValues 最大值数组，与Timestamps一一对应</p>
                     */
                    std::vector<double> m_maxValues;
                    bool m_maxValuesHasBeenSet;

                    /**
                     * <p>MinValues 最小值数组，与Timestamps一一对应</p>
                     */
                    std::vector<double> m_minValues;
                    bool m_minValuesHasBeenSet;

                    /**
                     * <p>AvgValues 平均值数组，与Timestamps一一对应</p>
                     */
                    std::vector<double> m_avgValues;
                    bool m_avgValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DATAPOINT_H_
