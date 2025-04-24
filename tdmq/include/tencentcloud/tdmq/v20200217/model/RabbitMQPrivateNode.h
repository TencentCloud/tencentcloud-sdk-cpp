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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ 节点信息
                */
                class RabbitMQPrivateNode : public AbstractModel
                {
                public:
                    RabbitMQPrivateNode();
                    ~RabbitMQPrivateNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 节点名字
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
                     * 获取节点状态，running 运行中，down 异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeStatus 节点状态，running 运行中，down 异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeStatus() const;

                    /**
                     * 设置节点状态，running 运行中，down 异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeStatus 节点状态，running 运行中，down 异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeStatus(const std::string& _nodeStatus);

                    /**
                     * 判断参数 NodeStatus 是否已赋值
                     * @return NodeStatus 是否已赋值
                     * 
                     */
                    bool NodeStatusHasBeenSet() const;

                    /**
                     * 获取CPU使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPUUsage CPU使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCPUUsage() const;

                    /**
                     * 设置CPU使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPUUsage CPU使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPUUsage(const std::string& _cPUUsage);

                    /**
                     * 判断参数 CPUUsage 是否已赋值
                     * @return CPUUsage 是否已赋值
                     * 
                     */
                    bool CPUUsageHasBeenSet() const;

                    /**
                     * 获取内存使用情况，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory 内存使用情况，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存使用情况，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory 内存使用情况，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskUsage 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskUsage 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Rabbitmq的Erlang进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessNumber Rabbitmq的Erlang进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProcessNumber() const;

                    /**
                     * 设置Rabbitmq的Erlang进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processNumber Rabbitmq的Erlang进程数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessNumber(const uint64_t& _processNumber);

                    /**
                     * 判断参数 ProcessNumber 是否已赋值
                     * @return ProcessNumber 是否已赋值
                     * 
                     */
                    bool ProcessNumberHasBeenSet() const;

                private:

                    /**
                     * 节点名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 节点状态，running 运行中，down 异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeStatus;
                    bool m_nodeStatusHasBeenSet;

                    /**
                     * CPU使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cPUUsage;
                    bool m_cPUUsageHasBeenSet;

                    /**
                     * 内存使用情况，单位MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Rabbitmq的Erlang进程数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_processNumber;
                    bool m_processNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATENODE_H_
