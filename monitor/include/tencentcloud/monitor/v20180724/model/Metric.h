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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricConfig.h>
#include <tencentcloud/monitor/v20180724/model/Operator.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 指标，可用于设置告警、查询数据
                */
                class Metric : public AbstractModel
                {
                public:
                    Metric();
                    ~Metric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警策略类型
                     * @return Namespace 告警策略类型
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置告警策略类型
                     * @param _namespace 告警策略类型
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
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
                     * 获取指标展示名
                     * @return Description 指标展示名
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置指标展示名
                     * @param _description 指标展示名
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取最小值
                     * @return Min 最小值
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置最小值
                     * @param _min 最小值
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取最大值
                     * @return Max 最大值
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置最大值
                     * @param _max 最大值
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取维度列表
                     * @return Dimensions 维度列表
                     * 
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置维度列表
                     * @param _dimensions 维度列表
                     * 
                     */
                    void SetDimensions(const std::vector<std::string>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricConfig 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetricConfig GetMetricConfig() const;

                    /**
                     * 设置指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricConfig 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricConfig(const MetricConfig& _metricConfig);

                    /**
                     * 判断参数 MetricConfig 是否已赋值
                     * @return MetricConfig 是否已赋值
                     * 
                     */
                    bool MetricConfigHasBeenSet() const;

                    /**
                     * 获取是否为高级指标。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdvanced 是否为高级指标。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置是否为高级指标。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAdvanced 是否为高级指标。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAdvanced(const int64_t& _isAdvanced);

                    /**
                     * 判断参数 IsAdvanced 是否已赋值
                     * @return IsAdvanced 是否已赋值
                     * 
                     */
                    bool IsAdvancedHasBeenSet() const;

                    /**
                     * 获取高级指标是否开通。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpen 高级指标是否开通。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置高级指标是否开通。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOpen 高级指标是否开通。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                    /**
                     * 获取集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取匹配运算符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operators 匹配运算符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置匹配运算符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operators 匹配运算符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperators(const std::vector<Operator>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取指标触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Periods 指标触发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPeriods() const;

                    /**
                     * 设置指标触发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periods 指标触发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriods(const std::vector<int64_t>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取是否延迟指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatenessMetric 是否延迟指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsLatenessMetric() const;

                    /**
                     * 设置是否延迟指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatenessMetric 是否延迟指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLatenessMetric(const int64_t& _isLatenessMetric);

                    /**
                     * 判断参数 IsLatenessMetric 是否已赋值
                     * @return IsLatenessMetric 是否已赋值
                     * 
                     */
                    bool IsLatenessMetricHasBeenSet() const;

                private:

                    /**
                     * 告警策略类型
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标展示名
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 最小值
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 最大值
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 维度列表
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 指标配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetricConfig m_metricConfig;
                    bool m_metricConfigHasBeenSet;

                    /**
                     * 是否为高级指标。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * 高级指标是否开通。1是 0否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * 集成中心产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 匹配运算符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * 指标触发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 是否延迟指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isLatenessMetric;
                    bool m_isLatenessMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_
