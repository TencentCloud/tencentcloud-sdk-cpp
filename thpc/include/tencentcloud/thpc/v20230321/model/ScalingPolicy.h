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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SCALINGPOLICY_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SCALINGPOLICY_H_

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
                * 伸缩策略配置，定义队列的容量语义。
                */
                class ScalingPolicy : public AbstractModel
                {
                public:
                    ScalingPolicy();
                    ~ScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>期望节点数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DesiredCapacity <p>期望节点数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDesiredCapacity() const;

                    /**
                     * 设置<p>期望节点数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desiredCapacity <p>期望节点数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesiredCapacity(const int64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取<p>伸缩单位。可选值：NODE（按节点）、GPU_CARD（按 GPU 卡）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalingUnit <p>伸缩单位。可选值：NODE（按节点）、GPU_CARD（按 GPU 卡）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScalingUnit() const;

                    /**
                     * 设置<p>伸缩单位。可选值：NODE（按节点）、GPU_CARD（按 GPU 卡）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalingUnit <p>伸缩单位。可选值：NODE（按节点）、GPU_CARD（按 GPU 卡）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalingUnit(const std::string& _scalingUnit);

                    /**
                     * 判断参数 ScalingUnit 是否已赋值
                     * @return ScalingUnit 是否已赋值
                     * 
                     */
                    bool ScalingUnitHasBeenSet() const;

                private:

                    /**
                     * <p>期望节点数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * <p>伸缩单位。可选值：NODE（按节点）、GPU_CARD（按 GPU 卡）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scalingUnit;
                    bool m_scalingUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SCALINGPOLICY_H_
