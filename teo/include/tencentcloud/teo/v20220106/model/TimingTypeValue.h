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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGTYPEVALUE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGTYPEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/TimingDataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 时序类型详细数据
                */
                class TimingTypeValue : public AbstractModel
                {
                public:
                    TimingTypeValue();
                    ~TimingTypeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据和
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sum 数据和
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSum() const;

                    /**
                     * 设置数据和
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sum 数据和
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSum(const int64_t& _sum);

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     */
                    bool SumHasBeenSet() const;

                    /**
                     * 获取最大
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Max 最大
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置最大
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Max 最大
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取平均
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avg 平均
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAvg() const;

                    /**
                     * 设置平均
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Avg 平均
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvg(const int64_t& _avg);

                    /**
                     * 判断参数 Avg 是否已赋值
                     * @return Avg 是否已赋值
                     */
                    bool AvgHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param MetricName 指标名
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取废弃字段，即将下线，请使用Detail字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailData 废弃字段，即将下线，请使用Detail字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetDetailData() const;

                    /**
                     * 设置废弃字段，即将下线，请使用Detail字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DetailData 废弃字段，即将下线，请使用Detail字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetailData(const std::vector<int64_t>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     */
                    bool DetailDataHasBeenSet() const;

                    /**
                     * 获取详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimingDataItem> GetDetail() const;

                    /**
                     * 设置详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Detail 详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetail(const std::vector<TimingDataItem>& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 数据和
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sum;
                    bool m_sumHasBeenSet;

                    /**
                     * 最大
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 平均
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 废弃字段，即将下线，请使用Detail字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_detailData;
                    bool m_detailDataHasBeenSet;

                    /**
                     * 详细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimingDataItem> m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_TIMINGTYPEVALUE_H_
