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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICQUERYITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICQUERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 批量指标查询条目
                */
                class MetricQueryItem : public AbstractModel
                {
                public:
                    MetricQueryItem();
                    ~MetricQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件类型</p>
                     * @return EventType <p>事件类型</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型</p>
                     * @param _eventType <p>事件类型</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>指标名列表，如 count / rate</p>
                     * @return Metrics <p>指标名列表，如 count / rate</p>
                     * 
                     */
                    std::vector<std::string> GetMetrics() const;

                    /**
                     * 设置<p>指标名列表，如 count / rate</p>
                     * @param _metrics <p>指标名列表，如 count / rate</p>
                     * 
                     */
                    void SetMetrics(const std::vector<std::string>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取<p>条目 Key，缺省为 EventType/SubType/MeasurementKey</p>
                     * @return Key <p>条目 Key，缺省为 EventType/SubType/MeasurementKey</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>条目 Key，缺省为 EventType/SubType/MeasurementKey</p>
                     * @param _key <p>条目 Key，缺省为 EventType/SubType/MeasurementKey</p>
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
                     * 获取<p>子类型</p>
                     * @return SubType <p>子类型</p>
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置<p>子类型</p>
                     * @param _subType <p>子类型</p>
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取<p>分位/均值测量键</p>
                     * @return MeasurementKey <p>分位/均值测量键</p>
                     * 
                     */
                    std::string GetMeasurementKey() const;

                    /**
                     * 设置<p>分位/均值测量键</p>
                     * @param _measurementKey <p>分位/均值测量键</p>
                     * 
                     */
                    void SetMeasurementKey(const std::string& _measurementKey);

                    /**
                     * 判断参数 MeasurementKey 是否已赋值
                     * @return MeasurementKey 是否已赋值
                     * 
                     */
                    bool MeasurementKeyHasBeenSet() const;

                private:

                    /**
                     * <p>事件类型</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>指标名列表，如 count / rate</p>
                     */
                    std::vector<std::string> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>条目 Key，缺省为 EventType/SubType/MeasurementKey</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>子类型</p>
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * <p>分位/均值测量键</p>
                     */
                    std::string m_measurementKey;
                    bool m_measurementKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICQUERYITEM_H_
