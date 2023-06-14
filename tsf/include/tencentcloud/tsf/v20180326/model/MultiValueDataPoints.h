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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MULTIVALUEDATAPOINTS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MULTIVALUEDATAPOINTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MultiValue.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 多值数据点集合
                */
                class MultiValueDataPoints : public AbstractModel
                {
                public:
                    MultiValueDataPoints();
                    ~MultiValueDataPoints() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多值数据点
                     * @return Points 多值数据点
                     * 
                     */
                    std::vector<MultiValue> GetPoints() const;

                    /**
                     * 设置多值数据点
                     * @param _points 多值数据点
                     * 
                     */
                    void SetPoints(const std::vector<MultiValue>& _points);

                    /**
                     * 判断参数 Points 是否已赋值
                     * @return Points 是否已赋值
                     * 
                     */
                    bool PointsHasBeenSet() const;

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
                     * 获取多值数据点key列表，每个值表示当前数据点所在区域的下限
                     * @return PointKeys 多值数据点key列表，每个值表示当前数据点所在区域的下限
                     * 
                     */
                    std::vector<std::string> GetPointKeys() const;

                    /**
                     * 设置多值数据点key列表，每个值表示当前数据点所在区域的下限
                     * @param _pointKeys 多值数据点key列表，每个值表示当前数据点所在区域的下限
                     * 
                     */
                    void SetPointKeys(const std::vector<std::string>& _pointKeys);

                    /**
                     * 判断参数 PointKeys 是否已赋值
                     * @return PointKeys 是否已赋值
                     * 
                     */
                    bool PointKeysHasBeenSet() const;

                private:

                    /**
                     * 多值数据点
                     */
                    std::vector<MultiValue> m_points;
                    bool m_pointsHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 多值数据点key列表，每个值表示当前数据点所在区域的下限
                     */
                    std::vector<std::string> m_pointKeys;
                    bool m_pointKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MULTIVALUEDATAPOINTS_H_
