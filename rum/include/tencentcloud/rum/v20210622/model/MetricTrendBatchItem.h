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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDBATCHITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDBATCHITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/MetricTrendPoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 批量趋势条目
                */
                class MetricTrendBatchItem : public AbstractModel
                {
                public:
                    MetricTrendBatchItem();
                    ~MetricTrendBatchItem() = default;
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
                     * 获取<p>主窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series <p>主窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricTrendPoint> GetSeries() const;

                    /**
                     * 设置<p>主窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _series <p>主窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeries(const std::vector<MetricTrendPoint>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取<p>对比窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareSeries <p>对比窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricTrendPoint> GetCompareSeries() const;

                    /**
                     * 设置<p>对比窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareSeries <p>对比窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareSeries(const std::vector<MetricTrendPoint>& _compareSeries);

                    /**
                     * 判断参数 CompareSeries 是否已赋值
                     * @return CompareSeries 是否已赋值
                     * 
                     */
                    bool CompareSeriesHasBeenSet() const;

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
                     * <p>主窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricTrendPoint> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * <p>对比窗时序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricTrendPoint> m_compareSeries;
                    bool m_compareSeriesHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICTRENDBATCHITEM_H_
