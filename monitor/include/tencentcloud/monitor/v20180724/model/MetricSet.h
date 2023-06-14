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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PeriodsSt.h>
#include <tencentcloud/monitor/v20180724/model/MetricObjectMeaning.h>
#include <tencentcloud/monitor/v20180724/model/DimensionsDesc.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 对业务指标的单位及支持统计周期的描述
                */
                class MetricSet : public AbstractModel
                {
                public:
                    MetricSet();
                    ~MetricSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间，每个云产品会有一个命名空间
                     * @return Namespace 命名空间，每个云产品会有一个命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间，每个云产品会有一个命名空间
                     * @param _namespace 命名空间，每个云产品会有一个命名空间
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
                     * 获取指标名称
                     * @return MetricName 指标名称
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称
                     * @param _metricName 指标名称
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
                     * 获取指标使用的单位
                     * @return Unit 指标使用的单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置指标使用的单位
                     * @param _unit 指标使用的单位
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
                     * 获取指标使用的单位
                     * @return UnitCname 指标使用的单位
                     * 
                     */
                    std::string GetUnitCname() const;

                    /**
                     * 设置指标使用的单位
                     * @param _unitCname 指标使用的单位
                     * 
                     */
                    void SetUnitCname(const std::string& _unitCname);

                    /**
                     * 判断参数 UnitCname 是否已赋值
                     * @return UnitCname 是否已赋值
                     * 
                     */
                    bool UnitCnameHasBeenSet() const;

                    /**
                     * 获取指标支持的统计周期，单位是秒，如60、300
                     * @return Period 指标支持的统计周期，单位是秒，如60、300
                     * 
                     */
                    std::vector<int64_t> GetPeriod() const;

                    /**
                     * 设置指标支持的统计周期，单位是秒，如60、300
                     * @param _period 指标支持的统计周期，单位是秒，如60、300
                     * 
                     */
                    void SetPeriod(const std::vector<int64_t>& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计周期内指标方式
                     * @return Periods 统计周期内指标方式
                     * 
                     */
                    std::vector<PeriodsSt> GetPeriods() const;

                    /**
                     * 设置统计周期内指标方式
                     * @param _periods 统计周期内指标方式
                     * 
                     */
                    void SetPeriods(const std::vector<PeriodsSt>& _periods);

                    /**
                     * 判断参数 Periods 是否已赋值
                     * @return Periods 是否已赋值
                     * 
                     */
                    bool PeriodsHasBeenSet() const;

                    /**
                     * 获取统计指标含义解释
                     * @return Meaning 统计指标含义解释
                     * 
                     */
                    MetricObjectMeaning GetMeaning() const;

                    /**
                     * 设置统计指标含义解释
                     * @param _meaning 统计指标含义解释
                     * 
                     */
                    void SetMeaning(const MetricObjectMeaning& _meaning);

                    /**
                     * 判断参数 Meaning 是否已赋值
                     * @return Meaning 是否已赋值
                     * 
                     */
                    bool MeaningHasBeenSet() const;

                    /**
                     * 获取维度描述信息
                     * @return Dimensions 维度描述信息
                     * 
                     */
                    std::vector<DimensionsDesc> GetDimensions() const;

                    /**
                     * 设置维度描述信息
                     * @param _dimensions 维度描述信息
                     * 
                     */
                    void SetDimensions(const std::vector<DimensionsDesc>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取指标中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricCName 指标中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricCName() const;

                    /**
                     * 设置指标中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricCName 指标中文名
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
                     * 获取指标英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricEName 指标英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricEName() const;

                    /**
                     * 设置指标英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricEName 指标英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricEName(const std::string& _metricEName);

                    /**
                     * 判断参数 MetricEName 是否已赋值
                     * @return MetricEName 是否已赋值
                     * 
                     */
                    bool MetricENameHasBeenSet() const;

                private:

                    /**
                     * 命名空间，每个云产品会有一个命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 指标名称
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标使用的单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 指标使用的单位
                     */
                    std::string m_unitCname;
                    bool m_unitCnameHasBeenSet;

                    /**
                     * 指标支持的统计周期，单位是秒，如60、300
                     */
                    std::vector<int64_t> m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计周期内指标方式
                     */
                    std::vector<PeriodsSt> m_periods;
                    bool m_periodsHasBeenSet;

                    /**
                     * 统计指标含义解释
                     */
                    MetricObjectMeaning m_meaning;
                    bool m_meaningHasBeenSet;

                    /**
                     * 维度描述信息
                     */
                    std::vector<DimensionsDesc> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 指标中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricCName;
                    bool m_metricCNameHasBeenSet;

                    /**
                     * 指标英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricEName;
                    bool m_metricENameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRICSET_H_
