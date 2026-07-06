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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 节点池弹性伸缩配置
                */
                class MachineSetScaling : public AbstractModel
                {
                public:
                    MachineSetScaling();
                    ~MachineSetScaling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点池最小副本数</p>
                     * @return MinReplicas <p>节点池最小副本数</p>
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置<p>节点池最小副本数</p>
                     * @param _minReplicas <p>节点池最小副本数</p>
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取<p>节点池最大副本数</p>
                     * @return MaxReplicas <p>节点池最大副本数</p>
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置<p>节点池最大副本数</p>
                     * @param _maxReplicas <p>节点池最大副本数</p>
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取<p>节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatePolicy <p>节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatePolicy() const;

                    /**
                     * 设置<p>节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createPolicy <p>节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatePolicy(const std::string& _createPolicy);

                    /**
                     * 判断参数 CreatePolicy 是否已赋值
                     * @return CreatePolicy 是否已赋值
                     * 
                     */
                    bool CreatePolicyHasBeenSet() const;

                    /**
                     * 获取<p>扩缩容模式</p><p>枚举值：</p><ul><li>ShutdownAndDelete： 释放模式，默认</li><li>Shutdown： 停机模式，关机不计费</li></ul><p>默认值：ShutdownAndDelete</p>
                     * @return ScaleDownMode <p>扩缩容模式</p><p>枚举值：</p><ul><li>ShutdownAndDelete： 释放模式，默认</li><li>Shutdown： 停机模式，关机不计费</li></ul><p>默认值：ShutdownAndDelete</p>
                     * 
                     */
                    std::string GetScaleDownMode() const;

                    /**
                     * 设置<p>扩缩容模式</p><p>枚举值：</p><ul><li>ShutdownAndDelete： 释放模式，默认</li><li>Shutdown： 停机模式，关机不计费</li></ul><p>默认值：ShutdownAndDelete</p>
                     * @param _scaleDownMode <p>扩缩容模式</p><p>枚举值：</p><ul><li>ShutdownAndDelete： 释放模式，默认</li><li>Shutdown： 停机模式，关机不计费</li></ul><p>默认值：ShutdownAndDelete</p>
                     * 
                     */
                    void SetScaleDownMode(const std::string& _scaleDownMode);

                    /**
                     * 判断参数 ScaleDownMode 是否已赋值
                     * @return ScaleDownMode 是否已赋值
                     * 
                     */
                    bool ScaleDownModeHasBeenSet() const;

                private:

                    /**
                     * <p>节点池最小副本数</p>
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * <p>节点池最大副本数</p>
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * <p>节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createPolicy;
                    bool m_createPolicyHasBeenSet;

                    /**
                     * <p>扩缩容模式</p><p>枚举值：</p><ul><li>ShutdownAndDelete： 释放模式，默认</li><li>Shutdown： 停机模式，关机不计费</li></ul><p>默认值：ShutdownAndDelete</p>
                     */
                    std::string m_scaleDownMode;
                    bool m_scaleDownModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_
