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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManual.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 指标告警配置
                */
                class DescribePolicyConditionListMetric : public AbstractModel
                {
                public:
                    DescribePolicyConditionListMetric();
                    ~DescribePolicyConditionListMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigManual 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManual GetConfigManual() const;

                    /**
                     * 设置指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configManual 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigManual(const DescribePolicyConditionListConfigManual& _configManual);

                    /**
                     * 判断参数 ConfigManual 是否已赋值
                     * @return ConfigManual 是否已赋值
                     * 
                     */
                    bool ConfigManualHasBeenSet() const;

                    /**
                     * 获取指标id
                     * @return MetricId 指标id
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置指标id
                     * @param _metricId 指标id
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取指标名称
                     * @return MetricShowName 指标名称
                     * 
                     */
                    std::string GetMetricShowName() const;

                    /**
                     * 设置指标名称
                     * @param _metricShowName 指标名称
                     * 
                     */
                    void SetMetricShowName(const std::string& _metricShowName);

                    /**
                     * 判断参数 MetricShowName 是否已赋值
                     * @return MetricShowName 是否已赋值
                     * 
                     */
                    bool MetricShowNameHasBeenSet() const;

                    /**
                     * 获取指标单位
                     * @return MetricUnit 指标单位
                     * 
                     */
                    std::string GetMetricUnit() const;

                    /**
                     * 设置指标单位
                     * @param _metricUnit 指标单位
                     * 
                     */
                    void SetMetricUnit(const std::string& _metricUnit);

                    /**
                     * 判断参数 MetricUnit 是否已赋值
                     * @return MetricUnit 是否已赋值
                     * 
                     */
                    bool MetricUnitHasBeenSet() const;

                private:

                    /**
                     * 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManual m_configManual;
                    bool m_configManualHasBeenSet;

                    /**
                     * 指标id
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricShowName;
                    bool m_metricShowNameHasBeenSet;

                    /**
                     * 指标单位
                     */
                    std::string m_metricUnit;
                    bool m_metricUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTMETRIC_H_
