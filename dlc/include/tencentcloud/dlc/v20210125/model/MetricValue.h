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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_METRICVALUE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_METRICVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MetricLabels.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 监控指标值（不含展示名，前端按 MetricKey 自行映射文案）
                */
                class MetricValue : public AbstractModel
                {
                public:
                    MetricValue();
                    ~MetricValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标键名，如 cpu_allocation、cpu_quota_total 等</p>
                     * @return MetricKey <p>指标键名，如 cpu_allocation、cpu_quota_total 等</p>
                     * 
                     */
                    std::string GetMetricKey() const;

                    /**
                     * 设置<p>指标键名，如 cpu_allocation、cpu_quota_total 等</p>
                     * @param _metricKey <p>指标键名，如 cpu_allocation、cpu_quota_total 等</p>
                     * 
                     */
                    void SetMetricKey(const std::string& _metricKey);

                    /**
                     * 判断参数 MetricKey 是否已赋值
                     * @return MetricKey 是否已赋值
                     * 
                     */
                    bool MetricKeyHasBeenSet() const;

                    /**
                     * 获取<p>指标当前值，可能为 null（PromQL 返回空数据集时），前端按 null 视作&quot;无数据&quot;处理</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>指标当前值，可能为 null（PromQL 返回空数据集时），前端按 null 视作&quot;无数据&quot;处理</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置<p>指标当前值，可能为 null（PromQL 返回空数据集时），前端按 null 视作&quot;无数据&quot;处理</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>指标当前值，可能为 null（PromQL 返回空数据集时），前端按 null 视作&quot;无数据&quot;处理</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>指标单位，如 core、card、GB</p>
                     * @return Unit <p>指标单位，如 core、card、GB</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>指标单位，如 core、card、GB</p>
                     * @param _unit <p>指标单位，如 core、card、GB</p>
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
                     * 获取<p>资源类型：cpu / gpu / memory / vram / kueue / consumption</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType <p>资源类型：cpu / gpu / memory / vram / kueue / consumption</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型：cpu / gpu / memory / vram / kueue / consumption</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType <p>资源类型：cpu / gpu / memory / vram / kueue / consumption</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>维度标签。单 series 指标（CPU / 内存 / Kueue 等）不出现此字段；多 series 指标（GPU 类按卡型拆分）每条 MetricValue 携带不同的 Labels 区分维度。前端按 (MetricKey, Labels) 二元组识别每条记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>维度标签。单 series 指标（CPU / 内存 / Kueue 等）不出现此字段；多 series 指标（GPU 类按卡型拆分）每条 MetricValue 携带不同的 Labels 区分维度。前端按 (MetricKey, Labels) 二元组识别每条记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MetricLabels GetLabels() const;

                    /**
                     * 设置<p>维度标签。单 series 指标（CPU / 内存 / Kueue 等）不出现此字段；多 series 指标（GPU 类按卡型拆分）每条 MetricValue 携带不同的 Labels 区分维度。前端按 (MetricKey, Labels) 二元组识别每条记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>维度标签。单 series 指标（CPU / 内存 / Kueue 等）不出现此字段；多 series 指标（GPU 类按卡型拆分）每条 MetricValue 携带不同的 Labels 区分维度。前端按 (MetricKey, Labels) 二元组识别每条记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const MetricLabels& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * <p>指标键名，如 cpu_allocation、cpu_quota_total 等</p>
                     */
                    std::string m_metricKey;
                    bool m_metricKeyHasBeenSet;

                    /**
                     * <p>指标当前值，可能为 null（PromQL 返回空数据集时），前端按 null 视作&quot;无数据&quot;处理</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>指标单位，如 core、card、GB</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>资源类型：cpu / gpu / memory / vram / kueue / consumption</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>维度标签。单 series 指标（CPU / 内存 / Kueue 等）不出现此字段；多 series 指标（GPU 类按卡型拆分）每条 MetricValue 携带不同的 Labels 区分维度。前端按 (MetricKey, Labels) 二元组识别每条记录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MetricLabels m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_METRICVALUE_H_
