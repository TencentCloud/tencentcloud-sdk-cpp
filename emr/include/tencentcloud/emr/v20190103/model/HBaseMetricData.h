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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_HBASEMETRICDATA_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_HBASEMETRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * HBase监控数据结构
                */
                class HBaseMetricData : public AbstractModel
                {
                public:
                    HBaseMetricData();
                    ~HBaseMetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名称，如 read_request_rate
                     * @return MetricName 指标名称，如 read_request_rate
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称，如 read_request_rate
                     * @param _metricName 指标名称，如 read_request_rate
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
                     * 获取指标描述，如 read request rate
                     * @return MetricDesc 指标描述，如 read request rate
                     * 
                     */
                    std::string GetMetricDesc() const;

                    /**
                     * 设置指标描述，如 read request rate
                     * @param _metricDesc 指标描述，如 read request rate
                     * 
                     */
                    void SetMetricDesc(const std::string& _metricDesc);

                    /**
                     * 判断参数 MetricDesc 是否已赋值
                     * @return MetricDesc 是否已赋值
                     * 
                     */
                    bool MetricDescHasBeenSet() const;

                    /**
                     * 获取时间戳数组
                     * @return Timestamps 时间戳数组
                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 设置时间戳数组
                     * @param _timestamps 时间戳数组
                     * 
                     */
                    void SetTimestamps(const std::vector<int64_t>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取数值数组
                     * @return Values 数值数组
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置数值数组
                     * @param _values 数值数组
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
                     * 指标名称，如 read_request_rate
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标描述，如 read request rate
                     */
                    std::string m_metricDesc;
                    bool m_metricDescHasBeenSet;

                    /**
                     * 时间戳数组
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * 数值数组
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_HBASEMETRICDATA_H_
