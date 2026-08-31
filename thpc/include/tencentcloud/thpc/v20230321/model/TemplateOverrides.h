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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_TEMPLATEOVERRIDES_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_TEMPLATEOVERRIDES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 启动模板扩容覆盖配置。ExpansionMode=MULTI_CARD 时通过此对象指定机型族、卡数折算等覆盖参数。
                */
                class TemplateOverrides : public AbstractModel
                {
                public:
                    TemplateOverrides();
                    ~TemplateOverrides() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>候选机型族列表，最多 10 个。MULTI_CARD 模式的明确标志字段。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceFamilies <p>候选机型族列表，最多 10 个。MULTI_CARD 模式的明确标志字段。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInstanceFamilies() const;

                    /**
                     * 设置<p>候选机型族列表，最多 10 个。MULTI_CARD 模式的明确标志字段。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceFamilies <p>候选机型族列表，最多 10 个。MULTI_CARD 模式的明确标志字段。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<std::string>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                    /**
                     * 获取<p>每节点 GPU 卡数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GpuCountPerNode <p>每节点 GPU 卡数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGpuCountPerNode() const;

                    /**
                     * 设置<p>每节点 GPU 卡数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpuCountPerNode <p>每节点 GPU 卡数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpuCountPerNode(const int64_t& _gpuCountPerNode);

                    /**
                     * 判断参数 GpuCountPerNode 是否已赋值
                     * @return GpuCountPerNode 是否已赋值
                     * 
                     */
                    bool GpuCountPerNodeHasBeenSet() const;

                    /**
                     * 获取<p>是否启用混合 GPU 卡数折算，默认 false。未传时保持已持久化的混卡开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableMixedGpuCount <p>是否启用混合 GPU 卡数折算，默认 false。未传时保持已持久化的混卡开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableMixedGpuCount() const;

                    /**
                     * 设置<p>是否启用混合 GPU 卡数折算，默认 false。未传时保持已持久化的混卡开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableMixedGpuCount <p>是否启用混合 GPU 卡数折算，默认 false。未传时保持已持久化的混卡开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableMixedGpuCount(const bool& _enableMixedGpuCount);

                    /**
                     * 判断参数 EnableMixedGpuCount 是否已赋值
                     * @return EnableMixedGpuCount 是否已赋值
                     * 
                     */
                    bool EnableMixedGpuCountHasBeenSet() const;

                    /**
                     * 获取<p>是否启用多可用区扩容。未传时保持已持久化的分区策略，局部更新不得覆盖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableMultiZone <p>是否启用多可用区扩容。未传时保持已持久化的分区策略，局部更新不得覆盖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableMultiZone() const;

                    /**
                     * 设置<p>是否启用多可用区扩容。未传时保持已持久化的分区策略，局部更新不得覆盖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableMultiZone <p>是否启用多可用区扩容。未传时保持已持久化的分区策略，局部更新不得覆盖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableMultiZone(const bool& _enableMultiZone);

                    /**
                     * 判断参数 EnableMultiZone 是否已赋值
                     * @return EnableMultiZone 是否已赋值
                     * 
                     */
                    bool EnableMultiZoneHasBeenSet() const;

                private:

                    /**
                     * <p>候选机型族列表，最多 10 个。MULTI_CARD 模式的明确标志字段。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                    /**
                     * <p>每节点 GPU 卡数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_gpuCountPerNode;
                    bool m_gpuCountPerNodeHasBeenSet;

                    /**
                     * <p>是否启用混合 GPU 卡数折算，默认 false。未传时保持已持久化的混卡开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableMixedGpuCount;
                    bool m_enableMixedGpuCountHasBeenSet;

                    /**
                     * <p>是否启用多可用区扩容。未传时保持已持久化的分区策略，局部更新不得覆盖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableMultiZone;
                    bool m_enableMultiZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_TEMPLATEOVERRIDES_H_
