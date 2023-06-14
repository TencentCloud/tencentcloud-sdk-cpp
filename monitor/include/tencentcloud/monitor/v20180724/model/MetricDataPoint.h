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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICDATAPOINT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICDATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Dimension.h>
#include <tencentcloud/monitor/v20180724/model/Point.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeMetricData出参
                */
                class MetricDataPoint : public AbstractModel
                {
                public:
                    MetricDataPoint();
                    ~MetricDataPoint() = default;
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
                     * 获取数据点列表
                     * @return Values 数据点列表
                     * 
                     */
                    std::vector<Point> GetValues() const;

                    /**
                     * 设置数据点列表
                     * @param _values 数据点列表
                     * 
                     */
                    void SetValues(const std::vector<Point>& _values);

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
                     * 数据点列表
                     */
                    std::vector<Point> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICDATAPOINT_H_
