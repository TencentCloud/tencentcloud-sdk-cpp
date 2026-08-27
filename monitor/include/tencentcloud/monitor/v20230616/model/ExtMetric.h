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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_EXTMETRIC_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_EXTMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 对外指标
                */
                class ExtMetric : public AbstractModel
                {
                public:
                    ExtMetric();
                    ~ExtMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取中文指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricCName 中文指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricCName() const;

                    /**
                     * 设置中文指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricCName 中文指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricCName(const std::string& _metricCName);

                    /**
                     * 判断参数 MetricCName 是否已赋值
                     * @return MetricCName 是否已赋值
                     * 
                     */
                    bool MetricCNameHasBeenSet() const;

                    /**
                     * 获取中文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CNMeaning 中文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCNMeaning() const;

                    /**
                     * 设置中文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cNMeaning 中文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCNMeaning(const std::string& _cNMeaning);

                    /**
                     * 判断参数 CNMeaning 是否已赋值
                     * @return CNMeaning 是否已赋值
                     * 
                     */
                    bool CNMeaningHasBeenSet() const;

                    /**
                     * 获取英文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnMeaning 英文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnMeaning() const;

                    /**
                     * 设置英文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enMeaning 英文含义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnMeaning(const std::string& _enMeaning);

                    /**
                     * 判断参数 EnMeaning 是否已赋值
                     * @return EnMeaning 是否已赋值
                     * 
                     */
                    bool EnMeaningHasBeenSet() const;

                    /**
                     * 获取单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取是否配置对外维度
                     * @return DimensionFlag 是否配置对外维度
                     * 
                     */
                    bool GetDimensionFlag() const;

                    /**
                     * 设置是否配置对外维度
                     * @param _dimensionFlag 是否配置对外维度
                     * 
                     */
                    void SetDimensionFlag(const bool& _dimensionFlag);

                    /**
                     * 判断参数 DimensionFlag 是否已赋值
                     * @return DimensionFlag 是否已赋值
                     * 
                     */
                    bool DimensionFlagHasBeenSet() const;

                private:

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 中文指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricCName;
                    bool m_metricCNameHasBeenSet;

                    /**
                     * 中文含义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cNMeaning;
                    bool m_cNMeaningHasBeenSet;

                    /**
                     * 英文含义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enMeaning;
                    bool m_enMeaningHasBeenSet;

                    /**
                     * 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 是否配置对外维度
                     */
                    bool m_dimensionFlag;
                    bool m_dimensionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_EXTMETRIC_H_
