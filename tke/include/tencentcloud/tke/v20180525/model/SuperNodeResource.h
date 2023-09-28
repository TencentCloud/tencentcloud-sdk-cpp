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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 超级节点上的资源统计
                */
                class SuperNodeResource : public AbstractModel
                {
                public:
                    SuperNodeResource();
                    ~SuperNodeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取节点上的资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Num 节点上的资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置节点上的资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _num 节点上的资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取节点上的总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu 节点上的总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置节点上的总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu 节点上的总核数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取节点上的总内存数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 节点上的总内存数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置节点上的总内存数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 节点上的总内存数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取节点上的总 GPU 卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gpu 节点上的总 GPU 卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetGpu() const;

                    /**
                     * 设置节点上的总 GPU 卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gpu 节点上的总 GPU 卡数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGpu(const double& _gpu);

                    /**
                     * 判断参数 Gpu 是否已赋值
                     * @return Gpu 是否已赋值
                     * 
                     */
                    bool GpuHasBeenSet() const;

                private:

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点上的资源总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 节点上的总核数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 节点上的总内存数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 节点上的总 GPU 卡数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_gpu;
                    bool m_gpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SUPERNODERESOURCE_H_
