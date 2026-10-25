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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/FloatNameValue.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 分析指标趋势点
                */
                class MetricTrendPoint : public AbstractModel
                {
                public:
                    MetricTrendPoint();
                    ~MetricTrendPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间戳 Unix 毫秒</p>
                     * @return Ts <p>时间戳 Unix 毫秒</p>
                     * 
                     */
                    int64_t GetTs() const;

                    /**
                     * 设置<p>时间戳 Unix 毫秒</p>
                     * @param _ts <p>时间戳 Unix 毫秒</p>
                     * 
                     */
                    void SetTs(const int64_t& _ts);

                    /**
                     * 判断参数 Ts 是否已赋值
                     * @return Ts 是否已赋值
                     * 
                     */
                    bool TsHasBeenSet() const;

                    /**
                     * 获取<p>该桶指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics <p>该桶指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FloatNameValue> GetMetrics() const;

                    /**
                     * 设置<p>该桶指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics <p>该桶指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetrics(const std::vector<FloatNameValue>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                private:

                    /**
                     * <p>时间戳 Unix 毫秒</p>
                     */
                    int64_t m_ts;
                    bool m_tsHasBeenSet;

                    /**
                     * <p>该桶指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FloatNameValue> m_metrics;
                    bool m_metricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDPOINT_H_
