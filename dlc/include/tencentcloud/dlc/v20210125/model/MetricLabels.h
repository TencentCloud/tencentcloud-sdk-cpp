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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_METRICLABELS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_METRICLABELS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 维度标签集合。当前已知 key：QueueName（多队列时序）、QueueAlias（队列展示别名，前端图例展示用，alias 缺省时回落为队列 code）、GpuType（GPU 类指标按卡型拆分时携带）、ResourceType（预留，时序路径当前不输出）。未来扩展新维度（如 Region / Zone）时，以 optional 属性形式追加到本 schema
                */
                class MetricLabels : public AbstractModel
                {
                public:
                    MetricLabels();
                    ~MetricLabels() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>GPU 卡型简称，取值如 T4 / A10 / V100 / L20 / H20。来自 TKE GPU Exporter 暴露的 gpu_info.name，由查询层归一（name=&quot;Tesla T4&quot; → GpuType=&quot;T4&quot;）；未识别的卡型保留原始 name 值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType <p>GPU 卡型简称，取值如 T4 / A10 / V100 / L20 / H20。来自 TKE GPU Exporter 暴露的 gpu_info.name，由查询层归一（name=&quot;Tesla T4&quot; → GpuType=&quot;T4&quot;）；未识别的卡型保留原始 name 值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU 卡型简称，取值如 T4 / A10 / V100 / L20 / H20。来自 TKE GPU Exporter 暴露的 gpu_info.name，由查询层归一（name=&quot;Tesla T4&quot; → GpuType=&quot;T4&quot;）；未识别的卡型保留原始 name 值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType <p>GPU 卡型简称，取值如 T4 / A10 / V100 / L20 / H20。来自 TKE GPU Exporter 暴露的 gpu_info.name，由查询层归一（name=&quot;Tesla T4&quot; → GpuType=&quot;T4&quot;）；未识别的卡型保留原始 name 值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>队列编码 code（多队列时序查询时，每个 series 携带所属队列 code，与 GpuType 组合区分曲线；展示别名见 QueueAlias）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueName <p>队列编码 code（多队列时序查询时，每个 series 携带所属队列 code，与 GpuType 组合区分曲线；展示别名见 QueueAlias）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列编码 code（多队列时序查询时，每个 series 携带所属队列 code，与 GpuType 组合区分曲线；展示别名见 QueueAlias）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueName <p>队列编码 code（多队列时序查询时，每个 series 携带所属队列 code，与 GpuType 组合区分曲线；展示别名见 QueueAlias）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>队列展示别名（多队列时序查询时每个 series 携带，前端图例展示用；队列不存在或 alias 为空时回落为队列 code）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueAlias <p>队列展示别名（多队列时序查询时每个 series 携带，前端图例展示用；队列不存在或 alias 为空时回落为队列 code）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueAlias() const;

                    /**
                     * 设置<p>队列展示别名（多队列时序查询时每个 series 携带，前端图例展示用；队列不存在或 alias 为空时回落为队列 code）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueAlias <p>队列展示别名（多队列时序查询时每个 series 携带，前端图例展示用；队列不存在或 alias 为空时回落为队列 code）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueAlias(const std::string& _queueAlias);

                    /**
                     * 判断参数 QueueAlias 是否已赋值
                     * @return QueueAlias 是否已赋值
                     * 
                     */
                    bool QueueAliasHasBeenSet() const;

                    /**
                     * 获取<p>计费项资源类型（CPU / HM_CPU）。Overview 路径的 CPU / 内存类指标按计费项资源类型拆分 series 时携带；时序路径当前不输出该字段（预留对齐 MetricLabels 定义）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType <p>计费项资源类型（CPU / HM_CPU）。Overview 路径的 CPU / 内存类指标按计费项资源类型拆分 series 时携带；时序路径当前不输出该字段（预留对齐 MetricLabels 定义）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>计费项资源类型（CPU / HM_CPU）。Overview 路径的 CPU / 内存类指标按计费项资源类型拆分 series 时携带；时序路径当前不输出该字段（预留对齐 MetricLabels 定义）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType <p>计费项资源类型（CPU / HM_CPU）。Overview 路径的 CPU / 内存类指标按计费项资源类型拆分 series 时携带；时序路径当前不输出该字段（预留对齐 MetricLabels 定义）</p>
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

                private:

                    /**
                     * <p>GPU 卡型简称，取值如 T4 / A10 / V100 / L20 / H20。来自 TKE GPU Exporter 暴露的 gpu_info.name，由查询层归一（name=&quot;Tesla T4&quot; → GpuType=&quot;T4&quot;）；未识别的卡型保留原始 name 值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>队列编码 code（多队列时序查询时，每个 series 携带所属队列 code，与 GpuType 组合区分曲线；展示别名见 QueueAlias）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>队列展示别名（多队列时序查询时每个 series 携带，前端图例展示用；队列不存在或 alias 为空时回落为队列 code）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueAlias;
                    bool m_queueAliasHasBeenSet;

                    /**
                     * <p>计费项资源类型（CPU / HM_CPU）。Overview 路径的 CPU / 内存类指标按计费项资源类型拆分 series 时携带；时序路径当前不输出该字段（预留对齐 MetricLabels 定义）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_METRICLABELS_H_
