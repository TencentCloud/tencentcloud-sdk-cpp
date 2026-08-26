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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_SHIELDMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_SHIELDMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警屏蔽的指标
                */
                class ShieldMetric : public AbstractModel
                {
                public:
                    ShieldMetric();
                    ~ShieldMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取屏蔽指标
                     * @return Metric 屏蔽指标
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置屏蔽指标
                     * @param _metric 屏蔽指标
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取屏蔽指标展示名称
                     * @return MetricShowName 屏蔽指标展示名称
                     * 
                     */
                    std::string GetMetricShowName() const;

                    /**
                     * 设置屏蔽指标展示名称
                     * @param _metricShowName 屏蔽指标展示名称
                     * 
                     */
                    void SetMetricShowName(const std::string& _metricShowName);

                    /**
                     * 判断参数 MetricShowName 是否已赋值
                     * @return MetricShowName 是否已赋值
                     * 
                     */
                    bool MetricShowNameHasBeenSet() const;

                private:

                    /**
                     * 屏蔽指标
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 屏蔽指标展示名称
                     */
                    std::string m_metricShowName;
                    bool m_metricShowNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_SHIELDMETRIC_H_
