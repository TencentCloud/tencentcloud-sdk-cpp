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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_PODSMETRICSOURCE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_PODSMETRICSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * PodsMetricSource 定义了如何根据特定指标进行扩缩容
                */
                class PodsMetricSource : public AbstractModel
                {
                public:
                    PodsMetricSource();
                    ~PodsMetricSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
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
                     * 获取目标值
                     * @return TargetAverageValue 目标值
                     * 
                     */
                    std::string GetTargetAverageValue() const;

                    /**
                     * 设置目标值
                     * @param _targetAverageValue 目标值
                     * 
                     */
                    void SetTargetAverageValue(const std::string& _targetAverageValue);

                    /**
                     * 判断参数 TargetAverageValue 是否已赋值
                     * @return TargetAverageValue 是否已赋值
                     * 
                     */
                    bool TargetAverageValueHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 目标值
                     */
                    std::string m_targetAverageValue;
                    bool m_targetAverageValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_PODSMETRICSOURCE_H_
