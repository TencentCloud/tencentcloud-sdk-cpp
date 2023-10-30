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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_METRICDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_METRICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/Metric.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维指标详情
                */
                class MetricDetail : public AbstractModel
                {
                public:
                    MetricDetail();
                    ~MetricDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标详情名
                     * @return Key 指标详情名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置指标详情名
                     * @param _key 指标详情名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取指标详情值
                     * @return Metrics 指标详情值
                     * 
                     */
                    std::vector<Metric> GetMetrics() const;

                    /**
                     * 设置指标详情值
                     * @param _metrics 指标详情值
                     * 
                     */
                    void SetMetrics(const std::vector<Metric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * 指标详情名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 指标详情值
                     */
                    std::vector<Metric> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_METRICDETAIL_H_
