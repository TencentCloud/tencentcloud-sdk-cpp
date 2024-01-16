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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Dimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 监控数据点
                */
                class DataPoint : public AbstractModel
                {
                public:
                    DataPoint();
                    ~DataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例对象维度组合
                     * @return Dimensions 实例对象维度组合
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置实例对象维度组合
                     * @param _dimensions 实例对象维度组合
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
                     * 获取时间戳数组，表示那些时间点有数据，缺失的时间戳，没有数据点，可以理解为掉点了
                     * @return Timestamps 时间戳数组，表示那些时间点有数据，缺失的时间戳，没有数据点，可以理解为掉点了
                     * 
                     */
                    std::vector<double> GetTimestamps() const;

                    /**
                     * 设置时间戳数组，表示那些时间点有数据，缺失的时间戳，没有数据点，可以理解为掉点了
                     * @param _timestamps 时间戳数组，表示那些时间点有数据，缺失的时间戳，没有数据点，可以理解为掉点了
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
                     * 获取监控值数组，该数组和Timestamps一一对应
                     * @return Values 监控值数组，该数组和Timestamps一一对应
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置监控值数组，该数组和Timestamps一一对应
                     * @param _values 监控值数组，该数组和Timestamps一一对应
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
                     * 获取监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetMaxValues() const;

                    /**
                     * 设置监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetMinValues() const;

                    /**
                     * 设置监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetAvgValues() const;

                    /**
                     * 设置监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgValues 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 实例对象维度组合
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 时间戳数组，表示那些时间点有数据，缺失的时间戳，没有数据点，可以理解为掉点了
                     */
                    std::vector<double> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * 监控值数组，该数组和Timestamps一一对应
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_maxValues;
                    bool m_maxValuesHasBeenSet;

                    /**
                     * 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_minValues;
                    bool m_minValuesHasBeenSet;

                    /**
                     * 监控值数组，该数组和Timestamps一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_avgValues;
                    bool m_avgValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_
