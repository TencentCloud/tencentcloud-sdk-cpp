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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_COMPONENT_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_COMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctsdb/v20230202/model/Network.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 实例组件信息
                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>所属实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID <p>所属实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>所属实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID <p>所属实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>组件类型</p>枚举值：<ul><li> gateway： 时序节点</li><li> database： 数据节点</li><li> gateway-worker： 扩展节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>组件类型</p>枚举值：<ul><li> gateway： 时序节点</li><li> database： 数据节点</li><li> gateway-worker： 扩展节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>组件类型</p>枚举值：<ul><li> gateway： 时序节点</li><li> database： 数据节点</li><li> gateway-worker： 扩展节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>组件类型</p>枚举值：<ul><li> gateway： 时序节点</li><li> database： 数据节点</li><li> gateway-worker： 扩展节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cpu <p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpu <p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>内存</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Memory <p>内存</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memory <p>内存</p>
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
                     * 获取<p>磁盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disk <p>磁盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisk() const;

                    /**
                     * 设置<p>磁盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disk <p>磁盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisk(const uint64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取<p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shards <p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShards() const;

                    /**
                     * 设置<p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shards <p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShards(const uint64_t& _shards);

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取<p>副本数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas <p>副本数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置<p>副本数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicas <p>副本数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicas(const uint64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取<p>网络</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Networks <p>网络</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置<p>网络</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networks <p>网络</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworks(const std::vector<Network>& _networks);

                    /**
                     * 判断参数 Networks 是否已赋值
                     * @return Networks 是否已赋值
                     * 
                     */
                    bool NetworksHasBeenSet() const;

                    /**
                     * 获取<p>组件状态</p>枚举值：<ul><li> 0： 运行中</li><li> 1： 创建中</li><li> 2： 变配中</li><li> 3： 隔离中</li><li> 4： 已隔离</li><li> 5： 删除中</li><li> 6： 已删除</li><li> 7： 禁用中</li><li> 8： 已禁用</li><li> 9： 启用中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State <p>组件状态</p>枚举值：<ul><li> 0： 运行中</li><li> 1： 创建中</li><li> 2： 变配中</li><li> 3： 隔离中</li><li> 4： 已隔离</li><li> 5： 删除中</li><li> 6： 已删除</li><li> 7： 禁用中</li><li> 8： 已禁用</li><li> 9： 启用中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置<p>组件状态</p>枚举值：<ul><li> 0： 运行中</li><li> 1： 创建中</li><li> 2： 变配中</li><li> 3： 隔离中</li><li> 4： 已隔离</li><li> 5： 删除中</li><li> 6： 已删除</li><li> 7： 禁用中</li><li> 8： 已禁用</li><li> 9： 启用中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state <p>组件状态</p>枚举值：<ul><li> 0： 运行中</li><li> 1： 创建中</li><li> 2： 变配中</li><li> 3： 隔离中</li><li> 4： 已隔离</li><li> 5： 删除中</li><li> 6： 已删除</li><li> 7： 禁用中</li><li> 8： 已禁用</li><li> 9： 启用中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>组件内部ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>组件内部ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>组件内部ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>组件内部ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>所属实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>组件类型</p>枚举值：<ul><li> gateway： 时序节点</li><li> database： 数据节点</li><li> gateway-worker： 扩展节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>cpu</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>磁盘</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * <p>节点数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * <p>副本数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * <p>网络</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * <p>组件状态</p>枚举值：<ul><li> 0： 运行中</li><li> 1： 创建中</li><li> 2： 变配中</li><li> 3： 隔离中</li><li> 4： 已隔离</li><li> 5： 删除中</li><li> 6： 已删除</li><li> 7： 禁用中</li><li> 8： 已禁用</li><li> 9： 启用中</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>组件内部ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_COMPONENT_H_
