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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Instance node
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return NodeId id
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置id
                     * @param _nodeId id
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取cn
                     * @return NodeType cn
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置cn
                     * @param _nodeType cn
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return NodeIp ip
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置ip
                     * @param _nodeIp ip
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取私有ip
                     * @return PrivateNetworkIp 私有ip
                     * 
                     */
                    std::string GetPrivateNetworkIp() const;

                    /**
                     * 设置私有ip
                     * @param _privateNetworkIp 私有ip
                     * 
                     */
                    void SetPrivateNetworkIp(const std::string& _privateNetworkIp);

                    /**
                     * 判断参数 PrivateNetworkIp 是否已赋值
                     * @return PrivateNetworkIp 是否已赋值
                     * 
                     */
                    bool PrivateNetworkIpHasBeenSet() const;

                    /**
                     * 获取节点角色
                     * @return NodeRole 节点角色
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色
                     * @param _nodeRole 节点角色
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
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
                     * 获取规格名称
                     * @return SpecName 规格名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规格名称
                     * @param _specName 规格名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取cpu
                     * @return Cpu cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu
                     * @param _cpu cpu
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取数据盘数量
                     * @return DataDiskCount 数据盘数量
                     * 
                     */
                    int64_t GetDataDiskCount() const;

                    /**
                     * 设置数据盘数量
                     * @param _dataDiskCount 数据盘数量
                     * 
                     */
                    void SetDataDiskCount(const int64_t& _dataDiskCount);

                    /**
                     * 判断参数 DataDiskCount 是否已赋值
                     * @return DataDiskCount 是否已赋值
                     * 
                     */
                    bool DataDiskCountHasBeenSet() const;

                    /**
                     * 获取数据盘大小
                     * @return DataDiskSize 数据盘大小
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置数据盘大小
                     * @param _dataDiskSize 数据盘大小
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取数据盘类型
                     * @return DataDiskType 数据盘类型
                     * 
                     */
                    std::string GetDataDiskType() const;

                    /**
                     * 设置数据盘类型
                     * @param _dataDiskType 数据盘类型
                     * 
                     */
                    void SetDataDiskType(const std::string& _dataDiskType);

                    /**
                     * 判断参数 DataDiskType 是否已赋值
                     * @return DataDiskType 是否已赋值
                     * 
                     */
                    bool DataDiskTypeHasBeenSet() const;

                    /**
                     * 获取唯一uuid
                     * @return UUID 唯一uuid
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置唯一uuid
                     * @param _uUID 唯一uuid
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Zone 区域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区域
                     * @param _zone 区域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * cn
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 私有ip
                     */
                    std::string m_privateNetworkIp;
                    bool m_privateNetworkIpHasBeenSet;

                    /**
                     * 节点角色
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 规格名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 数据盘数量
                     */
                    int64_t m_dataDiskCount;
                    bool m_dataDiskCountHasBeenSet;

                    /**
                     * 数据盘大小
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * 数据盘类型
                     */
                    std::string m_dataDiskType;
                    bool m_dataDiskTypeHasBeenSet;

                    /**
                     * 唯一uuid
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_
