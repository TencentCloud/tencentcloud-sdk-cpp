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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricLabel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 指标配置信息
                */
                class MetricConfig : public AbstractModel
                {
                public:
                    MetricConfig();
                    ~MetricConfig() = default;
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
                     * 获取统计周期,单位:秒（s）
                     * @return Periods 统计周期,单位:秒（s）
                     * 
                     */
                    std::vector<uint64_t> GetPeriods() const;

                    /**
                     * 设置统计周期,单位:秒（s）
                     * @param _periods 统计周期,单位:秒（s）
                     * 
                     */
                    void SetPeriods(const std::vector<uint64_t>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取自定义指标标签
                     * @return MetricLabels 自定义指标标签
                     * 
                     */
                    std::vector<MetricLabel> GetMetricLabels() const;

                    /**
                     * 设置自定义指标标签
                     * @param _metricLabels 自定义指标标签
                     * 
                     */
                    void SetMetricLabels(const std::vector<MetricLabel>& _metricLabels);

                    /**
                     * 判断参数 MetricLabels 是否已赋值
                     * @return MetricLabels 是否已赋值
                     * 
                     */
                    bool MetricLabelsHasBeenSet() const;

                private:

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 统计周期,单位:秒（s）
                     */
                    std::vector<uint64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 自定义指标标签
                     */
                    std::vector<MetricLabel> m_metricLabels;
                    bool m_metricLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICCONFIG_H_
