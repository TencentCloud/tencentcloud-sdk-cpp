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
                     * 获取节点池最小副本数
                     * @return MinReplicas 节点池最小副本数
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置节点池最小副本数
                     * @param _minReplicas 节点池最小副本数
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
                     * 获取节点池最大副本数
                     * @return MaxReplicas 节点池最大副本数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置节点池最大副本数
                     * @param _maxReplicas 节点池最大副本数
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
                     * 获取节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatePolicy 节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatePolicy() const;

                    /**
                     * 设置节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createPolicy 节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；
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

                private:

                    /**
                     * 节点池最小副本数
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 节点池最大副本数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 节点池扩容策略。ZoneEquality：多可用区打散；ZonePriority：首选可用区优先；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createPolicy;
                    bool m_createPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MACHINESETSCALING_H_
