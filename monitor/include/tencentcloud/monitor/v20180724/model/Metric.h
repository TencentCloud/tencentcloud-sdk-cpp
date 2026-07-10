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
                     * 获取<p>告警策略类型</p>
                     * @return Namespace <p>告警策略类型</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>告警策略类型</p>
                     * @param _namespace <p>告警策略类型</p>
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
                     * 获取<p>指标名</p>
                     * @return MetricName <p>指标名</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名</p>
                     * @param _metricName <p>指标名</p>
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
                     * 获取<p>指标展示名</p>
                     * @return Description <p>指标展示名</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>指标展示名</p>
                     * @param _description <p>指标展示名</p>
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
                     * 获取<p>最小值</p>
                     * @return Min <p>最小值</p>
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置<p>最小值</p>
                     * @param _min <p>最小值</p>
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
                     * 获取<p>最大值</p>
                     * @return Max <p>最大值</p>
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置<p>最大值</p>
                     * @param _max <p>最大值</p>
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
                     * 获取<p>维度列表</p>
                     * @return Dimensions <p>维度列表</p>
                     * 
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置<p>维度列表</p>
                     * @param _dimensions <p>维度列表</p>
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
                     * 获取<p>单位</p>
                     * @return Unit <p>单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>单位</p>
                     * @param _unit <p>单位</p>
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
                     * 获取<p>指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricConfig <p>指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetricConfig GetMetricConfig() const;

                    /**
                     * 设置<p>指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricConfig <p>指标配置</p>
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
                     * 获取<p>是否为高级指标。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAdvanced <p>是否为高级指标。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsAdvanced() const;

                    /**
                     * 设置<p>是否为高级指标。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAdvanced <p>是否为高级指标。1是 0否</p>
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
                     * 获取<p>高级指标是否开通。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOpen <p>高级指标是否开通。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置<p>高级指标是否开通。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isOpen <p>高级指标是否开通。1是 0否</p>
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
                     * 获取<p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId <p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置<p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId <p>集成中心产品ID</p>
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
                     * 获取<p>匹配运算符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operators <p>匹配运算符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置<p>匹配运算符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operators <p>匹配运算符</p>
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
                     * 获取<p>指标触发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Periods <p>指标触发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetPeriods() const;

                    /**
                     * 设置<p>指标触发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periods <p>指标触发</p>
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
                     * 获取<p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLatenessMetric <p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsLatenessMetric() const;

                    /**
                     * 设置<p>是否延迟指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLatenessMetric <p>是否延迟指标</p>
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
                     * <p>告警策略类型</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>指标名</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>指标展示名</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>最小值</p>
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>最大值</p>
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>维度列表</p>
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>指标配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetricConfig m_metricConfig;
                    bool m_metricConfigHasBeenSet;

                    /**
                     * <p>是否为高级指标。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isAdvanced;
                    bool m_isAdvancedHasBeenSet;

                    /**
                     * <p>高级指标是否开通。1是 0否</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                    /**
                     * <p>集成中心产品ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>匹配运算符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * <p>指标触发</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * <p>是否延迟指标</p>
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
