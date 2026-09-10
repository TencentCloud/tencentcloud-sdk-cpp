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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCEREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/NodeInfo.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * UpgradeInstance请求参数结构体
                */
                class UpgradeInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceRequest();
                    ~UpgradeInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>配置变更后，每个分片持久化内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @return MemSize <p>配置变更后，每个分片持久化内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>配置变更后，每个分片持久化内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @param _memSize <p>配置变更后，每个分片持久化内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>CPU 核数，可忽略不传</p>
                     * @return MachineCpu <p>CPU 核数，可忽略不传</p>
                     * 
                     */
                    int64_t GetMachineCpu() const;

                    /**
                     * 设置<p>CPU 核数，可忽略不传</p>
                     * @param _machineCpu <p>CPU 核数，可忽略不传</p>
                     * 
                     */
                    void SetMachineCpu(const int64_t& _machineCpu);

                    /**
                     * 判断参数 MachineCpu 是否已赋值
                     * @return MachineCpu 是否已赋值
                     * 
                     */
                    bool MachineCpuHasBeenSet() const;

                    /**
                     * 获取<p>实例内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @return MachineMemory <p>实例内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    int64_t GetMachineMemory() const;

                    /**
                     * 设置<p>实例内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @param _machineMemory <p>实例内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    void SetMachineMemory(const int64_t& _machineMemory);

                    /**
                     * 判断参数 MachineMemory 是否已赋值
                     * @return MachineMemory 是否已赋值
                     * 
                     */
                    bool MachineMemoryHasBeenSet() const;

                    /**
                     * 获取<p>配置变更后，分片数量。</p><ul><li>增加后分片的数量务必为增加之前数量的整数倍。分片数量支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @return ShardNum <p>配置变更后，分片数量。</p><ul><li>增加后分片的数量务必为增加之前数量的整数倍。分片数量支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置<p>配置变更后，分片数量。</p><ul><li>增加后分片的数量务必为增加之前数量的整数倍。分片数量支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @param _shardNum <p>配置变更后，分片数量。</p><ul><li>增加后分片的数量务必为增加之前数量的整数倍。分片数量支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>配置变更后，每个分片硬盘的容量。单位：GB。</p><ul><li>每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @return DiskSize <p>配置变更后，每个分片硬盘的容量。单位：GB。</p><ul><li>每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>配置变更后，每个分片硬盘的容量。单位：GB。</p><ul><li>每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * @param _diskSize <p>配置变更后，每个分片硬盘的容量。单位：GB。</p><ul><li>每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>配置变更后，副本数量。需要和NodeSet参数一起传递。</p><p>取值范围：[1, 2]</p>
                     * @return ReplicasNum <p>配置变更后，副本数量。需要和NodeSet参数一起传递。</p><p>取值范围：[1, 2]</p>
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置<p>配置变更后，副本数量。需要和NodeSet参数一起传递。</p><p>取值范围：[1, 2]</p>
                     * @param _replicasNum <p>配置变更后，副本数量。需要和NodeSet参数一起传递。</p><p>取值范围：[1, 2]</p>
                     * 
                     */
                    void SetReplicasNum(const int64_t& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>配置变更后，副本节点信息。</p><ul><li>增加副本：可不传NodeId</li><li>删除副本：需传保留节点的NodeId</li></ul>
                     * @return NodeSet <p>配置变更后，副本节点信息。</p><ul><li>增加副本：可不传NodeId</li><li>删除副本：需传保留节点的NodeId</li></ul>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>配置变更后，副本节点信息。</p><ul><li>增加副本：可不传NodeId</li><li>删除副本：需传保留节点的NodeId</li></ul>
                     * @param _nodeSet <p>配置变更后，副本节点信息。</p><ul><li>增加副本：可不传NodeId</li><li>删除副本：需传保留节点的NodeId</li></ul>
                     * 
                     */
                    void SetNodeSet(const std::vector<NodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>配置变更后，每个分片持久化内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>CPU 核数，可忽略不传</p>
                     */
                    int64_t m_machineCpu;
                    bool m_machineCpuHasBeenSet;

                    /**
                     * <p>实例内存容量，单位：GB。</p><ul><li>KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     */
                    int64_t m_machineMemory;
                    bool m_machineMemoryHasBeenSet;

                    /**
                     * <p>配置变更后，分片数量。</p><ul><li>增加后分片的数量务必为增加之前数量的整数倍。分片数量支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>配置变更后，每个分片硬盘的容量。单位：GB。</p><ul><li>每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。</li><li>变更实例内存、持久化内存与磁盘、变更实例的分片数量，每次只能变更一项。</li></ul>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>配置变更后，副本数量。需要和NodeSet参数一起传递。</p><p>取值范围：[1, 2]</p>
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * <p>配置变更后，副本节点信息。</p><ul><li>增加副本：可不传NodeId</li><li>删除副本：需传保留节点的NodeId</li></ul>
                     */
                    std::vector<NodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCEREQUEST_H_
