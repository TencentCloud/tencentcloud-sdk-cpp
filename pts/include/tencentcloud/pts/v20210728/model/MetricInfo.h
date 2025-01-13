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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AggregationLegend.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 指标结构
                */
                class MetricInfo : public AbstractModel
                {
                public:
                    MetricInfo();
                    ~MetricInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后台指标
                     * @return Metric 后台指标
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置后台指标
                     * @param _metric 后台指标
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取前台展示指标名称
                     * @return Alias 前台展示指标名称
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置前台展示指标名称
                     * @param _alias 前台展示指标名称
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取指标描述
                     * @return Description 指标描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置指标描述
                     * @param _description 指标描述
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
                     * 获取指标类型
                     * @return MetricType 指标类型
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置指标类型
                     * @param _metricType 指标类型
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取默认指标单位
                     * @return Unit 默认指标单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置默认指标单位
                     * @param _unit 默认指标单位
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
                     * 获取指标支持的聚合函数
                     * @return Aggregations 指标支持的聚合函数
                     * 
                     */
                    std::vector<AggregationLegend> GetAggregations() const;

                    /**
                     * 设置指标支持的聚合函数
                     * @param _aggregations 指标支持的聚合函数
                     * 
                     */
                    void SetAggregations(const std::vector<AggregationLegend>& _aggregations);

                    /**
                     * 判断参数 Aggregations 是否已赋值
                     * @return Aggregations 是否已赋值
                     * 
                     */
                    bool AggregationsHasBeenSet() const;

                    /**
                     * 获取是否内部指标，内部指标不可在前台提供用户自由选择
                     * @return InnerMetric 是否内部指标，内部指标不可在前台提供用户自由选择
                     * 
                     */
                    bool GetInnerMetric() const;

                    /**
                     * 设置是否内部指标，内部指标不可在前台提供用户自由选择
                     * @param _innerMetric 是否内部指标，内部指标不可在前台提供用户自由选择
                     * 
                     */
                    void SetInnerMetric(const bool& _innerMetric);

                    /**
                     * 判断参数 InnerMetric 是否已赋值
                     * @return InnerMetric 是否已赋值
                     * 
                     */
                    bool InnerMetricHasBeenSet() const;

                private:

                    /**
                     * 后台指标
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 前台展示指标名称
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 指标描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 指标类型
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * 默认指标单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 指标支持的聚合函数
                     */
                    std::vector<AggregationLegend> m_aggregations;
                    bool m_aggregationsHasBeenSet;

                    /**
                     * 是否内部指标，内部指标不可在前台提供用户自由选择
                     */
                    bool m_innerMetric;
                    bool m_innerMetricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_METRICINFO_H_
