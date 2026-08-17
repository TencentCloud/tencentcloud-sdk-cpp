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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GPUSUMMARYITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GPUSUMMARYITEM_H_

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
                * 运行中部署的 GPU 资源汇总
                */
                class GpuSummaryItem : public AbstractModel
                {
                public:
                    GpuSummaryItem();
                    ~GpuSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>GPU 型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuType <p>GPU 型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置<p>GPU 型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuType <p>GPU 型号</p>
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
                     * 获取<p>GPU 总数（gpuNum × replicas）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuCount <p>GPU 总数（gpuNum × replicas）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGpuCount() const;

                    /**
                     * 设置<p>GPU 总数（gpuNum × replicas）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuCount <p>GPU 总数（gpuNum × replicas）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuCount(const int64_t& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取<p>运行中的副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas <p>运行中的副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>运行中的副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas <p>运行中的副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 型号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                    /**
                     * <p>GPU 总数（gpuNum × replicas）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * <p>运行中的副本数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GPUSUMMARYITEM_H_
