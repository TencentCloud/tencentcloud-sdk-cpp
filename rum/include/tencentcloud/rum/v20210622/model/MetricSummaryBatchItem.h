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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICSUMMARYBATCHITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICSUMMARYBATCHITEM_H_

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
                * 批量合计条目
                */
                class MetricSummaryBatchItem : public AbstractModel
                {
                public:
                    MetricSummaryBatchItem();
                    ~MetricSummaryBatchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>条目 Key</p>
                     * @return Key <p>条目 Key</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>条目 Key</p>
                     * @param _key <p>条目 Key</p>
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
                     * 获取<p>指标列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metrics <p>指标列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FloatNameValue> GetMetrics() const;

                    /**
                     * 设置<p>指标列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metrics <p>指标列表</p>
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

                    /**
                     * 获取<p>可能尚未采集，false 时省略</p>
                     * @return MaybeUncollected <p>可能尚未采集，false 时省略</p>
                     * 
                     */
                    bool GetMaybeUncollected() const;

                    /**
                     * 设置<p>可能尚未采集，false 时省略</p>
                     * @param _maybeUncollected <p>可能尚未采集，false 时省略</p>
                     * 
                     */
                    void SetMaybeUncollected(const bool& _maybeUncollected);

                    /**
                     * 判断参数 MaybeUncollected 是否已赋值
                     * @return MaybeUncollected 是否已赋值
                     * 
                     */
                    bool MaybeUncollectedHasBeenSet() const;

                private:

                    /**
                     * <p>条目 Key</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>指标列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FloatNameValue> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>可能尚未采集，false 时省略</p>
                     */
                    bool m_maybeUncollected;
                    bool m_maybeUncollectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICSUMMARYBATCHITEM_H_
