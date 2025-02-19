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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DATAPOINT_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/Dimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DATAPOINT_H_
