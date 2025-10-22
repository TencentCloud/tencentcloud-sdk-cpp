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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 阈值波动预警信息
                */
                class WaveThresholdForm : public AbstractModel
                {
                public:
                    WaveThresholdForm();
                    ~WaveThresholdForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACTUAL 实际金额，FORECAST 预测金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarnType ACTUAL 实际金额，FORECAST 预测金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarnType() const;

                    /**
                     * 设置ACTUAL 实际金额，FORECAST 预测金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warnType ACTUAL 实际金额，FORECAST 预测金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarnType(const std::string& _warnType);

                    /**
                     * 判断参数 WarnType 是否已赋值
                     * @return WarnType 是否已赋值
                     * 
                     */
                    bool WarnTypeHasBeenSet() const;

                    /**
                     * 获取波动阈值（大于等于0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 波动阈值（大于等于0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置波动阈值（大于等于0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 波动阈值（大于等于0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取告警类型：chain 环比，yoy 同比，fix 固定值
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaType 告警类型：chain 环比，yoy 同比，fix 固定值
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置告警类型：chain 环比，yoy 同比，fix 固定值
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaType 告警类型：chain 环比，yoy 同比，fix 固定值
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取告警维度：day 日，month 月，weekday 周
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodType 告警维度：day 日，month 月，weekday 周
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置告警维度：day 日，month 月，weekday 周
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodType 告警维度：day 日，month 月，weekday 周
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                private:

                    /**
                     * ACTUAL 实际金额，FORECAST 预测金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warnType;
                    bool m_warnTypeHasBeenSet;

                    /**
                     * 波动阈值（大于等于0）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 告警类型：chain 环比，yoy 同比，fix 固定值
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 告警维度：day 日，month 月，weekday 周
（支持类型：日环比 chain day，日同比周维度 chain weekday，日同比月维度 yoy  day，日固定值 fix day，月环比 chain month，月固定值 fix month）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_WAVETHRESHOLDFORM_H_
