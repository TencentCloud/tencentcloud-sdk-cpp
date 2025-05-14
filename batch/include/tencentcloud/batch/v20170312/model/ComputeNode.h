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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算节点
                */
                class ComputeNode : public AbstractModel
                {
                public:
                    ComputeNode();
                    ~ComputeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算节点ID
                     * @return ComputeNodeId 计算节点ID
                     * 
                     */
                    std::string GetComputeNodeId() const;

                    /**
                     * 设置计算节点ID
                     * @param _computeNodeId 计算节点ID
                     * 
                     */
                    void SetComputeNodeId(const std::string& _computeNodeId);

                    /**
                     * 判断参数 ComputeNodeId 是否已赋值
                     * @return ComputeNodeId 是否已赋值
                     * 
                     */
                    bool ComputeNodeIdHasBeenSet() const;

                    /**
                     * 获取计算节点实例ID，对于CVM场景，即为CVM的InstanceId
                     * @return ComputeNodeInstanceId 计算节点实例ID，对于CVM场景，即为CVM的InstanceId
                     * 
                     */
                    std::string GetComputeNodeInstanceId() const;

                    /**
                     * 设置计算节点实例ID，对于CVM场景，即为CVM的InstanceId
                     * @param _computeNodeInstanceId 计算节点实例ID，对于CVM场景，即为CVM的InstanceId
                     * 
                     */
                    void SetComputeNodeInstanceId(const std::string& _computeNodeInstanceId);

                    /**
                     * 判断参数 ComputeNodeInstanceId 是否已赋值
                     * @return ComputeNodeInstanceId 是否已赋值
                     * 
                     */
                    bool ComputeNodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取计算节点状态。取值范围：<br><li>PENDING：表示创建中</li><li>SUBMITTED：表示已提交创建</li><li>CREATING：表示创建中</li><li>CREATED：表示创建完成</li><li>CREATION_FAILED：表示创建失败。</li><li>RUNNING：表示运行中。</li><li>ABNORMAL：表示节点异常。</li><li>DELETING：表示删除中。</li>
                     * @return ComputeNodeState 计算节点状态。取值范围：<br><li>PENDING：表示创建中</li><li>SUBMITTED：表示已提交创建</li><li>CREATING：表示创建中</li><li>CREATED：表示创建完成</li><li>CREATION_FAILED：表示创建失败。</li><li>RUNNING：表示运行中。</li><li>ABNORMAL：表示节点异常。</li><li>DELETING：表示删除中。</li>
                     * 
                     */
                    std::string GetComputeNodeState() const;

                    /**
                     * 设置计算节点状态。取值范围：<br><li>PENDING：表示创建中</li><li>SUBMITTED：表示已提交创建</li><li>CREATING：表示创建中</li><li>CREATED：表示创建完成</li><li>CREATION_FAILED：表示创建失败。</li><li>RUNNING：表示运行中。</li><li>ABNORMAL：表示节点异常。</li><li>DELETING：表示删除中。</li>
                     * @param _computeNodeState 计算节点状态。取值范围：<br><li>PENDING：表示创建中</li><li>SUBMITTED：表示已提交创建</li><li>CREATING：表示创建中</li><li>CREATED：表示创建完成</li><li>CREATION_FAILED：表示创建失败。</li><li>RUNNING：表示运行中。</li><li>ABNORMAL：表示节点异常。</li><li>DELETING：表示删除中。</li>
                     * 
                     */
                    void SetComputeNodeState(const std::string& _computeNodeState);

                    /**
                     * 判断参数 ComputeNodeState 是否已赋值
                     * @return ComputeNodeState 是否已赋值
                     * 
                     */
                    bool ComputeNodeStateHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return Cpu CPU核数
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU核数
                     * @param _cpu CPU核数
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存容量，单位GiB
                     * @return Mem 内存容量，单位GiB
                     * 
                     */
                    uint64_t GetMem() const;

                    /**
                     * 设置内存容量，单位GiB
                     * @param _mem 内存容量，单位GiB
                     * 
                     */
                    void SetMem(const uint64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取资源创建完成时间
                     * @return ResourceCreatedTime 资源创建完成时间
                     * 
                     */
                    std::string GetResourceCreatedTime() const;

                    /**
                     * 设置资源创建完成时间
                     * @param _resourceCreatedTime 资源创建完成时间
                     * 
                     */
                    void SetResourceCreatedTime(const std::string& _resourceCreatedTime);

                    /**
                     * 判断参数 ResourceCreatedTime 是否已赋值
                     * @return ResourceCreatedTime 是否已赋值
                     * 
                     */
                    bool ResourceCreatedTimeHasBeenSet() const;

                    /**
                     * 获取计算节点运行  TaskInstance 可用容量。0表示计算节点忙碌。
                     * @return TaskInstanceNumAvailable 计算节点运行  TaskInstance 可用容量。0表示计算节点忙碌。
                     * 
                     */
                    uint64_t GetTaskInstanceNumAvailable() const;

                    /**
                     * 设置计算节点运行  TaskInstance 可用容量。0表示计算节点忙碌。
                     * @param _taskInstanceNumAvailable 计算节点运行  TaskInstance 可用容量。0表示计算节点忙碌。
                     * 
                     */
                    void SetTaskInstanceNumAvailable(const uint64_t& _taskInstanceNumAvailable);

                    /**
                     * 判断参数 TaskInstanceNumAvailable 是否已赋值
                     * @return TaskInstanceNumAvailable 是否已赋值
                     * 
                     */
                    bool TaskInstanceNumAvailableHasBeenSet() const;

                    /**
                     * 获取Batch Agent 版本
                     * @return AgentVersion Batch Agent 版本
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置Batch Agent 版本
                     * @param _agentVersion Batch Agent 版本
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取实例内网IP
                     * @return PrivateIpAddresses 实例内网IP
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置实例内网IP
                     * @param _privateIpAddresses 实例内网IP
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取实例公网IP
                     * @return PublicIpAddresses 实例公网IP
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置实例公网IP
                     * @param _publicIpAddresses 实例公网IP
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取计算环境资源类型，当前为CVM和CPM（黑石）
                     * @return ResourceType 计算环境资源类型，当前为CVM和CPM（黑石）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置计算环境资源类型，当前为CVM和CPM（黑石）
                     * @param _resourceType 计算环境资源类型，当前为CVM和CPM（黑石）
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
                     * 获取计算环境资源来源。<br>BATCH_CREATED：由批量计算创建的实例资源。<br>
USER_ATTACHED：用户添加到计算环境中的实例资源。
                     * @return ResourceOrigin 计算环境资源来源。<br>BATCH_CREATED：由批量计算创建的实例资源。<br>
USER_ATTACHED：用户添加到计算环境中的实例资源。
                     * 
                     */
                    std::string GetResourceOrigin() const;

                    /**
                     * 设置计算环境资源来源。<br>BATCH_CREATED：由批量计算创建的实例资源。<br>
USER_ATTACHED：用户添加到计算环境中的实例资源。
                     * @param _resourceOrigin 计算环境资源来源。<br>BATCH_CREATED：由批量计算创建的实例资源。<br>
USER_ATTACHED：用户添加到计算环境中的实例资源。
                     * 
                     */
                    void SetResourceOrigin(const std::string& _resourceOrigin);

                    /**
                     * 判断参数 ResourceOrigin 是否已赋值
                     * @return ResourceOrigin 是否已赋值
                     * 
                     */
                    bool ResourceOriginHasBeenSet() const;

                private:

                    /**
                     * 计算节点ID
                     */
                    std::string m_computeNodeId;
                    bool m_computeNodeIdHasBeenSet;

                    /**
                     * 计算节点实例ID，对于CVM场景，即为CVM的InstanceId
                     */
                    std::string m_computeNodeInstanceId;
                    bool m_computeNodeInstanceIdHasBeenSet;

                    /**
                     * 计算节点状态。取值范围：<br><li>PENDING：表示创建中</li><li>SUBMITTED：表示已提交创建</li><li>CREATING：表示创建中</li><li>CREATED：表示创建完成</li><li>CREATION_FAILED：表示创建失败。</li><li>RUNNING：表示运行中。</li><li>ABNORMAL：表示节点异常。</li><li>DELETING：表示删除中。</li>
                     */
                    std::string m_computeNodeState;
                    bool m_computeNodeStateHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存容量，单位GiB
                     */
                    uint64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 资源创建完成时间
                     */
                    std::string m_resourceCreatedTime;
                    bool m_resourceCreatedTimeHasBeenSet;

                    /**
                     * 计算节点运行  TaskInstance 可用容量。0表示计算节点忙碌。
                     */
                    uint64_t m_taskInstanceNumAvailable;
                    bool m_taskInstanceNumAvailableHasBeenSet;

                    /**
                     * Batch Agent 版本
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * 实例内网IP
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 实例公网IP
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 计算环境资源类型，当前为CVM和CPM（黑石）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 计算环境资源来源。<br>BATCH_CREATED：由批量计算创建的实例资源。<br>
USER_ATTACHED：用户添加到计算环境中的实例资源。
                     */
                    std::string m_resourceOrigin;
                    bool m_resourceOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODE_H_
